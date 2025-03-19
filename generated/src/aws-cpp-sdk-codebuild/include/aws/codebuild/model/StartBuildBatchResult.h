/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codebuild/CodeBuild_EXPORTS.h>
#include <aws/codebuild/model/BuildBatch.h>
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
  class StartBuildBatchResult
  {
  public:
    AWS_CODEBUILD_API StartBuildBatchResult() = default;
    AWS_CODEBUILD_API StartBuildBatchResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODEBUILD_API StartBuildBatchResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A <code>BuildBatch</code> object that contains information about the batch
     * build.</p>
     */
    inline const BuildBatch& GetBuildBatch() const { return m_buildBatch; }
    template<typename BuildBatchT = BuildBatch>
    void SetBuildBatch(BuildBatchT&& value) { m_buildBatchHasBeenSet = true; m_buildBatch = std::forward<BuildBatchT>(value); }
    template<typename BuildBatchT = BuildBatch>
    StartBuildBatchResult& WithBuildBatch(BuildBatchT&& value) { SetBuildBatch(std::forward<BuildBatchT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    StartBuildBatchResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    BuildBatch m_buildBatch;
    bool m_buildBatchHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeBuild
} // namespace Aws
