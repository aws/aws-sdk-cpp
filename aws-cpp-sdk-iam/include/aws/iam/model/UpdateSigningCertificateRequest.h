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
#pragma once
#include <aws/iam/IAM_EXPORTS.h>
#include <aws/iam/IAMRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iam/model/statusType.h>

namespace Aws
{
namespace IAM
{
namespace Model
{

  /*
  */
  class AWS_IAM_API UpdateSigningCertificateRequest : public IAMRequest
  {
  public:
    UpdateSigningCertificateRequest();
    Aws::String SerializePayload() const override;


    /*
     <p>The name of the user the signing certificate belongs to.</p>
    */
    inline const Aws::String& GetUserName() const{ return m_userName; }
    /*
     <p>The name of the user the signing certificate belongs to.</p>
    */
    inline void SetUserName(const Aws::String& value) { m_userNameHasBeenSet = true; m_userName = value; }

    /*
     <p>The name of the user the signing certificate belongs to.</p>
    */
    inline void SetUserName(const char* value) { m_userNameHasBeenSet = true; m_userName.assign(value); }

    /*
     <p>The name of the user the signing certificate belongs to.</p>
    */
    inline UpdateSigningCertificateRequest&  WithUserName(const Aws::String& value) { SetUserName(value); return *this;}

    /*
     <p>The name of the user the signing certificate belongs to.</p>
    */
    inline UpdateSigningCertificateRequest& WithUserName(const char* value) { SetUserName(value); return *this;}

    /*
     <p>The ID of the signing certificate you want to update.</p>
    */
    inline const Aws::String& GetCertificateId() const{ return m_certificateId; }
    /*
     <p>The ID of the signing certificate you want to update.</p>
    */
    inline void SetCertificateId(const Aws::String& value) { m_certificateId = value; }

    /*
     <p>The ID of the signing certificate you want to update.</p>
    */
    inline void SetCertificateId(const char* value) { m_certificateId.assign(value); }

    /*
     <p>The ID of the signing certificate you want to update.</p>
    */
    inline UpdateSigningCertificateRequest&  WithCertificateId(const Aws::String& value) { SetCertificateId(value); return *this;}

    /*
     <p>The ID of the signing certificate you want to update.</p>
    */
    inline UpdateSigningCertificateRequest& WithCertificateId(const char* value) { SetCertificateId(value); return *this;}

    /*
     <p> The status you want to assign to the certificate. <code>Active</code> means the certificate can be used for API calls to AWS, while <code>Inactive</code> means the certificate cannot be used. </p>
    */
    inline const statusType& GetStatus() const{ return m_status; }
    /*
     <p> The status you want to assign to the certificate. <code>Active</code> means the certificate can be used for API calls to AWS, while <code>Inactive</code> means the certificate cannot be used. </p>
    */
    inline void SetStatus(const statusType& value) { m_status = value; }

    /*
     <p> The status you want to assign to the certificate. <code>Active</code> means the certificate can be used for API calls to AWS, while <code>Inactive</code> means the certificate cannot be used. </p>
    */
    inline UpdateSigningCertificateRequest&  WithStatus(const statusType& value) { SetStatus(value); return *this;}

  private:
    Aws::String m_userName;
    bool m_userNameHasBeenSet;
    Aws::String m_certificateId;
    statusType m_status;
  };

} // namespace Model
} // namespace IAM
} // namespace Aws
