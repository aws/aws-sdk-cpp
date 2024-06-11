﻿/**
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
    AWS_CODEBUILD_API StartBuildBatchResult();
    AWS_CODEBUILD_API StartBuildBatchResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODEBUILD_API StartBuildBatchResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A <code>BuildBatch</code> object that contains information about the batch
     * build.</p>
     */
    inline const BuildBatch& GetBuildBatch() const{ return m_buildBatch; }
    inline void SetBuildBatch(const BuildBatch& value) { m_buildBatch = value; }
    inline void SetBuildBatch(BuildBatch&& value) { m_buildBatch = std::move(value); }
    inline StartBuildBatchResult& WithBuildBatch(const BuildBatch& value) { SetBuildBatch(value); return *this;}
    inline StartBuildBatchResult& WithBuildBatch(BuildBatch&& value) { SetBuildBatch(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline StartBuildBatchResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline StartBuildBatchResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline StartBuildBatchResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    BuildBatch m_buildBatch;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CodeBuild
} // namespace Aws
