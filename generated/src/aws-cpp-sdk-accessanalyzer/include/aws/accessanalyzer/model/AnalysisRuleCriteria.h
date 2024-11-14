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
    AWS_ACCESSANALYZER_API AnalysisRuleCriteria();
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
    inline const Aws::Vector<Aws::String>& GetAccountIds() const{ return m_accountIds; }
    inline bool AccountIdsHasBeenSet() const { return m_accountIdsHasBeenSet; }
    inline void SetAccountIds(const Aws::Vector<Aws::String>& value) { m_accountIdsHasBeenSet = true; m_accountIds = value; }
    inline void SetAccountIds(Aws::Vector<Aws::String>&& value) { m_accountIdsHasBeenSet = true; m_accountIds = std::move(value); }
    inline AnalysisRuleCriteria& WithAccountIds(const Aws::Vector<Aws::String>& value) { SetAccountIds(value); return *this;}
    inline AnalysisRuleCriteria& WithAccountIds(Aws::Vector<Aws::String>&& value) { SetAccountIds(std::move(value)); return *this;}
    inline AnalysisRuleCriteria& AddAccountIds(const Aws::String& value) { m_accountIdsHasBeenSet = true; m_accountIds.push_back(value); return *this; }
    inline AnalysisRuleCriteria& AddAccountIds(Aws::String&& value) { m_accountIdsHasBeenSet = true; m_accountIds.push_back(std::move(value)); return *this; }
    inline AnalysisRuleCriteria& AddAccountIds(const char* value) { m_accountIdsHasBeenSet = true; m_accountIds.push_back(value); return *this; }
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
    inline const Aws::Vector<Aws::Map<Aws::String, Aws::String>>& GetResourceTags() const{ return m_resourceTags; }
    inline bool ResourceTagsHasBeenSet() const { return m_resourceTagsHasBeenSet; }
    inline void SetResourceTags(const Aws::Vector<Aws::Map<Aws::String, Aws::String>>& value) { m_resourceTagsHasBeenSet = true; m_resourceTags = value; }
    inline void SetResourceTags(Aws::Vector<Aws::Map<Aws::String, Aws::String>>&& value) { m_resourceTagsHasBeenSet = true; m_resourceTags = std::move(value); }
    inline AnalysisRuleCriteria& WithResourceTags(const Aws::Vector<Aws::Map<Aws::String, Aws::String>>& value) { SetResourceTags(value); return *this;}
    inline AnalysisRuleCriteria& WithResourceTags(Aws::Vector<Aws::Map<Aws::String, Aws::String>>&& value) { SetResourceTags(std::move(value)); return *this;}
    inline AnalysisRuleCriteria& AddResourceTags(const Aws::Map<Aws::String, Aws::String>& value) { m_resourceTagsHasBeenSet = true; m_resourceTags.push_back(value); return *this; }
    inline AnalysisRuleCriteria& AddResourceTags(Aws::Map<Aws::String, Aws::String>&& value) { m_resourceTagsHasBeenSet = true; m_resourceTags.push_back(std::move(value)); return *this; }
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
