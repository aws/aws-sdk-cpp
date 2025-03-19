/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/cleanrooms/model/AdditionalAnalyses.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cleanrooms/model/JoinOperator.h>
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
namespace CleanRooms
{
namespace Model
{

  /**
   * <p>Controls on the analysis specifications that can be run on a configured
   * table.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cleanrooms-2022-02-17/ConsolidatedPolicyList">AWS
   * API Reference</a></p>
   */
  class ConsolidatedPolicyList
  {
  public:
    AWS_CLEANROOMS_API ConsolidatedPolicyList() = default;
    AWS_CLEANROOMS_API ConsolidatedPolicyList(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API ConsolidatedPolicyList& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The columns to join on.</p>
     */
    inline const Aws::Vector<Aws::String>& GetJoinColumns() const { return m_joinColumns; }
    inline bool JoinColumnsHasBeenSet() const { return m_joinColumnsHasBeenSet; }
    template<typename JoinColumnsT = Aws::Vector<Aws::String>>
    void SetJoinColumns(JoinColumnsT&& value) { m_joinColumnsHasBeenSet = true; m_joinColumns = std::forward<JoinColumnsT>(value); }
    template<typename JoinColumnsT = Aws::Vector<Aws::String>>
    ConsolidatedPolicyList& WithJoinColumns(JoinColumnsT&& value) { SetJoinColumns(std::forward<JoinColumnsT>(value)); return *this;}
    template<typename JoinColumnsT = Aws::String>
    ConsolidatedPolicyList& AddJoinColumns(JoinColumnsT&& value) { m_joinColumnsHasBeenSet = true; m_joinColumns.emplace_back(std::forward<JoinColumnsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The allowed join operators in the consolidated policy list.</p>
     */
    inline const Aws::Vector<JoinOperator>& GetAllowedJoinOperators() const { return m_allowedJoinOperators; }
    inline bool AllowedJoinOperatorsHasBeenSet() const { return m_allowedJoinOperatorsHasBeenSet; }
    template<typename AllowedJoinOperatorsT = Aws::Vector<JoinOperator>>
    void SetAllowedJoinOperators(AllowedJoinOperatorsT&& value) { m_allowedJoinOperatorsHasBeenSet = true; m_allowedJoinOperators = std::forward<AllowedJoinOperatorsT>(value); }
    template<typename AllowedJoinOperatorsT = Aws::Vector<JoinOperator>>
    ConsolidatedPolicyList& WithAllowedJoinOperators(AllowedJoinOperatorsT&& value) { SetAllowedJoinOperators(std::forward<AllowedJoinOperatorsT>(value)); return *this;}
    inline ConsolidatedPolicyList& AddAllowedJoinOperators(JoinOperator value) { m_allowedJoinOperatorsHasBeenSet = true; m_allowedJoinOperators.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p> The columns in the consolidated policy list.</p>
     */
    inline const Aws::Vector<Aws::String>& GetListColumns() const { return m_listColumns; }
    inline bool ListColumnsHasBeenSet() const { return m_listColumnsHasBeenSet; }
    template<typename ListColumnsT = Aws::Vector<Aws::String>>
    void SetListColumns(ListColumnsT&& value) { m_listColumnsHasBeenSet = true; m_listColumns = std::forward<ListColumnsT>(value); }
    template<typename ListColumnsT = Aws::Vector<Aws::String>>
    ConsolidatedPolicyList& WithListColumns(ListColumnsT&& value) { SetListColumns(std::forward<ListColumnsT>(value)); return *this;}
    template<typename ListColumnsT = Aws::String>
    ConsolidatedPolicyList& AddListColumns(ListColumnsT&& value) { m_listColumnsHasBeenSet = true; m_listColumns.emplace_back(std::forward<ListColumnsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> Additional analyses for the consolidated policy list.</p>
     */
    inline AdditionalAnalyses GetAdditionalAnalyses() const { return m_additionalAnalyses; }
    inline bool AdditionalAnalysesHasBeenSet() const { return m_additionalAnalysesHasBeenSet; }
    inline void SetAdditionalAnalyses(AdditionalAnalyses value) { m_additionalAnalysesHasBeenSet = true; m_additionalAnalyses = value; }
    inline ConsolidatedPolicyList& WithAdditionalAnalyses(AdditionalAnalyses value) { SetAdditionalAnalyses(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The allowed result receivers.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAllowedResultReceivers() const { return m_allowedResultReceivers; }
    inline bool AllowedResultReceiversHasBeenSet() const { return m_allowedResultReceiversHasBeenSet; }
    template<typename AllowedResultReceiversT = Aws::Vector<Aws::String>>
    void SetAllowedResultReceivers(AllowedResultReceiversT&& value) { m_allowedResultReceiversHasBeenSet = true; m_allowedResultReceivers = std::forward<AllowedResultReceiversT>(value); }
    template<typename AllowedResultReceiversT = Aws::Vector<Aws::String>>
    ConsolidatedPolicyList& WithAllowedResultReceivers(AllowedResultReceiversT&& value) { SetAllowedResultReceivers(std::forward<AllowedResultReceiversT>(value)); return *this;}
    template<typename AllowedResultReceiversT = Aws::String>
    ConsolidatedPolicyList& AddAllowedResultReceivers(AllowedResultReceiversT&& value) { m_allowedResultReceiversHasBeenSet = true; m_allowedResultReceivers.emplace_back(std::forward<AllowedResultReceiversT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The additional analyses allowed by the consolidated policy list.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAllowedAdditionalAnalyses() const { return m_allowedAdditionalAnalyses; }
    inline bool AllowedAdditionalAnalysesHasBeenSet() const { return m_allowedAdditionalAnalysesHasBeenSet; }
    template<typename AllowedAdditionalAnalysesT = Aws::Vector<Aws::String>>
    void SetAllowedAdditionalAnalyses(AllowedAdditionalAnalysesT&& value) { m_allowedAdditionalAnalysesHasBeenSet = true; m_allowedAdditionalAnalyses = std::forward<AllowedAdditionalAnalysesT>(value); }
    template<typename AllowedAdditionalAnalysesT = Aws::Vector<Aws::String>>
    ConsolidatedPolicyList& WithAllowedAdditionalAnalyses(AllowedAdditionalAnalysesT&& value) { SetAllowedAdditionalAnalyses(std::forward<AllowedAdditionalAnalysesT>(value)); return *this;}
    template<typename AllowedAdditionalAnalysesT = Aws::String>
    ConsolidatedPolicyList& AddAllowedAdditionalAnalyses(AllowedAdditionalAnalysesT&& value) { m_allowedAdditionalAnalysesHasBeenSet = true; m_allowedAdditionalAnalyses.emplace_back(std::forward<AllowedAdditionalAnalysesT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_joinColumns;
    bool m_joinColumnsHasBeenSet = false;

    Aws::Vector<JoinOperator> m_allowedJoinOperators;
    bool m_allowedJoinOperatorsHasBeenSet = false;

    Aws::Vector<Aws::String> m_listColumns;
    bool m_listColumnsHasBeenSet = false;

    AdditionalAnalyses m_additionalAnalyses{AdditionalAnalyses::NOT_SET};
    bool m_additionalAnalysesHasBeenSet = false;

    Aws::Vector<Aws::String> m_allowedResultReceivers;
    bool m_allowedResultReceiversHasBeenSet = false;

    Aws::Vector<Aws::String> m_allowedAdditionalAnalyses;
    bool m_allowedAdditionalAnalysesHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
