/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
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
namespace ConfigService
{
namespace Model
{

  /**
   * <p>A collection of accounts and regions.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/AccountAggregationSource">AWS
   * API Reference</a></p>
   */
  class AccountAggregationSource
  {
  public:
    AWS_CONFIGSERVICE_API AccountAggregationSource();
    AWS_CONFIGSERVICE_API AccountAggregationSource(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONFIGSERVICE_API AccountAggregationSource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONFIGSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The 12-digit account ID of the account being aggregated. </p>
     */
    inline const Aws::Vector<Aws::String>& GetAccountIds() const{ return m_accountIds; }

    /**
     * <p>The 12-digit account ID of the account being aggregated. </p>
     */
    inline bool AccountIdsHasBeenSet() const { return m_accountIdsHasBeenSet; }

    /**
     * <p>The 12-digit account ID of the account being aggregated. </p>
     */
    inline void SetAccountIds(const Aws::Vector<Aws::String>& value) { m_accountIdsHasBeenSet = true; m_accountIds = value; }

    /**
     * <p>The 12-digit account ID of the account being aggregated. </p>
     */
    inline void SetAccountIds(Aws::Vector<Aws::String>&& value) { m_accountIdsHasBeenSet = true; m_accountIds = std::move(value); }

    /**
     * <p>The 12-digit account ID of the account being aggregated. </p>
     */
    inline AccountAggregationSource& WithAccountIds(const Aws::Vector<Aws::String>& value) { SetAccountIds(value); return *this;}

    /**
     * <p>The 12-digit account ID of the account being aggregated. </p>
     */
    inline AccountAggregationSource& WithAccountIds(Aws::Vector<Aws::String>&& value) { SetAccountIds(std::move(value)); return *this;}

    /**
     * <p>The 12-digit account ID of the account being aggregated. </p>
     */
    inline AccountAggregationSource& AddAccountIds(const Aws::String& value) { m_accountIdsHasBeenSet = true; m_accountIds.push_back(value); return *this; }

    /**
     * <p>The 12-digit account ID of the account being aggregated. </p>
     */
    inline AccountAggregationSource& AddAccountIds(Aws::String&& value) { m_accountIdsHasBeenSet = true; m_accountIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The 12-digit account ID of the account being aggregated. </p>
     */
    inline AccountAggregationSource& AddAccountIds(const char* value) { m_accountIdsHasBeenSet = true; m_accountIds.push_back(value); return *this; }


    /**
     * <p>If true, aggregate existing Config regions and future regions.</p>
     */
    inline bool GetAllAwsRegions() const{ return m_allAwsRegions; }

    /**
     * <p>If true, aggregate existing Config regions and future regions.</p>
     */
    inline bool AllAwsRegionsHasBeenSet() const { return m_allAwsRegionsHasBeenSet; }

    /**
     * <p>If true, aggregate existing Config regions and future regions.</p>
     */
    inline void SetAllAwsRegions(bool value) { m_allAwsRegionsHasBeenSet = true; m_allAwsRegions = value; }

    /**
     * <p>If true, aggregate existing Config regions and future regions.</p>
     */
    inline AccountAggregationSource& WithAllAwsRegions(bool value) { SetAllAwsRegions(value); return *this;}


    /**
     * <p>The source regions being aggregated.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAwsRegions() const{ return m_awsRegions; }

    /**
     * <p>The source regions being aggregated.</p>
     */
    inline bool AwsRegionsHasBeenSet() const { return m_awsRegionsHasBeenSet; }

    /**
     * <p>The source regions being aggregated.</p>
     */
    inline void SetAwsRegions(const Aws::Vector<Aws::String>& value) { m_awsRegionsHasBeenSet = true; m_awsRegions = value; }

    /**
     * <p>The source regions being aggregated.</p>
     */
    inline void SetAwsRegions(Aws::Vector<Aws::String>&& value) { m_awsRegionsHasBeenSet = true; m_awsRegions = std::move(value); }

    /**
     * <p>The source regions being aggregated.</p>
     */
    inline AccountAggregationSource& WithAwsRegions(const Aws::Vector<Aws::String>& value) { SetAwsRegions(value); return *this;}

    /**
     * <p>The source regions being aggregated.</p>
     */
    inline AccountAggregationSource& WithAwsRegions(Aws::Vector<Aws::String>&& value) { SetAwsRegions(std::move(value)); return *this;}

    /**
     * <p>The source regions being aggregated.</p>
     */
    inline AccountAggregationSource& AddAwsRegions(const Aws::String& value) { m_awsRegionsHasBeenSet = true; m_awsRegions.push_back(value); return *this; }

    /**
     * <p>The source regions being aggregated.</p>
     */
    inline AccountAggregationSource& AddAwsRegions(Aws::String&& value) { m_awsRegionsHasBeenSet = true; m_awsRegions.push_back(std::move(value)); return *this; }

    /**
     * <p>The source regions being aggregated.</p>
     */
    inline AccountAggregationSource& AddAwsRegions(const char* value) { m_awsRegionsHasBeenSet = true; m_awsRegions.push_back(value); return *this; }

  private:

    Aws::Vector<Aws::String> m_accountIds;
    bool m_accountIdsHasBeenSet = false;

    bool m_allAwsRegions;
    bool m_allAwsRegionsHasBeenSet = false;

    Aws::Vector<Aws::String> m_awsRegions;
    bool m_awsRegionsHasBeenSet = false;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
