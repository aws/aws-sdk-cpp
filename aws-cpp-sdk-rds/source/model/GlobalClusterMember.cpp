﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rds/model/GlobalClusterMember.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace RDS
{
namespace Model
{

GlobalClusterMember::GlobalClusterMember() : 
    m_dBClusterArnHasBeenSet(false),
    m_readersHasBeenSet(false),
    m_isWriter(false),
    m_isWriterHasBeenSet(false),
    m_globalWriteForwardingStatus(WriteForwardingStatus::NOT_SET),
    m_globalWriteForwardingStatusHasBeenSet(false)
{
}

GlobalClusterMember::GlobalClusterMember(const XmlNode& xmlNode) : 
    m_dBClusterArnHasBeenSet(false),
    m_readersHasBeenSet(false),
    m_isWriter(false),
    m_isWriterHasBeenSet(false),
    m_globalWriteForwardingStatus(WriteForwardingStatus::NOT_SET),
    m_globalWriteForwardingStatusHasBeenSet(false)
{
  *this = xmlNode;
}

GlobalClusterMember& GlobalClusterMember::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode dBClusterArnNode = resultNode.FirstChild("DBClusterArn");
    if(!dBClusterArnNode.IsNull())
    {
      m_dBClusterArn = Aws::Utils::Xml::DecodeEscapedXmlText(dBClusterArnNode.GetText());
      m_dBClusterArnHasBeenSet = true;
    }
    XmlNode readersNode = resultNode.FirstChild("Readers");
    if(!readersNode.IsNull())
    {
      XmlNode readersMember = readersNode.FirstChild("member");
      while(!readersMember.IsNull())
      {
        m_readers.push_back(readersMember.GetText());
        readersMember = readersMember.NextNode("member");
      }

      m_readersHasBeenSet = true;
    }
    XmlNode isWriterNode = resultNode.FirstChild("IsWriter");
    if(!isWriterNode.IsNull())
    {
      m_isWriter = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(isWriterNode.GetText()).c_str()).c_str());
      m_isWriterHasBeenSet = true;
    }
    XmlNode globalWriteForwardingStatusNode = resultNode.FirstChild("GlobalWriteForwardingStatus");
    if(!globalWriteForwardingStatusNode.IsNull())
    {
      m_globalWriteForwardingStatus = WriteForwardingStatusMapper::GetWriteForwardingStatusForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(globalWriteForwardingStatusNode.GetText()).c_str()).c_str());
      m_globalWriteForwardingStatusHasBeenSet = true;
    }
  }

  return *this;
}

void GlobalClusterMember::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_dBClusterArnHasBeenSet)
  {
      oStream << location << index << locationValue << ".DBClusterArn=" << StringUtils::URLEncode(m_dBClusterArn.c_str()) << "&";
  }

  if(m_readersHasBeenSet)
  {
      unsigned readersIdx = 1;
      for(auto& item : m_readers)
      {
        oStream << location << index << locationValue << ".Readers.member." << readersIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }

  if(m_isWriterHasBeenSet)
  {
      oStream << location << index << locationValue << ".IsWriter=" << std::boolalpha << m_isWriter << "&";
  }

  if(m_globalWriteForwardingStatusHasBeenSet)
  {
      oStream << location << index << locationValue << ".GlobalWriteForwardingStatus=" << WriteForwardingStatusMapper::GetNameForWriteForwardingStatus(m_globalWriteForwardingStatus) << "&";
  }

}

void GlobalClusterMember::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_dBClusterArnHasBeenSet)
  {
      oStream << location << ".DBClusterArn=" << StringUtils::URLEncode(m_dBClusterArn.c_str()) << "&";
  }
  if(m_readersHasBeenSet)
  {
      unsigned readersIdx = 1;
      for(auto& item : m_readers)
      {
        oStream << location << ".Readers.member." << readersIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }
  if(m_isWriterHasBeenSet)
  {
      oStream << location << ".IsWriter=" << std::boolalpha << m_isWriter << "&";
  }
  if(m_globalWriteForwardingStatusHasBeenSet)
  {
      oStream << location << ".GlobalWriteForwardingStatus=" << WriteForwardingStatusMapper::GetNameForWriteForwardingStatus(m_globalWriteForwardingStatus) << "&";
  }
}

} // namespace Model
} // namespace RDS
} // namespace Aws
