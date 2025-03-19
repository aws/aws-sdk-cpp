/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lexv2-models/model/TestSetTurnRecord.h>
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
namespace LexModelsV2
{
namespace Model
{
  class ListTestSetRecordsResult
  {
  public:
    AWS_LEXMODELSV2_API ListTestSetRecordsResult() = default;
    AWS_LEXMODELSV2_API ListTestSetRecordsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LEXMODELSV2_API ListTestSetRecordsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The list of records from the test set.</p>
     */
    inline const Aws::Vector<TestSetTurnRecord>& GetTestSetRecords() const { return m_testSetRecords; }
    template<typename TestSetRecordsT = Aws::Vector<TestSetTurnRecord>>
    void SetTestSetRecords(TestSetRecordsT&& value) { m_testSetRecordsHasBeenSet = true; m_testSetRecords = std::forward<TestSetRecordsT>(value); }
    template<typename TestSetRecordsT = Aws::Vector<TestSetTurnRecord>>
    ListTestSetRecordsResult& WithTestSetRecords(TestSetRecordsT&& value) { SetTestSetRecords(std::forward<TestSetRecordsT>(value)); return *this;}
    template<typename TestSetRecordsT = TestSetTurnRecord>
    ListTestSetRecordsResult& AddTestSetRecords(TestSetRecordsT&& value) { m_testSetRecordsHasBeenSet = true; m_testSetRecords.emplace_back(std::forward<TestSetRecordsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A token that indicates whether there are more records to return in a response
     * to the ListTestSetRecords operation. If the nextToken field is present, you send
     * the contents as the nextToken parameter of a ListTestSetRecords operation
     * request to get the next page of records.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListTestSetRecordsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListTestSetRecordsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<TestSetTurnRecord> m_testSetRecords;
    bool m_testSetRecordsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
