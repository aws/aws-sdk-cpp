/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codebuild/CodeBuild_EXPORTS.h>
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
namespace CodeBuild
{
namespace Model
{
  class ListBuildsForProjectResult
  {
  public:
    AWS_CODEBUILD_API ListBuildsForProjectResult() = default;
    AWS_CODEBUILD_API ListBuildsForProjectResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODEBUILD_API ListBuildsForProjectResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of build identifiers for the specified build project, with each build
     * ID representing a single build.</p>
     */
    inline const Aws::Vector<Aws::String>& GetIds() const { return m_ids; }
    template<typename IdsT = Aws::Vector<Aws::String>>
    void SetIds(IdsT&& value) { m_idsHasBeenSet = true; m_ids = std::forward<IdsT>(value); }
    template<typename IdsT = Aws::Vector<Aws::String>>
    ListBuildsForProjectResult& WithIds(IdsT&& value) { SetIds(std::forward<IdsT>(value)); return *this;}
    template<typename IdsT = Aws::String>
    ListBuildsForProjectResult& AddIds(IdsT&& value) { m_idsHasBeenSet = true; m_ids.emplace_back(std::forward<IdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If there are more than 100 items in the list, only the first 100 items are
     * returned, along with a unique string called a <i>nextToken</i>. To get the next
     * batch of items in the list, call this operation again, adding the next token to
     * the call.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListBuildsForProjectResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListBuildsForProjectResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_ids;
    bool m_idsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeBuild
} // namespace Aws
