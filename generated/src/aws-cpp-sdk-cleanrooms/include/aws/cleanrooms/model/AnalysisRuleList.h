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
    AWS_CLEANROOMS_API AnalysisRuleList();
    AWS_CLEANROOMS_API AnalysisRuleList(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API AnalysisRuleList& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Columns that can be used to join a configured table with the table of the
     * member who can query and other members' configured tables.</p>
     */
    inline const Aws::Vector<Aws::String>& GetJoinColumns() const{ return m_joinColumns; }
    inline bool JoinColumnsHasBeenSet() const { return m_joinColumnsHasBeenSet; }
    inline void SetJoinColumns(const Aws::Vector<Aws::String>& value) { m_joinColumnsHasBeenSet = true; m_joinColumns = value; }
    inline void SetJoinColumns(Aws::Vector<Aws::String>&& value) { m_joinColumnsHasBeenSet = true; m_joinColumns = std::move(value); }
    inline AnalysisRuleList& WithJoinColumns(const Aws::Vector<Aws::String>& value) { SetJoinColumns(value); return *this;}
    inline AnalysisRuleList& WithJoinColumns(Aws::Vector<Aws::String>&& value) { SetJoinColumns(std::move(value)); return *this;}
    inline AnalysisRuleList& AddJoinColumns(const Aws::String& value) { m_joinColumnsHasBeenSet = true; m_joinColumns.push_back(value); return *this; }
    inline AnalysisRuleList& AddJoinColumns(Aws::String&& value) { m_joinColumnsHasBeenSet = true; m_joinColumns.push_back(std::move(value)); return *this; }
    inline AnalysisRuleList& AddJoinColumns(const char* value) { m_joinColumnsHasBeenSet = true; m_joinColumns.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The logical operators (if any) that are to be used in an INNER JOIN match
     * condition. Default is <code>AND</code>.</p>
     */
    inline const Aws::Vector<JoinOperator>& GetAllowedJoinOperators() const{ return m_allowedJoinOperators; }
    inline bool AllowedJoinOperatorsHasBeenSet() const { return m_allowedJoinOperatorsHasBeenSet; }
    inline void SetAllowedJoinOperators(const Aws::Vector<JoinOperator>& value) { m_allowedJoinOperatorsHasBeenSet = true; m_allowedJoinOperators = value; }
    inline void SetAllowedJoinOperators(Aws::Vector<JoinOperator>&& value) { m_allowedJoinOperatorsHasBeenSet = true; m_allowedJoinOperators = std::move(value); }
    inline AnalysisRuleList& WithAllowedJoinOperators(const Aws::Vector<JoinOperator>& value) { SetAllowedJoinOperators(value); return *this;}
    inline AnalysisRuleList& WithAllowedJoinOperators(Aws::Vector<JoinOperator>&& value) { SetAllowedJoinOperators(std::move(value)); return *this;}
    inline AnalysisRuleList& AddAllowedJoinOperators(const JoinOperator& value) { m_allowedJoinOperatorsHasBeenSet = true; m_allowedJoinOperators.push_back(value); return *this; }
    inline AnalysisRuleList& AddAllowedJoinOperators(JoinOperator&& value) { m_allowedJoinOperatorsHasBeenSet = true; m_allowedJoinOperators.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Columns that can be listed in the output.</p>
     */
    inline const Aws::Vector<Aws::String>& GetListColumns() const{ return m_listColumns; }
    inline bool ListColumnsHasBeenSet() const { return m_listColumnsHasBeenSet; }
    inline void SetListColumns(const Aws::Vector<Aws::String>& value) { m_listColumnsHasBeenSet = true; m_listColumns = value; }
    inline void SetListColumns(Aws::Vector<Aws::String>&& value) { m_listColumnsHasBeenSet = true; m_listColumns = std::move(value); }
    inline AnalysisRuleList& WithListColumns(const Aws::Vector<Aws::String>& value) { SetListColumns(value); return *this;}
    inline AnalysisRuleList& WithListColumns(Aws::Vector<Aws::String>&& value) { SetListColumns(std::move(value)); return *this;}
    inline AnalysisRuleList& AddListColumns(const Aws::String& value) { m_listColumnsHasBeenSet = true; m_listColumns.push_back(value); return *this; }
    inline AnalysisRuleList& AddListColumns(Aws::String&& value) { m_listColumnsHasBeenSet = true; m_listColumns.push_back(std::move(value)); return *this; }
    inline AnalysisRuleList& AddListColumns(const char* value) { m_listColumnsHasBeenSet = true; m_listColumns.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p> An indicator as to whether additional analyses (such as Clean Rooms ML) can
     * be applied to the output of the direct query.</p>
     */
    inline const AdditionalAnalyses& GetAdditionalAnalyses() const{ return m_additionalAnalyses; }
    inline bool AdditionalAnalysesHasBeenSet() const { return m_additionalAnalysesHasBeenSet; }
    inline void SetAdditionalAnalyses(const AdditionalAnalyses& value) { m_additionalAnalysesHasBeenSet = true; m_additionalAnalyses = value; }
    inline void SetAdditionalAnalyses(AdditionalAnalyses&& value) { m_additionalAnalysesHasBeenSet = true; m_additionalAnalyses = std::move(value); }
    inline AnalysisRuleList& WithAdditionalAnalyses(const AdditionalAnalyses& value) { SetAdditionalAnalyses(value); return *this;}
    inline AnalysisRuleList& WithAdditionalAnalyses(AdditionalAnalyses&& value) { SetAdditionalAnalyses(std::move(value)); return *this;}
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
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
