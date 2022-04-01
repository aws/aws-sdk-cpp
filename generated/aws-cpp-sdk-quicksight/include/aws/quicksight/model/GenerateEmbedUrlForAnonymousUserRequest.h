﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/QuickSightRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/quicksight/model/AnonymousUserEmbeddingExperienceConfiguration.h>
#include <aws/quicksight/model/SessionTag.h>
#include <utility>

namespace Aws
{
namespace QuickSight
{
namespace Model
{

  /**
   */
  class AWS_QUICKSIGHT_API GenerateEmbedUrlForAnonymousUserRequest : public QuickSightRequest
  {
  public:
    GenerateEmbedUrlForAnonymousUserRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GenerateEmbedUrlForAnonymousUser"; }

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
    inline GenerateEmbedUrlForAnonymousUserRequest& WithAwsAccountId(const Aws::String& value) { SetAwsAccountId(value); return *this;}

    /**
     * <p>The ID for the Amazon Web Services account that contains the dashboard that
     * you're embedding.</p>
     */
    inline GenerateEmbedUrlForAnonymousUserRequest& WithAwsAccountId(Aws::String&& value) { SetAwsAccountId(std::move(value)); return *this;}

    /**
     * <p>The ID for the Amazon Web Services account that contains the dashboard that
     * you're embedding.</p>
     */
    inline GenerateEmbedUrlForAnonymousUserRequest& WithAwsAccountId(const char* value) { SetAwsAccountId(value); return *this;}


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
    inline GenerateEmbedUrlForAnonymousUserRequest& WithSessionLifetimeInMinutes(long long value) { SetSessionLifetimeInMinutes(value); return *this;}


    /**
     * <p>The Amazon QuickSight namespace that the anonymous user virtually belongs to.
     * If you are not using an Amazon QuickSight custom namespace, set this to
     * <code>default</code>.</p>
     */
    inline const Aws::String& GetNamespace() const{ return m_namespace; }

    /**
     * <p>The Amazon QuickSight namespace that the anonymous user virtually belongs to.
     * If you are not using an Amazon QuickSight custom namespace, set this to
     * <code>default</code>.</p>
     */
    inline bool NamespaceHasBeenSet() const { return m_namespaceHasBeenSet; }

    /**
     * <p>The Amazon QuickSight namespace that the anonymous user virtually belongs to.
     * If you are not using an Amazon QuickSight custom namespace, set this to
     * <code>default</code>.</p>
     */
    inline void SetNamespace(const Aws::String& value) { m_namespaceHasBeenSet = true; m_namespace = value; }

    /**
     * <p>The Amazon QuickSight namespace that the anonymous user virtually belongs to.
     * If you are not using an Amazon QuickSight custom namespace, set this to
     * <code>default</code>.</p>
     */
    inline void SetNamespace(Aws::String&& value) { m_namespaceHasBeenSet = true; m_namespace = std::move(value); }

    /**
     * <p>The Amazon QuickSight namespace that the anonymous user virtually belongs to.
     * If you are not using an Amazon QuickSight custom namespace, set this to
     * <code>default</code>.</p>
     */
    inline void SetNamespace(const char* value) { m_namespaceHasBeenSet = true; m_namespace.assign(value); }

    /**
     * <p>The Amazon QuickSight namespace that the anonymous user virtually belongs to.
     * If you are not using an Amazon QuickSight custom namespace, set this to
     * <code>default</code>.</p>
     */
    inline GenerateEmbedUrlForAnonymousUserRequest& WithNamespace(const Aws::String& value) { SetNamespace(value); return *this;}

    /**
     * <p>The Amazon QuickSight namespace that the anonymous user virtually belongs to.
     * If you are not using an Amazon QuickSight custom namespace, set this to
     * <code>default</code>.</p>
     */
    inline GenerateEmbedUrlForAnonymousUserRequest& WithNamespace(Aws::String&& value) { SetNamespace(std::move(value)); return *this;}

    /**
     * <p>The Amazon QuickSight namespace that the anonymous user virtually belongs to.
     * If you are not using an Amazon QuickSight custom namespace, set this to
     * <code>default</code>.</p>
     */
    inline GenerateEmbedUrlForAnonymousUserRequest& WithNamespace(const char* value) { SetNamespace(value); return *this;}


    /**
     * <p>The session tags used for row-level security. Before you use this parameter,
     * make sure that you have configured the relevant datasets using the
     * <code>DataSet$RowLevelPermissionTagConfiguration</code> parameter so that
     * session tags can be used to provide row-level security.</p> <p>These are not the
     * tags used for the Amazon Web Services resource tagging feature. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/quicksight-dev-rls-tags.html">Using
     * Row-Level Security (RLS) with Tags</a>.</p>
     */
    inline const Aws::Vector<SessionTag>& GetSessionTags() const{ return m_sessionTags; }

    /**
     * <p>The session tags used for row-level security. Before you use this parameter,
     * make sure that you have configured the relevant datasets using the
     * <code>DataSet$RowLevelPermissionTagConfiguration</code> parameter so that
     * session tags can be used to provide row-level security.</p> <p>These are not the
     * tags used for the Amazon Web Services resource tagging feature. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/quicksight-dev-rls-tags.html">Using
     * Row-Level Security (RLS) with Tags</a>.</p>
     */
    inline bool SessionTagsHasBeenSet() const { return m_sessionTagsHasBeenSet; }

    /**
     * <p>The session tags used for row-level security. Before you use this parameter,
     * make sure that you have configured the relevant datasets using the
     * <code>DataSet$RowLevelPermissionTagConfiguration</code> parameter so that
     * session tags can be used to provide row-level security.</p> <p>These are not the
     * tags used for the Amazon Web Services resource tagging feature. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/quicksight-dev-rls-tags.html">Using
     * Row-Level Security (RLS) with Tags</a>.</p>
     */
    inline void SetSessionTags(const Aws::Vector<SessionTag>& value) { m_sessionTagsHasBeenSet = true; m_sessionTags = value; }

    /**
     * <p>The session tags used for row-level security. Before you use this parameter,
     * make sure that you have configured the relevant datasets using the
     * <code>DataSet$RowLevelPermissionTagConfiguration</code> parameter so that
     * session tags can be used to provide row-level security.</p> <p>These are not the
     * tags used for the Amazon Web Services resource tagging feature. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/quicksight-dev-rls-tags.html">Using
     * Row-Level Security (RLS) with Tags</a>.</p>
     */
    inline void SetSessionTags(Aws::Vector<SessionTag>&& value) { m_sessionTagsHasBeenSet = true; m_sessionTags = std::move(value); }

    /**
     * <p>The session tags used for row-level security. Before you use this parameter,
     * make sure that you have configured the relevant datasets using the
     * <code>DataSet$RowLevelPermissionTagConfiguration</code> parameter so that
     * session tags can be used to provide row-level security.</p> <p>These are not the
     * tags used for the Amazon Web Services resource tagging feature. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/quicksight-dev-rls-tags.html">Using
     * Row-Level Security (RLS) with Tags</a>.</p>
     */
    inline GenerateEmbedUrlForAnonymousUserRequest& WithSessionTags(const Aws::Vector<SessionTag>& value) { SetSessionTags(value); return *this;}

    /**
     * <p>The session tags used for row-level security. Before you use this parameter,
     * make sure that you have configured the relevant datasets using the
     * <code>DataSet$RowLevelPermissionTagConfiguration</code> parameter so that
     * session tags can be used to provide row-level security.</p> <p>These are not the
     * tags used for the Amazon Web Services resource tagging feature. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/quicksight-dev-rls-tags.html">Using
     * Row-Level Security (RLS) with Tags</a>.</p>
     */
    inline GenerateEmbedUrlForAnonymousUserRequest& WithSessionTags(Aws::Vector<SessionTag>&& value) { SetSessionTags(std::move(value)); return *this;}

    /**
     * <p>The session tags used for row-level security. Before you use this parameter,
     * make sure that you have configured the relevant datasets using the
     * <code>DataSet$RowLevelPermissionTagConfiguration</code> parameter so that
     * session tags can be used to provide row-level security.</p> <p>These are not the
     * tags used for the Amazon Web Services resource tagging feature. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/quicksight-dev-rls-tags.html">Using
     * Row-Level Security (RLS) with Tags</a>.</p>
     */
    inline GenerateEmbedUrlForAnonymousUserRequest& AddSessionTags(const SessionTag& value) { m_sessionTagsHasBeenSet = true; m_sessionTags.push_back(value); return *this; }

    /**
     * <p>The session tags used for row-level security. Before you use this parameter,
     * make sure that you have configured the relevant datasets using the
     * <code>DataSet$RowLevelPermissionTagConfiguration</code> parameter so that
     * session tags can be used to provide row-level security.</p> <p>These are not the
     * tags used for the Amazon Web Services resource tagging feature. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/quicksight-dev-rls-tags.html">Using
     * Row-Level Security (RLS) with Tags</a>.</p>
     */
    inline GenerateEmbedUrlForAnonymousUserRequest& AddSessionTags(SessionTag&& value) { m_sessionTagsHasBeenSet = true; m_sessionTags.push_back(std::move(value)); return *this; }


    /**
     * <p>The Amazon Resource Names for the Amazon QuickSight resources that the user
     * is authorized to access during the lifetime of the session. If you choose
     * <code>Dashboard</code> embedding experience, pass the list of dashboard ARNs in
     * the account that you want the user to be able to view.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAuthorizedResourceArns() const{ return m_authorizedResourceArns; }

    /**
     * <p>The Amazon Resource Names for the Amazon QuickSight resources that the user
     * is authorized to access during the lifetime of the session. If you choose
     * <code>Dashboard</code> embedding experience, pass the list of dashboard ARNs in
     * the account that you want the user to be able to view.</p>
     */
    inline bool AuthorizedResourceArnsHasBeenSet() const { return m_authorizedResourceArnsHasBeenSet; }

    /**
     * <p>The Amazon Resource Names for the Amazon QuickSight resources that the user
     * is authorized to access during the lifetime of the session. If you choose
     * <code>Dashboard</code> embedding experience, pass the list of dashboard ARNs in
     * the account that you want the user to be able to view.</p>
     */
    inline void SetAuthorizedResourceArns(const Aws::Vector<Aws::String>& value) { m_authorizedResourceArnsHasBeenSet = true; m_authorizedResourceArns = value; }

    /**
     * <p>The Amazon Resource Names for the Amazon QuickSight resources that the user
     * is authorized to access during the lifetime of the session. If you choose
     * <code>Dashboard</code> embedding experience, pass the list of dashboard ARNs in
     * the account that you want the user to be able to view.</p>
     */
    inline void SetAuthorizedResourceArns(Aws::Vector<Aws::String>&& value) { m_authorizedResourceArnsHasBeenSet = true; m_authorizedResourceArns = std::move(value); }

    /**
     * <p>The Amazon Resource Names for the Amazon QuickSight resources that the user
     * is authorized to access during the lifetime of the session. If you choose
     * <code>Dashboard</code> embedding experience, pass the list of dashboard ARNs in
     * the account that you want the user to be able to view.</p>
     */
    inline GenerateEmbedUrlForAnonymousUserRequest& WithAuthorizedResourceArns(const Aws::Vector<Aws::String>& value) { SetAuthorizedResourceArns(value); return *this;}

    /**
     * <p>The Amazon Resource Names for the Amazon QuickSight resources that the user
     * is authorized to access during the lifetime of the session. If you choose
     * <code>Dashboard</code> embedding experience, pass the list of dashboard ARNs in
     * the account that you want the user to be able to view.</p>
     */
    inline GenerateEmbedUrlForAnonymousUserRequest& WithAuthorizedResourceArns(Aws::Vector<Aws::String>&& value) { SetAuthorizedResourceArns(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Names for the Amazon QuickSight resources that the user
     * is authorized to access during the lifetime of the session. If you choose
     * <code>Dashboard</code> embedding experience, pass the list of dashboard ARNs in
     * the account that you want the user to be able to view.</p>
     */
    inline GenerateEmbedUrlForAnonymousUserRequest& AddAuthorizedResourceArns(const Aws::String& value) { m_authorizedResourceArnsHasBeenSet = true; m_authorizedResourceArns.push_back(value); return *this; }

    /**
     * <p>The Amazon Resource Names for the Amazon QuickSight resources that the user
     * is authorized to access during the lifetime of the session. If you choose
     * <code>Dashboard</code> embedding experience, pass the list of dashboard ARNs in
     * the account that you want the user to be able to view.</p>
     */
    inline GenerateEmbedUrlForAnonymousUserRequest& AddAuthorizedResourceArns(Aws::String&& value) { m_authorizedResourceArnsHasBeenSet = true; m_authorizedResourceArns.push_back(std::move(value)); return *this; }

    /**
     * <p>The Amazon Resource Names for the Amazon QuickSight resources that the user
     * is authorized to access during the lifetime of the session. If you choose
     * <code>Dashboard</code> embedding experience, pass the list of dashboard ARNs in
     * the account that you want the user to be able to view.</p>
     */
    inline GenerateEmbedUrlForAnonymousUserRequest& AddAuthorizedResourceArns(const char* value) { m_authorizedResourceArnsHasBeenSet = true; m_authorizedResourceArns.push_back(value); return *this; }


    /**
     * <p>The configuration of the experience you are embedding.</p>
     */
    inline const AnonymousUserEmbeddingExperienceConfiguration& GetExperienceConfiguration() const{ return m_experienceConfiguration; }

    /**
     * <p>The configuration of the experience you are embedding.</p>
     */
    inline bool ExperienceConfigurationHasBeenSet() const { return m_experienceConfigurationHasBeenSet; }

    /**
     * <p>The configuration of the experience you are embedding.</p>
     */
    inline void SetExperienceConfiguration(const AnonymousUserEmbeddingExperienceConfiguration& value) { m_experienceConfigurationHasBeenSet = true; m_experienceConfiguration = value; }

    /**
     * <p>The configuration of the experience you are embedding.</p>
     */
    inline void SetExperienceConfiguration(AnonymousUserEmbeddingExperienceConfiguration&& value) { m_experienceConfigurationHasBeenSet = true; m_experienceConfiguration = std::move(value); }

    /**
     * <p>The configuration of the experience you are embedding.</p>
     */
    inline GenerateEmbedUrlForAnonymousUserRequest& WithExperienceConfiguration(const AnonymousUserEmbeddingExperienceConfiguration& value) { SetExperienceConfiguration(value); return *this;}

    /**
     * <p>The configuration of the experience you are embedding.</p>
     */
    inline GenerateEmbedUrlForAnonymousUserRequest& WithExperienceConfiguration(AnonymousUserEmbeddingExperienceConfiguration&& value) { SetExperienceConfiguration(std::move(value)); return *this;}

  private:

    Aws::String m_awsAccountId;
    bool m_awsAccountIdHasBeenSet;

    long long m_sessionLifetimeInMinutes;
    bool m_sessionLifetimeInMinutesHasBeenSet;

    Aws::String m_namespace;
    bool m_namespaceHasBeenSet;

    Aws::Vector<SessionTag> m_sessionTags;
    bool m_sessionTagsHasBeenSet;

    Aws::Vector<Aws::String> m_authorizedResourceArns;
    bool m_authorizedResourceArnsHasBeenSet;

    AnonymousUserEmbeddingExperienceConfiguration m_experienceConfiguration;
    bool m_experienceConfigurationHasBeenSet;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
