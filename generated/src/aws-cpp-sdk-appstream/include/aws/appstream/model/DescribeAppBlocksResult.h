/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appstream/AppStream_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/appstream/model/AppBlock.h>
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
namespace AppStream
{
namespace Model
{
  class DescribeAppBlocksResult
  {
  public:
    AWS_APPSTREAM_API DescribeAppBlocksResult() = default;
    AWS_APPSTREAM_API DescribeAppBlocksResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPSTREAM_API DescribeAppBlocksResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The app blocks in the list.</p>
     */
    inline const Aws::Vector<AppBlock>& GetAppBlocks() const { return m_appBlocks; }
    template<typename AppBlocksT = Aws::Vector<AppBlock>>
    void SetAppBlocks(AppBlocksT&& value) { m_appBlocksHasBeenSet = true; m_appBlocks = std::forward<AppBlocksT>(value); }
    template<typename AppBlocksT = Aws::Vector<AppBlock>>
    DescribeAppBlocksResult& WithAppBlocks(AppBlocksT&& value) { SetAppBlocks(std::forward<AppBlocksT>(value)); return *this;}
    template<typename AppBlocksT = AppBlock>
    DescribeAppBlocksResult& AddAppBlocks(AppBlocksT&& value) { m_appBlocksHasBeenSet = true; m_appBlocks.emplace_back(std::forward<AppBlocksT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The pagination token used to retrieve the next page of results for this
     * operation.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeAppBlocksResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeAppBlocksResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<AppBlock> m_appBlocks;
    bool m_appBlocksHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace AppStream
} // namespace Aws
