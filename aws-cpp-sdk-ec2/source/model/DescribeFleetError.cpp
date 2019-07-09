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

#include <aws/ec2/model/DescribeFleetError.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace EC2
{
namespace Model
{

DescribeFleetError::DescribeFleetError() : 
    m_launchTemplateAndOverridesHasBeenSet(false),
    m_lifecycle(InstanceLifecycle::NOT_SET),
    m_lifecycleHasBeenSet(false),
    m_errorCodeHasBeenSet(false),
    m_errorMessageHasBeenSet(false)
{
}

DescribeFleetError::DescribeFleetError(const XmlNode& xmlNode) : 
    m_launchTemplateAndOverridesHasBeenSet(false),
    m_lifecycle(InstanceLifecycle::NOT_SET),
    m_lifecycleHasBeenSet(false),
    m_errorCodeHasBeenSet(false),
    m_errorMessageHasBeenSet(false)
{
  *this = xmlNode;
}

DescribeFleetError& DescribeFleetError::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode launchTemplateAndOverridesNode = resultNode.FirstChild("launchTemplateAndOverrides");
    if(!launchTemplateAndOverridesNode.IsNull())
    {
      m_launchTemplateAndOverrides = launchTemplateAndOverridesNode;
      m_launchTemplateAndOverridesHasBeenSet = true;
    }
    XmlNode lifecycleNode = resultNode.FirstChild("lifecycle");
    if(!lifecycleNode.IsNull())
    {
      m_lifecycle = InstanceLifecycleMapper::GetInstanceLifecycleForName(StringUtils::Trim(lifecycleNode.GetText().c_str()).c_str());
      m_lifecycleHasBeenSet = true;
    }
    XmlNode errorCodeNode = resultNode.FirstChild("errorCode");
    if(!errorCodeNode.IsNull())
    {
      m_errorCode = errorCodeNode.GetText();
      m_errorCodeHasBeenSet = true;
    }
    XmlNode errorMessageNode = resultNode.FirstChild("errorMessage");
    if(!errorMessageNode.IsNull())
    {
      m_errorMessage = errorMessageNode.GetText();
      m_errorMessageHasBeenSet = true;
    }
  }

  return *this;
}

void DescribeFleetError::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_launchTemplateAndOverridesHasBeenSet)
  {
      Aws::StringStream launchTemplateAndOverridesLocationAndMemberSs;
      launchTemplateAndOverridesLocationAndMemberSs << location << index << locationValue << ".LaunchTemplateAndOverrides";
      m_launchTemplateAndOverrides.OutputToStream(oStream, launchTemplateAndOverridesLocationAndMemberSs.str().c_str());
  }

  if(m_lifecycleHasBeenSet)
  {
      oStream << location << index << locationValue << ".Lifecycle=" << InstanceLifecycleMapper::GetNameForInstanceLifecycle(m_lifecycle) << "&";
  }

  if(m_errorCodeHasBeenSet)
  {
      oStream << location << index << locationValue << ".ErrorCode=" << StringUtils::URLEncode(m_errorCode.c_str()) << "&";
  }

  if(m_errorMessageHasBeenSet)
  {
      oStream << location << index << locationValue << ".ErrorMessage=" << StringUtils::URLEncode(m_errorMessage.c_str()) << "&";
  }

}

void DescribeFleetError::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_launchTemplateAndOverridesHasBeenSet)
  {
      Aws::String launchTemplateAndOverridesLocationAndMember(location);
      launchTemplateAndOverridesLocationAndMember += ".LaunchTemplateAndOverrides";
      m_launchTemplateAndOverrides.OutputToStream(oStream, launchTemplateAndOverridesLocationAndMember.c_str());
  }
  if(m_lifecycleHasBeenSet)
  {
      oStream << location << ".Lifecycle=" << InstanceLifecycleMapper::GetNameForInstanceLifecycle(m_lifecycle) << "&";
  }
  if(m_errorCodeHasBeenSet)
  {
      oStream << location << ".ErrorCode=" << StringUtils::URLEncode(m_errorCode.c_str()) << "&";
  }
  if(m_errorMessageHasBeenSet)
  {
      oStream << location << ".ErrorMessage=" << StringUtils::URLEncode(m_errorMessage.c_str()) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
