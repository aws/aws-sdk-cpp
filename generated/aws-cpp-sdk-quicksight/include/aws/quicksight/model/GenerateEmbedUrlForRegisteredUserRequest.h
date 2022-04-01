﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/QuickSightRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/RegisteredUserEmbeddingExperienceConfiguration.h>
#include <utility>

namespace Aws
{
namespace QuickSight
{
namespace Model
{

  /**
   */
  class AWS_QUICKSIGHT_API GenerateEmbedUrlForRegisteredUserRequest : public QuickSightRequest
  {
  public:
    GenerateEmbedUrlForRegisteredUserRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GenerateEmbedUrlForRegisteredUser"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The ID for the Amazon Web Services account that contains the dashboard that
     * you're embedding.</p>
     */
    inline const Aws::String& GetAwsAccountId() const{ return m_awsAccountId; }

    /**
     * <p>The ID for the Amazon Web Services account that contains the dashboard that
     * you're embedding.</p>
     */
    inline bool AwsAccountIdHasBeenSet() const { return m_awsAccountIdHasBeenSet; }

    /**
     * <p>The ID for the Amazon Web Services account that contains the dashboard that
     * you're embedding.</p>
     */
    inline void SetAwsAccountId(const Aws::String& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = value; }

    /**
     * <p>The ID for the Amazon Web Services account that contains the dashboard that
     * you're embedding.</p>
     */
    inline void SetAwsAccountId(Aws::String&& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = std::move(value); }

    /**
     * <p>The ID for the Amazon Web Services account that contains the dashboard that
     * you're embedding.</p>
     */
    inline void SetAwsAccountId(const char* value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId.assign(value); }

    /**
     * <p>The ID for the Amazon Web Services account that contains the dashboard that
     * you're embedding.</p>
     */
    inline GenerateEmbedUrlForRegisteredUserRequest& WithAwsAccountId(const Aws::String& value) { SetAwsAccountId(value); return *this;}

    /**
     * <p>The ID for the Amazon Web Services account that contains the dashboard that
     * you're embedding.</p>
     */
    inline GenerateEmbedUrlForRegisteredUserRequest& WithAwsAccountId(Aws::String&& value) { SetAwsAccountId(std::move(value)); return *this;}

    /**
     * <p>The ID for the Amazon Web Services account that contains the dashboard that
     * you're embedding.</p>
     */
    inline GenerateEmbedUrlForRegisteredUserRequest& WithAwsAccountId(const char* value) { SetAwsAccountId(value); return *this;}


    /**
     * <p>How many minutes the session is valid. The session lifetime must be in
     * [15-600] minutes range.</p>
     */
    inline long long GetSessionLifetimeInMinutes() const{ return m_sessionLifetimeInMinutes; }

    /**
     * <p>How many minutes the session is valid. The session lifetime must be in
     * [15-600] minutes range.</p>
     */
    inline bool SessionLifetimeInMinutesHasBeenSet() const { return m_sessionLifetimeInMinutesHasBeenSet; }

    /**
     * <p>How many minutes the session is valid. The session lifetime must be in
     * [15-600] minutes range.</p>
     */
    inline void SetSessionLifetimeInMinutes(long long value) { m_sessionLifetimeInMinutesHasBeenSet = true; m_sessionLifetimeInMinutes = value; }

    /**
     * <p>How many minutes the session is valid. The session lifetime must be in
     * [15-600] minutes range.</p>
     */
    inline GenerateEmbedUrlForRegisteredUserRequest& WithSessionLifetimeInMinutes(long long value) { SetSessionLifetimeInMinutes(value); return *this;}


    /**
     * <p>The Amazon Resource Name for the registered user.</p>
     */
    inline const Aws::String& GetUserArn() const{ return m_userArn; }

    /**
     * <p>The Amazon Resource Name for the registered user.</p>
     */
    inline bool UserArnHasBeenSet() const { return m_userArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name for the registered user.</p>
     */
    inline void SetUserArn(const Aws::String& value) { m_userArnHasBeenSet = true; m_userArn = value; }

    /**
     * <p>The Amazon Resource Name for the registered user.</p>
     */
    inline void SetUserArn(Aws::String&& value) { m_userArnHasBeenSet = true; m_userArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name for the registered user.</p>
     */
    inline void SetUserArn(const char* value) { m_userArnHasBeenSet = true; m_userArn.assign(value); }

    /**
     * <p>The Amazon Resource Name for the registered user.</p>
     */
    inline GenerateEmbedUrlForRegisteredUserRequest& WithUserArn(const Aws::String& value) { SetUserArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name for the registered user.</p>
     */
    inline GenerateEmbedUrlForRegisteredUserRequest& WithUserArn(Aws::String&& value) { SetUserArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name for the registered user.</p>
     */
    inline GenerateEmbedUrlForRegisteredUserRequest& WithUserArn(const char* value) { SetUserArn(value); return *this;}


    /**
     * <p>The experience you are embedding. For registered users, you can embed Amazon
     * QuickSight dashboards or the entire Amazon QuickSight console.</p>
     */
    inline const RegisteredUserEmbeddingExperienceConfiguration& GetExperienceConfiguration() const{ return m_experienceConfiguration; }

    /**
     * <p>The experience you are embedding. For registered users, you can embed Amazon
     * QuickSight dashboards or the entire Amazon QuickSight console.</p>
     */
    inline bool ExperienceConfigurationHasBeenSet() const { return m_experienceConfigurationHasBeenSet; }

    /**
     * <p>The experience you are embedding. For registered users, you can embed Amazon
     * QuickSight dashboards or the entire Amazon QuickSight console.</p>
     */
    inline void SetExperienceConfiguration(const RegisteredUserEmbeddingExperienceConfiguration& value) { m_experienceConfigurationHasBeenSet = true; m_experienceConfiguration = value; }

    /**
     * <p>The experience you are embedding. For registered users, you can embed Amazon
     * QuickSight dashboards or the entire Amazon QuickSight console.</p>
     */
    inline void SetExperienceConfiguration(RegisteredUserEmbeddingExperienceConfiguration&& value) { m_experienceConfigurationHasBeenSet = true; m_experienceConfiguration = std::move(value); }

    /**
     * <p>The experience you are embedding. For registered users, you can embed Amazon
     * QuickSight dashboards or the entire Amazon QuickSight console.</p>
     */
    inline GenerateEmbedUrlForRegisteredUserRequest& WithExperienceConfiguration(const RegisteredUserEmbeddingExperienceConfiguration& value) { SetExperienceConfiguration(value); return *this;}

    /**
     * <p>The experience you are embedding. For registered users, you can embed Amazon
     * QuickSight dashboards or the entire Amazon QuickSight console.</p>
     */
    inline GenerateEmbedUrlForRegisteredUserRequest& WithExperienceConfiguration(RegisteredUserEmbeddingExperienceConfiguration&& value) { SetExperienceConfiguration(std::move(value)); return *this;}

  private:

    Aws::String m_awsAccountId;
    bool m_awsAccountIdHasBeenSet;

    long long m_sessionLifetimeInMinutes;
    bool m_sessionLifetimeInMinutesHasBeenSet;

    Aws::String m_userArn;
    bool m_userArnHasBeenSet;

    RegisteredUserEmbeddingExperienceConfiguration m_experienceConfiguration;
    bool m_experienceConfigurationHasBeenSet;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
