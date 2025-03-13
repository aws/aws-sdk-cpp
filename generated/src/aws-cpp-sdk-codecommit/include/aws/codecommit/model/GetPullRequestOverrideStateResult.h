/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codecommit/CodeCommit_EXPORTS.h>
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
namespace CodeCommit
{
namespace Model
{
  class GetPullRequestOverrideStateResult
  {
  public:
    AWS_CODECOMMIT_API GetPullRequestOverrideStateResult() = default;
    AWS_CODECOMMIT_API GetPullRequestOverrideStateResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODECOMMIT_API GetPullRequestOverrideStateResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A Boolean value that indicates whether a pull request has had its rules set
     * aside (TRUE) or whether all approval rules still apply (FALSE).</p>
     */
    inline bool GetOverridden() const { return m_overridden; }
    inline void SetOverridden(bool value) { m_overriddenHasBeenSet = true; m_overridden = value; }
    inline GetPullRequestOverrideStateResult& WithOverridden(bool value) { SetOverridden(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the user or identity that overrode the
     * rules and their requirements for the pull request.</p>
     */
    inline const Aws::String& GetOverrider() const { return m_overrider; }
    template<typename OverriderT = Aws::String>
    void SetOverrider(OverriderT&& value) { m_overriderHasBeenSet = true; m_overrider = std::forward<OverriderT>(value); }
    template<typename OverriderT = Aws::String>
    GetPullRequestOverrideStateResult& WithOverrider(OverriderT&& value) { SetOverrider(std::forward<OverriderT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetPullRequestOverrideStateResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    bool m_overridden{false};
    bool m_overriddenHasBeenSet = false;

    Aws::String m_overrider;
    bool m_overriderHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
