/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codebuild/CodeBuild_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codebuild/model/BuildBatch.h>
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
  class BatchGetBuildBatchesResult
  {
  public:
    AWS_CODEBUILD_API BatchGetBuildBatchesResult() = default;
    AWS_CODEBUILD_API BatchGetBuildBatchesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODEBUILD_API BatchGetBuildBatchesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of <code>BuildBatch</code> objects that represent the retrieved
     * batch builds.</p>
     */
    inline const Aws::Vector<BuildBatch>& GetBuildBatches() const { return m_buildBatches; }
    template<typename BuildBatchesT = Aws::Vector<BuildBatch>>
    void SetBuildBatches(BuildBatchesT&& value) { m_buildBatchesHasBeenSet = true; m_buildBatches = std::forward<BuildBatchesT>(value); }
    template<typename BuildBatchesT = Aws::Vector<BuildBatch>>
    BatchGetBuildBatchesResult& WithBuildBatches(BuildBatchesT&& value) { SetBuildBatches(std::forward<BuildBatchesT>(value)); return *this;}
    template<typename BuildBatchesT = BuildBatch>
    BatchGetBuildBatchesResult& AddBuildBatches(BuildBatchesT&& value) { m_buildBatchesHasBeenSet = true; m_buildBatches.emplace_back(std::forward<BuildBatchesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An array that contains the identifiers of any batch builds that are not
     * found.</p>
     */
    inline const Aws::Vector<Aws::String>& GetBuildBatchesNotFound() const { return m_buildBatchesNotFound; }
    template<typename BuildBatchesNotFoundT = Aws::Vector<Aws::String>>
    void SetBuildBatchesNotFound(BuildBatchesNotFoundT&& value) { m_buildBatchesNotFoundHasBeenSet = true; m_buildBatchesNotFound = std::forward<BuildBatchesNotFoundT>(value); }
    template<typename BuildBatchesNotFoundT = Aws::Vector<Aws::String>>
    BatchGetBuildBatchesResult& WithBuildBatchesNotFound(BuildBatchesNotFoundT&& value) { SetBuildBatchesNotFound(std::forward<BuildBatchesNotFoundT>(value)); return *this;}
    template<typename BuildBatchesNotFoundT = Aws::String>
    BatchGetBuildBatchesResult& AddBuildBatchesNotFound(BuildBatchesNotFoundT&& value) { m_buildBatchesNotFoundHasBeenSet = true; m_buildBatchesNotFound.emplace_back(std::forward<BuildBatchesNotFoundT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    BatchGetBuildBatchesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<BuildBatch> m_buildBatches;
    bool m_buildBatchesHasBeenSet = false;

    Aws::Vector<Aws::String> m_buildBatchesNotFound;
    bool m_buildBatchesNotFoundHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeBuild
} // namespace Aws
