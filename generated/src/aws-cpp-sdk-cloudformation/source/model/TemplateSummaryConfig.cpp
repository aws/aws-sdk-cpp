/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudformation/model/TemplateSummaryConfig.h>
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

TemplateSummaryConfig::TemplateSummaryConfig() : 
    m_treatUnrecognizedResourceTypesAsWarnings(false),
    m_treatUnrecognizedResourceTypesAsWarningsHasBeenSet(false)
{
}

TemplateSummaryConfig::TemplateSummaryConfig(const XmlNode& xmlNode) : 
    m_treatUnrecognizedResourceTypesAsWarnings(false),
    m_treatUnrecognizedResourceTypesAsWarningsHasBeenSet(false)
{
  *this = xmlNode;
}

TemplateSummaryConfig& TemplateSummaryConfig::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode treatUnrecognizedResourceTypesAsWarningsNode = resultNode.FirstChild("TreatUnrecognizedResourceTypesAsWarnings");
    if(!treatUnrecognizedResourceTypesAsWarningsNode.IsNull())
    {
      m_treatUnrecognizedResourceTypesAsWarnings = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(treatUnrecognizedResourceTypesAsWarningsNode.GetText()).c_str()).c_str());
      m_treatUnrecognizedResourceTypesAsWarningsHasBeenSet = true;
    }
  }

  return *this;
}

void TemplateSummaryConfig::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_treatUnrecognizedResourceTypesAsWarningsHasBeenSet)
  {
      oStream << location << index << locationValue << ".TreatUnrecognizedResourceTypesAsWarnings=" << std::boolalpha << m_treatUnrecognizedResourceTypesAsWarnings << "&";
  }

}

void TemplateSummaryConfig::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_treatUnrecognizedResourceTypesAsWarningsHasBeenSet)
  {
      oStream << location << ".TreatUnrecognizedResourceTypesAsWarnings=" << std::boolalpha << m_treatUnrecognizedResourceTypesAsWarnings << "&";
  }
}

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
