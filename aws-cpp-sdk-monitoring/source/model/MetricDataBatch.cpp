/*
* Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/monitoring/model/MetricDataBatch.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::CloudWatch::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

MetricDataBatch::MetricDataBatch() : 
    m_accountIdHasBeenSet(false),
    m_namespaceHasBeenSet(false),
    m_metricDataHasBeenSet(false),
    m_autoDecompose(false),
    m_autoDecomposeHasBeenSet(false)
{
}

MetricDataBatch::MetricDataBatch(const XmlNode& xmlNode) : 
    m_accountIdHasBeenSet(false),
    m_namespaceHasBeenSet(false),
    m_metricDataHasBeenSet(false),
    m_autoDecompose(false),
    m_autoDecomposeHasBeenSet(false)
{
  *this = xmlNode;
}

MetricDataBatch& MetricDataBatch::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode accountIdNode = resultNode.FirstChild("AccountId");
    if(accountIdNode.IsNull())
    {
      accountIdNode = resultNode;
    }

    if(!accountIdNode.IsNull())
    {
      m_accountId = StringUtils::Trim(accountIdNode.GetText().c_str());
      m_accountIdHasBeenSet = true;
    }
    XmlNode namespaceNode = resultNode.FirstChild("Namespace");
    if(namespaceNode.IsNull())
    {
      namespaceNode = resultNode;
    }

    if(!namespaceNode.IsNull())
    {
      m_namespace = StringUtils::Trim(namespaceNode.GetText().c_str());
      m_namespaceHasBeenSet = true;
    }
    XmlNode metricDataNode = resultNode.FirstChild("MetricData");
    if(!metricDataNode.IsNull())
    {
      XmlNode metricDataMember = metricDataNode.FirstChild("member");
      while(!metricDataMember.IsNull())
      {
        m_metricData.push_back(metricDataMember);
        metricDataMember = metricDataMember.NextNode("member");
      }

      m_metricDataHasBeenSet = true;
    }
    XmlNode autoDecomposeNode = resultNode.FirstChild("AutoDecompose");
    if(autoDecomposeNode.IsNull())
    {
      autoDecomposeNode = resultNode;
    }

    if(!autoDecomposeNode.IsNull())
    {
      m_autoDecompose = StringUtils::ConvertToBool(StringUtils::Trim(autoDecomposeNode.GetText().c_str()).c_str());
      m_autoDecomposeHasBeenSet = true;
    }
  }

  return *this;
}

void MetricDataBatch::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_accountIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".AccountId=" << StringUtils::URLEncode(m_accountId.c_str()) << "&";
  }
  if(m_namespaceHasBeenSet)
  {
      oStream << location << index << locationValue << ".Namespace=" << StringUtils::URLEncode(m_namespace.c_str()) << "&";
  }
  if(m_metricDataHasBeenSet)
  {
      for(auto& item : m_metricData)
      {
        Aws::StringStream metricDataSs;
        metricDataSs << location << index << locationValue << ".MetricData";
        item.OutputToStream(oStream, metricDataSs.str().c_str());
      }
  }
  if(m_autoDecomposeHasBeenSet)
  {
      oStream << location << index << locationValue << ".AutoDecompose=" << m_autoDecompose << "&";
  }
}

void MetricDataBatch::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_accountIdHasBeenSet)
  {
      oStream << location << ".AccountId=" << StringUtils::URLEncode(m_accountId.c_str()) << "&";
  }
  if(m_namespaceHasBeenSet)
  {
      oStream << location << ".Namespace=" << StringUtils::URLEncode(m_namespace.c_str()) << "&";
  }
  if(m_metricDataHasBeenSet)
  {
      for(auto& item : m_metricData)
      {
        Aws::String locationAndListMember(location);
        locationAndListMember += ".MetricData";
        item.OutputToStream(oStream, locationAndListMember.c_str());
      }
  }
  if(m_autoDecomposeHasBeenSet)
  {
      oStream << location << ".AutoDecompose=" << m_autoDecompose << "&";
  }
}
