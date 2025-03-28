﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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

DescribeFleetError::DescribeFleetError(const XmlNode& xmlNode)
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
      m_lifecycle = InstanceLifecycleMapper::GetInstanceLifecycleForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(lifecycleNode.GetText()).c_str()));
      m_lifecycleHasBeenSet = true;
    }
    XmlNode errorCodeNode = resultNode.FirstChild("errorCode");
    if(!errorCodeNode.IsNull())
    {
      m_errorCode = Aws::Utils::Xml::DecodeEscapedXmlText(errorCodeNode.GetText());
      m_errorCodeHasBeenSet = true;
    }
    XmlNode errorMessageNode = resultNode.FirstChild("errorMessage");
    if(!errorMessageNode.IsNull())
    {
      m_errorMessage = Aws::Utils::Xml::DecodeEscapedXmlText(errorMessageNode.GetText());
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
      oStream << location << index << locationValue << ".Lifecycle=" << StringUtils::URLEncode(InstanceLifecycleMapper::GetNameForInstanceLifecycle(m_lifecycle)) << "&";
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
      oStream << location << ".Lifecycle=" << StringUtils::URLEncode(InstanceLifecycleMapper::GetNameForInstanceLifecycle(m_lifecycle)) << "&";
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
