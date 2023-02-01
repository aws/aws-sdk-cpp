/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticache/model/CacheNode.h>
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

CacheNode::CacheNode() : 
    m_cacheNodeIdHasBeenSet(false),
    m_cacheNodeStatusHasBeenSet(false),
    m_cacheNodeCreateTimeHasBeenSet(false),
    m_endpointHasBeenSet(false),
    m_parameterGroupStatusHasBeenSet(false),
    m_sourceCacheNodeIdHasBeenSet(false),
    m_customerAvailabilityZoneHasBeenSet(false),
    m_customerOutpostArnHasBeenSet(false)
{
}

CacheNode::CacheNode(const XmlNode& xmlNode) : 
    m_cacheNodeIdHasBeenSet(false),
    m_cacheNodeStatusHasBeenSet(false),
    m_cacheNodeCreateTimeHasBeenSet(false),
    m_endpointHasBeenSet(false),
    m_parameterGroupStatusHasBeenSet(false),
    m_sourceCacheNodeIdHasBeenSet(false),
    m_customerAvailabilityZoneHasBeenSet(false),
    m_customerOutpostArnHasBeenSet(false)
{
  *this = xmlNode;
}

CacheNode& CacheNode::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode cacheNodeIdNode = resultNode.FirstChild("CacheNodeId");
    if(!cacheNodeIdNode.IsNull())
    {
      m_cacheNodeId = Aws::Utils::Xml::DecodeEscapedXmlText(cacheNodeIdNode.GetText());
      m_cacheNodeIdHasBeenSet = true;
    }
    XmlNode cacheNodeStatusNode = resultNode.FirstChild("CacheNodeStatus");
    if(!cacheNodeStatusNode.IsNull())
    {
      m_cacheNodeStatus = Aws::Utils::Xml::DecodeEscapedXmlText(cacheNodeStatusNode.GetText());
      m_cacheNodeStatusHasBeenSet = true;
    }
    XmlNode cacheNodeCreateTimeNode = resultNode.FirstChild("CacheNodeCreateTime");
    if(!cacheNodeCreateTimeNode.IsNull())
    {
      m_cacheNodeCreateTime = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(cacheNodeCreateTimeNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
      m_cacheNodeCreateTimeHasBeenSet = true;
    }
    XmlNode endpointNode = resultNode.FirstChild("Endpoint");
    if(!endpointNode.IsNull())
    {
      m_endpoint = endpointNode;
      m_endpointHasBeenSet = true;
    }
    XmlNode parameterGroupStatusNode = resultNode.FirstChild("ParameterGroupStatus");
    if(!parameterGroupStatusNode.IsNull())
    {
      m_parameterGroupStatus = Aws::Utils::Xml::DecodeEscapedXmlText(parameterGroupStatusNode.GetText());
      m_parameterGroupStatusHasBeenSet = true;
    }
    XmlNode sourceCacheNodeIdNode = resultNode.FirstChild("SourceCacheNodeId");
    if(!sourceCacheNodeIdNode.IsNull())
    {
      m_sourceCacheNodeId = Aws::Utils::Xml::DecodeEscapedXmlText(sourceCacheNodeIdNode.GetText());
      m_sourceCacheNodeIdHasBeenSet = true;
    }
    XmlNode customerAvailabilityZoneNode = resultNode.FirstChild("CustomerAvailabilityZone");
    if(!customerAvailabilityZoneNode.IsNull())
    {
      m_customerAvailabilityZone = Aws::Utils::Xml::DecodeEscapedXmlText(customerAvailabilityZoneNode.GetText());
      m_customerAvailabilityZoneHasBeenSet = true;
    }
    XmlNode customerOutpostArnNode = resultNode.FirstChild("CustomerOutpostArn");
    if(!customerOutpostArnNode.IsNull())
    {
      m_customerOutpostArn = Aws::Utils::Xml::DecodeEscapedXmlText(customerOutpostArnNode.GetText());
      m_customerOutpostArnHasBeenSet = true;
    }
  }

  return *this;
}

void CacheNode::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_cacheNodeIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".CacheNodeId=" << StringUtils::URLEncode(m_cacheNodeId.c_str()) << "&";
  }

  if(m_cacheNodeStatusHasBeenSet)
  {
      oStream << location << index << locationValue << ".CacheNodeStatus=" << StringUtils::URLEncode(m_cacheNodeStatus.c_str()) << "&";
  }

  if(m_cacheNodeCreateTimeHasBeenSet)
  {
      oStream << location << index << locationValue << ".CacheNodeCreateTime=" << StringUtils::URLEncode(m_cacheNodeCreateTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_endpointHasBeenSet)
  {
      Aws::StringStream endpointLocationAndMemberSs;
      endpointLocationAndMemberSs << location << index << locationValue << ".Endpoint";
      m_endpoint.OutputToStream(oStream, endpointLocationAndMemberSs.str().c_str());
  }

  if(m_parameterGroupStatusHasBeenSet)
  {
      oStream << location << index << locationValue << ".ParameterGroupStatus=" << StringUtils::URLEncode(m_parameterGroupStatus.c_str()) << "&";
  }

  if(m_sourceCacheNodeIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".SourceCacheNodeId=" << StringUtils::URLEncode(m_sourceCacheNodeId.c_str()) << "&";
  }

  if(m_customerAvailabilityZoneHasBeenSet)
  {
      oStream << location << index << locationValue << ".CustomerAvailabilityZone=" << StringUtils::URLEncode(m_customerAvailabilityZone.c_str()) << "&";
  }

  if(m_customerOutpostArnHasBeenSet)
  {
      oStream << location << index << locationValue << ".CustomerOutpostArn=" << StringUtils::URLEncode(m_customerOutpostArn.c_str()) << "&";
  }

}

void CacheNode::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_cacheNodeIdHasBeenSet)
  {
      oStream << location << ".CacheNodeId=" << StringUtils::URLEncode(m_cacheNodeId.c_str()) << "&";
  }
  if(m_cacheNodeStatusHasBeenSet)
  {
      oStream << location << ".CacheNodeStatus=" << StringUtils::URLEncode(m_cacheNodeStatus.c_str()) << "&";
  }
  if(m_cacheNodeCreateTimeHasBeenSet)
  {
      oStream << location << ".CacheNodeCreateTime=" << StringUtils::URLEncode(m_cacheNodeCreateTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }
  if(m_endpointHasBeenSet)
  {
      Aws::String endpointLocationAndMember(location);
      endpointLocationAndMember += ".Endpoint";
      m_endpoint.OutputToStream(oStream, endpointLocationAndMember.c_str());
  }
  if(m_parameterGroupStatusHasBeenSet)
  {
      oStream << location << ".ParameterGroupStatus=" << StringUtils::URLEncode(m_parameterGroupStatus.c_str()) << "&";
  }
  if(m_sourceCacheNodeIdHasBeenSet)
  {
      oStream << location << ".SourceCacheNodeId=" << StringUtils::URLEncode(m_sourceCacheNodeId.c_str()) << "&";
  }
  if(m_customerAvailabilityZoneHasBeenSet)
  {
      oStream << location << ".CustomerAvailabilityZone=" << StringUtils::URLEncode(m_customerAvailabilityZone.c_str()) << "&";
  }
  if(m_customerOutpostArnHasBeenSet)
  {
      oStream << location << ".CustomerOutpostArn=" << StringUtils::URLEncode(m_customerOutpostArn.c_str()) << "&";
  }
}

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
