/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/ClientConnectResponseOptions.h>
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

ClientConnectResponseOptions::ClientConnectResponseOptions() : 
    m_enabled(false),
    m_enabledHasBeenSet(false),
    m_lambdaFunctionArnHasBeenSet(false),
    m_statusHasBeenSet(false)
{
}

ClientConnectResponseOptions::ClientConnectResponseOptions(const XmlNode& xmlNode) : 
    m_enabled(false),
    m_enabledHasBeenSet(false),
    m_lambdaFunctionArnHasBeenSet(false),
    m_statusHasBeenSet(false)
{
  *this = xmlNode;
}

ClientConnectResponseOptions& ClientConnectResponseOptions::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode enabledNode = resultNode.FirstChild("enabled");
    if(!enabledNode.IsNull())
    {
      m_enabled = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(enabledNode.GetText()).c_str()).c_str());
      m_enabledHasBeenSet = true;
    }
    XmlNode lambdaFunctionArnNode = resultNode.FirstChild("lambdaFunctionArn");
    if(!lambdaFunctionArnNode.IsNull())
    {
      m_lambdaFunctionArn = Aws::Utils::Xml::DecodeEscapedXmlText(lambdaFunctionArnNode.GetText());
      m_lambdaFunctionArnHasBeenSet = true;
    }
    XmlNode statusNode = resultNode.FirstChild("status");
    if(!statusNode.IsNull())
    {
      m_status = statusNode;
      m_statusHasBeenSet = true;
    }
  }

  return *this;
}

void ClientConnectResponseOptions::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_enabledHasBeenSet)
  {
      oStream << location << index << locationValue << ".Enabled=" << std::boolalpha << m_enabled << "&";
  }

  if(m_lambdaFunctionArnHasBeenSet)
  {
      oStream << location << index << locationValue << ".LambdaFunctionArn=" << StringUtils::URLEncode(m_lambdaFunctionArn.c_str()) << "&";
  }

  if(m_statusHasBeenSet)
  {
      Aws::StringStream statusLocationAndMemberSs;
      statusLocationAndMemberSs << location << index << locationValue << ".Status";
      m_status.OutputToStream(oStream, statusLocationAndMemberSs.str().c_str());
  }

}

void ClientConnectResponseOptions::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_enabledHasBeenSet)
  {
      oStream << location << ".Enabled=" << std::boolalpha << m_enabled << "&";
  }
  if(m_lambdaFunctionArnHasBeenSet)
  {
      oStream << location << ".LambdaFunctionArn=" << StringUtils::URLEncode(m_lambdaFunctionArn.c_str()) << "&";
  }
  if(m_statusHasBeenSet)
  {
      Aws::String statusLocationAndMember(location);
      statusLocationAndMember += ".Status";
      m_status.OutputToStream(oStream, statusLocationAndMember.c_str());
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
