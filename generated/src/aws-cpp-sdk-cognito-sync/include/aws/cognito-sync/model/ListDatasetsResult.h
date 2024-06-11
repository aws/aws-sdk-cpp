﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cognito-sync/CognitoSync_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cognito-sync/model/Dataset.h>
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
namespace CognitoSync
{
namespace Model
{
  /**
   * Returned for a successful ListDatasets request.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-sync-2014-06-30/ListDatasetsResponse">AWS
   * API Reference</a></p>
   */
  class ListDatasetsResult
  {
  public:
    AWS_COGNITOSYNC_API ListDatasetsResult();
    AWS_COGNITOSYNC_API ListDatasetsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COGNITOSYNC_API ListDatasetsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * A set of datasets.
     */
    inline const Aws::Vector<Dataset>& GetDatasets() const{ return m_datasets; }
    inline void SetDatasets(const Aws::Vector<Dataset>& value) { m_datasets = value; }
    inline void SetDatasets(Aws::Vector<Dataset>&& value) { m_datasets = std::move(value); }
    inline ListDatasetsResult& WithDatasets(const Aws::Vector<Dataset>& value) { SetDatasets(value); return *this;}
    inline ListDatasetsResult& WithDatasets(Aws::Vector<Dataset>&& value) { SetDatasets(std::move(value)); return *this;}
    inline ListDatasetsResult& AddDatasets(const Dataset& value) { m_datasets.push_back(value); return *this; }
    inline ListDatasetsResult& AddDatasets(Dataset&& value) { m_datasets.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * Number of datasets returned.
     */
    inline int GetCount() const{ return m_count; }
    inline void SetCount(int value) { m_count = value; }
    inline ListDatasetsResult& WithCount(int value) { SetCount(value); return *this;}
    ///@}

    ///@{
    /**
     * A pagination token for obtaining the next page of results.
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListDatasetsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListDatasetsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListDatasetsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListDatasetsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListDatasetsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListDatasetsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<Dataset> m_datasets;

    int m_count;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CognitoSync
} // namespace Aws
