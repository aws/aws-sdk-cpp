/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/iam/model/ResyncMFADeviceRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::IAM::Model;
using namespace Aws::Utils;

ResyncMFADeviceRequest::ResyncMFADeviceRequest() : 
    m_userNameHasBeenSet(false),
    m_serialNumberHasBeenSet(false),
    m_authenticationCode1HasBeenSet(false),
    m_authenticationCode2HasBeenSet(false)
{
}

Aws::String ResyncMFADeviceRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=ResyncMFADevice&";
  if(m_userNameHasBeenSet)
  {
    ss << "UserName=" << StringUtils::URLEncode(m_userName.c_str()) << "&";
  }

  if(m_serialNumberHasBeenSet)
  {
    ss << "SerialNumber=" << StringUtils::URLEncode(m_serialNumber.c_str()) << "&";
  }

  if(m_authenticationCode1HasBeenSet)
  {
    ss << "AuthenticationCode1=" << StringUtils::URLEncode(m_authenticationCode1.c_str()) << "&";
  }

  if(m_authenticationCode2HasBeenSet)
  {
    ss << "AuthenticationCode2=" << StringUtils::URLEncode(m_authenticationCode2.c_str()) << "&";
  }

  ss << "Version=2010-05-08";
  return ss.str();
}

