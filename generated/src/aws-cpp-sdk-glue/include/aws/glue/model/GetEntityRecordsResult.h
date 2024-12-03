/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/Document.h>
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
namespace Glue
{
namespace Model
{
  class GetEntityRecordsResult
  {
  public:
    AWS_GLUE_API GetEntityRecordsResult();
    AWS_GLUE_API GetEntityRecordsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLUE_API GetEntityRecordsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of the requested objects.</p>
     */
    inline const Aws::Vector<Aws::Utils::Document>& GetRecords() const{ return m_records; }
    inline void SetRecords(const Aws::Vector<Aws::Utils::Document>& value) { m_records = value; }
    inline void SetRecords(Aws::Vector<Aws::Utils::Document>&& value) { m_records = std::move(value); }
    inline GetEntityRecordsResult& WithRecords(const Aws::Vector<Aws::Utils::Document>& value) { SetRecords(value); return *this;}
    inline GetEntityRecordsResult& WithRecords(Aws::Vector<Aws::Utils::Document>&& value) { SetRecords(std::move(value)); return *this;}
    inline GetEntityRecordsResult& AddRecords(const Aws::Utils::Document& value) { m_records.push_back(value); return *this; }
    inline GetEntityRecordsResult& AddRecords(Aws::Utils::Document&& value) { m_records.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A continuation token, present if the current segment is not the last.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline GetEntityRecordsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline GetEntityRecordsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline GetEntityRecordsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetEntityRecordsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetEntityRecordsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetEntityRecordsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::Utils::Document> m_records;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
