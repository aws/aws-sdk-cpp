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
#include <aws/iam/model/UploadServerCertificateRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::IAM::Model;
using namespace Aws::Utils;

UploadServerCertificateRequest::UploadServerCertificateRequest() : 
    m_pathHasBeenSet(false),
    m_serverCertificateNameHasBeenSet(false),
    m_certificateBodyHasBeenSet(false),
    m_privateKeyHasBeenSet(false),
    m_certificateChainHasBeenSet(false)
{
}

Aws::String UploadServerCertificateRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=UploadServerCertificate&";
  if(m_pathHasBeenSet)
  {
    ss << "Path=" << StringUtils::URLEncode(m_path.c_str()) << "&";
  }

  if(m_serverCertificateNameHasBeenSet)
  {
    ss << "ServerCertificateName=" << StringUtils::URLEncode(m_serverCertificateName.c_str()) << "&";
  }

  if(m_certificateBodyHasBeenSet)
  {
    ss << "CertificateBody=" << StringUtils::URLEncode(m_certificateBody.c_str()) << "&";
  }

  if(m_privateKeyHasBeenSet)
  {
    ss << "PrivateKey=" << StringUtils::URLEncode(m_privateKey.c_str()) << "&";
  }

  if(m_certificateChainHasBeenSet)
  {
    ss << "CertificateChain=" << StringUtils::URLEncode(m_certificateChain.c_str()) << "&";
  }

  ss << "Version=2010-05-08";
  return ss.str();
}

