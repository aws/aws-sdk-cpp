/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codebuild/CodeBuild_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codebuild/model/Sandbox.h>
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
  class BatchGetSandboxesResult
  {
  public:
    AWS_CODEBUILD_API BatchGetSandboxesResult() = default;
    AWS_CODEBUILD_API BatchGetSandboxesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODEBUILD_API BatchGetSandboxesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the requested sandboxes.</p>
     */
    inline const Aws::Vector<Sandbox>& GetSandboxes() const { return m_sandboxes; }
    template<typename SandboxesT = Aws::Vector<Sandbox>>
    void SetSandboxes(SandboxesT&& value) { m_sandboxesHasBeenSet = true; m_sandboxes = std::forward<SandboxesT>(value); }
    template<typename SandboxesT = Aws::Vector<Sandbox>>
    BatchGetSandboxesResult& WithSandboxes(SandboxesT&& value) { SetSandboxes(std::forward<SandboxesT>(value)); return *this;}
    template<typename SandboxesT = Sandbox>
    BatchGetSandboxesResult& AddSandboxes(SandboxesT&& value) { m_sandboxesHasBeenSet = true; m_sandboxes.emplace_back(std::forward<SandboxesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The IDs of sandboxes for which information could not be found.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSandboxesNotFound() const { return m_sandboxesNotFound; }
    template<typename SandboxesNotFoundT = Aws::Vector<Aws::String>>
    void SetSandboxesNotFound(SandboxesNotFoundT&& value) { m_sandboxesNotFoundHasBeenSet = true; m_sandboxesNotFound = std::forward<SandboxesNotFoundT>(value); }
    template<typename SandboxesNotFoundT = Aws::Vector<Aws::String>>
    BatchGetSandboxesResult& WithSandboxesNotFound(SandboxesNotFoundT&& value) { SetSandboxesNotFound(std::forward<SandboxesNotFoundT>(value)); return *this;}
    template<typename SandboxesNotFoundT = Aws::String>
    BatchGetSandboxesResult& AddSandboxesNotFound(SandboxesNotFoundT&& value) { m_sandboxesNotFoundHasBeenSet = true; m_sandboxesNotFound.emplace_back(std::forward<SandboxesNotFoundT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    BatchGetSandboxesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Sandbox> m_sandboxes;
    bool m_sandboxesHasBeenSet = false;

    Aws::Vector<Aws::String> m_sandboxesNotFound;
    bool m_sandboxesNotFoundHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeBuild
} // namespace Aws
