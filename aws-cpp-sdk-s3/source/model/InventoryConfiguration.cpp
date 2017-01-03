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
#include <aws/s3/model/InventoryConfiguration.h>
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

InventoryConfiguration::InventoryConfiguration() : 
    m_destinationHasBeenSet(false),
    m_isEnabled(false),
    m_isEnabledHasBeenSet(false),
    m_filterHasBeenSet(false),
    m_idHasBeenSet(false),
    m_includedObjectVersions(InventoryIncludedObjectVersions::NOT_SET),
    m_includedObjectVersionsHasBeenSet(false),
    m_optionalFieldsHasBeenSet(false),
    m_scheduleHasBeenSet(false)
{
}

InventoryConfiguration::InventoryConfiguration(const XmlNode& xmlNode) : 
    m_destinationHasBeenSet(false),
    m_isEnabled(false),
    m_isEnabledHasBeenSet(false),
    m_filterHasBeenSet(false),
    m_idHasBeenSet(false),
    m_includedObjectVersions(InventoryIncludedObjectVersions::NOT_SET),
    m_includedObjectVersionsHasBeenSet(false),
    m_optionalFieldsHasBeenSet(false),
    m_scheduleHasBeenSet(false)
{
  *this = xmlNode;
}

InventoryConfiguration& InventoryConfiguration::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode destinationNode = resultNode.FirstChild("Destination");
    if(!destinationNode.IsNull())
    {
      m_destination = destinationNode;
      m_destinationHasBeenSet = true;
    }
    XmlNode isEnabledNode = resultNode.FirstChild("IsEnabled");
    if(!isEnabledNode.IsNull())
    {
      m_isEnabled = StringUtils::ConvertToBool(StringUtils::Trim(isEnabledNode.GetText().c_str()).c_str());
      m_isEnabledHasBeenSet = true;
    }
    XmlNode filterNode = resultNode.FirstChild("Filter");
    if(!filterNode.IsNull())
    {
      m_filter = filterNode;
      m_filterHasBeenSet = true;
    }
    XmlNode idNode = resultNode.FirstChild("Id");
    if(!idNode.IsNull())
    {
      m_id = StringUtils::Trim(idNode.GetText().c_str());
      m_idHasBeenSet = true;
    }
    XmlNode includedObjectVersionsNode = resultNode.FirstChild("IncludedObjectVersions");
    if(!includedObjectVersionsNode.IsNull())
    {
      m_includedObjectVersions = InventoryIncludedObjectVersionsMapper::GetInventoryIncludedObjectVersionsForName(StringUtils::Trim(includedObjectVersionsNode.GetText().c_str()).c_str());
      m_includedObjectVersionsHasBeenSet = true;
    }
    XmlNode optionalFieldsNode = resultNode.FirstChild("OptionalFields");
    if(!optionalFieldsNode.IsNull())
    {
      XmlNode optionalFieldsMember = optionalFieldsNode.FirstChild("Field");
      while(!optionalFieldsMember.IsNull())
      {
        m_optionalFields.push_back(InventoryOptionalFieldMapper::GetInventoryOptionalFieldForName(StringUtils::Trim(optionalFieldsMember.GetText().c_str())));
        optionalFieldsMember = optionalFieldsMember.NextNode("Field");
      }

      m_optionalFieldsHasBeenSet = true;
    }
    XmlNode scheduleNode = resultNode.FirstChild("Schedule");
    if(!scheduleNode.IsNull())
    {
      m_schedule = scheduleNode;
      m_scheduleHasBeenSet = true;
    }
  }

  return *this;
}

void InventoryConfiguration::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  if(m_destinationHasBeenSet)
  {
   XmlNode destinationNode = parentNode.CreateChildElement("Destination");
   m_destination.AddToNode(destinationNode);
  }

  if(m_isEnabledHasBeenSet)
  {
   XmlNode isEnabledNode = parentNode.CreateChildElement("IsEnabled");
  ss << m_isEnabled;
   isEnabledNode.SetText(ss.str());
  ss.str("");
  }

  if(m_filterHasBeenSet)
  {
   XmlNode filterNode = parentNode.CreateChildElement("Filter");
   m_filter.AddToNode(filterNode);
  }

  if(m_idHasBeenSet)
  {
   XmlNode idNode = parentNode.CreateChildElement("Id");
   idNode.SetText(m_id);
  }

  if(m_includedObjectVersionsHasBeenSet)
  {
   XmlNode includedObjectVersionsNode = parentNode.CreateChildElement("IncludedObjectVersions");
   includedObjectVersionsNode.SetText(InventoryIncludedObjectVersionsMapper::GetNameForInventoryIncludedObjectVersions(m_includedObjectVersions));
  }

  if(m_optionalFieldsHasBeenSet)
  {
   XmlNode optionalFieldsParentNode = parentNode.CreateChildElement("OptionalFields");
   for(const auto& item : m_optionalFields)
   {
     XmlNode optionalFieldsNode = optionalFieldsParentNode.CreateChildElement("InventoryOptionalField");
     optionalFieldsNode.SetText(InventoryOptionalFieldMapper::GetNameForInventoryOptionalField(item));
   }
  }

  if(m_scheduleHasBeenSet)
  {
   XmlNode scheduleNode = parentNode.CreateChildElement("Schedule");
   m_schedule.AddToNode(scheduleNode);
  }

}

} // namespace Model
} // namespace S3
} // namespace Aws
