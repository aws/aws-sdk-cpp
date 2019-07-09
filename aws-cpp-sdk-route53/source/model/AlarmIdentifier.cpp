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

#include <aws/route53/model/AlarmIdentifier.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace Route53
{
namespace Model
{

AlarmIdentifier::AlarmIdentifier() : 
    m_region(CloudWatchRegion::NOT_SET),
    m_regionHasBeenSet(false),
    m_nameHasBeenSet(false)
{
}

AlarmIdentifier::AlarmIdentifier(const XmlNode& xmlNode) : 
    m_region(CloudWatchRegion::NOT_SET),
    m_regionHasBeenSet(false),
    m_nameHasBeenSet(false)
{
  *this = xmlNode;
}

AlarmIdentifier& AlarmIdentifier::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode regionNode = resultNode.FirstChild("Region");
    if(!regionNode.IsNull())
    {
      m_region = CloudWatchRegionMapper::GetCloudWatchRegionForName(StringUtils::Trim(regionNode.GetText().c_str()).c_str());
      m_regionHasBeenSet = true;
    }
    XmlNode nameNode = resultNode.FirstChild("Name");
    if(!nameNode.IsNull())
    {
      m_name = nameNode.GetText();
      m_nameHasBeenSet = true;
    }
  }

  return *this;
}

void AlarmIdentifier::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  if(m_regionHasBeenSet)
  {
   XmlNode regionNode = parentNode.CreateChildElement("Region");
   regionNode.SetText(CloudWatchRegionMapper::GetNameForCloudWatchRegion(m_region));
  }

  if(m_nameHasBeenSet)
  {
   XmlNode nameNode = parentNode.CreateChildElement("Name");
   nameNode.SetText(m_name);
  }

}

} // namespace Model
} // namespace Route53
} // namespace Aws
