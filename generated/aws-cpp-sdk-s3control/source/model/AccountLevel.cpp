/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3control/model/AccountLevel.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace S3Control
{
namespace Model
{

AccountLevel::AccountLevel() : 
    m_activityMetricsHasBeenSet(false),
    m_bucketLevelHasBeenSet(false)
{
}

AccountLevel::AccountLevel(const XmlNode& xmlNode) : 
    m_activityMetricsHasBeenSet(false),
    m_bucketLevelHasBeenSet(false)
{
  *this = xmlNode;
}

AccountLevel& AccountLevel::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode activityMetricsNode = resultNode.FirstChild("ActivityMetrics");
    if(!activityMetricsNode.IsNull())
    {
      m_activityMetrics = activityMetricsNode;
      m_activityMetricsHasBeenSet = true;
    }
    XmlNode bucketLevelNode = resultNode.FirstChild("BucketLevel");
    if(!bucketLevelNode.IsNull())
    {
      m_bucketLevel = bucketLevelNode;
      m_bucketLevelHasBeenSet = true;
    }
  }

  return *this;
}

void AccountLevel::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  if(m_activityMetricsHasBeenSet)
  {
   XmlNode activityMetricsNode = parentNode.CreateChildElement("ActivityMetrics");
   m_activityMetrics.AddToNode(activityMetricsNode);
  }

  if(m_bucketLevelHasBeenSet)
  {
   XmlNode bucketLevelNode = parentNode.CreateChildElement("BucketLevel");
   m_bucketLevel.AddToNode(bucketLevelNode);
  }

}

} // namespace Model
} // namespace S3Control
} // namespace Aws
