/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutvision/LookoutforVision_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace LookoutforVision
{
namespace Model
{
  class ListDatasetEntriesResult
  {
  public:
    AWS_LOOKOUTFORVISION_API ListDatasetEntriesResult();
    AWS_LOOKOUTFORVISION_API ListDatasetEntriesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LOOKOUTFORVISION_API ListDatasetEntriesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of the entries (JSON Lines) within the dataset.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDatasetEntries() const{ return m_datasetEntries; }
    inline void SetDatasetEntries(const Aws::Vector<Aws::String>& value) { m_datasetEntries = value; }
    inline void SetDatasetEntries(Aws::Vector<Aws::String>&& value) { m_datasetEntries = std::move(value); }
    inline ListDatasetEntriesResult& WithDatasetEntries(const Aws::Vector<Aws::String>& value) { SetDatasetEntries(value); return *this;}
    inline ListDatasetEntriesResult& WithDatasetEntries(Aws::Vector<Aws::String>&& value) { SetDatasetEntries(std::move(value)); return *this;}
    inline ListDatasetEntriesResult& AddDatasetEntries(const Aws::String& value) { m_datasetEntries.push_back(value); return *this; }
    inline ListDatasetEntriesResult& AddDatasetEntries(Aws::String&& value) { m_datasetEntries.push_back(std::move(value)); return *this; }
    inline ListDatasetEntriesResult& AddDatasetEntries(const char* value) { m_datasetEntries.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>If the response is truncated, Amazon Lookout for Vision returns this token
     * that you can use in the subsequent request to retrieve the next set ofdataset
     * entries.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListDatasetEntriesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListDatasetEntriesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListDatasetEntriesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListDatasetEntriesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListDatasetEntriesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListDatasetEntriesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_datasetEntries;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace LookoutforVision
} // namespace Aws
