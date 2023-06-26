/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
      m_creationDate = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(creationDateNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
      m_creationDateHasBeenSet = true;
    }
    XmlNode updateDateNode = resultNode.FirstChild("UpdateDate");
    if(!updateDateNode.IsNull())
    {
      m_updateDate = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(updateDateNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
      m_updateDateHasBeenSet = true;
    }
    XmlNode updateVersionNode = resultNode.FirstChild("UpdateVersion");
    if(!updateVersionNode.IsNull())
    {
      m_updateVersion = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(updateVersionNode.GetText()).c_str()).c_str());
      m_updateVersionHasBeenSet = true;
    }
    XmlNode stateNode = resultNode.FirstChild("State");
    if(!stateNode.IsNull())
    {
      m_state = OptionStateMapper::GetOptionStateForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(stateNode.GetText()).c_str()).c_str());
      m_stateHasBeenSet = true;
    }
    XmlNode pendingDeletionNode = resultNode.FirstChild("PendingDeletion");
    if(!pendingDeletionNode.IsNull())
    {
      m_pendingDeletion = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(pendingDeletionNode.GetText()).c_str()).c_str());
      m_pendingDeletionHasBeenSet = true;
    }
  }

  return *this;
}

void OptionStatus::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_creationDateHasBeenSet)
  {
      oStream << location << index << locationValue << ".CreationDate=" << StringUtils::URLEncode(m_creationDate.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_updateDateHasBeenSet)
  {
      oStream << location << index << locationValue << ".UpdateDate=" << StringUtils::URLEncode(m_updateDate.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
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
      oStream << location << index << locationValue << ".PendingDeletion=" << std::boolalpha << m_pendingDeletion << "&";
  }

}

void OptionStatus::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_creationDateHasBeenSet)
  {
      oStream << location << ".CreationDate=" << StringUtils::URLEncode(m_creationDate.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }
  if(m_updateDateHasBeenSet)
  {
      oStream << location << ".UpdateDate=" << StringUtils::URLEncode(m_updateDate.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
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
      oStream << location << ".PendingDeletion=" << std::boolalpha << m_pendingDeletion << "&";
  }
}

} // namespace Model
} // namespace CloudSearch
} // namespace Aws
