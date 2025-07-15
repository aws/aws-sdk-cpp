/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/InitializationStatusDetails.h>
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

InitializationStatusDetails::InitializationStatusDetails(const XmlNode& xmlNode)
{
  *this = xmlNode;
}

InitializationStatusDetails& InitializationStatusDetails::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode initializationTypeNode = resultNode.FirstChild("initializationType");
    if(!initializationTypeNode.IsNull())
    {
      m_initializationType = InitializationTypeMapper::GetInitializationTypeForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(initializationTypeNode.GetText()).c_str()));
      m_initializationTypeHasBeenSet = true;
    }
    XmlNode progressNode = resultNode.FirstChild("progress");
    if(!progressNode.IsNull())
    {
      m_progress = StringUtils::ConvertToInt64(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(progressNode.GetText()).c_str()).c_str());
      m_progressHasBeenSet = true;
    }
    XmlNode estimatedTimeToCompleteInSecondsNode = resultNode.FirstChild("estimatedTimeToCompleteInSeconds");
    if(!estimatedTimeToCompleteInSecondsNode.IsNull())
    {
      m_estimatedTimeToCompleteInSeconds = StringUtils::ConvertToInt64(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(estimatedTimeToCompleteInSecondsNode.GetText()).c_str()).c_str());
      m_estimatedTimeToCompleteInSecondsHasBeenSet = true;
    }
  }

  return *this;
}

void InitializationStatusDetails::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_initializationTypeHasBeenSet)
  {
      oStream << location << index << locationValue << ".InitializationType=" << StringUtils::URLEncode(InitializationTypeMapper::GetNameForInitializationType(m_initializationType)) << "&";
  }

  if(m_progressHasBeenSet)
  {
      oStream << location << index << locationValue << ".Progress=" << m_progress << "&";
  }

  if(m_estimatedTimeToCompleteInSecondsHasBeenSet)
  {
      oStream << location << index << locationValue << ".EstimatedTimeToCompleteInSeconds=" << m_estimatedTimeToCompleteInSeconds << "&";
  }

}

void InitializationStatusDetails::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_initializationTypeHasBeenSet)
  {
      oStream << location << ".InitializationType=" << StringUtils::URLEncode(InitializationTypeMapper::GetNameForInitializationType(m_initializationType)) << "&";
  }
  if(m_progressHasBeenSet)
  {
      oStream << location << ".Progress=" << m_progress << "&";
  }
  if(m_estimatedTimeToCompleteInSecondsHasBeenSet)
  {
      oStream << location << ".EstimatedTimeToCompleteInSeconds=" << m_estimatedTimeToCompleteInSeconds << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
