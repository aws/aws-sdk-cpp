/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/Edition.h>
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
namespace QuickSight
{
namespace Model
{

  /**
   * <p>The QuickSight settings associated with your AWS account.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/AccountSettings">AWS
   * API Reference</a></p>
   */
  class AWS_QUICKSIGHT_API AccountSettings
  {
  public:
    AccountSettings();
    AccountSettings(Aws::Utils::Json::JsonView jsonValue);
    AccountSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The "account name" you provided for the QuickSight subscription in your AWS
     * account. You create this name when you sign up for QuickSight. It is unique in
     * all of AWS and it appears only in the console when users sign in.</p>
     */
    inline const Aws::String& GetAccountName() const{ return m_accountName; }

    /**
     * <p>The "account name" you provided for the QuickSight subscription in your AWS
     * account. You create this name when you sign up for QuickSight. It is unique in
     * all of AWS and it appears only in the console when users sign in.</p>
     */
    inline bool AccountNameHasBeenSet() const { return m_accountNameHasBeenSet; }

    /**
     * <p>The "account name" you provided for the QuickSight subscription in your AWS
     * account. You create this name when you sign up for QuickSight. It is unique in
     * all of AWS and it appears only in the console when users sign in.</p>
     */
    inline void SetAccountName(const Aws::String& value) { m_accountNameHasBeenSet = true; m_accountName = value; }

    /**
     * <p>The "account name" you provided for the QuickSight subscription in your AWS
     * account. You create this name when you sign up for QuickSight. It is unique in
     * all of AWS and it appears only in the console when users sign in.</p>
     */
    inline void SetAccountName(Aws::String&& value) { m_accountNameHasBeenSet = true; m_accountName = std::move(value); }

    /**
     * <p>The "account name" you provided for the QuickSight subscription in your AWS
     * account. You create this name when you sign up for QuickSight. It is unique in
     * all of AWS and it appears only in the console when users sign in.</p>
     */
    inline void SetAccountName(const char* value) { m_accountNameHasBeenSet = true; m_accountName.assign(value); }

    /**
     * <p>The "account name" you provided for the QuickSight subscription in your AWS
     * account. You create this name when you sign up for QuickSight. It is unique in
     * all of AWS and it appears only in the console when users sign in.</p>
     */
    inline AccountSettings& WithAccountName(const Aws::String& value) { SetAccountName(value); return *this;}

    /**
     * <p>The "account name" you provided for the QuickSight subscription in your AWS
     * account. You create this name when you sign up for QuickSight. It is unique in
     * all of AWS and it appears only in the console when users sign in.</p>
     */
    inline AccountSettings& WithAccountName(Aws::String&& value) { SetAccountName(std::move(value)); return *this;}

    /**
     * <p>The "account name" you provided for the QuickSight subscription in your AWS
     * account. You create this name when you sign up for QuickSight. It is unique in
     * all of AWS and it appears only in the console when users sign in.</p>
     */
    inline AccountSettings& WithAccountName(const char* value) { SetAccountName(value); return *this;}


    /**
     * <p>The edition of QuickSight that you're currently subscribed to: Enterprise
     * edition or Standard edition.</p>
     */
    inline const Edition& GetEdition() const{ return m_edition; }

    /**
     * <p>The edition of QuickSight that you're currently subscribed to: Enterprise
     * edition or Standard edition.</p>
     */
    inline bool EditionHasBeenSet() const { return m_editionHasBeenSet; }

    /**
     * <p>The edition of QuickSight that you're currently subscribed to: Enterprise
     * edition or Standard edition.</p>
     */
    inline void SetEdition(const Edition& value) { m_editionHasBeenSet = true; m_edition = value; }

    /**
     * <p>The edition of QuickSight that you're currently subscribed to: Enterprise
     * edition or Standard edition.</p>
     */
    inline void SetEdition(Edition&& value) { m_editionHasBeenSet = true; m_edition = std::move(value); }

    /**
     * <p>The edition of QuickSight that you're currently subscribed to: Enterprise
     * edition or Standard edition.</p>
     */
    inline AccountSettings& WithEdition(const Edition& value) { SetEdition(value); return *this;}

    /**
     * <p>The edition of QuickSight that you're currently subscribed to: Enterprise
     * edition or Standard edition.</p>
     */
    inline AccountSettings& WithEdition(Edition&& value) { SetEdition(std::move(value)); return *this;}


    /**
     * <p>The default QuickSight namespace for your AWS account. </p>
     */
    inline const Aws::String& GetDefaultNamespace() const{ return m_defaultNamespace; }

    /**
     * <p>The default QuickSight namespace for your AWS account. </p>
     */
    inline bool DefaultNamespaceHasBeenSet() const { return m_defaultNamespaceHasBeenSet; }

    /**
     * <p>The default QuickSight namespace for your AWS account. </p>
     */
    inline void SetDefaultNamespace(const Aws::String& value) { m_defaultNamespaceHasBeenSet = true; m_defaultNamespace = value; }

    /**
     * <p>The default QuickSight namespace for your AWS account. </p>
     */
    inline void SetDefaultNamespace(Aws::String&& value) { m_defaultNamespaceHasBeenSet = true; m_defaultNamespace = std::move(value); }

    /**
     * <p>The default QuickSight namespace for your AWS account. </p>
     */
    inline void SetDefaultNamespace(const char* value) { m_defaultNamespaceHasBeenSet = true; m_defaultNamespace.assign(value); }

    /**
     * <p>The default QuickSight namespace for your AWS account. </p>
     */
    inline AccountSettings& WithDefaultNamespace(const Aws::String& value) { SetDefaultNamespace(value); return *this;}

    /**
     * <p>The default QuickSight namespace for your AWS account. </p>
     */
    inline AccountSettings& WithDefaultNamespace(Aws::String&& value) { SetDefaultNamespace(std::move(value)); return *this;}

    /**
     * <p>The default QuickSight namespace for your AWS account. </p>
     */
    inline AccountSettings& WithDefaultNamespace(const char* value) { SetDefaultNamespace(value); return *this;}


    /**
     * <p>The main notification email for your QuickSight subscription.</p>
     */
    inline const Aws::String& GetNotificationEmail() const{ return m_notificationEmail; }

    /**
     * <p>The main notification email for your QuickSight subscription.</p>
     */
    inline bool NotificationEmailHasBeenSet() const { return m_notificationEmailHasBeenSet; }

    /**
     * <p>The main notification email for your QuickSight subscription.</p>
     */
    inline void SetNotificationEmail(const Aws::String& value) { m_notificationEmailHasBeenSet = true; m_notificationEmail = value; }

    /**
     * <p>The main notification email for your QuickSight subscription.</p>
     */
    inline void SetNotificationEmail(Aws::String&& value) { m_notificationEmailHasBeenSet = true; m_notificationEmail = std::move(value); }

    /**
     * <p>The main notification email for your QuickSight subscription.</p>
     */
    inline void SetNotificationEmail(const char* value) { m_notificationEmailHasBeenSet = true; m_notificationEmail.assign(value); }

    /**
     * <p>The main notification email for your QuickSight subscription.</p>
     */
    inline AccountSettings& WithNotificationEmail(const Aws::String& value) { SetNotificationEmail(value); return *this;}

    /**
     * <p>The main notification email for your QuickSight subscription.</p>
     */
    inline AccountSettings& WithNotificationEmail(Aws::String&& value) { SetNotificationEmail(std::move(value)); return *this;}

    /**
     * <p>The main notification email for your QuickSight subscription.</p>
     */
    inline AccountSettings& WithNotificationEmail(const char* value) { SetNotificationEmail(value); return *this;}

  private:

    Aws::String m_accountName;
    bool m_accountNameHasBeenSet;

    Edition m_edition;
    bool m_editionHasBeenSet;

    Aws::String m_defaultNamespace;
    bool m_defaultNamespaceHasBeenSet;

    Aws::String m_notificationEmail;
    bool m_notificationEmailHasBeenSet;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
