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
    AWS_LEXMODELSV2_API ListTestSetRecordsResult();
    AWS_LEXMODELSV2_API ListTestSetRecordsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LEXMODELSV2_API ListTestSetRecordsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The list of records from the test set.</p>
     */
    inline const Aws::Vector<TestSetTurnRecord>& GetTestSetRecords() const{ return m_testSetRecords; }

    /**
     * <p>The list of records from the test set.</p>
     */
    inline void SetTestSetRecords(const Aws::Vector<TestSetTurnRecord>& value) { m_testSetRecords = value; }

    /**
     * <p>The list of records from the test set.</p>
     */
    inline void SetTestSetRecords(Aws::Vector<TestSetTurnRecord>&& value) { m_testSetRecords = std::move(value); }

    /**
     * <p>The list of records from the test set.</p>
     */
    inline ListTestSetRecordsResult& WithTestSetRecords(const Aws::Vector<TestSetTurnRecord>& value) { SetTestSetRecords(value); return *this;}

    /**
     * <p>The list of records from the test set.</p>
     */
    inline ListTestSetRecordsResult& WithTestSetRecords(Aws::Vector<TestSetTurnRecord>&& value) { SetTestSetRecords(std::move(value)); return *this;}

    /**
     * <p>The list of records from the test set.</p>
     */
    inline ListTestSetRecordsResult& AddTestSetRecords(const TestSetTurnRecord& value) { m_testSetRecords.push_back(value); return *this; }

    /**
     * <p>The list of records from the test set.</p>
     */
    inline ListTestSetRecordsResult& AddTestSetRecords(TestSetTurnRecord&& value) { m_testSetRecords.push_back(std::move(value)); return *this; }


    /**
     * <p>A token that indicates whether there are more records to return in a response
     * to the ListTestSetRecords operation. If the nextToken field is present, you send
     * the contents as the nextToken parameter of a ListTestSetRecords operation
     * request to get the next page of records.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A token that indicates whether there are more records to return in a response
     * to the ListTestSetRecords operation. If the nextToken field is present, you send
     * the contents as the nextToken parameter of a ListTestSetRecords operation
     * request to get the next page of records.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>A token that indicates whether there are more records to return in a response
     * to the ListTestSetRecords operation. If the nextToken field is present, you send
     * the contents as the nextToken parameter of a ListTestSetRecords operation
     * request to get the next page of records.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>A token that indicates whether there are more records to return in a response
     * to the ListTestSetRecords operation. If the nextToken field is present, you send
     * the contents as the nextToken parameter of a ListTestSetRecords operation
     * request to get the next page of records.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>A token that indicates whether there are more records to return in a response
     * to the ListTestSetRecords operation. If the nextToken field is present, you send
     * the contents as the nextToken parameter of a ListTestSetRecords operation
     * request to get the next page of records.</p>
     */
    inline ListTestSetRecordsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A token that indicates whether there are more records to return in a response
     * to the ListTestSetRecords operation. If the nextToken field is present, you send
     * the contents as the nextToken parameter of a ListTestSetRecords operation
     * request to get the next page of records.</p>
     */
    inline ListTestSetRecordsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A token that indicates whether there are more records to return in a response
     * to the ListTestSetRecords operation. If the nextToken field is present, you send
     * the contents as the nextToken parameter of a ListTestSetRecords operation
     * request to get the next page of records.</p>
     */
    inline ListTestSetRecordsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListTestSetRecordsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListTestSetRecordsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListTestSetRecordsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<TestSetTurnRecord> m_testSetRecords;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
