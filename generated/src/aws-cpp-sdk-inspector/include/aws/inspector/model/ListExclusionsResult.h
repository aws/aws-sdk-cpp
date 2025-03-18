/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector/Inspector_EXPORTS.h>
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
namespace Inspector
{
namespace Model
{
  class ListExclusionsResult
  {
  public:
    AWS_INSPECTOR_API ListExclusionsResult() = default;
    AWS_INSPECTOR_API ListExclusionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_INSPECTOR_API ListExclusionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of exclusions' ARNs returned by the action.</p>
     */
    inline const Aws::Vector<Aws::String>& GetExclusionArns() const { return m_exclusionArns; }
    template<typename ExclusionArnsT = Aws::Vector<Aws::String>>
    void SetExclusionArns(ExclusionArnsT&& value) { m_exclusionArnsHasBeenSet = true; m_exclusionArns = std::forward<ExclusionArnsT>(value); }
    template<typename ExclusionArnsT = Aws::Vector<Aws::String>>
    ListExclusionsResult& WithExclusionArns(ExclusionArnsT&& value) { SetExclusionArns(std::forward<ExclusionArnsT>(value)); return *this;}
    template<typename ExclusionArnsT = Aws::String>
    ListExclusionsResult& AddExclusionArns(ExclusionArnsT&& value) { m_exclusionArnsHasBeenSet = true; m_exclusionArns.emplace_back(std::forward<ExclusionArnsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>When a response is generated, if there is more data to be listed, this
     * parameters is present in the response and contains the value to use for the
     * nextToken parameter in a subsequent pagination request. If there is no more data
     * to be listed, this parameter is set to null.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListExclusionsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListExclusionsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_exclusionArns;
    bool m_exclusionArnsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector
} // namespace Aws
