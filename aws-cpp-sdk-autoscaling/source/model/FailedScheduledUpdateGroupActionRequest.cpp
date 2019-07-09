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

#include <aws/autoscaling/model/FailedScheduledUpdateGroupActionRequest.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace AutoScaling
{
namespace Model
{

FailedScheduledUpdateGroupActionRequest::FailedScheduledUpdateGroupActionRequest() : 
    m_scheduledActionNameHasBeenSet(false),
    m_errorCodeHasBeenSet(false),
    m_errorMessageHasBeenSet(false)
{
}

FailedScheduledUpdateGroupActionRequest::FailedScheduledUpdateGroupActionRequest(const XmlNode& xmlNode) : 
    m_scheduledActionNameHasBeenSet(false),
    m_errorCodeHasBeenSet(false),
    m_errorMessageHasBeenSet(false)
{
  *this = xmlNode;
}

FailedScheduledUpdateGroupActionRequest& FailedScheduledUpdateGroupActionRequest::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode scheduledActionNameNode = resultNode.FirstChild("ScheduledActionName");
    if(!scheduledActionNameNode.IsNull())
    {
      m_scheduledActionName = scheduledActionNameNode.GetText();
      m_scheduledActionNameHasBeenSet = true;
    }
    XmlNode errorCodeNode = resultNode.FirstChild("ErrorCode");
    if(!errorCodeNode.IsNull())
    {
      m_errorCode = errorCodeNode.GetText();
      m_errorCodeHasBeenSet = true;
    }
    XmlNode errorMessageNode = resultNode.FirstChild("ErrorMessage");
    if(!errorMessageNode.IsNull())
    {
      m_errorMessage = errorMessageNode.GetText();
      m_errorMessageHasBeenSet = true;
    }
  }

  return *this;
}

void FailedScheduledUpdateGroupActionRequest::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_scheduledActionNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".ScheduledActionName=" << StringUtils::URLEncode(m_scheduledActionName.c_str()) << "&";
  }

  if(m_errorCodeHasBeenSet)
  {
      oStream << location << index << locationValue << ".ErrorCode=" << StringUtils::URLEncode(m_errorCode.c_str()) << "&";
  }

  if(m_errorMessageHasBeenSet)
  {
      oStream << location << index << locationValue << ".ErrorMessage=" << StringUtils::URLEncode(m_errorMessage.c_str()) << "&";
  }

}

void FailedScheduledUpdateGroupActionRequest::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_scheduledActionNameHasBeenSet)
  {
      oStream << location << ".ScheduledActionName=" << StringUtils::URLEncode(m_scheduledActionName.c_str()) << "&";
  }
  if(m_errorCodeHasBeenSet)
  {
      oStream << location << ".ErrorCode=" << StringUtils::URLEncode(m_errorCode.c_str()) << "&";
  }
  if(m_errorMessageHasBeenSet)
  {
      oStream << location << ".ErrorMessage=" << StringUtils::URLEncode(m_errorMessage.c_str()) << "&";
  }
}

} // namespace Model
} // namespace AutoScaling
} // namespace Aws
