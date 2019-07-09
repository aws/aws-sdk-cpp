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

#include <aws/redshift/model/ClusterParameterStatus.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace Redshift
{
namespace Model
{

ClusterParameterStatus::ClusterParameterStatus() : 
    m_parameterNameHasBeenSet(false),
    m_parameterApplyStatusHasBeenSet(false),
    m_parameterApplyErrorDescriptionHasBeenSet(false)
{
}

ClusterParameterStatus::ClusterParameterStatus(const XmlNode& xmlNode) : 
    m_parameterNameHasBeenSet(false),
    m_parameterApplyStatusHasBeenSet(false),
    m_parameterApplyErrorDescriptionHasBeenSet(false)
{
  *this = xmlNode;
}

ClusterParameterStatus& ClusterParameterStatus::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode parameterNameNode = resultNode.FirstChild("ParameterName");
    if(!parameterNameNode.IsNull())
    {
      m_parameterName = parameterNameNode.GetText();
      m_parameterNameHasBeenSet = true;
    }
    XmlNode parameterApplyStatusNode = resultNode.FirstChild("ParameterApplyStatus");
    if(!parameterApplyStatusNode.IsNull())
    {
      m_parameterApplyStatus = parameterApplyStatusNode.GetText();
      m_parameterApplyStatusHasBeenSet = true;
    }
    XmlNode parameterApplyErrorDescriptionNode = resultNode.FirstChild("ParameterApplyErrorDescription");
    if(!parameterApplyErrorDescriptionNode.IsNull())
    {
      m_parameterApplyErrorDescription = parameterApplyErrorDescriptionNode.GetText();
      m_parameterApplyErrorDescriptionHasBeenSet = true;
    }
  }

  return *this;
}

void ClusterParameterStatus::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_parameterNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".ParameterName=" << StringUtils::URLEncode(m_parameterName.c_str()) << "&";
  }

  if(m_parameterApplyStatusHasBeenSet)
  {
      oStream << location << index << locationValue << ".ParameterApplyStatus=" << StringUtils::URLEncode(m_parameterApplyStatus.c_str()) << "&";
  }

  if(m_parameterApplyErrorDescriptionHasBeenSet)
  {
      oStream << location << index << locationValue << ".ParameterApplyErrorDescription=" << StringUtils::URLEncode(m_parameterApplyErrorDescription.c_str()) << "&";
  }

}

void ClusterParameterStatus::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_parameterNameHasBeenSet)
  {
      oStream << location << ".ParameterName=" << StringUtils::URLEncode(m_parameterName.c_str()) << "&";
  }
  if(m_parameterApplyStatusHasBeenSet)
  {
      oStream << location << ".ParameterApplyStatus=" << StringUtils::URLEncode(m_parameterApplyStatus.c_str()) << "&";
  }
  if(m_parameterApplyErrorDescriptionHasBeenSet)
  {
      oStream << location << ".ParameterApplyErrorDescription=" << StringUtils::URLEncode(m_parameterApplyErrorDescription.c_str()) << "&";
  }
}

} // namespace Model
} // namespace Redshift
} // namespace Aws
