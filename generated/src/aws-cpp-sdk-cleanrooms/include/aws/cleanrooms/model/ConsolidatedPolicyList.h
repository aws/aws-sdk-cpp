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
    AWS_CLEANROOMS_API ConsolidatedPolicyList();
    AWS_CLEANROOMS_API ConsolidatedPolicyList(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API ConsolidatedPolicyList& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The columns to join on.</p>
     */
    inline const Aws::Vector<Aws::String>& GetJoinColumns() const{ return m_joinColumns; }
    inline bool JoinColumnsHasBeenSet() const { return m_joinColumnsHasBeenSet; }
    inline void SetJoinColumns(const Aws::Vector<Aws::String>& value) { m_joinColumnsHasBeenSet = true; m_joinColumns = value; }
    inline void SetJoinColumns(Aws::Vector<Aws::String>&& value) { m_joinColumnsHasBeenSet = true; m_joinColumns = std::move(value); }
    inline ConsolidatedPolicyList& WithJoinColumns(const Aws::Vector<Aws::String>& value) { SetJoinColumns(value); return *this;}
    inline ConsolidatedPolicyList& WithJoinColumns(Aws::Vector<Aws::String>&& value) { SetJoinColumns(std::move(value)); return *this;}
    inline ConsolidatedPolicyList& AddJoinColumns(const Aws::String& value) { m_joinColumnsHasBeenSet = true; m_joinColumns.push_back(value); return *this; }
    inline ConsolidatedPolicyList& AddJoinColumns(Aws::String&& value) { m_joinColumnsHasBeenSet = true; m_joinColumns.push_back(std::move(value)); return *this; }
    inline ConsolidatedPolicyList& AddJoinColumns(const char* value) { m_joinColumnsHasBeenSet = true; m_joinColumns.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p> The allowed join operators in the consolidated policy list.</p>
     */
    inline const Aws::Vector<JoinOperator>& GetAllowedJoinOperators() const{ return m_allowedJoinOperators; }
    inline bool AllowedJoinOperatorsHasBeenSet() const { return m_allowedJoinOperatorsHasBeenSet; }
    inline void SetAllowedJoinOperators(const Aws::Vector<JoinOperator>& value) { m_allowedJoinOperatorsHasBeenSet = true; m_allowedJoinOperators = value; }
    inline void SetAllowedJoinOperators(Aws::Vector<JoinOperator>&& value) { m_allowedJoinOperatorsHasBeenSet = true; m_allowedJoinOperators = std::move(value); }
    inline ConsolidatedPolicyList& WithAllowedJoinOperators(const Aws::Vector<JoinOperator>& value) { SetAllowedJoinOperators(value); return *this;}
    inline ConsolidatedPolicyList& WithAllowedJoinOperators(Aws::Vector<JoinOperator>&& value) { SetAllowedJoinOperators(std::move(value)); return *this;}
    inline ConsolidatedPolicyList& AddAllowedJoinOperators(const JoinOperator& value) { m_allowedJoinOperatorsHasBeenSet = true; m_allowedJoinOperators.push_back(value); return *this; }
    inline ConsolidatedPolicyList& AddAllowedJoinOperators(JoinOperator&& value) { m_allowedJoinOperatorsHasBeenSet = true; m_allowedJoinOperators.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The columns in the consolidated policy list.</p>
     */
    inline const Aws::Vector<Aws::String>& GetListColumns() const{ return m_listColumns; }
    inline bool ListColumnsHasBeenSet() const { return m_listColumnsHasBeenSet; }
    inline void SetListColumns(const Aws::Vector<Aws::String>& value) { m_listColumnsHasBeenSet = true; m_listColumns = value; }
    inline void SetListColumns(Aws::Vector<Aws::String>&& value) { m_listColumnsHasBeenSet = true; m_listColumns = std::move(value); }
    inline ConsolidatedPolicyList& WithListColumns(const Aws::Vector<Aws::String>& value) { SetListColumns(value); return *this;}
    inline ConsolidatedPolicyList& WithListColumns(Aws::Vector<Aws::String>&& value) { SetListColumns(std::move(value)); return *this;}
    inline ConsolidatedPolicyList& AddListColumns(const Aws::String& value) { m_listColumnsHasBeenSet = true; m_listColumns.push_back(value); return *this; }
    inline ConsolidatedPolicyList& AddListColumns(Aws::String&& value) { m_listColumnsHasBeenSet = true; m_listColumns.push_back(std::move(value)); return *this; }
    inline ConsolidatedPolicyList& AddListColumns(const char* value) { m_listColumnsHasBeenSet = true; m_listColumns.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p> Additional analyses for the consolidated policy list.</p>
     */
    inline const AdditionalAnalyses& GetAdditionalAnalyses() const{ return m_additionalAnalyses; }
    inline bool AdditionalAnalysesHasBeenSet() const { return m_additionalAnalysesHasBeenSet; }
    inline void SetAdditionalAnalyses(const AdditionalAnalyses& value) { m_additionalAnalysesHasBeenSet = true; m_additionalAnalyses = value; }
    inline void SetAdditionalAnalyses(AdditionalAnalyses&& value) { m_additionalAnalysesHasBeenSet = true; m_additionalAnalyses = std::move(value); }
    inline ConsolidatedPolicyList& WithAdditionalAnalyses(const AdditionalAnalyses& value) { SetAdditionalAnalyses(value); return *this;}
    inline ConsolidatedPolicyList& WithAdditionalAnalyses(AdditionalAnalyses&& value) { SetAdditionalAnalyses(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The allowed result receivers.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAllowedResultReceivers() const{ return m_allowedResultReceivers; }
    inline bool AllowedResultReceiversHasBeenSet() const { return m_allowedResultReceiversHasBeenSet; }
    inline void SetAllowedResultReceivers(const Aws::Vector<Aws::String>& value) { m_allowedResultReceiversHasBeenSet = true; m_allowedResultReceivers = value; }
    inline void SetAllowedResultReceivers(Aws::Vector<Aws::String>&& value) { m_allowedResultReceiversHasBeenSet = true; m_allowedResultReceivers = std::move(value); }
    inline ConsolidatedPolicyList& WithAllowedResultReceivers(const Aws::Vector<Aws::String>& value) { SetAllowedResultReceivers(value); return *this;}
    inline ConsolidatedPolicyList& WithAllowedResultReceivers(Aws::Vector<Aws::String>&& value) { SetAllowedResultReceivers(std::move(value)); return *this;}
    inline ConsolidatedPolicyList& AddAllowedResultReceivers(const Aws::String& value) { m_allowedResultReceiversHasBeenSet = true; m_allowedResultReceivers.push_back(value); return *this; }
    inline ConsolidatedPolicyList& AddAllowedResultReceivers(Aws::String&& value) { m_allowedResultReceiversHasBeenSet = true; m_allowedResultReceivers.push_back(std::move(value)); return *this; }
    inline ConsolidatedPolicyList& AddAllowedResultReceivers(const char* value) { m_allowedResultReceiversHasBeenSet = true; m_allowedResultReceivers.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p> The additional analyses allowed by the consolidated policy list.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAllowedAdditionalAnalyses() const{ return m_allowedAdditionalAnalyses; }
    inline bool AllowedAdditionalAnalysesHasBeenSet() const { return m_allowedAdditionalAnalysesHasBeenSet; }
    inline void SetAllowedAdditionalAnalyses(const Aws::Vector<Aws::String>& value) { m_allowedAdditionalAnalysesHasBeenSet = true; m_allowedAdditionalAnalyses = value; }
    inline void SetAllowedAdditionalAnalyses(Aws::Vector<Aws::String>&& value) { m_allowedAdditionalAnalysesHasBeenSet = true; m_allowedAdditionalAnalyses = std::move(value); }
    inline ConsolidatedPolicyList& WithAllowedAdditionalAnalyses(const Aws::Vector<Aws::String>& value) { SetAllowedAdditionalAnalyses(value); return *this;}
    inline ConsolidatedPolicyList& WithAllowedAdditionalAnalyses(Aws::Vector<Aws::String>&& value) { SetAllowedAdditionalAnalyses(std::move(value)); return *this;}
    inline ConsolidatedPolicyList& AddAllowedAdditionalAnalyses(const Aws::String& value) { m_allowedAdditionalAnalysesHasBeenSet = true; m_allowedAdditionalAnalyses.push_back(value); return *this; }
    inline ConsolidatedPolicyList& AddAllowedAdditionalAnalyses(Aws::String&& value) { m_allowedAdditionalAnalysesHasBeenSet = true; m_allowedAdditionalAnalyses.push_back(std::move(value)); return *this; }
    inline ConsolidatedPolicyList& AddAllowedAdditionalAnalyses(const char* value) { m_allowedAdditionalAnalysesHasBeenSet = true; m_allowedAdditionalAnalyses.push_back(value); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_joinColumns;
    bool m_joinColumnsHasBeenSet = false;

    Aws::Vector<JoinOperator> m_allowedJoinOperators;
    bool m_allowedJoinOperatorsHasBeenSet = false;

    Aws::Vector<Aws::String> m_listColumns;
    bool m_listColumnsHasBeenSet = false;

    AdditionalAnalyses m_additionalAnalyses;
    bool m_additionalAnalysesHasBeenSet = false;

    Aws::Vector<Aws::String> m_allowedResultReceivers;
    bool m_allowedResultReceiversHasBeenSet = false;

    Aws::Vector<Aws::String> m_allowedAdditionalAnalyses;
    bool m_allowedAdditionalAnalysesHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
