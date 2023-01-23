/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticbeanstalk/model/MaxAgeRule.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace ElasticBeanstalk
{
namespace Model
{

MaxAgeRule::MaxAgeRule() : 
    m_enabled(false),
    m_enabledHasBeenSet(false),
    m_maxAgeInDays(0),
    m_maxAgeInDaysHasBeenSet(false),
    m_deleteSourceFromS3(false),
    m_deleteSourceFromS3HasBeenSet(false)
{
}

MaxAgeRule::MaxAgeRule(const XmlNode& xmlNode) : 
    m_enabled(false),
    m_enabledHasBeenSet(false),
    m_maxAgeInDays(0),
    m_maxAgeInDaysHasBeenSet(false),
    m_deleteSourceFromS3(false),
    m_deleteSourceFromS3HasBeenSet(false)
{
  *this = xmlNode;
}

MaxAgeRule& MaxAgeRule::operator =(const XmlNode& xmlNode)
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
    XmlNode maxAgeInDaysNode = resultNode.FirstChild("MaxAgeInDays");
    if(!maxAgeInDaysNode.IsNull())
    {
      m_maxAgeInDays = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(maxAgeInDaysNode.GetText()).c_str()).c_str());
      m_maxAgeInDaysHasBeenSet = true;
    }
    XmlNode deleteSourceFromS3Node = resultNode.FirstChild("DeleteSourceFromS3");
    if(!deleteSourceFromS3Node.IsNull())
    {
      m_deleteSourceFromS3 = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(deleteSourceFromS3Node.GetText()).c_str()).c_str());
      m_deleteSourceFromS3HasBeenSet = true;
    }
  }

  return *this;
}

void MaxAgeRule::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_enabledHasBeenSet)
  {
      oStream << location << index << locationValue << ".Enabled=" << std::boolalpha << m_enabled << "&";
  }

  if(m_maxAgeInDaysHasBeenSet)
  {
      oStream << location << index << locationValue << ".MaxAgeInDays=" << m_maxAgeInDays << "&";
  }

  if(m_deleteSourceFromS3HasBeenSet)
  {
      oStream << location << index << locationValue << ".DeleteSourceFromS3=" << std::boolalpha << m_deleteSourceFromS3 << "&";
  }

}

void MaxAgeRule::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_enabledHasBeenSet)
  {
      oStream << location << ".Enabled=" << std::boolalpha << m_enabled << "&";
  }
  if(m_maxAgeInDaysHasBeenSet)
  {
      oStream << location << ".MaxAgeInDays=" << m_maxAgeInDays << "&";
  }
  if(m_deleteSourceFromS3HasBeenSet)
  {
      oStream << location << ".DeleteSourceFromS3=" << std::boolalpha << m_deleteSourceFromS3 << "&";
  }
}

} // namespace Model
} // namespace ElasticBeanstalk
} // namespace Aws
