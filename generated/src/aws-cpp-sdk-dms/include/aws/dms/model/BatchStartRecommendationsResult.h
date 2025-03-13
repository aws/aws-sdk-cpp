/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dms/DatabaseMigrationService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/dms/model/BatchStartRecommendationsErrorEntry.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace DatabaseMigrationService
{
namespace Model
{
  class BatchStartRecommendationsResult
  {
  public:
    AWS_DATABASEMIGRATIONSERVICE_API BatchStartRecommendationsResult() = default;
    AWS_DATABASEMIGRATIONSERVICE_API BatchStartRecommendationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATABASEMIGRATIONSERVICE_API BatchStartRecommendationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list with error details about the analysis of each source database.</p>
     */
    inline const Aws::Vector<BatchStartRecommendationsErrorEntry>& GetErrorEntries() const { return m_errorEntries; }
    template<typename ErrorEntriesT = Aws::Vector<BatchStartRecommendationsErrorEntry>>
    void SetErrorEntries(ErrorEntriesT&& value) { m_errorEntriesHasBeenSet = true; m_errorEntries = std::forward<ErrorEntriesT>(value); }
    template<typename ErrorEntriesT = Aws::Vector<BatchStartRecommendationsErrorEntry>>
    BatchStartRecommendationsResult& WithErrorEntries(ErrorEntriesT&& value) { SetErrorEntries(std::forward<ErrorEntriesT>(value)); return *this;}
    template<typename ErrorEntriesT = BatchStartRecommendationsErrorEntry>
    BatchStartRecommendationsResult& AddErrorEntries(ErrorEntriesT&& value) { m_errorEntriesHasBeenSet = true; m_errorEntries.emplace_back(std::forward<ErrorEntriesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    BatchStartRecommendationsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<BatchStartRecommendationsErrorEntry> m_errorEntries;
    bool m_errorEntriesHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
