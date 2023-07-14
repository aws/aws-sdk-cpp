/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift/model/SnapshotErrorMessage.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace Redshift
{
namespace Model
{

SnapshotErrorMessage::SnapshotErrorMessage() : 
    m_snapshotIdentifierHasBeenSet(false),
    m_snapshotClusterIdentifierHasBeenSet(false),
    m_failureCodeHasBeenSet(false),
    m_failureReasonHasBeenSet(false)
{
}

SnapshotErrorMessage::SnapshotErrorMessage(const XmlNode& xmlNode) : 
    m_snapshotIdentifierHasBeenSet(false),
    m_snapshotClusterIdentifierHasBeenSet(false),
    m_failureCodeHasBeenSet(false),
    m_failureReasonHasBeenSet(false)
{
  *this = xmlNode;
}

SnapshotErrorMessage& SnapshotErrorMessage::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode snapshotIdentifierNode = resultNode.FirstChild("SnapshotIdentifier");
    if(!snapshotIdentifierNode.IsNull())
    {
      m_snapshotIdentifier = Aws::Utils::Xml::DecodeEscapedXmlText(snapshotIdentifierNode.GetText());
      m_snapshotIdentifierHasBeenSet = true;
    }
    XmlNode snapshotClusterIdentifierNode = resultNode.FirstChild("SnapshotClusterIdentifier");
    if(!snapshotClusterIdentifierNode.IsNull())
    {
      m_snapshotClusterIdentifier = Aws::Utils::Xml::DecodeEscapedXmlText(snapshotClusterIdentifierNode.GetText());
      m_snapshotClusterIdentifierHasBeenSet = true;
    }
    XmlNode failureCodeNode = resultNode.FirstChild("FailureCode");
    if(!failureCodeNode.IsNull())
    {
      m_failureCode = Aws::Utils::Xml::DecodeEscapedXmlText(failureCodeNode.GetText());
      m_failureCodeHasBeenSet = true;
    }
    XmlNode failureReasonNode = resultNode.FirstChild("FailureReason");
    if(!failureReasonNode.IsNull())
    {
      m_failureReason = Aws::Utils::Xml::DecodeEscapedXmlText(failureReasonNode.GetText());
      m_failureReasonHasBeenSet = true;
    }
  }

  return *this;
}

void SnapshotErrorMessage::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_snapshotIdentifierHasBeenSet)
  {
      oStream << location << index << locationValue << ".SnapshotIdentifier=" << StringUtils::URLEncode(m_snapshotIdentifier.c_str()) << "&";
  }

  if(m_snapshotClusterIdentifierHasBeenSet)
  {
      oStream << location << index << locationValue << ".SnapshotClusterIdentifier=" << StringUtils::URLEncode(m_snapshotClusterIdentifier.c_str()) << "&";
  }

  if(m_failureCodeHasBeenSet)
  {
      oStream << location << index << locationValue << ".FailureCode=" << StringUtils::URLEncode(m_failureCode.c_str()) << "&";
  }

  if(m_failureReasonHasBeenSet)
  {
      oStream << location << index << locationValue << ".FailureReason=" << StringUtils::URLEncode(m_failureReason.c_str()) << "&";
  }

}

void SnapshotErrorMessage::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_snapshotIdentifierHasBeenSet)
  {
      oStream << location << ".SnapshotIdentifier=" << StringUtils::URLEncode(m_snapshotIdentifier.c_str()) << "&";
  }
  if(m_snapshotClusterIdentifierHasBeenSet)
  {
      oStream << location << ".SnapshotClusterIdentifier=" << StringUtils::URLEncode(m_snapshotClusterIdentifier.c_str()) << "&";
  }
  if(m_failureCodeHasBeenSet)
  {
      oStream << location << ".FailureCode=" << StringUtils::URLEncode(m_failureCode.c_str()) << "&";
  }
  if(m_failureReasonHasBeenSet)
  {
      oStream << location << ".FailureReason=" << StringUtils::URLEncode(m_failureReason.c_str()) << "&";
  }
}

} // namespace Model
} // namespace Redshift
} // namespace Aws
