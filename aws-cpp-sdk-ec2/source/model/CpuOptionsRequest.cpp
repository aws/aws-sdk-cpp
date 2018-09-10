﻿/*
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

#include <aws/ec2/model/CpuOptionsRequest.h>
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

CpuOptionsRequest::CpuOptionsRequest() : 
    m_coreCount(0),
    m_coreCountHasBeenSet(false),
    m_threadsPerCore(0),
    m_threadsPerCoreHasBeenSet(false)
{
}

CpuOptionsRequest::CpuOptionsRequest(const XmlNode& xmlNode) : 
    m_coreCount(0),
    m_coreCountHasBeenSet(false),
    m_threadsPerCore(0),
    m_threadsPerCoreHasBeenSet(false)
{
  *this = xmlNode;
}

CpuOptionsRequest& CpuOptionsRequest::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode coreCountNode = resultNode.FirstChild("CoreCount");
    if(!coreCountNode.IsNull())
    {
      m_coreCount = StringUtils::ConvertToInt32(StringUtils::Trim(coreCountNode.GetText().c_str()).c_str());
      m_coreCountHasBeenSet = true;
    }
    XmlNode threadsPerCoreNode = resultNode.FirstChild("ThreadsPerCore");
    if(!threadsPerCoreNode.IsNull())
    {
      m_threadsPerCore = StringUtils::ConvertToInt32(StringUtils::Trim(threadsPerCoreNode.GetText().c_str()).c_str());
      m_threadsPerCoreHasBeenSet = true;
    }
  }

  return *this;
}

void CpuOptionsRequest::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_coreCountHasBeenSet)
  {
      oStream << location << index << locationValue << ".CoreCount=" << m_coreCount << "&";
  }

  if(m_threadsPerCoreHasBeenSet)
  {
      oStream << location << index << locationValue << ".ThreadsPerCore=" << m_threadsPerCore << "&";
  }

}

void CpuOptionsRequest::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_coreCountHasBeenSet)
  {
      oStream << location << ".CoreCount=" << m_coreCount << "&";
  }
  if(m_threadsPerCoreHasBeenSet)
  {
      oStream << location << ".ThreadsPerCore=" << m_threadsPerCore << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
