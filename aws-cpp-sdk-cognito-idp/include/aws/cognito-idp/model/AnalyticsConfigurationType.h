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
   * <p>The Amazon Pinpoint analytics configuration for collecting metrics for a user
   * pool.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/AnalyticsConfigurationType">AWS
   * API Reference</a></p>
   */
  class AWS_COGNITOIDENTITYPROVIDER_API AnalyticsConfigurationType
  {
  public:
    AnalyticsConfigurationType();
    AnalyticsConfigurationType(Aws::Utils::Json::JsonView jsonValue);
    AnalyticsConfigurationType& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The application ID for an Amazon Pinpoint application.</p>
     */
    inline const Aws::String& GetApplicationId() const{ return m_applicationId; }

    /**
     * <p>The application ID for an Amazon Pinpoint application.</p>
     */
    inline bool ApplicationIdHasBeenSet() const { return m_applicationIdHasBeenSet; }

    /**
     * <p>The application ID for an Amazon Pinpoint application.</p>
     */
    inline void SetApplicationId(const Aws::String& value) { m_applicationIdHasBeenSet = true; m_applicationId = value; }

    /**
     * <p>The application ID for an Amazon Pinpoint application.</p>
     */
    inline void SetApplicationId(Aws::String&& value) { m_applicationIdHasBeenSet = true; m_applicationId = std::move(value); }

    /**
     * <p>The application ID for an Amazon Pinpoint application.</p>
     */
    inline void SetApplicationId(const char* value) { m_applicationIdHasBeenSet = true; m_applicationId.assign(value); }

    /**
     * <p>The application ID for an Amazon Pinpoint application.</p>
     */
    inline AnalyticsConfigurationType& WithApplicationId(const Aws::String& value) { SetApplicationId(value); return *this;}

    /**
     * <p>The application ID for an Amazon Pinpoint application.</p>
     */
    inline AnalyticsConfigurationType& WithApplicationId(Aws::String&& value) { SetApplicationId(std::move(value)); return *this;}

    /**
     * <p>The application ID for an Amazon Pinpoint application.</p>
     */
    inline AnalyticsConfigurationType& WithApplicationId(const char* value) { SetApplicationId(value); return *this;}


    /**
     * <p>The ARN of an IAM role that authorizes Amazon Cognito to publish events to
     * Amazon Pinpoint analytics.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>The ARN of an IAM role that authorizes Amazon Cognito to publish events to
     * Amazon Pinpoint analytics.</p>
     */
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }

    /**
     * <p>The ARN of an IAM role that authorizes Amazon Cognito to publish events to
     * Amazon Pinpoint analytics.</p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    /**
     * <p>The ARN of an IAM role that authorizes Amazon Cognito to publish events to
     * Amazon Pinpoint analytics.</p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }

    /**
     * <p>The ARN of an IAM role that authorizes Amazon Cognito to publish events to
     * Amazon Pinpoint analytics.</p>
     */
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }

    /**
     * <p>The ARN of an IAM role that authorizes Amazon Cognito to publish events to
     * Amazon Pinpoint analytics.</p>
     */
    inline AnalyticsConfigurationType& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>The ARN of an IAM role that authorizes Amazon Cognito to publish events to
     * Amazon Pinpoint analytics.</p>
     */
    inline AnalyticsConfigurationType& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of an IAM role that authorizes Amazon Cognito to publish events to
     * Amazon Pinpoint analytics.</p>
     */
    inline AnalyticsConfigurationType& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}


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
    inline AnalyticsConfigurationType& WithExternalId(const Aws::String& value) { SetExternalId(value); return *this;}

    /**
     * <p>The external ID.</p>
     */
    inline AnalyticsConfigurationType& WithExternalId(Aws::String&& value) { SetExternalId(std::move(value)); return *this;}

    /**
     * <p>The external ID.</p>
     */
    inline AnalyticsConfigurationType& WithExternalId(const char* value) { SetExternalId(value); return *this;}


    /**
     * <p>If <code>UserDataShared</code> is <code>true</code>, Amazon Cognito will
     * include user data in the events it publishes to Amazon Pinpoint analytics.</p>
     */
    inline bool GetUserDataShared() const{ return m_userDataShared; }

    /**
     * <p>If <code>UserDataShared</code> is <code>true</code>, Amazon Cognito will
     * include user data in the events it publishes to Amazon Pinpoint analytics.</p>
     */
    inline bool UserDataSharedHasBeenSet() const { return m_userDataSharedHasBeenSet; }

    /**
     * <p>If <code>UserDataShared</code> is <code>true</code>, Amazon Cognito will
     * include user data in the events it publishes to Amazon Pinpoint analytics.</p>
     */
    inline void SetUserDataShared(bool value) { m_userDataSharedHasBeenSet = true; m_userDataShared = value; }

    /**
     * <p>If <code>UserDataShared</code> is <code>true</code>, Amazon Cognito will
     * include user data in the events it publishes to Amazon Pinpoint analytics.</p>
     */
    inline AnalyticsConfigurationType& WithUserDataShared(bool value) { SetUserDataShared(value); return *this;}

  private:

    Aws::String m_applicationId;
    bool m_applicationIdHasBeenSet;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet;

    Aws::String m_externalId;
    bool m_externalIdHasBeenSet;

    bool m_userDataShared;
    bool m_userDataSharedHasBeenSet;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
