/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/imagebuilder/Imagebuilder_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/imagebuilder/model/LifecycleExecution.h>
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
namespace imagebuilder
{
namespace Model
{
  class ListLifecycleExecutionsResult
  {
  public:
    AWS_IMAGEBUILDER_API ListLifecycleExecutionsResult() = default;
    AWS_IMAGEBUILDER_API ListLifecycleExecutionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IMAGEBUILDER_API ListLifecycleExecutionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of lifecycle runtime instances for the specified resource.</p>
     */
    inline const Aws::Vector<LifecycleExecution>& GetLifecycleExecutions() const { return m_lifecycleExecutions; }
    template<typename LifecycleExecutionsT = Aws::Vector<LifecycleExecution>>
    void SetLifecycleExecutions(LifecycleExecutionsT&& value) { m_lifecycleExecutionsHasBeenSet = true; m_lifecycleExecutions = std::forward<LifecycleExecutionsT>(value); }
    template<typename LifecycleExecutionsT = Aws::Vector<LifecycleExecution>>
    ListLifecycleExecutionsResult& WithLifecycleExecutions(LifecycleExecutionsT&& value) { SetLifecycleExecutions(std::forward<LifecycleExecutionsT>(value)); return *this;}
    template<typename LifecycleExecutionsT = LifecycleExecution>
    ListLifecycleExecutionsResult& AddLifecycleExecutions(LifecycleExecutionsT&& value) { m_lifecycleExecutionsHasBeenSet = true; m_lifecycleExecutions.emplace_back(std::forward<LifecycleExecutionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The next token used for paginated responses. When this field isn't empty,
     * there are additional elements that the service hasn't included in this request.
     * Use this token with the next request to retrieve additional objects.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListLifecycleExecutionsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListLifecycleExecutionsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<LifecycleExecution> m_lifecycleExecutions;
    bool m_lifecycleExecutionsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
