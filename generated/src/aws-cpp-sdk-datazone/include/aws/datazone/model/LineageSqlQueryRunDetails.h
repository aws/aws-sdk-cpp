/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
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
namespace DataZone
{
namespace Model
{

  /**
   * <p>The SQL query run details of a data lineage run.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/LineageSqlQueryRunDetails">AWS
   * API Reference</a></p>
   */
  class LineageSqlQueryRunDetails
  {
  public:
    AWS_DATAZONE_API LineageSqlQueryRunDetails() = default;
    AWS_DATAZONE_API LineageSqlQueryRunDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API LineageSqlQueryRunDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The error message of the SQL query run details of a data lineage run.</p>
     */
    inline const Aws::Vector<Aws::String>& GetErrorMessages() const { return m_errorMessages; }
    inline bool ErrorMessagesHasBeenSet() const { return m_errorMessagesHasBeenSet; }
    template<typename ErrorMessagesT = Aws::Vector<Aws::String>>
    void SetErrorMessages(ErrorMessagesT&& value) { m_errorMessagesHasBeenSet = true; m_errorMessages = std::forward<ErrorMessagesT>(value); }
    template<typename ErrorMessagesT = Aws::Vector<Aws::String>>
    LineageSqlQueryRunDetails& WithErrorMessages(ErrorMessagesT&& value) { SetErrorMessages(std::forward<ErrorMessagesT>(value)); return *this;}
    template<typename ErrorMessagesT = Aws::String>
    LineageSqlQueryRunDetails& AddErrorMessages(ErrorMessagesT&& value) { m_errorMessagesHasBeenSet = true; m_errorMessages.emplace_back(std::forward<ErrorMessagesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The number of queries that failed in the SQL query run details of a data
     * lineage run.</p>
     */
    inline int GetNumQueriesFailed() const { return m_numQueriesFailed; }
    inline bool NumQueriesFailedHasBeenSet() const { return m_numQueriesFailedHasBeenSet; }
    inline void SetNumQueriesFailed(int value) { m_numQueriesFailedHasBeenSet = true; m_numQueriesFailed = value; }
    inline LineageSqlQueryRunDetails& WithNumQueriesFailed(int value) { SetNumQueriesFailed(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The query end time in the SQL query run details of a data lineage run.</p>
     */
    inline const Aws::Utils::DateTime& GetQueryEndTime() const { return m_queryEndTime; }
    inline bool QueryEndTimeHasBeenSet() const { return m_queryEndTimeHasBeenSet; }
    template<typename QueryEndTimeT = Aws::Utils::DateTime>
    void SetQueryEndTime(QueryEndTimeT&& value) { m_queryEndTimeHasBeenSet = true; m_queryEndTime = std::forward<QueryEndTimeT>(value); }
    template<typename QueryEndTimeT = Aws::Utils::DateTime>
    LineageSqlQueryRunDetails& WithQueryEndTime(QueryEndTimeT&& value) { SetQueryEndTime(std::forward<QueryEndTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The query start time in the SQL query run details of a data lineage run.</p>
     */
    inline const Aws::Utils::DateTime& GetQueryStartTime() const { return m_queryStartTime; }
    inline bool QueryStartTimeHasBeenSet() const { return m_queryStartTimeHasBeenSet; }
    template<typename QueryStartTimeT = Aws::Utils::DateTime>
    void SetQueryStartTime(QueryStartTimeT&& value) { m_queryStartTimeHasBeenSet = true; m_queryStartTime = std::forward<QueryStartTimeT>(value); }
    template<typename QueryStartTimeT = Aws::Utils::DateTime>
    LineageSqlQueryRunDetails& WithQueryStartTime(QueryStartTimeT&& value) { SetQueryStartTime(std::forward<QueryStartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total queries processed in the SQL query run details of a data lineage
     * run.</p>
     */
    inline int GetTotalQueriesProcessed() const { return m_totalQueriesProcessed; }
    inline bool TotalQueriesProcessedHasBeenSet() const { return m_totalQueriesProcessedHasBeenSet; }
    inline void SetTotalQueriesProcessed(int value) { m_totalQueriesProcessedHasBeenSet = true; m_totalQueriesProcessed = value; }
    inline LineageSqlQueryRunDetails& WithTotalQueriesProcessed(int value) { SetTotalQueriesProcessed(value); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_errorMessages;
    bool m_errorMessagesHasBeenSet = false;

    int m_numQueriesFailed{0};
    bool m_numQueriesFailedHasBeenSet = false;

    Aws::Utils::DateTime m_queryEndTime{};
    bool m_queryEndTimeHasBeenSet = false;

    Aws::Utils::DateTime m_queryStartTime{};
    bool m_queryStartTimeHasBeenSet = false;

    int m_totalQueriesProcessed{0};
    bool m_totalQueriesProcessedHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
