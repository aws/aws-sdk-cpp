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

#include <aws/monitoring/model/MetricDataQuery.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace CloudWatch
{
namespace Model
{

MetricDataQuery::MetricDataQuery() : 
    m_idHasBeenSet(false),
    m_metricStatHasBeenSet(false),
    m_expressionHasBeenSet(false),
    m_labelHasBeenSet(false),
    m_returnData(false),
    m_returnDataHasBeenSet(false)
{
}

MetricDataQuery::MetricDataQuery(const XmlNode& xmlNode) : 
    m_idHasBeenSet(false),
    m_metricStatHasBeenSet(false),
    m_expressionHasBeenSet(false),
    m_labelHasBeenSet(false),
    m_returnData(false),
    m_returnDataHasBeenSet(false)
{
  *this = xmlNode;
}

MetricDataQuery& MetricDataQuery::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode idNode = resultNode.FirstChild("Id");
    if(!idNode.IsNull())
    {
      m_id = idNode.GetText();
      m_idHasBeenSet = true;
    }
    XmlNode metricStatNode = resultNode.FirstChild("MetricStat");
    if(!metricStatNode.IsNull())
    {
      m_metricStat = metricStatNode;
      m_metricStatHasBeenSet = true;
    }
    XmlNode expressionNode = resultNode.FirstChild("Expression");
    if(!expressionNode.IsNull())
    {
      m_expression = expressionNode.GetText();
      m_expressionHasBeenSet = true;
    }
    XmlNode labelNode = resultNode.FirstChild("Label");
    if(!labelNode.IsNull())
    {
      m_label = labelNode.GetText();
      m_labelHasBeenSet = true;
    }
    XmlNode returnDataNode = resultNode.FirstChild("ReturnData");
    if(!returnDataNode.IsNull())
    {
      m_returnData = StringUtils::ConvertToBool(StringUtils::Trim(returnDataNode.GetText().c_str()).c_str());
      m_returnDataHasBeenSet = true;
    }
  }

  return *this;
}

void MetricDataQuery::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_idHasBeenSet)
  {
      oStream << location << index << locationValue << ".Id=" << StringUtils::URLEncode(m_id.c_str()) << "&";
  }

  if(m_metricStatHasBeenSet)
  {
      Aws::StringStream metricStatLocationAndMemberSs;
      metricStatLocationAndMemberSs << location << index << locationValue << ".MetricStat";
      m_metricStat.OutputToStream(oStream, metricStatLocationAndMemberSs.str().c_str());
  }

  if(m_expressionHasBeenSet)
  {
      oStream << location << index << locationValue << ".Expression=" << StringUtils::URLEncode(m_expression.c_str()) << "&";
  }

  if(m_labelHasBeenSet)
  {
      oStream << location << index << locationValue << ".Label=" << StringUtils::URLEncode(m_label.c_str()) << "&";
  }

  if(m_returnDataHasBeenSet)
  {
      oStream << location << index << locationValue << ".ReturnData=" << std::boolalpha << m_returnData << "&";
  }

}

void MetricDataQuery::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_idHasBeenSet)
  {
      oStream << location << ".Id=" << StringUtils::URLEncode(m_id.c_str()) << "&";
  }
  if(m_metricStatHasBeenSet)
  {
      Aws::String metricStatLocationAndMember(location);
      metricStatLocationAndMember += ".MetricStat";
      m_metricStat.OutputToStream(oStream, metricStatLocationAndMember.c_str());
  }
  if(m_expressionHasBeenSet)
  {
      oStream << location << ".Expression=" << StringUtils::URLEncode(m_expression.c_str()) << "&";
  }
  if(m_labelHasBeenSet)
  {
      oStream << location << ".Label=" << StringUtils::URLEncode(m_label.c_str()) << "&";
  }
  if(m_returnDataHasBeenSet)
  {
      oStream << location << ".ReturnData=" << std::boolalpha << m_returnData << "&";
  }
}

} // namespace Model
} // namespace CloudWatch
} // namespace Aws
