/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/email/model/KinesisFirehoseDestination.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace SES
{
namespace Model
{

KinesisFirehoseDestination::KinesisFirehoseDestination() : 
    m_iAMRoleARNHasBeenSet(false),
    m_deliveryStreamARNHasBeenSet(false)
{
}

KinesisFirehoseDestination::KinesisFirehoseDestination(const XmlNode& xmlNode) : 
    m_iAMRoleARNHasBeenSet(false),
    m_deliveryStreamARNHasBeenSet(false)
{
  *this = xmlNode;
}

KinesisFirehoseDestination& KinesisFirehoseDestination::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode iAMRoleARNNode = resultNode.FirstChild("IAMRoleARN");
    if(!iAMRoleARNNode.IsNull())
    {
      m_iAMRoleARN = Aws::Utils::Xml::DecodeEscapedXmlText(iAMRoleARNNode.GetText());
      m_iAMRoleARNHasBeenSet = true;
    }
    XmlNode deliveryStreamARNNode = resultNode.FirstChild("DeliveryStreamARN");
    if(!deliveryStreamARNNode.IsNull())
    {
      m_deliveryStreamARN = Aws::Utils::Xml::DecodeEscapedXmlText(deliveryStreamARNNode.GetText());
      m_deliveryStreamARNHasBeenSet = true;
    }
  }

  return *this;
}

void KinesisFirehoseDestination::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_iAMRoleARNHasBeenSet)
  {
      oStream << location << index << locationValue << ".IAMRoleARN=" << StringUtils::URLEncode(m_iAMRoleARN.c_str()) << "&";
  }

  if(m_deliveryStreamARNHasBeenSet)
  {
      oStream << location << index << locationValue << ".DeliveryStreamARN=" << StringUtils::URLEncode(m_deliveryStreamARN.c_str()) << "&";
  }

}

void KinesisFirehoseDestination::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_iAMRoleARNHasBeenSet)
  {
      oStream << location << ".IAMRoleARN=" << StringUtils::URLEncode(m_iAMRoleARN.c_str()) << "&";
  }
  if(m_deliveryStreamARNHasBeenSet)
  {
      oStream << location << ".DeliveryStreamARN=" << StringUtils::URLEncode(m_deliveryStreamARN.c_str()) << "&";
  }
}

} // namespace Model
} // namespace SES
} // namespace Aws
