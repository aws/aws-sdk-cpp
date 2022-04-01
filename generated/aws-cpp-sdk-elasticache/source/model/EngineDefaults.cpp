/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticache/model/EngineDefaults.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace ElastiCache
{
namespace Model
{

EngineDefaults::EngineDefaults() : 
    m_cacheParameterGroupFamilyHasBeenSet(false),
    m_markerHasBeenSet(false),
    m_parametersHasBeenSet(false),
    m_cacheNodeTypeSpecificParametersHasBeenSet(false)
{
}

EngineDefaults::EngineDefaults(const XmlNode& xmlNode) : 
    m_cacheParameterGroupFamilyHasBeenSet(false),
    m_markerHasBeenSet(false),
    m_parametersHasBeenSet(false),
    m_cacheNodeTypeSpecificParametersHasBeenSet(false)
{
  *this = xmlNode;
}

EngineDefaults& EngineDefaults::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode cacheParameterGroupFamilyNode = resultNode.FirstChild("CacheParameterGroupFamily");
    if(!cacheParameterGroupFamilyNode.IsNull())
    {
      m_cacheParameterGroupFamily = Aws::Utils::Xml::DecodeEscapedXmlText(cacheParameterGroupFamilyNode.GetText());
      m_cacheParameterGroupFamilyHasBeenSet = true;
    }
    XmlNode markerNode = resultNode.FirstChild("Marker");
    if(!markerNode.IsNull())
    {
      m_marker = Aws::Utils::Xml::DecodeEscapedXmlText(markerNode.GetText());
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
    XmlNode cacheNodeTypeSpecificParametersNode = resultNode.FirstChild("CacheNodeTypeSpecificParameters");
    if(!cacheNodeTypeSpecificParametersNode.IsNull())
    {
      XmlNode cacheNodeTypeSpecificParametersMember = cacheNodeTypeSpecificParametersNode.FirstChild("CacheNodeTypeSpecificParameter");
      while(!cacheNodeTypeSpecificParametersMember.IsNull())
      {
        m_cacheNodeTypeSpecificParameters.push_back(cacheNodeTypeSpecificParametersMember);
        cacheNodeTypeSpecificParametersMember = cacheNodeTypeSpecificParametersMember.NextNode("CacheNodeTypeSpecificParameter");
      }

      m_cacheNodeTypeSpecificParametersHasBeenSet = true;
    }
  }

  return *this;
}

void EngineDefaults::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_cacheParameterGroupFamilyHasBeenSet)
  {
      oStream << location << index << locationValue << ".CacheParameterGroupFamily=" << StringUtils::URLEncode(m_cacheParameterGroupFamily.c_str()) << "&";
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

  if(m_cacheNodeTypeSpecificParametersHasBeenSet)
  {
      unsigned cacheNodeTypeSpecificParametersIdx = 1;
      for(auto& item : m_cacheNodeTypeSpecificParameters)
      {
        Aws::StringStream cacheNodeTypeSpecificParametersSs;
        cacheNodeTypeSpecificParametersSs << location << index << locationValue << ".CacheNodeTypeSpecificParameter." << cacheNodeTypeSpecificParametersIdx++;
        item.OutputToStream(oStream, cacheNodeTypeSpecificParametersSs.str().c_str());
      }
  }

}

void EngineDefaults::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_cacheParameterGroupFamilyHasBeenSet)
  {
      oStream << location << ".CacheParameterGroupFamily=" << StringUtils::URLEncode(m_cacheParameterGroupFamily.c_str()) << "&";
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
  if(m_cacheNodeTypeSpecificParametersHasBeenSet)
  {
      unsigned cacheNodeTypeSpecificParametersIdx = 1;
      for(auto& item : m_cacheNodeTypeSpecificParameters)
      {
        Aws::StringStream cacheNodeTypeSpecificParametersSs;
        cacheNodeTypeSpecificParametersSs << location <<  ".CacheNodeTypeSpecificParameter." << cacheNodeTypeSpecificParametersIdx++;
        item.OutputToStream(oStream, cacheNodeTypeSpecificParametersSs.str().c_str());
      }
  }
}

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
