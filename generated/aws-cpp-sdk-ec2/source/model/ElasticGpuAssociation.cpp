/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/ElasticGpuAssociation.h>
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

ElasticGpuAssociation::ElasticGpuAssociation() : 
    m_elasticGpuIdHasBeenSet(false),
    m_elasticGpuAssociationIdHasBeenSet(false),
    m_elasticGpuAssociationStateHasBeenSet(false),
    m_elasticGpuAssociationTimeHasBeenSet(false)
{
}

ElasticGpuAssociation::ElasticGpuAssociation(const XmlNode& xmlNode) : 
    m_elasticGpuIdHasBeenSet(false),
    m_elasticGpuAssociationIdHasBeenSet(false),
    m_elasticGpuAssociationStateHasBeenSet(false),
    m_elasticGpuAssociationTimeHasBeenSet(false)
{
  *this = xmlNode;
}

ElasticGpuAssociation& ElasticGpuAssociation::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode elasticGpuIdNode = resultNode.FirstChild("elasticGpuId");
    if(!elasticGpuIdNode.IsNull())
    {
      m_elasticGpuId = Aws::Utils::Xml::DecodeEscapedXmlText(elasticGpuIdNode.GetText());
      m_elasticGpuIdHasBeenSet = true;
    }
    XmlNode elasticGpuAssociationIdNode = resultNode.FirstChild("elasticGpuAssociationId");
    if(!elasticGpuAssociationIdNode.IsNull())
    {
      m_elasticGpuAssociationId = Aws::Utils::Xml::DecodeEscapedXmlText(elasticGpuAssociationIdNode.GetText());
      m_elasticGpuAssociationIdHasBeenSet = true;
    }
    XmlNode elasticGpuAssociationStateNode = resultNode.FirstChild("elasticGpuAssociationState");
    if(!elasticGpuAssociationStateNode.IsNull())
    {
      m_elasticGpuAssociationState = Aws::Utils::Xml::DecodeEscapedXmlText(elasticGpuAssociationStateNode.GetText());
      m_elasticGpuAssociationStateHasBeenSet = true;
    }
    XmlNode elasticGpuAssociationTimeNode = resultNode.FirstChild("elasticGpuAssociationTime");
    if(!elasticGpuAssociationTimeNode.IsNull())
    {
      m_elasticGpuAssociationTime = Aws::Utils::Xml::DecodeEscapedXmlText(elasticGpuAssociationTimeNode.GetText());
      m_elasticGpuAssociationTimeHasBeenSet = true;
    }
  }

  return *this;
}

void ElasticGpuAssociation::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_elasticGpuIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".ElasticGpuId=" << StringUtils::URLEncode(m_elasticGpuId.c_str()) << "&";
  }

  if(m_elasticGpuAssociationIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".ElasticGpuAssociationId=" << StringUtils::URLEncode(m_elasticGpuAssociationId.c_str()) << "&";
  }

  if(m_elasticGpuAssociationStateHasBeenSet)
  {
      oStream << location << index << locationValue << ".ElasticGpuAssociationState=" << StringUtils::URLEncode(m_elasticGpuAssociationState.c_str()) << "&";
  }

  if(m_elasticGpuAssociationTimeHasBeenSet)
  {
      oStream << location << index << locationValue << ".ElasticGpuAssociationTime=" << StringUtils::URLEncode(m_elasticGpuAssociationTime.c_str()) << "&";
  }

}

void ElasticGpuAssociation::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_elasticGpuIdHasBeenSet)
  {
      oStream << location << ".ElasticGpuId=" << StringUtils::URLEncode(m_elasticGpuId.c_str()) << "&";
  }
  if(m_elasticGpuAssociationIdHasBeenSet)
  {
      oStream << location << ".ElasticGpuAssociationId=" << StringUtils::URLEncode(m_elasticGpuAssociationId.c_str()) << "&";
  }
  if(m_elasticGpuAssociationStateHasBeenSet)
  {
      oStream << location << ".ElasticGpuAssociationState=" << StringUtils::URLEncode(m_elasticGpuAssociationState.c_str()) << "&";
  }
  if(m_elasticGpuAssociationTimeHasBeenSet)
  {
      oStream << location << ".ElasticGpuAssociationTime=" << StringUtils::URLEncode(m_elasticGpuAssociationTime.c_str()) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
