/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/entityresolution/EntityResolution_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/entityresolution/model/MatchGroup.h>
#include <aws/entityresolution/model/FailedRecord.h>
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
namespace EntityResolution
{
namespace Model
{
  class GenerateMatchIdResult
  {
  public:
    AWS_ENTITYRESOLUTION_API GenerateMatchIdResult() = default;
    AWS_ENTITYRESOLUTION_API GenerateMatchIdResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ENTITYRESOLUTION_API GenerateMatchIdResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> The match groups from the generated match ID.</p>
     */
    inline const Aws::Vector<MatchGroup>& GetMatchGroups() const { return m_matchGroups; }
    template<typename MatchGroupsT = Aws::Vector<MatchGroup>>
    void SetMatchGroups(MatchGroupsT&& value) { m_matchGroupsHasBeenSet = true; m_matchGroups = std::forward<MatchGroupsT>(value); }
    template<typename MatchGroupsT = Aws::Vector<MatchGroup>>
    GenerateMatchIdResult& WithMatchGroups(MatchGroupsT&& value) { SetMatchGroups(std::forward<MatchGroupsT>(value)); return *this;}
    template<typename MatchGroupsT = MatchGroup>
    GenerateMatchIdResult& AddMatchGroups(MatchGroupsT&& value) { m_matchGroupsHasBeenSet = true; m_matchGroups.emplace_back(std::forward<MatchGroupsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The records that didn't receive a generated Match ID.</p>
     */
    inline const Aws::Vector<FailedRecord>& GetFailedRecords() const { return m_failedRecords; }
    template<typename FailedRecordsT = Aws::Vector<FailedRecord>>
    void SetFailedRecords(FailedRecordsT&& value) { m_failedRecordsHasBeenSet = true; m_failedRecords = std::forward<FailedRecordsT>(value); }
    template<typename FailedRecordsT = Aws::Vector<FailedRecord>>
    GenerateMatchIdResult& WithFailedRecords(FailedRecordsT&& value) { SetFailedRecords(std::forward<FailedRecordsT>(value)); return *this;}
    template<typename FailedRecordsT = FailedRecord>
    GenerateMatchIdResult& AddFailedRecords(FailedRecordsT&& value) { m_failedRecordsHasBeenSet = true; m_failedRecords.emplace_back(std::forward<FailedRecordsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GenerateMatchIdResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<MatchGroup> m_matchGroups;
    bool m_matchGroupsHasBeenSet = false;

    Aws::Vector<FailedRecord> m_failedRecords;
    bool m_failedRecordsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace EntityResolution
} // namespace Aws
