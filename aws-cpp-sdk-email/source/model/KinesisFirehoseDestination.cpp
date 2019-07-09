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
      m_iAMRoleARN = iAMRoleARNNode.GetText();
      m_iAMRoleARNHasBeenSet = true;
    }
    XmlNode deliveryStreamARNNode = resultNode.FirstChild("DeliveryStreamARN");
    if(!deliveryStreamARNNode.IsNull())
    {
      m_deliveryStreamARN = deliveryStreamARNNode.GetText();
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
