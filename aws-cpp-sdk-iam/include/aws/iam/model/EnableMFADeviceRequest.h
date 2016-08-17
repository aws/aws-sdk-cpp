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
  class AWS_IAM_API EnableMFADeviceRequest : public IAMRequest
  {
  public:
    EnableMFADeviceRequest();
    Aws::String SerializePayload() const override;

    /**
     * <p>The name of the IAM user for whom you want to enable the MFA device.</p>
     * <p>The <a href="http://wikipedia.org/wiki/regex">regex pattern</a> for this
     * parameter is a string of characters consisting of upper and lowercase
     * alphanumeric characters with no spaces. You can also include any of the
     * following characters: =,.@-</p>
     */
    inline const Aws::String& GetUserName() const{ return m_userName; }

    /**
     * <p>The name of the IAM user for whom you want to enable the MFA device.</p>
     * <p>The <a href="http://wikipedia.org/wiki/regex">regex pattern</a> for this
     * parameter is a string of characters consisting of upper and lowercase
     * alphanumeric characters with no spaces. You can also include any of the
     * following characters: =,.@-</p>
     */
    inline void SetUserName(const Aws::String& value) { m_userNameHasBeenSet = true; m_userName = value; }

    /**
     * <p>The name of the IAM user for whom you want to enable the MFA device.</p>
     * <p>The <a href="http://wikipedia.org/wiki/regex">regex pattern</a> for this
     * parameter is a string of characters consisting of upper and lowercase
     * alphanumeric characters with no spaces. You can also include any of the
     * following characters: =,.@-</p>
     */
    inline void SetUserName(Aws::String&& value) { m_userNameHasBeenSet = true; m_userName = value; }

    /**
     * <p>The name of the IAM user for whom you want to enable the MFA device.</p>
     * <p>The <a href="http://wikipedia.org/wiki/regex">regex pattern</a> for this
     * parameter is a string of characters consisting of upper and lowercase
     * alphanumeric characters with no spaces. You can also include any of the
     * following characters: =,.@-</p>
     */
    inline void SetUserName(const char* value) { m_userNameHasBeenSet = true; m_userName.assign(value); }

    /**
     * <p>The name of the IAM user for whom you want to enable the MFA device.</p>
     * <p>The <a href="http://wikipedia.org/wiki/regex">regex pattern</a> for this
     * parameter is a string of characters consisting of upper and lowercase
     * alphanumeric characters with no spaces. You can also include any of the
     * following characters: =,.@-</p>
     */
    inline EnableMFADeviceRequest& WithUserName(const Aws::String& value) { SetUserName(value); return *this;}

    /**
     * <p>The name of the IAM user for whom you want to enable the MFA device.</p>
     * <p>The <a href="http://wikipedia.org/wiki/regex">regex pattern</a> for this
     * parameter is a string of characters consisting of upper and lowercase
     * alphanumeric characters with no spaces. You can also include any of the
     * following characters: =,.@-</p>
     */
    inline EnableMFADeviceRequest& WithUserName(Aws::String&& value) { SetUserName(value); return *this;}

    /**
     * <p>The name of the IAM user for whom you want to enable the MFA device.</p>
     * <p>The <a href="http://wikipedia.org/wiki/regex">regex pattern</a> for this
     * parameter is a string of characters consisting of upper and lowercase
     * alphanumeric characters with no spaces. You can also include any of the
     * following characters: =,.@-</p>
     */
    inline EnableMFADeviceRequest& WithUserName(const char* value) { SetUserName(value); return *this;}

    /**
     * <p>The serial number that uniquely identifies the MFA device. For virtual MFA
     * devices, the serial number is the device ARN.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> for this parameter is a
     * string of characters consisting of upper and lowercase alphanumeric characters
     * with no spaces. You can also include any of the following characters:
     * =/:,.@-</p>
     */
    inline const Aws::String& GetSerialNumber() const{ return m_serialNumber; }

    /**
     * <p>The serial number that uniquely identifies the MFA device. For virtual MFA
     * devices, the serial number is the device ARN.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> for this parameter is a
     * string of characters consisting of upper and lowercase alphanumeric characters
     * with no spaces. You can also include any of the following characters:
     * =/:,.@-</p>
     */
    inline void SetSerialNumber(const Aws::String& value) { m_serialNumberHasBeenSet = true; m_serialNumber = value; }

    /**
     * <p>The serial number that uniquely identifies the MFA device. For virtual MFA
     * devices, the serial number is the device ARN.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> for this parameter is a
     * string of characters consisting of upper and lowercase alphanumeric characters
     * with no spaces. You can also include any of the following characters:
     * =/:,.@-</p>
     */
    inline void SetSerialNumber(Aws::String&& value) { m_serialNumberHasBeenSet = true; m_serialNumber = value; }

    /**
     * <p>The serial number that uniquely identifies the MFA device. For virtual MFA
     * devices, the serial number is the device ARN.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> for this parameter is a
     * string of characters consisting of upper and lowercase alphanumeric characters
     * with no spaces. You can also include any of the following characters:
     * =/:,.@-</p>
     */
    inline void SetSerialNumber(const char* value) { m_serialNumberHasBeenSet = true; m_serialNumber.assign(value); }

    /**
     * <p>The serial number that uniquely identifies the MFA device. For virtual MFA
     * devices, the serial number is the device ARN.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> for this parameter is a
     * string of characters consisting of upper and lowercase alphanumeric characters
     * with no spaces. You can also include any of the following characters:
     * =/:,.@-</p>
     */
    inline EnableMFADeviceRequest& WithSerialNumber(const Aws::String& value) { SetSerialNumber(value); return *this;}

    /**
     * <p>The serial number that uniquely identifies the MFA device. For virtual MFA
     * devices, the serial number is the device ARN.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> for this parameter is a
     * string of characters consisting of upper and lowercase alphanumeric characters
     * with no spaces. You can also include any of the following characters:
     * =/:,.@-</p>
     */
    inline EnableMFADeviceRequest& WithSerialNumber(Aws::String&& value) { SetSerialNumber(value); return *this;}

    /**
     * <p>The serial number that uniquely identifies the MFA device. For virtual MFA
     * devices, the serial number is the device ARN.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> for this parameter is a
     * string of characters consisting of upper and lowercase alphanumeric characters
     * with no spaces. You can also include any of the following characters:
     * =/:,.@-</p>
     */
    inline EnableMFADeviceRequest& WithSerialNumber(const char* value) { SetSerialNumber(value); return *this;}

    /**
     * <p>An authentication code emitted by the device.</p> <p>The format for this
     * parameter is a string of 6 digits.</p>
     */
    inline const Aws::String& GetAuthenticationCode1() const{ return m_authenticationCode1; }

    /**
     * <p>An authentication code emitted by the device.</p> <p>The format for this
     * parameter is a string of 6 digits.</p>
     */
    inline void SetAuthenticationCode1(const Aws::String& value) { m_authenticationCode1HasBeenSet = true; m_authenticationCode1 = value; }

    /**
     * <p>An authentication code emitted by the device.</p> <p>The format for this
     * parameter is a string of 6 digits.</p>
     */
    inline void SetAuthenticationCode1(Aws::String&& value) { m_authenticationCode1HasBeenSet = true; m_authenticationCode1 = value; }

    /**
     * <p>An authentication code emitted by the device.</p> <p>The format for this
     * parameter is a string of 6 digits.</p>
     */
    inline void SetAuthenticationCode1(const char* value) { m_authenticationCode1HasBeenSet = true; m_authenticationCode1.assign(value); }

    /**
     * <p>An authentication code emitted by the device.</p> <p>The format for this
     * parameter is a string of 6 digits.</p>
     */
    inline EnableMFADeviceRequest& WithAuthenticationCode1(const Aws::String& value) { SetAuthenticationCode1(value); return *this;}

    /**
     * <p>An authentication code emitted by the device.</p> <p>The format for this
     * parameter is a string of 6 digits.</p>
     */
    inline EnableMFADeviceRequest& WithAuthenticationCode1(Aws::String&& value) { SetAuthenticationCode1(value); return *this;}

    /**
     * <p>An authentication code emitted by the device.</p> <p>The format for this
     * parameter is a string of 6 digits.</p>
     */
    inline EnableMFADeviceRequest& WithAuthenticationCode1(const char* value) { SetAuthenticationCode1(value); return *this;}

    /**
     * <p>A subsequent authentication code emitted by the device.</p> <p>The format for
     * this parameter is a string of 6 digits.</p>
     */
    inline const Aws::String& GetAuthenticationCode2() const{ return m_authenticationCode2; }

    /**
     * <p>A subsequent authentication code emitted by the device.</p> <p>The format for
     * this parameter is a string of 6 digits.</p>
     */
    inline void SetAuthenticationCode2(const Aws::String& value) { m_authenticationCode2HasBeenSet = true; m_authenticationCode2 = value; }

    /**
     * <p>A subsequent authentication code emitted by the device.</p> <p>The format for
     * this parameter is a string of 6 digits.</p>
     */
    inline void SetAuthenticationCode2(Aws::String&& value) { m_authenticationCode2HasBeenSet = true; m_authenticationCode2 = value; }

    /**
     * <p>A subsequent authentication code emitted by the device.</p> <p>The format for
     * this parameter is a string of 6 digits.</p>
     */
    inline void SetAuthenticationCode2(const char* value) { m_authenticationCode2HasBeenSet = true; m_authenticationCode2.assign(value); }

    /**
     * <p>A subsequent authentication code emitted by the device.</p> <p>The format for
     * this parameter is a string of 6 digits.</p>
     */
    inline EnableMFADeviceRequest& WithAuthenticationCode2(const Aws::String& value) { SetAuthenticationCode2(value); return *this;}

    /**
     * <p>A subsequent authentication code emitted by the device.</p> <p>The format for
     * this parameter is a string of 6 digits.</p>
     */
    inline EnableMFADeviceRequest& WithAuthenticationCode2(Aws::String&& value) { SetAuthenticationCode2(value); return *this;}

    /**
     * <p>A subsequent authentication code emitted by the device.</p> <p>The format for
     * this parameter is a string of 6 digits.</p>
     */
    inline EnableMFADeviceRequest& WithAuthenticationCode2(const char* value) { SetAuthenticationCode2(value); return *this;}

  private:
    Aws::String m_userName;
    bool m_userNameHasBeenSet;
    Aws::String m_serialNumber;
    bool m_serialNumberHasBeenSet;
    Aws::String m_authenticationCode1;
    bool m_authenticationCode1HasBeenSet;
    Aws::String m_authenticationCode2;
    bool m_authenticationCode2HasBeenSet;
  };

} // namespace Model
} // namespace IAM
} // namespace Aws
