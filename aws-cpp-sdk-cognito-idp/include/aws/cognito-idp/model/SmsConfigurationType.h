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
#include <aws/cognito-idp/CognitoIdentityProvider_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace CognitoIdentityProvider
{
namespace Model
{

  /**
   * <p>The SMS configuration type.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/SmsConfigurationType">AWS
   * API Reference</a></p>
   */
  class AWS_COGNITOIDENTITYPROVIDER_API SmsConfigurationType
  {
  public:
    SmsConfigurationType();
    SmsConfigurationType(Aws::Utils::Json::JsonView jsonValue);
    SmsConfigurationType& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Simple Notification Service
     * (SNS) caller.</p>
     */
    inline const Aws::String& GetSnsCallerArn() const{ return m_snsCallerArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Simple Notification Service
     * (SNS) caller.</p>
     */
    inline bool SnsCallerArnHasBeenSet() const { return m_snsCallerArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Simple Notification Service
     * (SNS) caller.</p>
     */
    inline void SetSnsCallerArn(const Aws::String& value) { m_snsCallerArnHasBeenSet = true; m_snsCallerArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Simple Notification Service
     * (SNS) caller.</p>
     */
    inline void SetSnsCallerArn(Aws::String&& value) { m_snsCallerArnHasBeenSet = true; m_snsCallerArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Simple Notification Service
     * (SNS) caller.</p>
     */
    inline void SetSnsCallerArn(const char* value) { m_snsCallerArnHasBeenSet = true; m_snsCallerArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Simple Notification Service
     * (SNS) caller.</p>
     */
    inline SmsConfigurationType& WithSnsCallerArn(const Aws::String& value) { SetSnsCallerArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Simple Notification Service
     * (SNS) caller.</p>
     */
    inline SmsConfigurationType& WithSnsCallerArn(Aws::String&& value) { SetSnsCallerArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Simple Notification Service
     * (SNS) caller.</p>
     */
    inline SmsConfigurationType& WithSnsCallerArn(const char* value) { SetSnsCallerArn(value); return *this;}


    /**
     * <p>The external ID.</p>
     */
    inline const Aws::String& GetExternalId() const{ return m_externalId; }

    /**
     * <p>The external ID.</p>
     */
    inline bool ExternalIdHasBeenSet() const { return m_externalIdHasBeenSet; }

    /**
     * <p>The external ID.</p>
     */
    inline void SetExternalId(const Aws::String& value) { m_externalIdHasBeenSet = true; m_externalId = value; }

    /**
     * <p>The external ID.</p>
     */
    inline void SetExternalId(Aws::String&& value) { m_externalIdHasBeenSet = true; m_externalId = std::move(value); }

    /**
     * <p>The external ID.</p>
     */
    inline void SetExternalId(const char* value) { m_externalIdHasBeenSet = true; m_externalId.assign(value); }

    /**
     * <p>The external ID.</p>
     */
    inline SmsConfigurationType& WithExternalId(const Aws::String& value) { SetExternalId(value); return *this;}

    /**
     * <p>The external ID.</p>
     */
    inline SmsConfigurationType& WithExternalId(Aws::String&& value) { SetExternalId(std::move(value)); return *this;}

    /**
     * <p>The external ID.</p>
     */
    inline SmsConfigurationType& WithExternalId(const char* value) { SetExternalId(value); return *this;}

  private:

    Aws::String m_snsCallerArn;
    bool m_snsCallerArnHasBeenSet;

    Aws::String m_externalId;
    bool m_externalIdHasBeenSet;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
