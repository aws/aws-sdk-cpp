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
    AWS_CONFIGSERVICE_API AccountAggregationSource() = default;
    AWS_CONFIGSERVICE_API AccountAggregationSource(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONFIGSERVICE_API AccountAggregationSource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONFIGSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The 12-digit account ID of the account being aggregated. </p>
     */
    inline const Aws::Vector<Aws::String>& GetAccountIds() const { return m_accountIds; }
    inline bool AccountIdsHasBeenSet() const { return m_accountIdsHasBeenSet; }
    template<typename AccountIdsT = Aws::Vector<Aws::String>>
    void SetAccountIds(AccountIdsT&& value) { m_accountIdsHasBeenSet = true; m_accountIds = std::forward<AccountIdsT>(value); }
    template<typename AccountIdsT = Aws::Vector<Aws::String>>
    AccountAggregationSource& WithAccountIds(AccountIdsT&& value) { SetAccountIds(std::forward<AccountIdsT>(value)); return *this;}
    template<typename AccountIdsT = Aws::String>
    AccountAggregationSource& AddAccountIds(AccountIdsT&& value) { m_accountIdsHasBeenSet = true; m_accountIds.emplace_back(std::forward<AccountIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If true, aggregate existing Config regions and future regions.</p>
     */
    inline bool GetAllAwsRegions() const { return m_allAwsRegions; }
    inline bool AllAwsRegionsHasBeenSet() const { return m_allAwsRegionsHasBeenSet; }
    inline void SetAllAwsRegions(bool value) { m_allAwsRegionsHasBeenSet = true; m_allAwsRegions = value; }
    inline AccountAggregationSource& WithAllAwsRegions(bool value) { SetAllAwsRegions(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The source regions being aggregated.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAwsRegions() const { return m_awsRegions; }
    inline bool AwsRegionsHasBeenSet() const { return m_awsRegionsHasBeenSet; }
    template<typename AwsRegionsT = Aws::Vector<Aws::String>>
    void SetAwsRegions(AwsRegionsT&& value) { m_awsRegionsHasBeenSet = true; m_awsRegions = std::forward<AwsRegionsT>(value); }
    template<typename AwsRegionsT = Aws::Vector<Aws::String>>
    AccountAggregationSource& WithAwsRegions(AwsRegionsT&& value) { SetAwsRegions(std::forward<AwsRegionsT>(value)); return *this;}
    template<typename AwsRegionsT = Aws::String>
    AccountAggregationSource& AddAwsRegions(AwsRegionsT&& value) { m_awsRegionsHasBeenSet = true; m_awsRegions.emplace_back(std::forward<AwsRegionsT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_accountIds;
    bool m_accountIdsHasBeenSet = false;

    bool m_allAwsRegions{false};
    bool m_allAwsRegionsHasBeenSet = false;

    Aws::Vector<Aws::String> m_awsRegions;
    bool m_awsRegionsHasBeenSet = false;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
