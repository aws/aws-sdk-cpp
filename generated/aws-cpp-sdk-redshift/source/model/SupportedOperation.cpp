/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift/model/SupportedOperation.h>
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

SupportedOperation::SupportedOperation() : 
    m_operationNameHasBeenSet(false)
{
}

SupportedOperation::SupportedOperation(const XmlNode& xmlNode) : 
    m_operationNameHasBeenSet(false)
{
  *this = xmlNode;
}

SupportedOperation& SupportedOperation::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode operationNameNode = resultNode.FirstChild("OperationName");
    if(!operationNameNode.IsNull())
    {
      m_operationName = Aws::Utils::Xml::DecodeEscapedXmlText(operationNameNode.GetText());
      m_operationNameHasBeenSet = true;
    }
  }

  return *this;
}

void SupportedOperation::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_operationNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".OperationName=" << StringUtils::URLEncode(m_operationName.c_str()) << "&";
  }

}

void SupportedOperation::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_operationNameHasBeenSet)
  {
      oStream << location << ".OperationName=" << StringUtils::URLEncode(m_operationName.c_str()) << "&";
  }
}

} // namespace Model
} // namespace Redshift
} // namespace Aws
