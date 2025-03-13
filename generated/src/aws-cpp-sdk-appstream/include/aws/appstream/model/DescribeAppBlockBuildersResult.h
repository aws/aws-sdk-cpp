/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appstream/AppStream_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/appstream/model/AppBlockBuilder.h>
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
  class DescribeAppBlockBuildersResult
  {
  public:
    AWS_APPSTREAM_API DescribeAppBlockBuildersResult() = default;
    AWS_APPSTREAM_API DescribeAppBlockBuildersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPSTREAM_API DescribeAppBlockBuildersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The list that describes one or more app block builders.</p>
     */
    inline const Aws::Vector<AppBlockBuilder>& GetAppBlockBuilders() const { return m_appBlockBuilders; }
    template<typename AppBlockBuildersT = Aws::Vector<AppBlockBuilder>>
    void SetAppBlockBuilders(AppBlockBuildersT&& value) { m_appBlockBuildersHasBeenSet = true; m_appBlockBuilders = std::forward<AppBlockBuildersT>(value); }
    template<typename AppBlockBuildersT = Aws::Vector<AppBlockBuilder>>
    DescribeAppBlockBuildersResult& WithAppBlockBuilders(AppBlockBuildersT&& value) { SetAppBlockBuilders(std::forward<AppBlockBuildersT>(value)); return *this;}
    template<typename AppBlockBuildersT = AppBlockBuilder>
    DescribeAppBlockBuildersResult& AddAppBlockBuilders(AppBlockBuildersT&& value) { m_appBlockBuildersHasBeenSet = true; m_appBlockBuilders.emplace_back(std::forward<AppBlockBuildersT>(value)); return *this; }
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
    DescribeAppBlockBuildersResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeAppBlockBuildersResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<AppBlockBuilder> m_appBlockBuilders;
    bool m_appBlockBuildersHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace AppStream
} // namespace Aws
