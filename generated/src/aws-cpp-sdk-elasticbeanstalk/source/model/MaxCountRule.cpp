/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticbeanstalk/model/MaxCountRule.h>
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

MaxCountRule::MaxCountRule() : 
    m_enabled(false),
    m_enabledHasBeenSet(false),
    m_maxCount(0),
    m_maxCountHasBeenSet(false),
    m_deleteSourceFromS3(false),
    m_deleteSourceFromS3HasBeenSet(false)
{
}

MaxCountRule::MaxCountRule(const XmlNode& xmlNode) : 
    m_enabled(false),
    m_enabledHasBeenSet(false),
    m_maxCount(0),
    m_maxCountHasBeenSet(false),
    m_deleteSourceFromS3(false),
    m_deleteSourceFromS3HasBeenSet(false)
{
  *this = xmlNode;
}

MaxCountRule& MaxCountRule::operator =(const XmlNode& xmlNode)
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
    XmlNode maxCountNode = resultNode.FirstChild("MaxCount");
    if(!maxCountNode.IsNull())
    {
      m_maxCount = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(maxCountNode.GetText()).c_str()).c_str());
      m_maxCountHasBeenSet = true;
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

void MaxCountRule::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_enabledHasBeenSet)
  {
      oStream << location << index << locationValue << ".Enabled=" << std::boolalpha << m_enabled << "&";
  }

  if(m_maxCountHasBeenSet)
  {
      oStream << location << index << locationValue << ".MaxCount=" << m_maxCount << "&";
  }

  if(m_deleteSourceFromS3HasBeenSet)
  {
      oStream << location << index << locationValue << ".DeleteSourceFromS3=" << std::boolalpha << m_deleteSourceFromS3 << "&";
  }

}

void MaxCountRule::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_enabledHasBeenSet)
  {
      oStream << location << ".Enabled=" << std::boolalpha << m_enabled << "&";
  }
  if(m_maxCountHasBeenSet)
  {
      oStream << location << ".MaxCount=" << m_maxCount << "&";
  }
  if(m_deleteSourceFromS3HasBeenSet)
  {
      oStream << location << ".DeleteSourceFromS3=" << std::boolalpha << m_deleteSourceFromS3 << "&";
  }
}

} // namespace Model
} // namespace ElasticBeanstalk
} // namespace Aws
