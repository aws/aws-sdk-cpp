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
    AWS_DATAZONE_API LineageSqlQueryRunDetails();
    AWS_DATAZONE_API LineageSqlQueryRunDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API LineageSqlQueryRunDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The error message of the SQL query run details of a data lineage run.</p>
     */
    inline const Aws::Vector<Aws::String>& GetErrorMessages() const{ return m_errorMessages; }
    inline bool ErrorMessagesHasBeenSet() const { return m_errorMessagesHasBeenSet; }
    inline void SetErrorMessages(const Aws::Vector<Aws::String>& value) { m_errorMessagesHasBeenSet = true; m_errorMessages = value; }
    inline void SetErrorMessages(Aws::Vector<Aws::String>&& value) { m_errorMessagesHasBeenSet = true; m_errorMessages = std::move(value); }
    inline LineageSqlQueryRunDetails& WithErrorMessages(const Aws::Vector<Aws::String>& value) { SetErrorMessages(value); return *this;}
    inline LineageSqlQueryRunDetails& WithErrorMessages(Aws::Vector<Aws::String>&& value) { SetErrorMessages(std::move(value)); return *this;}
    inline LineageSqlQueryRunDetails& AddErrorMessages(const Aws::String& value) { m_errorMessagesHasBeenSet = true; m_errorMessages.push_back(value); return *this; }
    inline LineageSqlQueryRunDetails& AddErrorMessages(Aws::String&& value) { m_errorMessagesHasBeenSet = true; m_errorMessages.push_back(std::move(value)); return *this; }
    inline LineageSqlQueryRunDetails& AddErrorMessages(const char* value) { m_errorMessagesHasBeenSet = true; m_errorMessages.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The number of queries that failed in the SQL query run details of a data
     * lineage run.</p>
     */
    inline int GetNumQueriesFailed() const{ return m_numQueriesFailed; }
    inline bool NumQueriesFailedHasBeenSet() const { return m_numQueriesFailedHasBeenSet; }
    inline void SetNumQueriesFailed(int value) { m_numQueriesFailedHasBeenSet = true; m_numQueriesFailed = value; }
    inline LineageSqlQueryRunDetails& WithNumQueriesFailed(int value) { SetNumQueriesFailed(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The query end time in the SQL query run details of a data lineage run.</p>
     */
    inline const Aws::Utils::DateTime& GetQueryEndTime() const{ return m_queryEndTime; }
    inline bool QueryEndTimeHasBeenSet() const { return m_queryEndTimeHasBeenSet; }
    inline void SetQueryEndTime(const Aws::Utils::DateTime& value) { m_queryEndTimeHasBeenSet = true; m_queryEndTime = value; }
    inline void SetQueryEndTime(Aws::Utils::DateTime&& value) { m_queryEndTimeHasBeenSet = true; m_queryEndTime = std::move(value); }
    inline LineageSqlQueryRunDetails& WithQueryEndTime(const Aws::Utils::DateTime& value) { SetQueryEndTime(value); return *this;}
    inline LineageSqlQueryRunDetails& WithQueryEndTime(Aws::Utils::DateTime&& value) { SetQueryEndTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The query start time in the SQL query run details of a data lineage run.</p>
     */
    inline const Aws::Utils::DateTime& GetQueryStartTime() const{ return m_queryStartTime; }
    inline bool QueryStartTimeHasBeenSet() const { return m_queryStartTimeHasBeenSet; }
    inline void SetQueryStartTime(const Aws::Utils::DateTime& value) { m_queryStartTimeHasBeenSet = true; m_queryStartTime = value; }
    inline void SetQueryStartTime(Aws::Utils::DateTime&& value) { m_queryStartTimeHasBeenSet = true; m_queryStartTime = std::move(value); }
    inline LineageSqlQueryRunDetails& WithQueryStartTime(const Aws::Utils::DateTime& value) { SetQueryStartTime(value); return *this;}
    inline LineageSqlQueryRunDetails& WithQueryStartTime(Aws::Utils::DateTime&& value) { SetQueryStartTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total queries processed in the SQL query run details of a data lineage
     * run.</p>
     */
    inline int GetTotalQueriesProcessed() const{ return m_totalQueriesProcessed; }
    inline bool TotalQueriesProcessedHasBeenSet() const { return m_totalQueriesProcessedHasBeenSet; }
    inline void SetTotalQueriesProcessed(int value) { m_totalQueriesProcessedHasBeenSet = true; m_totalQueriesProcessed = value; }
    inline LineageSqlQueryRunDetails& WithTotalQueriesProcessed(int value) { SetTotalQueriesProcessed(value); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_errorMessages;
    bool m_errorMessagesHasBeenSet = false;

    int m_numQueriesFailed;
    bool m_numQueriesFailedHasBeenSet = false;

    Aws::Utils::DateTime m_queryEndTime;
    bool m_queryEndTimeHasBeenSet = false;

    Aws::Utils::DateTime m_queryStartTime;
    bool m_queryStartTimeHasBeenSet = false;

    int m_totalQueriesProcessed;
    bool m_totalQueriesProcessedHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
