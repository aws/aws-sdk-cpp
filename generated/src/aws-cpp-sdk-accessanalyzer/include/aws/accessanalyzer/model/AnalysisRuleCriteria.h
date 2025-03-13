/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/accessanalyzer/AccessAnalyzer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
namespace AccessAnalyzer
{
namespace Model
{

  /**
   * <p>The criteria for an analysis rule for an analyzer. The criteria determine
   * which entities will generate findings.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/accessanalyzer-2019-11-01/AnalysisRuleCriteria">AWS
   * API Reference</a></p>
   */
  class AnalysisRuleCriteria
  {
  public:
    AWS_ACCESSANALYZER_API AnalysisRuleCriteria() = default;
    AWS_ACCESSANALYZER_API AnalysisRuleCriteria(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACCESSANALYZER_API AnalysisRuleCriteria& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACCESSANALYZER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A list of Amazon Web Services account IDs to apply to the analysis rule
     * criteria. The accounts cannot include the organization analyzer owner account.
     * Account IDs can only be applied to the analysis rule criteria for
     * organization-level analyzers. The list cannot include more than 2,000 account
     * IDs.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAccountIds() const { return m_accountIds; }
    inline bool AccountIdsHasBeenSet() const { return m_accountIdsHasBeenSet; }
    template<typename AccountIdsT = Aws::Vector<Aws::String>>
    void SetAccountIds(AccountIdsT&& value) { m_accountIdsHasBeenSet = true; m_accountIds = std::forward<AccountIdsT>(value); }
    template<typename AccountIdsT = Aws::Vector<Aws::String>>
    AnalysisRuleCriteria& WithAccountIds(AccountIdsT&& value) { SetAccountIds(std::forward<AccountIdsT>(value)); return *this;}
    template<typename AccountIdsT = Aws::String>
    AnalysisRuleCriteria& AddAccountIds(AccountIdsT&& value) { m_accountIdsHasBeenSet = true; m_accountIds.emplace_back(std::forward<AccountIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An array of key-value pairs to match for your resources. You can use the set
     * of Unicode letters, digits, whitespace, <code>_</code>, <code>.</code>,
     * <code>/</code>, <code>=</code>, <code>+</code>, and <code>-</code>.</p> <p>For
     * the tag key, you can specify a value that is 1 to 128 characters in length and
     * cannot be prefixed with <code>aws:</code>.</p> <p>For the tag value, you can
     * specify a value that is 0 to 256 characters in length. If the specified tag
     * value is 0 characters, the rule is applied to all principals with the specified
     * tag key.</p>
     */
    inline const Aws::Vector<Aws::Map<Aws::String, Aws::String>>& GetResourceTags() const { return m_resourceTags; }
    inline bool ResourceTagsHasBeenSet() const { return m_resourceTagsHasBeenSet; }
    template<typename ResourceTagsT = Aws::Vector<Aws::Map<Aws::String, Aws::String>>>
    void SetResourceTags(ResourceTagsT&& value) { m_resourceTagsHasBeenSet = true; m_resourceTags = std::forward<ResourceTagsT>(value); }
    template<typename ResourceTagsT = Aws::Vector<Aws::Map<Aws::String, Aws::String>>>
    AnalysisRuleCriteria& WithResourceTags(ResourceTagsT&& value) { SetResourceTags(std::forward<ResourceTagsT>(value)); return *this;}
    template<typename ResourceTagsT = Aws::Map<Aws::String, Aws::String>>
    AnalysisRuleCriteria& AddResourceTags(ResourceTagsT&& value) { m_resourceTagsHasBeenSet = true; m_resourceTags.emplace_back(std::forward<ResourceTagsT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_accountIds;
    bool m_accountIdsHasBeenSet = false;

    Aws::Vector<Aws::Map<Aws::String, Aws::String>> m_resourceTags;
    bool m_resourceTagsHasBeenSet = false;
  };

} // namespace Model
} // namespace AccessAnalyzer
} // namespace Aws
