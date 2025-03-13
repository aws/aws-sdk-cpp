/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
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
namespace IoT
{
namespace Model
{
  class ListIndicesResult
  {
  public:
    AWS_IOT_API ListIndicesResult() = default;
    AWS_IOT_API ListIndicesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOT_API ListIndicesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The index names.</p>
     */
    inline const Aws::Vector<Aws::String>& GetIndexNames() const { return m_indexNames; }
    template<typename IndexNamesT = Aws::Vector<Aws::String>>
    void SetIndexNames(IndexNamesT&& value) { m_indexNamesHasBeenSet = true; m_indexNames = std::forward<IndexNamesT>(value); }
    template<typename IndexNamesT = Aws::Vector<Aws::String>>
    ListIndicesResult& WithIndexNames(IndexNamesT&& value) { SetIndexNames(std::forward<IndexNamesT>(value)); return *this;}
    template<typename IndexNamesT = Aws::String>
    ListIndicesResult& AddIndexNames(IndexNamesT&& value) { m_indexNamesHasBeenSet = true; m_indexNames.emplace_back(std::forward<IndexNamesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token used to get the next set of results, or <code>null</code> if there
     * are no additional results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListIndicesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListIndicesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_indexNames;
    bool m_indexNamesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
