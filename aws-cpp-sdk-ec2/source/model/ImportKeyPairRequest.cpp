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
#include <aws/ec2/model/ImportKeyPairRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

ImportKeyPairRequest::ImportKeyPairRequest() : 
    m_dryRun(false),
    m_dryRunHasBeenSet(false),
    m_keyNameHasBeenSet(false),
    m_publicKeyMaterialHasBeenSet(false)
{
}

Aws::String ImportKeyPairRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=ImportKeyPair&";
  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << m_dryRun << "&";
  }

  if(m_keyNameHasBeenSet)
  {
    ss << "KeyName=" << StringUtils::URLEncode(m_keyName.c_str()) << "&";
  }

  if(m_publicKeyMaterialHasBeenSet)
  {
    ss << "PublicKeyMaterial=" << HashingUtils::Base64Encode(m_publicKeyMaterial) << "&";
  }

  ss << "Version=2015-10-01";
  return ss.str();
}

