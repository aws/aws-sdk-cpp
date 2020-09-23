/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/QuickSightRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace QuickSight
{
namespace Model
{

  /**
   */
  class AWS_QUICKSIGHT_API UpdateAccountSettingsRequest : public QuickSightRequest
  {
  public:
    UpdateAccountSettingsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateAccountSettings"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The ID for the AWS account that contains the QuickSight settings that you
     * want to list.</p>
     */
    inline const Aws::String& GetAwsAccountId() const{ return m_awsAccountId; }

    /**
     * <p>The ID for the AWS account that contains the QuickSight settings that you
     * want to list.</p>
     */
    inline bool AwsAccountIdHasBeenSet() const { return m_awsAccountIdHasBeenSet; }

    /**
     * <p>The ID for the AWS account that contains the QuickSight settings that you
     * want to list.</p>
     */
    inline void SetAwsAccountId(const Aws::String& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = value; }

    /**
     * <p>The ID for the AWS account that contains the QuickSight settings that you
     * want to list.</p>
     */
    inline void SetAwsAccountId(Aws::String&& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = std::move(value); }

    /**
     * <p>The ID for the AWS account that contains the QuickSight settings that you
     * want to list.</p>
     */
    inline void SetAwsAccountId(const char* value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId.assign(value); }

    /**
     * <p>The ID for the AWS account that contains the QuickSight settings that you
     * want to list.</p>
     */
    inline UpdateAccountSettingsRequest& WithAwsAccountId(const Aws::String& value) { SetAwsAccountId(value); return *this;}

    /**
     * <p>The ID for the AWS account that contains the QuickSight settings that you
     * want to list.</p>
     */
    inline UpdateAccountSettingsRequest& WithAwsAccountId(Aws::String&& value) { SetAwsAccountId(std::move(value)); return *this;}

    /**
     * <p>The ID for the AWS account that contains the QuickSight settings that you
     * want to list.</p>
     */
    inline UpdateAccountSettingsRequest& WithAwsAccountId(const char* value) { SetAwsAccountId(value); return *this;}


    /**
     * <p>The default namespace for this AWS account. Currently, the default is
     * <code>default</code>. AWS Identity and Access Management (IAM) users that
     * register for the first time with QuickSight provide an email that becomes
     * associated with the default namespace.</p>
     */
    inline const Aws::String& GetDefaultNamespace() const{ return m_defaultNamespace; }

    /**
     * <p>The default namespace for this AWS account. Currently, the default is
     * <code>default</code>. AWS Identity and Access Management (IAM) users that
     * register for the first time with QuickSight provide an email that becomes
     * associated with the default namespace.</p>
     */
    inline bool DefaultNamespaceHasBeenSet() const { return m_defaultNamespaceHasBeenSet; }

    /**
     * <p>The default namespace for this AWS account. Currently, the default is
     * <code>default</code>. AWS Identity and Access Management (IAM) users that
     * register for the first time with QuickSight provide an email that becomes
     * associated with the default namespace.</p>
     */
    inline void SetDefaultNamespace(const Aws::String& value) { m_defaultNamespaceHasBeenSet = true; m_defaultNamespace = value; }

    /**
     * <p>The default namespace for this AWS account. Currently, the default is
     * <code>default</code>. AWS Identity and Access Management (IAM) users that
     * register for the first time with QuickSight provide an email that becomes
     * associated with the default namespace.</p>
     */
    inline void SetDefaultNamespace(Aws::String&& value) { m_defaultNamespaceHasBeenSet = true; m_defaultNamespace = std::move(value); }

    /**
     * <p>The default namespace for this AWS account. Currently, the default is
     * <code>default</code>. AWS Identity and Access Management (IAM) users that
     * register for the first time with QuickSight provide an email that becomes
     * associated with the default namespace.</p>
     */
    inline void SetDefaultNamespace(const char* value) { m_defaultNamespaceHasBeenSet = true; m_defaultNamespace.assign(value); }

    /**
     * <p>The default namespace for this AWS account. Currently, the default is
     * <code>default</code>. AWS Identity and Access Management (IAM) users that
     * register for the first time with QuickSight provide an email that becomes
     * associated with the default namespace.</p>
     */
    inline UpdateAccountSettingsRequest& WithDefaultNamespace(const Aws::String& value) { SetDefaultNamespace(value); return *this;}

    /**
     * <p>The default namespace for this AWS account. Currently, the default is
     * <code>default</code>. AWS Identity and Access Management (IAM) users that
     * register for the first time with QuickSight provide an email that becomes
     * associated with the default namespace.</p>
     */
    inline UpdateAccountSettingsRequest& WithDefaultNamespace(Aws::String&& value) { SetDefaultNamespace(std::move(value)); return *this;}

    /**
     * <p>The default namespace for this AWS account. Currently, the default is
     * <code>default</code>. AWS Identity and Access Management (IAM) users that
     * register for the first time with QuickSight provide an email that becomes
     * associated with the default namespace.</p>
     */
    inline UpdateAccountSettingsRequest& WithDefaultNamespace(const char* value) { SetDefaultNamespace(value); return *this;}


    /**
     * <p>The email address that you want QuickSight to send notifications to regarding
     * your AWS account or QuickSight subscription.</p>
     */
    inline const Aws::String& GetNotificationEmail() const{ return m_notificationEmail; }

    /**
     * <p>The email address that you want QuickSight to send notifications to regarding
     * your AWS account or QuickSight subscription.</p>
     */
    inline bool NotificationEmailHasBeenSet() const { return m_notificationEmailHasBeenSet; }

    /**
     * <p>The email address that you want QuickSight to send notifications to regarding
     * your AWS account or QuickSight subscription.</p>
     */
    inline void SetNotificationEmail(const Aws::String& value) { m_notificationEmailHasBeenSet = true; m_notificationEmail = value; }

    /**
     * <p>The email address that you want QuickSight to send notifications to regarding
     * your AWS account or QuickSight subscription.</p>
     */
    inline void SetNotificationEmail(Aws::String&& value) { m_notificationEmailHasBeenSet = true; m_notificationEmail = std::move(value); }

    /**
     * <p>The email address that you want QuickSight to send notifications to regarding
     * your AWS account or QuickSight subscription.</p>
     */
    inline void SetNotificationEmail(const char* value) { m_notificationEmailHasBeenSet = true; m_notificationEmail.assign(value); }

    /**
     * <p>The email address that you want QuickSight to send notifications to regarding
     * your AWS account or QuickSight subscription.</p>
     */
    inline UpdateAccountSettingsRequest& WithNotificationEmail(const Aws::String& value) { SetNotificationEmail(value); return *this;}

    /**
     * <p>The email address that you want QuickSight to send notifications to regarding
     * your AWS account or QuickSight subscription.</p>
     */
    inline UpdateAccountSettingsRequest& WithNotificationEmail(Aws::String&& value) { SetNotificationEmail(std::move(value)); return *this;}

    /**
     * <p>The email address that you want QuickSight to send notifications to regarding
     * your AWS account or QuickSight subscription.</p>
     */
    inline UpdateAccountSettingsRequest& WithNotificationEmail(const char* value) { SetNotificationEmail(value); return *this;}

  private:

    Aws::String m_awsAccountId;
    bool m_awsAccountIdHasBeenSet;

    Aws::String m_defaultNamespace;
    bool m_defaultNamespaceHasBeenSet;

    Aws::String m_notificationEmail;
    bool m_notificationEmailHasBeenSet;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
