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
   * <p>A type of analysis rule that enables row-level analysis.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cleanrooms-2022-02-17/AnalysisRuleList">AWS
   * API Reference</a></p>
   */
  class AnalysisRuleList
  {
  public:
    AWS_CLEANROOMS_API AnalysisRuleList() = default;
    AWS_CLEANROOMS_API AnalysisRuleList(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API AnalysisRuleList& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Columns that can be used to join a configured table with the table of the
     * member who can query and other members' configured tables.</p>
     */
    inline const Aws::Vector<Aws::String>& GetJoinColumns() const { return m_joinColumns; }
    inline bool JoinColumnsHasBeenSet() const { return m_joinColumnsHasBeenSet; }
    template<typename JoinColumnsT = Aws::Vector<Aws::String>>
    void SetJoinColumns(JoinColumnsT&& value) { m_joinColumnsHasBeenSet = true; m_joinColumns = std::forward<JoinColumnsT>(value); }
    template<typename JoinColumnsT = Aws::Vector<Aws::String>>
    AnalysisRuleList& WithJoinColumns(JoinColumnsT&& value) { SetJoinColumns(std::forward<JoinColumnsT>(value)); return *this;}
    template<typename JoinColumnsT = Aws::String>
    AnalysisRuleList& AddJoinColumns(JoinColumnsT&& value) { m_joinColumnsHasBeenSet = true; m_joinColumns.emplace_back(std::forward<JoinColumnsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The logical operators (if any) that are to be used in an INNER JOIN match
     * condition. Default is <code>AND</code>.</p>
     */
    inline const Aws::Vector<JoinOperator>& GetAllowedJoinOperators() const { return m_allowedJoinOperators; }
    inline bool AllowedJoinOperatorsHasBeenSet() const { return m_allowedJoinOperatorsHasBeenSet; }
    template<typename AllowedJoinOperatorsT = Aws::Vector<JoinOperator>>
    void SetAllowedJoinOperators(AllowedJoinOperatorsT&& value) { m_allowedJoinOperatorsHasBeenSet = true; m_allowedJoinOperators = std::forward<AllowedJoinOperatorsT>(value); }
    template<typename AllowedJoinOperatorsT = Aws::Vector<JoinOperator>>
    AnalysisRuleList& WithAllowedJoinOperators(AllowedJoinOperatorsT&& value) { SetAllowedJoinOperators(std::forward<AllowedJoinOperatorsT>(value)); return *this;}
    inline AnalysisRuleList& AddAllowedJoinOperators(JoinOperator value) { m_allowedJoinOperatorsHasBeenSet = true; m_allowedJoinOperators.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Columns that can be listed in the output.</p>
     */
    inline const Aws::Vector<Aws::String>& GetListColumns() const { return m_listColumns; }
    inline bool ListColumnsHasBeenSet() const { return m_listColumnsHasBeenSet; }
    template<typename ListColumnsT = Aws::Vector<Aws::String>>
    void SetListColumns(ListColumnsT&& value) { m_listColumnsHasBeenSet = true; m_listColumns = std::forward<ListColumnsT>(value); }
    template<typename ListColumnsT = Aws::Vector<Aws::String>>
    AnalysisRuleList& WithListColumns(ListColumnsT&& value) { SetListColumns(std::forward<ListColumnsT>(value)); return *this;}
    template<typename ListColumnsT = Aws::String>
    AnalysisRuleList& AddListColumns(ListColumnsT&& value) { m_listColumnsHasBeenSet = true; m_listColumns.emplace_back(std::forward<ListColumnsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> An indicator as to whether additional analyses (such as Clean Rooms ML) can
     * be applied to the output of the direct query.</p>
     */
    inline AdditionalAnalyses GetAdditionalAnalyses() const { return m_additionalAnalyses; }
    inline bool AdditionalAnalysesHasBeenSet() const { return m_additionalAnalysesHasBeenSet; }
    inline void SetAdditionalAnalyses(AdditionalAnalyses value) { m_additionalAnalysesHasBeenSet = true; m_additionalAnalyses = value; }
    inline AnalysisRuleList& WithAdditionalAnalyses(AdditionalAnalyses value) { SetAdditionalAnalyses(value); return *this;}
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
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
