/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/neptune/model/EngineDefaults.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace Neptune
{
namespace Model
{

EngineDefaults::EngineDefaults() : 
    m_dBParameterGroupFamilyHasBeenSet(false),
    m_markerHasBeenSet(false),
    m_parametersHasBeenSet(false)
{
}

EngineDefaults::EngineDefaults(const XmlNode& xmlNode) : 
    m_dBParameterGroupFamilyHasBeenSet(false),
    m_markerHasBeenSet(false),
    m_parametersHasBeenSet(false)
{
  *this = xmlNode;
}

EngineDefaults& EngineDefaults::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode dBParameterGroupFamilyNode = resultNode.FirstChild("DBParameterGroupFamily");
    if(!dBParameterGroupFamilyNode.IsNull())
    {
      m_dBParameterGroupFamily = dBParameterGroupFamilyNode.GetText();
      m_dBParameterGroupFamilyHasBeenSet = true;
    }
    XmlNode markerNode = resultNode.FirstChild("Marker");
    if(!markerNode.IsNull())
    {
      m_marker = markerNode.GetText();
      m_markerHasBeenSet = true;
    }
    XmlNode parametersNode = resultNode.FirstChild("Parameters");
    if(!parametersNode.IsNull())
    {
      XmlNode parametersMember = parametersNode.FirstChild("Parameter");
      while(!parametersMember.IsNull())
      {
        m_parameters.push_back(parametersMember);
        parametersMember = parametersMember.NextNode("Parameter");
      }

      m_parametersHasBeenSet = true;
    }
  }

  return *this;
}

void EngineDefaults::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_dBParameterGroupFamilyHasBeenSet)
  {
      oStream << location << index << locationValue << ".DBParameterGroupFamily=" << StringUtils::URLEncode(m_dBParameterGroupFamily.c_str()) << "&";
  }

  if(m_markerHasBeenSet)
  {
      oStream << location << index << locationValue << ".Marker=" << StringUtils::URLEncode(m_marker.c_str()) << "&";
  }

  if(m_parametersHasBeenSet)
  {
      unsigned parametersIdx = 1;
      for(auto& item : m_parameters)
      {
        Aws::StringStream parametersSs;
        parametersSs << location << index << locationValue << ".Parameter." << parametersIdx++;
        item.OutputToStream(oStream, parametersSs.str().c_str());
      }
  }

}

void EngineDefaults::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_dBParameterGroupFamilyHasBeenSet)
  {
      oStream << location << ".DBParameterGroupFamily=" << StringUtils::URLEncode(m_dBParameterGroupFamily.c_str()) << "&";
  }
  if(m_markerHasBeenSet)
  {
      oStream << location << ".Marker=" << StringUtils::URLEncode(m_marker.c_str()) << "&";
  }
  if(m_parametersHasBeenSet)
  {
      unsigned parametersIdx = 1;
      for(auto& item : m_parameters)
      {
        Aws::StringStream parametersSs;
        parametersSs << location <<  ".Parameter." << parametersIdx++;
        item.OutputToStream(oStream, parametersSs.str().c_str());
      }
  }
}

} // namespace Model
} // namespace Neptune
} // namespace Aws
