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
#include <aws/servicecatalog/ServiceCatalog_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace ServiceCatalog
{
namespace Model
{

  /**
   * <p>The user-defined preferences that will be applied when updating a provisioned
   * product. Not all preferences are applicable to all provisioned product
   * types.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/ProvisioningPreferences">AWS
   * API Reference</a></p>
   */
  class AWS_SERVICECATALOG_API ProvisioningPreferences
  {
  public:
    ProvisioningPreferences();
    ProvisioningPreferences(Aws::Utils::Json::JsonView jsonValue);
    ProvisioningPreferences& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>One or more AWS accounts that will have access to the provisioned
     * product.</p> <p>Applicable only to a <code>CFN_STACKSET</code> provisioned
     * product type.</p> <p>The AWS accounts specified should be within the list of
     * accounts in the <code>STACKSET</code> constraint. To get the list of accounts in
     * the <code>STACKSET</code> constraint, use the
     * <code>DescribeProvisioningParameters</code> operation.</p> <p>If no values are
     * specified, the default value is all accounts from the <code>STACKSET</code>
     * constraint.</p>
     */
    inline const Aws::Vector<Aws::String>& GetStackSetAccounts() const{ return m_stackSetAccounts; }

    /**
     * <p>One or more AWS accounts that will have access to the provisioned
     * product.</p> <p>Applicable only to a <code>CFN_STACKSET</code> provisioned
     * product type.</p> <p>The AWS accounts specified should be within the list of
     * accounts in the <code>STACKSET</code> constraint. To get the list of accounts in
     * the <code>STACKSET</code> constraint, use the
     * <code>DescribeProvisioningParameters</code> operation.</p> <p>If no values are
     * specified, the default value is all accounts from the <code>STACKSET</code>
     * constraint.</p>
     */
    inline bool StackSetAccountsHasBeenSet() const { return m_stackSetAccountsHasBeenSet; }

    /**
     * <p>One or more AWS accounts that will have access to the provisioned
     * product.</p> <p>Applicable only to a <code>CFN_STACKSET</code> provisioned
     * product type.</p> <p>The AWS accounts specified should be within the list of
     * accounts in the <code>STACKSET</code> constraint. To get the list of accounts in
     * the <code>STACKSET</code> constraint, use the
     * <code>DescribeProvisioningParameters</code> operation.</p> <p>If no values are
     * specified, the default value is all accounts from the <code>STACKSET</code>
     * constraint.</p>
     */
    inline void SetStackSetAccounts(const Aws::Vector<Aws::String>& value) { m_stackSetAccountsHasBeenSet = true; m_stackSetAccounts = value; }

    /**
     * <p>One or more AWS accounts that will have access to the provisioned
     * product.</p> <p>Applicable only to a <code>CFN_STACKSET</code> provisioned
     * product type.</p> <p>The AWS accounts specified should be within the list of
     * accounts in the <code>STACKSET</code> constraint. To get the list of accounts in
     * the <code>STACKSET</code> constraint, use the
     * <code>DescribeProvisioningParameters</code> operation.</p> <p>If no values are
     * specified, the default value is all accounts from the <code>STACKSET</code>
     * constraint.</p>
     */
    inline void SetStackSetAccounts(Aws::Vector<Aws::String>&& value) { m_stackSetAccountsHasBeenSet = true; m_stackSetAccounts = std::move(value); }

    /**
     * <p>One or more AWS accounts that will have access to the provisioned
     * product.</p> <p>Applicable only to a <code>CFN_STACKSET</code> provisioned
     * product type.</p> <p>The AWS accounts specified should be within the list of
     * accounts in the <code>STACKSET</code> constraint. To get the list of accounts in
     * the <code>STACKSET</code> constraint, use the
     * <code>DescribeProvisioningParameters</code> operation.</p> <p>If no values are
     * specified, the default value is all accounts from the <code>STACKSET</code>
     * constraint.</p>
     */
    inline ProvisioningPreferences& WithStackSetAccounts(const Aws::Vector<Aws::String>& value) { SetStackSetAccounts(value); return *this;}

    /**
     * <p>One or more AWS accounts that will have access to the provisioned
     * product.</p> <p>Applicable only to a <code>CFN_STACKSET</code> provisioned
     * product type.</p> <p>The AWS accounts specified should be within the list of
     * accounts in the <code>STACKSET</code> constraint. To get the list of accounts in
     * the <code>STACKSET</code> constraint, use the
     * <code>DescribeProvisioningParameters</code> operation.</p> <p>If no values are
     * specified, the default value is all accounts from the <code>STACKSET</code>
     * constraint.</p>
     */
    inline ProvisioningPreferences& WithStackSetAccounts(Aws::Vector<Aws::String>&& value) { SetStackSetAccounts(std::move(value)); return *this;}

    /**
     * <p>One or more AWS accounts that will have access to the provisioned
     * product.</p> <p>Applicable only to a <code>CFN_STACKSET</code> provisioned
     * product type.</p> <p>The AWS accounts specified should be within the list of
     * accounts in the <code>STACKSET</code> constraint. To get the list of accounts in
     * the <code>STACKSET</code> constraint, use the
     * <code>DescribeProvisioningParameters</code> operation.</p> <p>If no values are
     * specified, the default value is all accounts from the <code>STACKSET</code>
     * constraint.</p>
     */
    inline ProvisioningPreferences& AddStackSetAccounts(const Aws::String& value) { m_stackSetAccountsHasBeenSet = true; m_stackSetAccounts.push_back(value); return *this; }

    /**
     * <p>One or more AWS accounts that will have access to the provisioned
     * product.</p> <p>Applicable only to a <code>CFN_STACKSET</code> provisioned
     * product type.</p> <p>The AWS accounts specified should be within the list of
     * accounts in the <code>STACKSET</code> constraint. To get the list of accounts in
     * the <code>STACKSET</code> constraint, use the
     * <code>DescribeProvisioningParameters</code> operation.</p> <p>If no values are
     * specified, the default value is all accounts from the <code>STACKSET</code>
     * constraint.</p>
     */
    inline ProvisioningPreferences& AddStackSetAccounts(Aws::String&& value) { m_stackSetAccountsHasBeenSet = true; m_stackSetAccounts.push_back(std::move(value)); return *this; }

    /**
     * <p>One or more AWS accounts that will have access to the provisioned
     * product.</p> <p>Applicable only to a <code>CFN_STACKSET</code> provisioned
     * product type.</p> <p>The AWS accounts specified should be within the list of
     * accounts in the <code>STACKSET</code> constraint. To get the list of accounts in
     * the <code>STACKSET</code> constraint, use the
     * <code>DescribeProvisioningParameters</code> operation.</p> <p>If no values are
     * specified, the default value is all accounts from the <code>STACKSET</code>
     * constraint.</p>
     */
    inline ProvisioningPreferences& AddStackSetAccounts(const char* value) { m_stackSetAccountsHasBeenSet = true; m_stackSetAccounts.push_back(value); return *this; }


    /**
     * <p>One or more AWS Regions where the provisioned product will be available.</p>
     * <p>Applicable only to a <code>CFN_STACKSET</code> provisioned product type.</p>
     * <p>The specified regions should be within the list of regions from the
     * <code>STACKSET</code> constraint. To get the list of regions in the
     * <code>STACKSET</code> constraint, use the
     * <code>DescribeProvisioningParameters</code> operation.</p> <p>If no values are
     * specified, the default value is all regions from the <code>STACKSET</code>
     * constraint.</p>
     */
    inline const Aws::Vector<Aws::String>& GetStackSetRegions() const{ return m_stackSetRegions; }

    /**
     * <p>One or more AWS Regions where the provisioned product will be available.</p>
     * <p>Applicable only to a <code>CFN_STACKSET</code> provisioned product type.</p>
     * <p>The specified regions should be within the list of regions from the
     * <code>STACKSET</code> constraint. To get the list of regions in the
     * <code>STACKSET</code> constraint, use the
     * <code>DescribeProvisioningParameters</code> operation.</p> <p>If no values are
     * specified, the default value is all regions from the <code>STACKSET</code>
     * constraint.</p>
     */
    inline bool StackSetRegionsHasBeenSet() const { return m_stackSetRegionsHasBeenSet; }

    /**
     * <p>One or more AWS Regions where the provisioned product will be available.</p>
     * <p>Applicable only to a <code>CFN_STACKSET</code> provisioned product type.</p>
     * <p>The specified regions should be within the list of regions from the
     * <code>STACKSET</code> constraint. To get the list of regions in the
     * <code>STACKSET</code> constraint, use the
     * <code>DescribeProvisioningParameters</code> operation.</p> <p>If no values are
     * specified, the default value is all regions from the <code>STACKSET</code>
     * constraint.</p>
     */
    inline void SetStackSetRegions(const Aws::Vector<Aws::String>& value) { m_stackSetRegionsHasBeenSet = true; m_stackSetRegions = value; }

    /**
     * <p>One or more AWS Regions where the provisioned product will be available.</p>
     * <p>Applicable only to a <code>CFN_STACKSET</code> provisioned product type.</p>
     * <p>The specified regions should be within the list of regions from the
     * <code>STACKSET</code> constraint. To get the list of regions in the
     * <code>STACKSET</code> constraint, use the
     * <code>DescribeProvisioningParameters</code> operation.</p> <p>If no values are
     * specified, the default value is all regions from the <code>STACKSET</code>
     * constraint.</p>
     */
    inline void SetStackSetRegions(Aws::Vector<Aws::String>&& value) { m_stackSetRegionsHasBeenSet = true; m_stackSetRegions = std::move(value); }

    /**
     * <p>One or more AWS Regions where the provisioned product will be available.</p>
     * <p>Applicable only to a <code>CFN_STACKSET</code> provisioned product type.</p>
     * <p>The specified regions should be within the list of regions from the
     * <code>STACKSET</code> constraint. To get the list of regions in the
     * <code>STACKSET</code> constraint, use the
     * <code>DescribeProvisioningParameters</code> operation.</p> <p>If no values are
     * specified, the default value is all regions from the <code>STACKSET</code>
     * constraint.</p>
     */
    inline ProvisioningPreferences& WithStackSetRegions(const Aws::Vector<Aws::String>& value) { SetStackSetRegions(value); return *this;}

    /**
     * <p>One or more AWS Regions where the provisioned product will be available.</p>
     * <p>Applicable only to a <code>CFN_STACKSET</code> provisioned product type.</p>
     * <p>The specified regions should be within the list of regions from the
     * <code>STACKSET</code> constraint. To get the list of regions in the
     * <code>STACKSET</code> constraint, use the
     * <code>DescribeProvisioningParameters</code> operation.</p> <p>If no values are
     * specified, the default value is all regions from the <code>STACKSET</code>
     * constraint.</p>
     */
    inline ProvisioningPreferences& WithStackSetRegions(Aws::Vector<Aws::String>&& value) { SetStackSetRegions(std::move(value)); return *this;}

    /**
     * <p>One or more AWS Regions where the provisioned product will be available.</p>
     * <p>Applicable only to a <code>CFN_STACKSET</code> provisioned product type.</p>
     * <p>The specified regions should be within the list of regions from the
     * <code>STACKSET</code> constraint. To get the list of regions in the
     * <code>STACKSET</code> constraint, use the
     * <code>DescribeProvisioningParameters</code> operation.</p> <p>If no values are
     * specified, the default value is all regions from the <code>STACKSET</code>
     * constraint.</p>
     */
    inline ProvisioningPreferences& AddStackSetRegions(const Aws::String& value) { m_stackSetRegionsHasBeenSet = true; m_stackSetRegions.push_back(value); return *this; }

    /**
     * <p>One or more AWS Regions where the provisioned product will be available.</p>
     * <p>Applicable only to a <code>CFN_STACKSET</code> provisioned product type.</p>
     * <p>The specified regions should be within the list of regions from the
     * <code>STACKSET</code> constraint. To get the list of regions in the
     * <code>STACKSET</code> constraint, use the
     * <code>DescribeProvisioningParameters</code> operation.</p> <p>If no values are
     * specified, the default value is all regions from the <code>STACKSET</code>
     * constraint.</p>
     */
    inline ProvisioningPreferences& AddStackSetRegions(Aws::String&& value) { m_stackSetRegionsHasBeenSet = true; m_stackSetRegions.push_back(std::move(value)); return *this; }

    /**
     * <p>One or more AWS Regions where the provisioned product will be available.</p>
     * <p>Applicable only to a <code>CFN_STACKSET</code> provisioned product type.</p>
     * <p>The specified regions should be within the list of regions from the
     * <code>STACKSET</code> constraint. To get the list of regions in the
     * <code>STACKSET</code> constraint, use the
     * <code>DescribeProvisioningParameters</code> operation.</p> <p>If no values are
     * specified, the default value is all regions from the <code>STACKSET</code>
     * constraint.</p>
     */
    inline ProvisioningPreferences& AddStackSetRegions(const char* value) { m_stackSetRegionsHasBeenSet = true; m_stackSetRegions.push_back(value); return *this; }


    /**
     * <p>The number of accounts, per region, for which this operation can fail before
     * AWS Service Catalog stops the operation in that region. If the operation is
     * stopped in a region, AWS Service Catalog doesn't attempt the operation in any
     * subsequent regions.</p> <p>Applicable only to a <code>CFN_STACKSET</code>
     * provisioned product type.</p> <p>Conditional: You must specify either
     * <code>StackSetFailureToleranceCount</code> or
     * <code>StackSetFailureTolerancePercentage</code>, but not both.</p> <p>The
     * default value is <code>0</code> if no value is specified.</p>
     */
    inline int GetStackSetFailureToleranceCount() const{ return m_stackSetFailureToleranceCount; }

    /**
     * <p>The number of accounts, per region, for which this operation can fail before
     * AWS Service Catalog stops the operation in that region. If the operation is
     * stopped in a region, AWS Service Catalog doesn't attempt the operation in any
     * subsequent regions.</p> <p>Applicable only to a <code>CFN_STACKSET</code>
     * provisioned product type.</p> <p>Conditional: You must specify either
     * <code>StackSetFailureToleranceCount</code> or
     * <code>StackSetFailureTolerancePercentage</code>, but not both.</p> <p>The
     * default value is <code>0</code> if no value is specified.</p>
     */
    inline bool StackSetFailureToleranceCountHasBeenSet() const { return m_stackSetFailureToleranceCountHasBeenSet; }

    /**
     * <p>The number of accounts, per region, for which this operation can fail before
     * AWS Service Catalog stops the operation in that region. If the operation is
     * stopped in a region, AWS Service Catalog doesn't attempt the operation in any
     * subsequent regions.</p> <p>Applicable only to a <code>CFN_STACKSET</code>
     * provisioned product type.</p> <p>Conditional: You must specify either
     * <code>StackSetFailureToleranceCount</code> or
     * <code>StackSetFailureTolerancePercentage</code>, but not both.</p> <p>The
     * default value is <code>0</code> if no value is specified.</p>
     */
    inline void SetStackSetFailureToleranceCount(int value) { m_stackSetFailureToleranceCountHasBeenSet = true; m_stackSetFailureToleranceCount = value; }

    /**
     * <p>The number of accounts, per region, for which this operation can fail before
     * AWS Service Catalog stops the operation in that region. If the operation is
     * stopped in a region, AWS Service Catalog doesn't attempt the operation in any
     * subsequent regions.</p> <p>Applicable only to a <code>CFN_STACKSET</code>
     * provisioned product type.</p> <p>Conditional: You must specify either
     * <code>StackSetFailureToleranceCount</code> or
     * <code>StackSetFailureTolerancePercentage</code>, but not both.</p> <p>The
     * default value is <code>0</code> if no value is specified.</p>
     */
    inline ProvisioningPreferences& WithStackSetFailureToleranceCount(int value) { SetStackSetFailureToleranceCount(value); return *this;}


    /**
     * <p>The percentage of accounts, per region, for which this stack operation can
     * fail before AWS Service Catalog stops the operation in that region. If the
     * operation is stopped in a region, AWS Service Catalog doesn't attempt the
     * operation in any subsequent regions.</p> <p>When calculating the number of
     * accounts based on the specified percentage, AWS Service Catalog rounds down to
     * the next whole number.</p> <p>Applicable only to a <code>CFN_STACKSET</code>
     * provisioned product type.</p> <p>Conditional: You must specify either
     * <code>StackSetFailureToleranceCount</code> or
     * <code>StackSetFailureTolerancePercentage</code>, but not both.</p>
     */
    inline int GetStackSetFailureTolerancePercentage() const{ return m_stackSetFailureTolerancePercentage; }

    /**
     * <p>The percentage of accounts, per region, for which this stack operation can
     * fail before AWS Service Catalog stops the operation in that region. If the
     * operation is stopped in a region, AWS Service Catalog doesn't attempt the
     * operation in any subsequent regions.</p> <p>When calculating the number of
     * accounts based on the specified percentage, AWS Service Catalog rounds down to
     * the next whole number.</p> <p>Applicable only to a <code>CFN_STACKSET</code>
     * provisioned product type.</p> <p>Conditional: You must specify either
     * <code>StackSetFailureToleranceCount</code> or
     * <code>StackSetFailureTolerancePercentage</code>, but not both.</p>
     */
    inline bool StackSetFailureTolerancePercentageHasBeenSet() const { return m_stackSetFailureTolerancePercentageHasBeenSet; }

    /**
     * <p>The percentage of accounts, per region, for which this stack operation can
     * fail before AWS Service Catalog stops the operation in that region. If the
     * operation is stopped in a region, AWS Service Catalog doesn't attempt the
     * operation in any subsequent regions.</p> <p>When calculating the number of
     * accounts based on the specified percentage, AWS Service Catalog rounds down to
     * the next whole number.</p> <p>Applicable only to a <code>CFN_STACKSET</code>
     * provisioned product type.</p> <p>Conditional: You must specify either
     * <code>StackSetFailureToleranceCount</code> or
     * <code>StackSetFailureTolerancePercentage</code>, but not both.</p>
     */
    inline void SetStackSetFailureTolerancePercentage(int value) { m_stackSetFailureTolerancePercentageHasBeenSet = true; m_stackSetFailureTolerancePercentage = value; }

    /**
     * <p>The percentage of accounts, per region, for which this stack operation can
     * fail before AWS Service Catalog stops the operation in that region. If the
     * operation is stopped in a region, AWS Service Catalog doesn't attempt the
     * operation in any subsequent regions.</p> <p>When calculating the number of
     * accounts based on the specified percentage, AWS Service Catalog rounds down to
     * the next whole number.</p> <p>Applicable only to a <code>CFN_STACKSET</code>
     * provisioned product type.</p> <p>Conditional: You must specify either
     * <code>StackSetFailureToleranceCount</code> or
     * <code>StackSetFailureTolerancePercentage</code>, but not both.</p>
     */
    inline ProvisioningPreferences& WithStackSetFailureTolerancePercentage(int value) { SetStackSetFailureTolerancePercentage(value); return *this;}


    /**
     * <p>The maximum number of accounts in which to perform this operation at one
     * time. This is dependent on the value of
     * <code>StackSetFailureToleranceCount</code>.
     * <code>StackSetMaxConcurrentCount</code> is at most one more than the
     * <code>StackSetFailureToleranceCount</code>.</p> <p>Note that this setting lets
     * you specify the maximum for operations. For large deployments, under certain
     * circumstances the actual number of accounts acted upon concurrently may be lower
     * due to service throttling.</p> <p>Applicable only to a <code>CFN_STACKSET</code>
     * provisioned product type.</p> <p>Conditional: You must specify either
     * <code>StackSetMaxConcurrentCount</code> or
     * <code>StackSetMaxConcurrentPercentage</code>, but not both.</p>
     */
    inline int GetStackSetMaxConcurrencyCount() const{ return m_stackSetMaxConcurrencyCount; }

    /**
     * <p>The maximum number of accounts in which to perform this operation at one
     * time. This is dependent on the value of
     * <code>StackSetFailureToleranceCount</code>.
     * <code>StackSetMaxConcurrentCount</code> is at most one more than the
     * <code>StackSetFailureToleranceCount</code>.</p> <p>Note that this setting lets
     * you specify the maximum for operations. For large deployments, under certain
     * circumstances the actual number of accounts acted upon concurrently may be lower
     * due to service throttling.</p> <p>Applicable only to a <code>CFN_STACKSET</code>
     * provisioned product type.</p> <p>Conditional: You must specify either
     * <code>StackSetMaxConcurrentCount</code> or
     * <code>StackSetMaxConcurrentPercentage</code>, but not both.</p>
     */
    inline bool StackSetMaxConcurrencyCountHasBeenSet() const { return m_stackSetMaxConcurrencyCountHasBeenSet; }

    /**
     * <p>The maximum number of accounts in which to perform this operation at one
     * time. This is dependent on the value of
     * <code>StackSetFailureToleranceCount</code>.
     * <code>StackSetMaxConcurrentCount</code> is at most one more than the
     * <code>StackSetFailureToleranceCount</code>.</p> <p>Note that this setting lets
     * you specify the maximum for operations. For large deployments, under certain
     * circumstances the actual number of accounts acted upon concurrently may be lower
     * due to service throttling.</p> <p>Applicable only to a <code>CFN_STACKSET</code>
     * provisioned product type.</p> <p>Conditional: You must specify either
     * <code>StackSetMaxConcurrentCount</code> or
     * <code>StackSetMaxConcurrentPercentage</code>, but not both.</p>
     */
    inline void SetStackSetMaxConcurrencyCount(int value) { m_stackSetMaxConcurrencyCountHasBeenSet = true; m_stackSetMaxConcurrencyCount = value; }

    /**
     * <p>The maximum number of accounts in which to perform this operation at one
     * time. This is dependent on the value of
     * <code>StackSetFailureToleranceCount</code>.
     * <code>StackSetMaxConcurrentCount</code> is at most one more than the
     * <code>StackSetFailureToleranceCount</code>.</p> <p>Note that this setting lets
     * you specify the maximum for operations. For large deployments, under certain
     * circumstances the actual number of accounts acted upon concurrently may be lower
     * due to service throttling.</p> <p>Applicable only to a <code>CFN_STACKSET</code>
     * provisioned product type.</p> <p>Conditional: You must specify either
     * <code>StackSetMaxConcurrentCount</code> or
     * <code>StackSetMaxConcurrentPercentage</code>, but not both.</p>
     */
    inline ProvisioningPreferences& WithStackSetMaxConcurrencyCount(int value) { SetStackSetMaxConcurrencyCount(value); return *this;}


    /**
     * <p>The maximum percentage of accounts in which to perform this operation at one
     * time.</p> <p>When calculating the number of accounts based on the specified
     * percentage, AWS Service Catalog rounds down to the next whole number. This is
     * true except in cases where rounding down would result is zero. In this case, AWS
     * Service Catalog sets the number as <code>1</code> instead.</p> <p>Note that this
     * setting lets you specify the maximum for operations. For large deployments,
     * under certain circumstances the actual number of accounts acted upon
     * concurrently may be lower due to service throttling.</p> <p>Applicable only to a
     * <code>CFN_STACKSET</code> provisioned product type.</p> <p>Conditional: You must
     * specify either <code>StackSetMaxConcurrentCount</code> or
     * <code>StackSetMaxConcurrentPercentage</code>, but not both.</p>
     */
    inline int GetStackSetMaxConcurrencyPercentage() const{ return m_stackSetMaxConcurrencyPercentage; }

    /**
     * <p>The maximum percentage of accounts in which to perform this operation at one
     * time.</p> <p>When calculating the number of accounts based on the specified
     * percentage, AWS Service Catalog rounds down to the next whole number. This is
     * true except in cases where rounding down would result is zero. In this case, AWS
     * Service Catalog sets the number as <code>1</code> instead.</p> <p>Note that this
     * setting lets you specify the maximum for operations. For large deployments,
     * under certain circumstances the actual number of accounts acted upon
     * concurrently may be lower due to service throttling.</p> <p>Applicable only to a
     * <code>CFN_STACKSET</code> provisioned product type.</p> <p>Conditional: You must
     * specify either <code>StackSetMaxConcurrentCount</code> or
     * <code>StackSetMaxConcurrentPercentage</code>, but not both.</p>
     */
    inline bool StackSetMaxConcurrencyPercentageHasBeenSet() const { return m_stackSetMaxConcurrencyPercentageHasBeenSet; }

    /**
     * <p>The maximum percentage of accounts in which to perform this operation at one
     * time.</p> <p>When calculating the number of accounts based on the specified
     * percentage, AWS Service Catalog rounds down to the next whole number. This is
     * true except in cases where rounding down would result is zero. In this case, AWS
     * Service Catalog sets the number as <code>1</code> instead.</p> <p>Note that this
     * setting lets you specify the maximum for operations. For large deployments,
     * under certain circumstances the actual number of accounts acted upon
     * concurrently may be lower due to service throttling.</p> <p>Applicable only to a
     * <code>CFN_STACKSET</code> provisioned product type.</p> <p>Conditional: You must
     * specify either <code>StackSetMaxConcurrentCount</code> or
     * <code>StackSetMaxConcurrentPercentage</code>, but not both.</p>
     */
    inline void SetStackSetMaxConcurrencyPercentage(int value) { m_stackSetMaxConcurrencyPercentageHasBeenSet = true; m_stackSetMaxConcurrencyPercentage = value; }

    /**
     * <p>The maximum percentage of accounts in which to perform this operation at one
     * time.</p> <p>When calculating the number of accounts based on the specified
     * percentage, AWS Service Catalog rounds down to the next whole number. This is
     * true except in cases where rounding down would result is zero. In this case, AWS
     * Service Catalog sets the number as <code>1</code> instead.</p> <p>Note that this
     * setting lets you specify the maximum for operations. For large deployments,
     * under certain circumstances the actual number of accounts acted upon
     * concurrently may be lower due to service throttling.</p> <p>Applicable only to a
     * <code>CFN_STACKSET</code> provisioned product type.</p> <p>Conditional: You must
     * specify either <code>StackSetMaxConcurrentCount</code> or
     * <code>StackSetMaxConcurrentPercentage</code>, but not both.</p>
     */
    inline ProvisioningPreferences& WithStackSetMaxConcurrencyPercentage(int value) { SetStackSetMaxConcurrencyPercentage(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_stackSetAccounts;
    bool m_stackSetAccountsHasBeenSet;

    Aws::Vector<Aws::String> m_stackSetRegions;
    bool m_stackSetRegionsHasBeenSet;

    int m_stackSetFailureToleranceCount;
    bool m_stackSetFailureToleranceCountHasBeenSet;

    int m_stackSetFailureTolerancePercentage;
    bool m_stackSetFailureTolerancePercentageHasBeenSet;

    int m_stackSetMaxConcurrencyCount;
    bool m_stackSetMaxConcurrencyCountHasBeenSet;

    int m_stackSetMaxConcurrencyPercentage;
    bool m_stackSetMaxConcurrencyPercentageHasBeenSet;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
