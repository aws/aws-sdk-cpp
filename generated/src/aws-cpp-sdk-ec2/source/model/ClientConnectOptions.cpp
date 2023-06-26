/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/ClientConnectOptions.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace EC2
{
namespace Model
{

ClientConnectOptions::ClientConnectOptions() : 
    m_enabled(false),
    m_enabledHasBeenSet(false),
    m_lambdaFunctionArnHasBeenSet(false)
{
}

ClientConnectOptions::ClientConnectOptions(const XmlNode& xmlNode) : 
    m_enabled(false),
    m_enabledHasBeenSet(false),
    m_lambdaFunctionArnHasBeenSet(false)
{
  *this = xmlNode;
}

ClientConnectOptions& ClientConnectOptions::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode enabledNode = resultNode.FirstChild("Enabled");
    if(!enabledNode.IsNull())
    {
      m_enabled = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(enabledNode.GetText()).c_str()).c_str());
      m_enabledHasBeenSet = true;
    }
    XmlNode lambdaFunctionArnNode = resultNode.FirstChild("LambdaFunctionArn");
    if(!lambdaFunctionArnNode.IsNull())
    {
      m_lambdaFunctionArn = Aws::Utils::Xml::DecodeEscapedXmlText(lambdaFunctionArnNode.GetText());
      m_lambdaFunctionArnHasBeenSet = true;
    }
  }

  return *this;
}

void ClientConnectOptions::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_enabledHasBeenSet)
  {
      oStream << location << index << locationValue << ".Enabled=" << std::boolalpha << m_enabled << "&";
  }

  if(m_lambdaFunctionArnHasBeenSet)
  {
      oStream << location << index << locationValue << ".LambdaFunctionArn=" << StringUtils::URLEncode(m_lambdaFunctionArn.c_str()) << "&";
  }

}

void ClientConnectOptions::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_enabledHasBeenSet)
  {
      oStream << location << ".Enabled=" << std::boolalpha << m_enabled << "&";
  }
  if(m_lambdaFunctionArnHasBeenSet)
  {
      oStream << location << ".LambdaFunctionArn=" << StringUtils::URLEncode(m_lambdaFunctionArn.c_str()) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
