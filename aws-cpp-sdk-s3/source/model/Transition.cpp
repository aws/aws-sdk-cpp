/*
* Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/s3/model/Transition.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::S3::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

Transition::Transition() : 
    m_date(0.0),
    m_dateHasBeenSet(false),
    m_days(0),
    m_daysHasBeenSet(false),
    m_storageClassHasBeenSet(false)
{
}

Transition::Transition(const XmlNode& xmlNode) : 
    m_date(0.0),
    m_dateHasBeenSet(false),
    m_days(0),
    m_daysHasBeenSet(false),
    m_storageClassHasBeenSet(false)
{
  *this = xmlNode;
}

Transition& Transition::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode dateNode = resultNode.FirstChild("Date");
    if(!dateNode.IsNull())
    {
      m_date = StringUtils::ConvertToDouble(StringUtils::Trim(dateNode.GetText().c_str()).c_str());
      m_dateHasBeenSet = true;
    }
    XmlNode daysNode = resultNode.FirstChild("Days");
    if(!daysNode.IsNull())
    {
      m_days = StringUtils::ConvertToInt32(StringUtils::Trim(daysNode.GetText().c_str()).c_str());
      m_daysHasBeenSet = true;
    }
    XmlNode storageClassNode = resultNode.FirstChild("StorageClass");
    if(!storageClassNode.IsNull())
    {
      m_storageClass = TransitionStorageClassMapper::GetTransitionStorageClassForName(StringUtils::Trim(storageClassNode.GetText().c_str()).c_str());
      m_storageClassHasBeenSet = true;
    }
  }

  return *this;
}

void Transition::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  if(m_dateHasBeenSet)
  {
   XmlNode dateNode = parentNode.CreateChildElement("Date");
  ss << m_date;
   dateNode.SetText(ss.str());
  ss.str("");
  }

  if(m_daysHasBeenSet)
  {
   XmlNode daysNode = parentNode.CreateChildElement("Days");
  ss << m_days;
   daysNode.SetText(ss.str());
  ss.str("");
  }

  if(m_storageClassHasBeenSet)
  {
   XmlNode storageClassNode = parentNode.CreateChildElement("StorageClass");
   storageClassNode.SetText(TransitionStorageClassMapper::GetNameForTransitionStorageClass(m_storageClass));
  }

}
