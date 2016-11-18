/*
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
#include <aws/cloudsearch/model/OptionStatus.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace CloudSearch
{
namespace Model
{

OptionStatus::OptionStatus() : 
    m_creationDateHasBeenSet(false),
    m_updateDateHasBeenSet(false),
    m_updateVersion(0),
    m_updateVersionHasBeenSet(false),
    m_state(OptionState::NOT_SET),
    m_stateHasBeenSet(false),
    m_pendingDeletion(false),
    m_pendingDeletionHasBeenSet(false)
{
}

OptionStatus::OptionStatus(const XmlNode& xmlNode) : 
    m_creationDateHasBeenSet(false),
    m_updateDateHasBeenSet(false),
    m_updateVersion(0),
    m_updateVersionHasBeenSet(false),
    m_state(OptionState::NOT_SET),
    m_stateHasBeenSet(false),
    m_pendingDeletion(false),
    m_pendingDeletionHasBeenSet(false)
{
  *this = xmlNode;
}

OptionStatus& OptionStatus::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode creationDateNode = resultNode.FirstChild("CreationDate");
    if(!creationDateNode.IsNull())
    {
      m_creationDate = DateTime(StringUtils::Trim(creationDateNode.GetText().c_str()).c_str(), DateFormat::ISO_8601);
      m_creationDateHasBeenSet = true;
    }
    XmlNode updateDateNode = resultNode.FirstChild("UpdateDate");
    if(!updateDateNode.IsNull())
    {
      m_updateDate = DateTime(StringUtils::Trim(updateDateNode.GetText().c_str()).c_str(), DateFormat::ISO_8601);
      m_updateDateHasBeenSet = true;
    }
    XmlNode updateVersionNode = resultNode.FirstChild("UpdateVersion");
    if(!updateVersionNode.IsNull())
    {
      m_updateVersion = StringUtils::ConvertToInt32(StringUtils::Trim(updateVersionNode.GetText().c_str()).c_str());
      m_updateVersionHasBeenSet = true;
    }
    XmlNode stateNode = resultNode.FirstChild("State");
    if(!stateNode.IsNull())
    {
      m_state = OptionStateMapper::GetOptionStateForName(StringUtils::Trim(stateNode.GetText().c_str()).c_str());
      m_stateHasBeenSet = true;
    }
    XmlNode pendingDeletionNode = resultNode.FirstChild("PendingDeletion");
    if(!pendingDeletionNode.IsNull())
    {
      m_pendingDeletion = StringUtils::ConvertToBool(StringUtils::Trim(pendingDeletionNode.GetText().c_str()).c_str());
      m_pendingDeletionHasBeenSet = true;
    }
  }

  return *this;
}

void OptionStatus::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_creationDateHasBeenSet)
  {
      oStream << location << index << locationValue << ".CreationDate=" << StringUtils::URLEncode(m_creationDate.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_updateDateHasBeenSet)
  {
      oStream << location << index << locationValue << ".UpdateDate=" << StringUtils::URLEncode(m_updateDate.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_updateVersionHasBeenSet)
  {
      oStream << location << index << locationValue << ".UpdateVersion=" << m_updateVersion << "&";
  }

  if(m_stateHasBeenSet)
  {
      oStream << location << index << locationValue << ".State=" << OptionStateMapper::GetNameForOptionState(m_state) << "&";
  }

  if(m_pendingDeletionHasBeenSet)
  {
      oStream << location << index << locationValue << ".PendingDeletion=" << m_pendingDeletion << "&";
  }

}

void OptionStatus::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_creationDateHasBeenSet)
  {
      oStream << location << ".CreationDate=" << StringUtils::URLEncode(m_creationDate.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
  }
  if(m_updateDateHasBeenSet)
  {
      oStream << location << ".UpdateDate=" << StringUtils::URLEncode(m_updateDate.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
  }
  if(m_updateVersionHasBeenSet)
  {
      oStream << location << ".UpdateVersion=" << m_updateVersion << "&";
  }
  if(m_stateHasBeenSet)
  {
      oStream << location << ".State=" << OptionStateMapper::GetNameForOptionState(m_state) << "&";
  }
  if(m_pendingDeletionHasBeenSet)
  {
      oStream << location << ".PendingDeletion=" << m_pendingDeletion << "&";
  }
}

} // namespace Model
} // namespace CloudSearch
} // namespace Aws
