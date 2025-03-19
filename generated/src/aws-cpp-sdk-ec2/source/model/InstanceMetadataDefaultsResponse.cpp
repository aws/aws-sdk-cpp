/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/InstanceMetadataDefaultsResponse.h>
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

InstanceMetadataDefaultsResponse::InstanceMetadataDefaultsResponse(const XmlNode& xmlNode)
{
  *this = xmlNode;
}

InstanceMetadataDefaultsResponse& InstanceMetadataDefaultsResponse::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode httpTokensNode = resultNode.FirstChild("httpTokens");
    if(!httpTokensNode.IsNull())
    {
      m_httpTokens = HttpTokensStateMapper::GetHttpTokensStateForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(httpTokensNode.GetText()).c_str()));
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
      m_httpEndpoint = InstanceMetadataEndpointStateMapper::GetInstanceMetadataEndpointStateForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(httpEndpointNode.GetText()).c_str()));
      m_httpEndpointHasBeenSet = true;
    }
    XmlNode instanceMetadataTagsNode = resultNode.FirstChild("instanceMetadataTags");
    if(!instanceMetadataTagsNode.IsNull())
    {
      m_instanceMetadataTags = InstanceMetadataTagsStateMapper::GetInstanceMetadataTagsStateForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(instanceMetadataTagsNode.GetText()).c_str()));
      m_instanceMetadataTagsHasBeenSet = true;
    }
    XmlNode managedByNode = resultNode.FirstChild("managedBy");
    if(!managedByNode.IsNull())
    {
      m_managedBy = ManagedByMapper::GetManagedByForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(managedByNode.GetText()).c_str()));
      m_managedByHasBeenSet = true;
    }
    XmlNode managedExceptionMessageNode = resultNode.FirstChild("managedExceptionMessage");
    if(!managedExceptionMessageNode.IsNull())
    {
      m_managedExceptionMessage = Aws::Utils::Xml::DecodeEscapedXmlText(managedExceptionMessageNode.GetText());
      m_managedExceptionMessageHasBeenSet = true;
    }
  }

  return *this;
}

void InstanceMetadataDefaultsResponse::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_httpTokensHasBeenSet)
  {
      oStream << location << index << locationValue << ".HttpTokens=" << StringUtils::URLEncode(HttpTokensStateMapper::GetNameForHttpTokensState(m_httpTokens)) << "&";
  }

  if(m_httpPutResponseHopLimitHasBeenSet)
  {
      oStream << location << index << locationValue << ".HttpPutResponseHopLimit=" << m_httpPutResponseHopLimit << "&";
  }

  if(m_httpEndpointHasBeenSet)
  {
      oStream << location << index << locationValue << ".HttpEndpoint=" << StringUtils::URLEncode(InstanceMetadataEndpointStateMapper::GetNameForInstanceMetadataEndpointState(m_httpEndpoint)) << "&";
  }

  if(m_instanceMetadataTagsHasBeenSet)
  {
      oStream << location << index << locationValue << ".InstanceMetadataTags=" << StringUtils::URLEncode(InstanceMetadataTagsStateMapper::GetNameForInstanceMetadataTagsState(m_instanceMetadataTags)) << "&";
  }

  if(m_managedByHasBeenSet)
  {
      oStream << location << index << locationValue << ".ManagedBy=" << StringUtils::URLEncode(ManagedByMapper::GetNameForManagedBy(m_managedBy)) << "&";
  }

  if(m_managedExceptionMessageHasBeenSet)
  {
      oStream << location << index << locationValue << ".ManagedExceptionMessage=" << StringUtils::URLEncode(m_managedExceptionMessage.c_str()) << "&";
  }

}

void InstanceMetadataDefaultsResponse::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_httpTokensHasBeenSet)
  {
      oStream << location << ".HttpTokens=" << StringUtils::URLEncode(HttpTokensStateMapper::GetNameForHttpTokensState(m_httpTokens)) << "&";
  }
  if(m_httpPutResponseHopLimitHasBeenSet)
  {
      oStream << location << ".HttpPutResponseHopLimit=" << m_httpPutResponseHopLimit << "&";
  }
  if(m_httpEndpointHasBeenSet)
  {
      oStream << location << ".HttpEndpoint=" << StringUtils::URLEncode(InstanceMetadataEndpointStateMapper::GetNameForInstanceMetadataEndpointState(m_httpEndpoint)) << "&";
  }
  if(m_instanceMetadataTagsHasBeenSet)
  {
      oStream << location << ".InstanceMetadataTags=" << StringUtils::URLEncode(InstanceMetadataTagsStateMapper::GetNameForInstanceMetadataTagsState(m_instanceMetadataTags)) << "&";
  }
  if(m_managedByHasBeenSet)
  {
      oStream << location << ".ManagedBy=" << StringUtils::URLEncode(ManagedByMapper::GetNameForManagedBy(m_managedBy)) << "&";
  }
  if(m_managedExceptionMessageHasBeenSet)
  {
      oStream << location << ".ManagedExceptionMessage=" << StringUtils::URLEncode(m_managedExceptionMessage.c_str()) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
