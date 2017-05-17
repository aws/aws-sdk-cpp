/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
      m_enabled = StringUtils::ConvertToBool(StringUtils::Trim(enabledNode.GetText().c_str()).c_str());
      m_enabledHasBeenSet = true;
    }
    XmlNode maxCountNode = resultNode.FirstChild("MaxCount");
    if(!maxCountNode.IsNull())
    {
      m_maxCount = StringUtils::ConvertToInt32(StringUtils::Trim(maxCountNode.GetText().c_str()).c_str());
      m_maxCountHasBeenSet = true;
    }
    XmlNode deleteSourceFromS3Node = resultNode.FirstChild("DeleteSourceFromS3");
    if(!deleteSourceFromS3Node.IsNull())
    {
      m_deleteSourceFromS3 = StringUtils::ConvertToBool(StringUtils::Trim(deleteSourceFromS3Node.GetText().c_str()).c_str());
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
