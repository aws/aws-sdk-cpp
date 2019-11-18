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

#include <aws/cloudformation/model/RecordHandlerProgressRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::CloudFormation::Model;
using namespace Aws::Utils;

RecordHandlerProgressRequest::RecordHandlerProgressRequest() : 
    m_bearerTokenHasBeenSet(false),
    m_operationStatus(OperationStatus::NOT_SET),
    m_operationStatusHasBeenSet(false),
    m_currentOperationStatus(OperationStatus::NOT_SET),
    m_currentOperationStatusHasBeenSet(false),
    m_statusMessageHasBeenSet(false),
    m_errorCode(HandlerErrorCode::NOT_SET),
    m_errorCodeHasBeenSet(false),
    m_resourceModelHasBeenSet(false),
    m_clientRequestTokenHasBeenSet(false)
{
}

Aws::String RecordHandlerProgressRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=RecordHandlerProgress&";
  if(m_bearerTokenHasBeenSet)
  {
    ss << "BearerToken=" << StringUtils::URLEncode(m_bearerToken.c_str()) << "&";
  }

  if(m_operationStatusHasBeenSet)
  {
    ss << "OperationStatus=" << OperationStatusMapper::GetNameForOperationStatus(m_operationStatus) << "&";
  }

  if(m_currentOperationStatusHasBeenSet)
  {
    ss << "CurrentOperationStatus=" << OperationStatusMapper::GetNameForOperationStatus(m_currentOperationStatus) << "&";
  }

  if(m_statusMessageHasBeenSet)
  {
    ss << "StatusMessage=" << StringUtils::URLEncode(m_statusMessage.c_str()) << "&";
  }

  if(m_errorCodeHasBeenSet)
  {
    ss << "ErrorCode=" << HandlerErrorCodeMapper::GetNameForHandlerErrorCode(m_errorCode) << "&";
  }

  if(m_resourceModelHasBeenSet)
  {
    ss << "ResourceModel=" << StringUtils::URLEncode(m_resourceModel.c_str()) << "&";
  }

  if(m_clientRequestTokenHasBeenSet)
  {
    ss << "ClientRequestToken=" << StringUtils::URLEncode(m_clientRequestToken.c_str()) << "&";
  }

  ss << "Version=2010-05-15";
  return ss.str();
}


void  RecordHandlerProgressRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
