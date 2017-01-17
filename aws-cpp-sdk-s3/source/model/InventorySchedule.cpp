﻿/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/s3/model/InventorySchedule.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace S3
{
namespace Model
{

InventorySchedule::InventorySchedule() : 
    m_frequency(InventoryFrequency::NOT_SET),
    m_frequencyHasBeenSet(false)
{
}

InventorySchedule::InventorySchedule(const XmlNode& xmlNode) : 
    m_frequency(InventoryFrequency::NOT_SET),
    m_frequencyHasBeenSet(false)
{
  *this = xmlNode;
}

InventorySchedule& InventorySchedule::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode frequencyNode = resultNode.FirstChild("Frequency");
    if(!frequencyNode.IsNull())
    {
      m_frequency = InventoryFrequencyMapper::GetInventoryFrequencyForName(StringUtils::Trim(frequencyNode.GetText().c_str()).c_str());
      m_frequencyHasBeenSet = true;
    }
  }

  return *this;
}

void InventorySchedule::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  if(m_frequencyHasBeenSet)
  {
   XmlNode frequencyNode = parentNode.CreateChildElement("Frequency");
   frequencyNode.SetText(InventoryFrequencyMapper::GetNameForInventoryFrequency(m_frequency));
  }

}

} // namespace Model
} // namespace S3
} // namespace Aws
