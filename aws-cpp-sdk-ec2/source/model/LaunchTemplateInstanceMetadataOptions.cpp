/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/LaunchTemplateInstanceMetadataOptions.h>
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

LaunchTemplateInstanceMetadataOptions::LaunchTemplateInstanceMetadataOptions() : 
    m_state(LaunchTemplateInstanceMetadataOptionsState::NOT_SET),
    m_stateHasBeenSet(false),
    m_httpTokens(LaunchTemplateHttpTokensState::NOT_SET),
    m_httpTokensHasBeenSet(false),
    m_httpPutResponseHopLimit(0),
    m_httpPutResponseHopLimitHasBeenSet(false),
    m_httpEndpoint(LaunchTemplateInstanceMetadataEndpointState::NOT_SET),
    m_httpEndpointHasBeenSet(false)
{
}

LaunchTemplateInstanceMetadataOptions::LaunchTemplateInstanceMetadataOptions(const XmlNode& xmlNode) : 
    m_state(LaunchTemplateInstanceMetadataOptionsState::NOT_SET),
    m_stateHasBeenSet(false),
    m_httpTokens(LaunchTemplateHttpTokensState::NOT_SET),
    m_httpTokensHasBeenSet(false),
    m_httpPutResponseHopLimit(0),
    m_httpPutResponseHopLimitHasBeenSet(false),
    m_httpEndpoint(LaunchTemplateInstanceMetadataEndpointState::NOT_SET),
    m_httpEndpointHasBeenSet(false)
{
  *this = xmlNode;
}

LaunchTemplateInstanceMetadataOptions& LaunchTemplateInstanceMetadataOptions::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode stateNode = resultNode.FirstChild("state");
    if(!stateNode.IsNull())
    {
      m_state = LaunchTemplateInstanceMetadataOptionsStateMapper::GetLaunchTemplateInstanceMetadataOptionsStateForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(stateNode.GetText()).c_str()).c_str());
      m_stateHasBeenSet = true;
    }
    XmlNode httpTokensNode = resultNode.FirstChild("httpTokens");
    if(!httpTokensNode.IsNull())
    {
      m_httpTokens = LaunchTemplateHttpTokensStateMapper::GetLaunchTemplateHttpTokensStateForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(httpTokensNode.GetText()).c_str()).c_str());
      m_httpTokensHasBeenSet = true;
    }
    XmlNode httpPutResponseHopLimitNode = resultNode.FirstChild("httpPutResponseHopLimit");
    if(!httpPutResponseHopLimitNode.IsNull())
    {
      m_httpPutResponseHopLimit = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(httpPutResponseHopLimitNode.GetText()).c_str()).c_str());
      m_httpPutResponseHopLimitHasBeenSet = true;
    }
    XmlNode httpEndpointNode = resultNode.FirstChild("httpEndpoint");
    if(!httpEndpointNode.IsNull())
    {
      m_httpEndpoint = LaunchTemplateInstanceMetadataEndpointStateMapper::GetLaunchTemplateInstanceMetadataEndpointStateForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(httpEndpointNode.GetText()).c_str()).c_str());
      m_httpEndpointHasBeenSet = true;
    }
  }

  return *this;
}

void LaunchTemplateInstanceMetadataOptions::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_stateHasBeenSet)
  {
      oStream << location << index << locationValue << ".State=" << LaunchTemplateInstanceMetadataOptionsStateMapper::GetNameForLaunchTemplateInstanceMetadataOptionsState(m_state) << "&";
  }

  if(m_httpTokensHasBeenSet)
  {
      oStream << location << index << locationValue << ".HttpTokens=" << LaunchTemplateHttpTokensStateMapper::GetNameForLaunchTemplateHttpTokensState(m_httpTokens) << "&";
  }

  if(m_httpPutResponseHopLimitHasBeenSet)
  {
      oStream << location << index << locationValue << ".HttpPutResponseHopLimit=" << m_httpPutResponseHopLimit << "&";
  }

  if(m_httpEndpointHasBeenSet)
  {
      oStream << location << index << locationValue << ".HttpEndpoint=" << LaunchTemplateInstanceMetadataEndpointStateMapper::GetNameForLaunchTemplateInstanceMetadataEndpointState(m_httpEndpoint) << "&";
  }

}

void LaunchTemplateInstanceMetadataOptions::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_stateHasBeenSet)
  {
      oStream << location << ".State=" << LaunchTemplateInstanceMetadataOptionsStateMapper::GetNameForLaunchTemplateInstanceMetadataOptionsState(m_state) << "&";
  }
  if(m_httpTokensHasBeenSet)
  {
      oStream << location << ".HttpTokens=" << LaunchTemplateHttpTokensStateMapper::GetNameForLaunchTemplateHttpTokensState(m_httpTokens) << "&";
  }
  if(m_httpPutResponseHopLimitHasBeenSet)
  {
      oStream << location << ".HttpPutResponseHopLimit=" << m_httpPutResponseHopLimit << "&";
  }
  if(m_httpEndpointHasBeenSet)
  {
      oStream << location << ".HttpEndpoint=" << LaunchTemplateInstanceMetadataEndpointStateMapper::GetNameForLaunchTemplateInstanceMetadataEndpointState(m_httpEndpoint) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
