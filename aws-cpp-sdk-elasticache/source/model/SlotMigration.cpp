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

#include <aws/elasticache/model/SlotMigration.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace ElastiCache
{
namespace Model
{

SlotMigration::SlotMigration() : 
    m_progressPercentage(0.0),
    m_progressPercentageHasBeenSet(false)
{
}

SlotMigration::SlotMigration(const XmlNode& xmlNode) : 
    m_progressPercentage(0.0),
    m_progressPercentageHasBeenSet(false)
{
  *this = xmlNode;
}

SlotMigration& SlotMigration::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode progressPercentageNode = resultNode.FirstChild("ProgressPercentage");
    if(!progressPercentageNode.IsNull())
    {
      m_progressPercentage = StringUtils::ConvertToDouble(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(progressPercentageNode.GetText()).c_str()).c_str());
      m_progressPercentageHasBeenSet = true;
    }
  }

  return *this;
}

void SlotMigration::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_progressPercentageHasBeenSet)
  {
        oStream << location << index << locationValue << ".ProgressPercentage=" << StringUtils::URLEncode(m_progressPercentage) << "&";
  }

}

void SlotMigration::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_progressPercentageHasBeenSet)
  {
        oStream << location << ".ProgressPercentage=" << StringUtils::URLEncode(m_progressPercentage) << "&";
  }
}

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
