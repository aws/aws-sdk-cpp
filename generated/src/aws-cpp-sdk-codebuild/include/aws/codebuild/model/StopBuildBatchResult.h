/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codebuild/CodeBuild_EXPORTS.h>
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
  class StopBuildBatchResult
  {
  public:
    AWS_CODEBUILD_API StopBuildBatchResult();
    AWS_CODEBUILD_API StopBuildBatchResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODEBUILD_API StopBuildBatchResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const BuildBatch& GetBuildBatch() const{ return m_buildBatch; }

    
    inline void SetBuildBatch(const BuildBatch& value) { m_buildBatch = value; }

    
    inline void SetBuildBatch(BuildBatch&& value) { m_buildBatch = std::move(value); }

    
    inline StopBuildBatchResult& WithBuildBatch(const BuildBatch& value) { SetBuildBatch(value); return *this;}

    
    inline StopBuildBatchResult& WithBuildBatch(BuildBatch&& value) { SetBuildBatch(std::move(value)); return *this;}

  private:

    BuildBatch m_buildBatch;
  };

} // namespace Model
} // namespace CodeBuild
} // namespace Aws
