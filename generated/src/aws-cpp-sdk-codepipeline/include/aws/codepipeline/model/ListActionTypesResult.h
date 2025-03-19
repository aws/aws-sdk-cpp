/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codepipeline/CodePipeline_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codepipeline/model/ActionType.h>
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
namespace CodePipeline
{
namespace Model
{
  /**
   * <p>Represents the output of a <code>ListActionTypes</code> action.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/ListActionTypesOutput">AWS
   * API Reference</a></p>
   */
  class ListActionTypesResult
  {
  public:
    AWS_CODEPIPELINE_API ListActionTypesResult() = default;
    AWS_CODEPIPELINE_API ListActionTypesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODEPIPELINE_API ListActionTypesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Provides details of the action types.</p>
     */
    inline const Aws::Vector<ActionType>& GetActionTypes() const { return m_actionTypes; }
    template<typename ActionTypesT = Aws::Vector<ActionType>>
    void SetActionTypes(ActionTypesT&& value) { m_actionTypesHasBeenSet = true; m_actionTypes = std::forward<ActionTypesT>(value); }
    template<typename ActionTypesT = Aws::Vector<ActionType>>
    ListActionTypesResult& WithActionTypes(ActionTypesT&& value) { SetActionTypes(std::forward<ActionTypesT>(value)); return *this;}
    template<typename ActionTypesT = ActionType>
    ListActionTypesResult& AddActionTypes(ActionTypesT&& value) { m_actionTypesHasBeenSet = true; m_actionTypes.emplace_back(std::forward<ActionTypesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If the amount of returned information is significantly large, an identifier
     * is also returned. It can be used in a subsequent list action types call to
     * return the next set of action types in the list.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListActionTypesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListActionTypesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ActionType> m_actionTypes;
    bool m_actionTypesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
