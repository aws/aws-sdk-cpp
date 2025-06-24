/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/accessanalyzer/AccessAnalyzer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/accessanalyzer/model/ResourceType.h>
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
   * <p>The criteria for an analysis rule for an internal access
   * analyzer.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/accessanalyzer-2019-11-01/InternalAccessAnalysisRuleCriteria">AWS
   * API Reference</a></p>
   */
  class InternalAccessAnalysisRuleCriteria
  {
  public:
    AWS_ACCESSANALYZER_API InternalAccessAnalysisRuleCriteria() = default;
    AWS_ACCESSANALYZER_API InternalAccessAnalysisRuleCriteria(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACCESSANALYZER_API InternalAccessAnalysisRuleCriteria& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACCESSANALYZER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A list of Amazon Web Services account IDs to apply to the internal access
     * analysis rule criteria. Account IDs can only be applied to the analysis rule
     * criteria for organization-level analyzers.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAccountIds() const { return m_accountIds; }
    inline bool AccountIdsHasBeenSet() const { return m_accountIdsHasBeenSet; }
    template<typename AccountIdsT = Aws::Vector<Aws::String>>
    void SetAccountIds(AccountIdsT&& value) { m_accountIdsHasBeenSet = true; m_accountIds = std::forward<AccountIdsT>(value); }
    template<typename AccountIdsT = Aws::Vector<Aws::String>>
    InternalAccessAnalysisRuleCriteria& WithAccountIds(AccountIdsT&& value) { SetAccountIds(std::forward<AccountIdsT>(value)); return *this;}
    template<typename AccountIdsT = Aws::String>
    InternalAccessAnalysisRuleCriteria& AddAccountIds(AccountIdsT&& value) { m_accountIdsHasBeenSet = true; m_accountIds.emplace_back(std::forward<AccountIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of resource types to apply to the internal access analysis rule
     * criteria. The analyzer will only generate findings for resources of these types.
     * These resource types are currently supported for internal access analyzers:</p>
     * <ul> <li> <p> <code>AWS::S3::Bucket</code> </p> </li> <li> <p>
     * <code>AWS::RDS::DBSnapshot</code> </p> </li> <li> <p>
     * <code>AWS::RDS::DBClusterSnapshot</code> </p> </li> <li> <p>
     * <code>AWS::S3Express::DirectoryBucket</code> </p> </li> <li> <p>
     * <code>AWS::DynamoDB::Table</code> </p> </li> <li> <p>
     * <code>AWS::DynamoDB::Stream</code> </p> </li> </ul>
     */
    inline const Aws::Vector<ResourceType>& GetResourceTypes() const { return m_resourceTypes; }
    inline bool ResourceTypesHasBeenSet() const { return m_resourceTypesHasBeenSet; }
    template<typename ResourceTypesT = Aws::Vector<ResourceType>>
    void SetResourceTypes(ResourceTypesT&& value) { m_resourceTypesHasBeenSet = true; m_resourceTypes = std::forward<ResourceTypesT>(value); }
    template<typename ResourceTypesT = Aws::Vector<ResourceType>>
    InternalAccessAnalysisRuleCriteria& WithResourceTypes(ResourceTypesT&& value) { SetResourceTypes(std::forward<ResourceTypesT>(value)); return *this;}
    inline InternalAccessAnalysisRuleCriteria& AddResourceTypes(ResourceType value) { m_resourceTypesHasBeenSet = true; m_resourceTypes.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of resource ARNs to apply to the internal access analysis rule
     * criteria. The analyzer will only generate findings for resources that match
     * these ARNs.</p>
     */
    inline const Aws::Vector<Aws::String>& GetResourceArns() const { return m_resourceArns; }
    inline bool ResourceArnsHasBeenSet() const { return m_resourceArnsHasBeenSet; }
    template<typename ResourceArnsT = Aws::Vector<Aws::String>>
    void SetResourceArns(ResourceArnsT&& value) { m_resourceArnsHasBeenSet = true; m_resourceArns = std::forward<ResourceArnsT>(value); }
    template<typename ResourceArnsT = Aws::Vector<Aws::String>>
    InternalAccessAnalysisRuleCriteria& WithResourceArns(ResourceArnsT&& value) { SetResourceArns(std::forward<ResourceArnsT>(value)); return *this;}
    template<typename ResourceArnsT = Aws::String>
    InternalAccessAnalysisRuleCriteria& AddResourceArns(ResourceArnsT&& value) { m_resourceArnsHasBeenSet = true; m_resourceArns.emplace_back(std::forward<ResourceArnsT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_accountIds;
    bool m_accountIdsHasBeenSet = false;

    Aws::Vector<ResourceType> m_resourceTypes;
    bool m_resourceTypesHasBeenSet = false;

    Aws::Vector<Aws::String> m_resourceArns;
    bool m_resourceArnsHasBeenSet = false;
  };

} // namespace Model
} // namespace AccessAnalyzer
} // namespace Aws
