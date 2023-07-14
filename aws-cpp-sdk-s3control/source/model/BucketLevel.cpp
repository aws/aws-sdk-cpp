/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3control/model/BucketLevel.h>
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

BucketLevel::BucketLevel() : 
    m_activityMetricsHasBeenSet(false),
    m_prefixLevelHasBeenSet(false)
{
}

BucketLevel::BucketLevel(const XmlNode& xmlNode) : 
    m_activityMetricsHasBeenSet(false),
    m_prefixLevelHasBeenSet(false)
{
  *this = xmlNode;
}

BucketLevel& BucketLevel::operator =(const XmlNode& xmlNode)
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
    XmlNode prefixLevelNode = resultNode.FirstChild("PrefixLevel");
    if(!prefixLevelNode.IsNull())
    {
      m_prefixLevel = prefixLevelNode;
      m_prefixLevelHasBeenSet = true;
    }
  }

  return *this;
}

void BucketLevel::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  if(m_activityMetricsHasBeenSet)
  {
   XmlNode activityMetricsNode = parentNode.CreateChildElement("ActivityMetrics");
   m_activityMetrics.AddToNode(activityMetricsNode);
  }

  if(m_prefixLevelHasBeenSet)
  {
   XmlNode prefixLevelNode = parentNode.CreateChildElement("PrefixLevel");
   m_prefixLevel.AddToNode(prefixLevelNode);
  }

}

} // namespace Model
} // namespace S3Control
} // namespace Aws
