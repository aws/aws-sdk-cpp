/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudformation/model/BatchDescribeTypeConfigurationsError.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace CloudFormation
{
namespace Model
{

BatchDescribeTypeConfigurationsError::BatchDescribeTypeConfigurationsError() : 
    m_errorCodeHasBeenSet(false),
    m_errorMessageHasBeenSet(false),
    m_typeConfigurationIdentifierHasBeenSet(false)
{
}

BatchDescribeTypeConfigurationsError::BatchDescribeTypeConfigurationsError(const XmlNode& xmlNode) : 
    m_errorCodeHasBeenSet(false),
    m_errorMessageHasBeenSet(false),
    m_typeConfigurationIdentifierHasBeenSet(false)
{
  *this = xmlNode;
}

BatchDescribeTypeConfigurationsError& BatchDescribeTypeConfigurationsError::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode errorCodeNode = resultNode.FirstChild("ErrorCode");
    if(!errorCodeNode.IsNull())
    {
      m_errorCode = Aws::Utils::Xml::DecodeEscapedXmlText(errorCodeNode.GetText());
      m_errorCodeHasBeenSet = true;
    }
    XmlNode errorMessageNode = resultNode.FirstChild("ErrorMessage");
    if(!errorMessageNode.IsNull())
    {
      m_errorMessage = Aws::Utils::Xml::DecodeEscapedXmlText(errorMessageNode.GetText());
      m_errorMessageHasBeenSet = true;
    }
    XmlNode typeConfigurationIdentifierNode = resultNode.FirstChild("TypeConfigurationIdentifier");
    if(!typeConfigurationIdentifierNode.IsNull())
    {
      m_typeConfigurationIdentifier = typeConfigurationIdentifierNode;
      m_typeConfigurationIdentifierHasBeenSet = true;
    }
  }

  return *this;
}

void BatchDescribeTypeConfigurationsError::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_errorCodeHasBeenSet)
  {
      oStream << location << index << locationValue << ".ErrorCode=" << StringUtils::URLEncode(m_errorCode.c_str()) << "&";
  }

  if(m_errorMessageHasBeenSet)
  {
      oStream << location << index << locationValue << ".ErrorMessage=" << StringUtils::URLEncode(m_errorMessage.c_str()) << "&";
  }

  if(m_typeConfigurationIdentifierHasBeenSet)
  {
      Aws::StringStream typeConfigurationIdentifierLocationAndMemberSs;
      typeConfigurationIdentifierLocationAndMemberSs << location << index << locationValue << ".TypeConfigurationIdentifier";
      m_typeConfigurationIdentifier.OutputToStream(oStream, typeConfigurationIdentifierLocationAndMemberSs.str().c_str());
  }

}

void BatchDescribeTypeConfigurationsError::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_errorCodeHasBeenSet)
  {
      oStream << location << ".ErrorCode=" << StringUtils::URLEncode(m_errorCode.c_str()) << "&";
  }
  if(m_errorMessageHasBeenSet)
  {
      oStream << location << ".ErrorMessage=" << StringUtils::URLEncode(m_errorMessage.c_str()) << "&";
  }
  if(m_typeConfigurationIdentifierHasBeenSet)
  {
      Aws::String typeConfigurationIdentifierLocationAndMember(location);
      typeConfigurationIdentifierLocationAndMember += ".TypeConfigurationIdentifier";
      m_typeConfigurationIdentifier.OutputToStream(oStream, typeConfigurationIdentifierLocationAndMember.c_str());
  }
}

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
