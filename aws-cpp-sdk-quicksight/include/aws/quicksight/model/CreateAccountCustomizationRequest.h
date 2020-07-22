/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/QuickSightRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/AccountCustomization.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace QuickSight
{
namespace Model
{

  /**
   */
  class AWS_QUICKSIGHT_API CreateAccountCustomizationRequest : public QuickSightRequest
  {
  public:
    CreateAccountCustomizationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateAccountCustomization"; }

    Aws::String SerializePayload() const override;

    void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The ID for the AWS account that you want to customize QuickSight for.</p>
     */
    inline const Aws::String& GetAwsAccountId() const{ return m_awsAccountId; }

    /**
     * <p>The ID for the AWS account that you want to customize QuickSight for.</p>
     */
    inline bool AwsAccountIdHasBeenSet() const { return m_awsAccountIdHasBeenSet; }

    /**
     * <p>The ID for the AWS account that you want to customize QuickSight for.</p>
     */
    inline void SetAwsAccountId(const Aws::String& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = value; }

    /**
     * <p>The ID for the AWS account that you want to customize QuickSight for.</p>
     */
    inline void SetAwsAccountId(Aws::String&& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = std::move(value); }

    /**
     * <p>The ID for the AWS account that you want to customize QuickSight for.</p>
     */
    inline void SetAwsAccountId(const char* value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId.assign(value); }

    /**
     * <p>The ID for the AWS account that you want to customize QuickSight for.</p>
     */
    inline CreateAccountCustomizationRequest& WithAwsAccountId(const Aws::String& value) { SetAwsAccountId(value); return *this;}

    /**
     * <p>The ID for the AWS account that you want to customize QuickSight for.</p>
     */
    inline CreateAccountCustomizationRequest& WithAwsAccountId(Aws::String&& value) { SetAwsAccountId(std::move(value)); return *this;}

    /**
     * <p>The ID for the AWS account that you want to customize QuickSight for.</p>
     */
    inline CreateAccountCustomizationRequest& WithAwsAccountId(const char* value) { SetAwsAccountId(value); return *this;}


    /**
     * <p>The namespace associated with the customization that you're creating.</p>
     */
    inline const Aws::String& GetNamespace() const{ return m_namespace; }

    /**
     * <p>The namespace associated with the customization that you're creating.</p>
     */
    inline bool NamespaceHasBeenSet() const { return m_namespaceHasBeenSet; }

    /**
     * <p>The namespace associated with the customization that you're creating.</p>
     */
    inline void SetNamespace(const Aws::String& value) { m_namespaceHasBeenSet = true; m_namespace = value; }

    /**
     * <p>The namespace associated with the customization that you're creating.</p>
     */
    inline void SetNamespace(Aws::String&& value) { m_namespaceHasBeenSet = true; m_namespace = std::move(value); }

    /**
     * <p>The namespace associated with the customization that you're creating.</p>
     */
    inline void SetNamespace(const char* value) { m_namespaceHasBeenSet = true; m_namespace.assign(value); }

    /**
     * <p>The namespace associated with the customization that you're creating.</p>
     */
    inline CreateAccountCustomizationRequest& WithNamespace(const Aws::String& value) { SetNamespace(value); return *this;}

    /**
     * <p>The namespace associated with the customization that you're creating.</p>
     */
    inline CreateAccountCustomizationRequest& WithNamespace(Aws::String&& value) { SetNamespace(std::move(value)); return *this;}

    /**
     * <p>The namespace associated with the customization that you're creating.</p>
     */
    inline CreateAccountCustomizationRequest& WithNamespace(const char* value) { SetNamespace(value); return *this;}


    /**
     * <p>The customizations you're adding to the QuickSight subscription for the AWS
     * account. For example, you could add a default theme by setting
     * <code>AccountCustomization</code> to the midnight theme
     * (<code>DefaultTheme="arn:aws:quicksight::aws:theme/MIDNIGHT"</code>) or to a
     * custom theme
     * (<code>DefaultTheme="arn:aws:quicksight:us-west-2:111122223333:theme/bdb844d0-0fe9-4d9d-b520-0fe602d93639"</code>).</p>
     */
    inline const AccountCustomization& GetAccountCustomization() const{ return m_accountCustomization; }

    /**
     * <p>The customizations you're adding to the QuickSight subscription for the AWS
     * account. For example, you could add a default theme by setting
     * <code>AccountCustomization</code> to the midnight theme
     * (<code>DefaultTheme="arn:aws:quicksight::aws:theme/MIDNIGHT"</code>) or to a
     * custom theme
     * (<code>DefaultTheme="arn:aws:quicksight:us-west-2:111122223333:theme/bdb844d0-0fe9-4d9d-b520-0fe602d93639"</code>).</p>
     */
    inline bool AccountCustomizationHasBeenSet() const { return m_accountCustomizationHasBeenSet; }

    /**
     * <p>The customizations you're adding to the QuickSight subscription for the AWS
     * account. For example, you could add a default theme by setting
     * <code>AccountCustomization</code> to the midnight theme
     * (<code>DefaultTheme="arn:aws:quicksight::aws:theme/MIDNIGHT"</code>) or to a
     * custom theme
     * (<code>DefaultTheme="arn:aws:quicksight:us-west-2:111122223333:theme/bdb844d0-0fe9-4d9d-b520-0fe602d93639"</code>).</p>
     */
    inline void SetAccountCustomization(const AccountCustomization& value) { m_accountCustomizationHasBeenSet = true; m_accountCustomization = value; }

    /**
     * <p>The customizations you're adding to the QuickSight subscription for the AWS
     * account. For example, you could add a default theme by setting
     * <code>AccountCustomization</code> to the midnight theme
     * (<code>DefaultTheme="arn:aws:quicksight::aws:theme/MIDNIGHT"</code>) or to a
     * custom theme
     * (<code>DefaultTheme="arn:aws:quicksight:us-west-2:111122223333:theme/bdb844d0-0fe9-4d9d-b520-0fe602d93639"</code>).</p>
     */
    inline void SetAccountCustomization(AccountCustomization&& value) { m_accountCustomizationHasBeenSet = true; m_accountCustomization = std::move(value); }

    /**
     * <p>The customizations you're adding to the QuickSight subscription for the AWS
     * account. For example, you could add a default theme by setting
     * <code>AccountCustomization</code> to the midnight theme
     * (<code>DefaultTheme="arn:aws:quicksight::aws:theme/MIDNIGHT"</code>) or to a
     * custom theme
     * (<code>DefaultTheme="arn:aws:quicksight:us-west-2:111122223333:theme/bdb844d0-0fe9-4d9d-b520-0fe602d93639"</code>).</p>
     */
    inline CreateAccountCustomizationRequest& WithAccountCustomization(const AccountCustomization& value) { SetAccountCustomization(value); return *this;}

    /**
     * <p>The customizations you're adding to the QuickSight subscription for the AWS
     * account. For example, you could add a default theme by setting
     * <code>AccountCustomization</code> to the midnight theme
     * (<code>DefaultTheme="arn:aws:quicksight::aws:theme/MIDNIGHT"</code>) or to a
     * custom theme
     * (<code>DefaultTheme="arn:aws:quicksight:us-west-2:111122223333:theme/bdb844d0-0fe9-4d9d-b520-0fe602d93639"</code>).</p>
     */
    inline CreateAccountCustomizationRequest& WithAccountCustomization(AccountCustomization&& value) { SetAccountCustomization(std::move(value)); return *this;}

  private:

    Aws::String m_awsAccountId;
    bool m_awsAccountIdHasBeenSet;

    Aws::String m_namespace;
    bool m_namespaceHasBeenSet;

    AccountCustomization m_accountCustomization;
    bool m_accountCustomizationHasBeenSet;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
