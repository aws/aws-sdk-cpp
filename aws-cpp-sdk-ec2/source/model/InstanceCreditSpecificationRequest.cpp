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

#include <aws/ec2/model/InstanceCreditSpecificationRequest.h>
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

InstanceCreditSpecificationRequest::InstanceCreditSpecificationRequest() : 
    m_instanceIdHasBeenSet(false),
    m_cpuCreditsHasBeenSet(false)
{
}

InstanceCreditSpecificationRequest::InstanceCreditSpecificationRequest(const XmlNode& xmlNode) : 
    m_instanceIdHasBeenSet(false),
    m_cpuCreditsHasBeenSet(false)
{
  *this = xmlNode;
}

InstanceCreditSpecificationRequest& InstanceCreditSpecificationRequest::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode instanceIdNode = resultNode.FirstChild("InstanceId");
    if(!instanceIdNode.IsNull())
    {
      m_instanceId = StringUtils::Trim(instanceIdNode.GetText().c_str());
      m_instanceIdHasBeenSet = true;
    }
    XmlNode cpuCreditsNode = resultNode.FirstChild("CpuCredits");
    if(!cpuCreditsNode.IsNull())
    {
      m_cpuCredits = StringUtils::Trim(cpuCreditsNode.GetText().c_str());
      m_cpuCreditsHasBeenSet = true;
    }
  }

  return *this;
}

void InstanceCreditSpecificationRequest::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_instanceIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".InstanceId=" << StringUtils::URLEncode(m_instanceId.c_str()) << "&";
  }

  if(m_cpuCreditsHasBeenSet)
  {
      oStream << location << index << locationValue << ".CpuCredits=" << StringUtils::URLEncode(m_cpuCredits.c_str()) << "&";
  }

}

void InstanceCreditSpecificationRequest::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_instanceIdHasBeenSet)
  {
      oStream << location << ".InstanceId=" << StringUtils::URLEncode(m_instanceId.c_str()) << "&";
  }
  if(m_cpuCreditsHasBeenSet)
  {
      oStream << location << ".CpuCredits=" << StringUtils::URLEncode(m_cpuCredits.c_str()) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
