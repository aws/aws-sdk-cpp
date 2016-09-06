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
#pragma once
#include <aws/iam/IAM_EXPORTS.h>
#include <aws/iam/IAMRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace IAM
{
namespace Model
{

  /**
   */
  class AWS_IAM_API DeleteSigningCertificateRequest : public IAMRequest
  {
  public:
    DeleteSigningCertificateRequest();
    Aws::String SerializePayload() const override;

    /**
     * <p>The name of the user the signing certificate belongs to.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> for this parameter is a
     * string of characters consisting of upper and lowercase alphanumeric characters
     * with no spaces. You can also include any of the following characters: =,.@-</p>
     */
    inline const Aws::String& GetUserName() const{ return m_userName; }

    /**
     * <p>The name of the user the signing certificate belongs to.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> for this parameter is a
     * string of characters consisting of upper and lowercase alphanumeric characters
     * with no spaces. You can also include any of the following characters: =,.@-</p>
     */
    inline void SetUserName(const Aws::String& value) { m_userNameHasBeenSet = true; m_userName = value; }

    /**
     * <p>The name of the user the signing certificate belongs to.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> for this parameter is a
     * string of characters consisting of upper and lowercase alphanumeric characters
     * with no spaces. You can also include any of the following characters: =,.@-</p>
     */
    inline void SetUserName(Aws::String&& value) { m_userNameHasBeenSet = true; m_userName = value; }

    /**
     * <p>The name of the user the signing certificate belongs to.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> for this parameter is a
     * string of characters consisting of upper and lowercase alphanumeric characters
     * with no spaces. You can also include any of the following characters: =,.@-</p>
     */
    inline void SetUserName(const char* value) { m_userNameHasBeenSet = true; m_userName.assign(value); }

    /**
     * <p>The name of the user the signing certificate belongs to.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> for this parameter is a
     * string of characters consisting of upper and lowercase alphanumeric characters
     * with no spaces. You can also include any of the following characters: =,.@-</p>
     */
    inline DeleteSigningCertificateRequest& WithUserName(const Aws::String& value) { SetUserName(value); return *this;}

    /**
     * <p>The name of the user the signing certificate belongs to.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> for this parameter is a
     * string of characters consisting of upper and lowercase alphanumeric characters
     * with no spaces. You can also include any of the following characters: =,.@-</p>
     */
    inline DeleteSigningCertificateRequest& WithUserName(Aws::String&& value) { SetUserName(value); return *this;}

    /**
     * <p>The name of the user the signing certificate belongs to.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> for this parameter is a
     * string of characters consisting of upper and lowercase alphanumeric characters
     * with no spaces. You can also include any of the following characters: =,.@-</p>
     */
    inline DeleteSigningCertificateRequest& WithUserName(const char* value) { SetUserName(value); return *this;}

    /**
     * <p>The ID of the signing certificate to delete.</p> <p>The format of this
     * parameter, as described by its <a
     * href="http://wikipedia.org/wiki/regex">regex</a> pattern, is a string of
     * characters that can be upper- or lower-cased letters or digits.</p>
     */
    inline const Aws::String& GetCertificateId() const{ return m_certificateId; }

    /**
     * <p>The ID of the signing certificate to delete.</p> <p>The format of this
     * parameter, as described by its <a
     * href="http://wikipedia.org/wiki/regex">regex</a> pattern, is a string of
     * characters that can be upper- or lower-cased letters or digits.</p>
     */
    inline void SetCertificateId(const Aws::String& value) { m_certificateIdHasBeenSet = true; m_certificateId = value; }

    /**
     * <p>The ID of the signing certificate to delete.</p> <p>The format of this
     * parameter, as described by its <a
     * href="http://wikipedia.org/wiki/regex">regex</a> pattern, is a string of
     * characters that can be upper- or lower-cased letters or digits.</p>
     */
    inline void SetCertificateId(Aws::String&& value) { m_certificateIdHasBeenSet = true; m_certificateId = value; }

    /**
     * <p>The ID of the signing certificate to delete.</p> <p>The format of this
     * parameter, as described by its <a
     * href="http://wikipedia.org/wiki/regex">regex</a> pattern, is a string of
     * characters that can be upper- or lower-cased letters or digits.</p>
     */
    inline void SetCertificateId(const char* value) { m_certificateIdHasBeenSet = true; m_certificateId.assign(value); }

    /**
     * <p>The ID of the signing certificate to delete.</p> <p>The format of this
     * parameter, as described by its <a
     * href="http://wikipedia.org/wiki/regex">regex</a> pattern, is a string of
     * characters that can be upper- or lower-cased letters or digits.</p>
     */
    inline DeleteSigningCertificateRequest& WithCertificateId(const Aws::String& value) { SetCertificateId(value); return *this;}

    /**
     * <p>The ID of the signing certificate to delete.</p> <p>The format of this
     * parameter, as described by its <a
     * href="http://wikipedia.org/wiki/regex">regex</a> pattern, is a string of
     * characters that can be upper- or lower-cased letters or digits.</p>
     */
    inline DeleteSigningCertificateRequest& WithCertificateId(Aws::String&& value) { SetCertificateId(value); return *this;}

    /**
     * <p>The ID of the signing certificate to delete.</p> <p>The format of this
     * parameter, as described by its <a
     * href="http://wikipedia.org/wiki/regex">regex</a> pattern, is a string of
     * characters that can be upper- or lower-cased letters or digits.</p>
     */
    inline DeleteSigningCertificateRequest& WithCertificateId(const char* value) { SetCertificateId(value); return *this;}

  private:
    Aws::String m_userName;
    bool m_userNameHasBeenSet;
    Aws::String m_certificateId;
    bool m_certificateIdHasBeenSet;
  };

} // namespace Model
} // namespace IAM
} // namespace Aws
