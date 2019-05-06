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

#pragma once
#include <aws/sts/STS_EXPORTS.h>
#include <aws/sts/STSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace STS
{
namespace Model
{

  /**
   */
  class AWS_STS_API GetSessionTokenRequest : public STSRequest
  {
  public:
    GetSessionTokenRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetSessionToken"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The duration, in seconds, that the credentials should remain valid.
     * Acceptable durations for IAM user sessions range from 900 seconds (15 minutes)
     * to 129,600 seconds (36 hours), with 43,200 seconds (12 hours) as the default.
     * Sessions for AWS account owners are restricted to a maximum of 3,600 seconds
     * (one hour). If the duration is longer than one hour, the session for AWS account
     * owners defaults to one hour.</p>
     */
    inline int GetDurationSeconds() const{ return m_durationSeconds; }

    /**
     * <p>The duration, in seconds, that the credentials should remain valid.
     * Acceptable durations for IAM user sessions range from 900 seconds (15 minutes)
     * to 129,600 seconds (36 hours), with 43,200 seconds (12 hours) as the default.
     * Sessions for AWS account owners are restricted to a maximum of 3,600 seconds
     * (one hour). If the duration is longer than one hour, the session for AWS account
     * owners defaults to one hour.</p>
     */
    inline bool DurationSecondsHasBeenSet() const { return m_durationSecondsHasBeenSet; }

    /**
     * <p>The duration, in seconds, that the credentials should remain valid.
     * Acceptable durations for IAM user sessions range from 900 seconds (15 minutes)
     * to 129,600 seconds (36 hours), with 43,200 seconds (12 hours) as the default.
     * Sessions for AWS account owners are restricted to a maximum of 3,600 seconds
     * (one hour). If the duration is longer than one hour, the session for AWS account
     * owners defaults to one hour.</p>
     */
    inline void SetDurationSeconds(int value) { m_durationSecondsHasBeenSet = true; m_durationSeconds = value; }

    /**
     * <p>The duration, in seconds, that the credentials should remain valid.
     * Acceptable durations for IAM user sessions range from 900 seconds (15 minutes)
     * to 129,600 seconds (36 hours), with 43,200 seconds (12 hours) as the default.
     * Sessions for AWS account owners are restricted to a maximum of 3,600 seconds
     * (one hour). If the duration is longer than one hour, the session for AWS account
     * owners defaults to one hour.</p>
     */
    inline GetSessionTokenRequest& WithDurationSeconds(int value) { SetDurationSeconds(value); return *this;}


    /**
     * <p>The identification number of the MFA device that is associated with the IAM
     * user who is making the <code>GetSessionToken</code> call. Specify this value if
     * the IAM user has a policy that requires MFA authentication. The value is either
     * the serial number for a hardware device (such as <code>GAHT12345678</code>) or
     * an Amazon Resource Name (ARN) for a virtual device (such as
     * <code>arn:aws:iam::123456789012:mfa/user</code>). You can find the device for an
     * IAM user by going to the AWS Management Console and viewing the user's security
     * credentials. </p> <p>The regex used to validate this parameter is a string of
     * characters consisting of upper- and lower-case alphanumeric characters with no
     * spaces. You can also include underscores or any of the following characters:
     * =,.@:/-</p>
     */
    inline const Aws::String& GetSerialNumber() const{ return m_serialNumber; }

    /**
     * <p>The identification number of the MFA device that is associated with the IAM
     * user who is making the <code>GetSessionToken</code> call. Specify this value if
     * the IAM user has a policy that requires MFA authentication. The value is either
     * the serial number for a hardware device (such as <code>GAHT12345678</code>) or
     * an Amazon Resource Name (ARN) for a virtual device (such as
     * <code>arn:aws:iam::123456789012:mfa/user</code>). You can find the device for an
     * IAM user by going to the AWS Management Console and viewing the user's security
     * credentials. </p> <p>The regex used to validate this parameter is a string of
     * characters consisting of upper- and lower-case alphanumeric characters with no
     * spaces. You can also include underscores or any of the following characters:
     * =,.@:/-</p>
     */
    inline bool SerialNumberHasBeenSet() const { return m_serialNumberHasBeenSet; }

    /**
     * <p>The identification number of the MFA device that is associated with the IAM
     * user who is making the <code>GetSessionToken</code> call. Specify this value if
     * the IAM user has a policy that requires MFA authentication. The value is either
     * the serial number for a hardware device (such as <code>GAHT12345678</code>) or
     * an Amazon Resource Name (ARN) for a virtual device (such as
     * <code>arn:aws:iam::123456789012:mfa/user</code>). You can find the device for an
     * IAM user by going to the AWS Management Console and viewing the user's security
     * credentials. </p> <p>The regex used to validate this parameter is a string of
     * characters consisting of upper- and lower-case alphanumeric characters with no
     * spaces. You can also include underscores or any of the following characters:
     * =,.@:/-</p>
     */
    inline void SetSerialNumber(const Aws::String& value) { m_serialNumberHasBeenSet = true; m_serialNumber = value; }

    /**
     * <p>The identification number of the MFA device that is associated with the IAM
     * user who is making the <code>GetSessionToken</code> call. Specify this value if
     * the IAM user has a policy that requires MFA authentication. The value is either
     * the serial number for a hardware device (such as <code>GAHT12345678</code>) or
     * an Amazon Resource Name (ARN) for a virtual device (such as
     * <code>arn:aws:iam::123456789012:mfa/user</code>). You can find the device for an
     * IAM user by going to the AWS Management Console and viewing the user's security
     * credentials. </p> <p>The regex used to validate this parameter is a string of
     * characters consisting of upper- and lower-case alphanumeric characters with no
     * spaces. You can also include underscores or any of the following characters:
     * =,.@:/-</p>
     */
    inline void SetSerialNumber(Aws::String&& value) { m_serialNumberHasBeenSet = true; m_serialNumber = std::move(value); }

    /**
     * <p>The identification number of the MFA device that is associated with the IAM
     * user who is making the <code>GetSessionToken</code> call. Specify this value if
     * the IAM user has a policy that requires MFA authentication. The value is either
     * the serial number for a hardware device (such as <code>GAHT12345678</code>) or
     * an Amazon Resource Name (ARN) for a virtual device (such as
     * <code>arn:aws:iam::123456789012:mfa/user</code>). You can find the device for an
     * IAM user by going to the AWS Management Console and viewing the user's security
     * credentials. </p> <p>The regex used to validate this parameter is a string of
     * characters consisting of upper- and lower-case alphanumeric characters with no
     * spaces. You can also include underscores or any of the following characters:
     * =,.@:/-</p>
     */
    inline void SetSerialNumber(const char* value) { m_serialNumberHasBeenSet = true; m_serialNumber.assign(value); }

    /**
     * <p>The identification number of the MFA device that is associated with the IAM
     * user who is making the <code>GetSessionToken</code> call. Specify this value if
     * the IAM user has a policy that requires MFA authentication. The value is either
     * the serial number for a hardware device (such as <code>GAHT12345678</code>) or
     * an Amazon Resource Name (ARN) for a virtual device (such as
     * <code>arn:aws:iam::123456789012:mfa/user</code>). You can find the device for an
     * IAM user by going to the AWS Management Console and viewing the user's security
     * credentials. </p> <p>The regex used to validate this parameter is a string of
     * characters consisting of upper- and lower-case alphanumeric characters with no
     * spaces. You can also include underscores or any of the following characters:
     * =,.@:/-</p>
     */
    inline GetSessionTokenRequest& WithSerialNumber(const Aws::String& value) { SetSerialNumber(value); return *this;}

    /**
     * <p>The identification number of the MFA device that is associated with the IAM
     * user who is making the <code>GetSessionToken</code> call. Specify this value if
     * the IAM user has a policy that requires MFA authentication. The value is either
     * the serial number for a hardware device (such as <code>GAHT12345678</code>) or
     * an Amazon Resource Name (ARN) for a virtual device (such as
     * <code>arn:aws:iam::123456789012:mfa/user</code>). You can find the device for an
     * IAM user by going to the AWS Management Console and viewing the user's security
     * credentials. </p> <p>The regex used to validate this parameter is a string of
     * characters consisting of upper- and lower-case alphanumeric characters with no
     * spaces. You can also include underscores or any of the following characters:
     * =,.@:/-</p>
     */
    inline GetSessionTokenRequest& WithSerialNumber(Aws::String&& value) { SetSerialNumber(std::move(value)); return *this;}

    /**
     * <p>The identification number of the MFA device that is associated with the IAM
     * user who is making the <code>GetSessionToken</code> call. Specify this value if
     * the IAM user has a policy that requires MFA authentication. The value is either
     * the serial number for a hardware device (such as <code>GAHT12345678</code>) or
     * an Amazon Resource Name (ARN) for a virtual device (such as
     * <code>arn:aws:iam::123456789012:mfa/user</code>). You can find the device for an
     * IAM user by going to the AWS Management Console and viewing the user's security
     * credentials. </p> <p>The regex used to validate this parameter is a string of
     * characters consisting of upper- and lower-case alphanumeric characters with no
     * spaces. You can also include underscores or any of the following characters:
     * =,.@:/-</p>
     */
    inline GetSessionTokenRequest& WithSerialNumber(const char* value) { SetSerialNumber(value); return *this;}


    /**
     * <p>The value provided by the MFA device, if MFA is required. If any policy
     * requires the IAM user to submit an MFA code, specify this value. If MFA
     * authentication is required, the user must provide a code when requesting a set
     * of temporary security credentials. A user who fails to provide the code receives
     * an "access denied" response when requesting resources that require MFA
     * authentication.</p> <p>The format for this parameter, as described by its regex
     * pattern, is a sequence of six numeric digits.</p>
     */
    inline const Aws::String& GetTokenCode() const{ return m_tokenCode; }

    /**
     * <p>The value provided by the MFA device, if MFA is required. If any policy
     * requires the IAM user to submit an MFA code, specify this value. If MFA
     * authentication is required, the user must provide a code when requesting a set
     * of temporary security credentials. A user who fails to provide the code receives
     * an "access denied" response when requesting resources that require MFA
     * authentication.</p> <p>The format for this parameter, as described by its regex
     * pattern, is a sequence of six numeric digits.</p>
     */
    inline bool TokenCodeHasBeenSet() const { return m_tokenCodeHasBeenSet; }

    /**
     * <p>The value provided by the MFA device, if MFA is required. If any policy
     * requires the IAM user to submit an MFA code, specify this value. If MFA
     * authentication is required, the user must provide a code when requesting a set
     * of temporary security credentials. A user who fails to provide the code receives
     * an "access denied" response when requesting resources that require MFA
     * authentication.</p> <p>The format for this parameter, as described by its regex
     * pattern, is a sequence of six numeric digits.</p>
     */
    inline void SetTokenCode(const Aws::String& value) { m_tokenCodeHasBeenSet = true; m_tokenCode = value; }

    /**
     * <p>The value provided by the MFA device, if MFA is required. If any policy
     * requires the IAM user to submit an MFA code, specify this value. If MFA
     * authentication is required, the user must provide a code when requesting a set
     * of temporary security credentials. A user who fails to provide the code receives
     * an "access denied" response when requesting resources that require MFA
     * authentication.</p> <p>The format for this parameter, as described by its regex
     * pattern, is a sequence of six numeric digits.</p>
     */
    inline void SetTokenCode(Aws::String&& value) { m_tokenCodeHasBeenSet = true; m_tokenCode = std::move(value); }

    /**
     * <p>The value provided by the MFA device, if MFA is required. If any policy
     * requires the IAM user to submit an MFA code, specify this value. If MFA
     * authentication is required, the user must provide a code when requesting a set
     * of temporary security credentials. A user who fails to provide the code receives
     * an "access denied" response when requesting resources that require MFA
     * authentication.</p> <p>The format for this parameter, as described by its regex
     * pattern, is a sequence of six numeric digits.</p>
     */
    inline void SetTokenCode(const char* value) { m_tokenCodeHasBeenSet = true; m_tokenCode.assign(value); }

    /**
     * <p>The value provided by the MFA device, if MFA is required. If any policy
     * requires the IAM user to submit an MFA code, specify this value. If MFA
     * authentication is required, the user must provide a code when requesting a set
     * of temporary security credentials. A user who fails to provide the code receives
     * an "access denied" response when requesting resources that require MFA
     * authentication.</p> <p>The format for this parameter, as described by its regex
     * pattern, is a sequence of six numeric digits.</p>
     */
    inline GetSessionTokenRequest& WithTokenCode(const Aws::String& value) { SetTokenCode(value); return *this;}

    /**
     * <p>The value provided by the MFA device, if MFA is required. If any policy
     * requires the IAM user to submit an MFA code, specify this value. If MFA
     * authentication is required, the user must provide a code when requesting a set
     * of temporary security credentials. A user who fails to provide the code receives
     * an "access denied" response when requesting resources that require MFA
     * authentication.</p> <p>The format for this parameter, as described by its regex
     * pattern, is a sequence of six numeric digits.</p>
     */
    inline GetSessionTokenRequest& WithTokenCode(Aws::String&& value) { SetTokenCode(std::move(value)); return *this;}

    /**
     * <p>The value provided by the MFA device, if MFA is required. If any policy
     * requires the IAM user to submit an MFA code, specify this value. If MFA
     * authentication is required, the user must provide a code when requesting a set
     * of temporary security credentials. A user who fails to provide the code receives
     * an "access denied" response when requesting resources that require MFA
     * authentication.</p> <p>The format for this parameter, as described by its regex
     * pattern, is a sequence of six numeric digits.</p>
     */
    inline GetSessionTokenRequest& WithTokenCode(const char* value) { SetTokenCode(value); return *this;}

  private:

    int m_durationSeconds;
    bool m_durationSecondsHasBeenSet;

    Aws::String m_serialNumber;
    bool m_serialNumberHasBeenSet;

    Aws::String m_tokenCode;
    bool m_tokenCodeHasBeenSet;
  };

} // namespace Model
} // namespace STS
} // namespace Aws
