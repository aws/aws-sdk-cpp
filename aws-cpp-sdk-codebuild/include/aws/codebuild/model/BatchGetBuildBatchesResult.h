/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codebuild/CodeBuild_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
  class BatchGetBuildBatchesResult
  {
  public:
    AWS_CODEBUILD_API BatchGetBuildBatchesResult();
    AWS_CODEBUILD_API BatchGetBuildBatchesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODEBUILD_API BatchGetBuildBatchesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An array of <code>BuildBatch</code> objects that represent the retrieved
     * batch builds.</p>
     */
    inline const Aws::Vector<BuildBatch>& GetBuildBatches() const{ return m_buildBatches; }

    /**
     * <p>An array of <code>BuildBatch</code> objects that represent the retrieved
     * batch builds.</p>
     */
    inline void SetBuildBatches(const Aws::Vector<BuildBatch>& value) { m_buildBatches = value; }

    /**
     * <p>An array of <code>BuildBatch</code> objects that represent the retrieved
     * batch builds.</p>
     */
    inline void SetBuildBatches(Aws::Vector<BuildBatch>&& value) { m_buildBatches = std::move(value); }

    /**
     * <p>An array of <code>BuildBatch</code> objects that represent the retrieved
     * batch builds.</p>
     */
    inline BatchGetBuildBatchesResult& WithBuildBatches(const Aws::Vector<BuildBatch>& value) { SetBuildBatches(value); return *this;}

    /**
     * <p>An array of <code>BuildBatch</code> objects that represent the retrieved
     * batch builds.</p>
     */
    inline BatchGetBuildBatchesResult& WithBuildBatches(Aws::Vector<BuildBatch>&& value) { SetBuildBatches(std::move(value)); return *this;}

    /**
     * <p>An array of <code>BuildBatch</code> objects that represent the retrieved
     * batch builds.</p>
     */
    inline BatchGetBuildBatchesResult& AddBuildBatches(const BuildBatch& value) { m_buildBatches.push_back(value); return *this; }

    /**
     * <p>An array of <code>BuildBatch</code> objects that represent the retrieved
     * batch builds.</p>
     */
    inline BatchGetBuildBatchesResult& AddBuildBatches(BuildBatch&& value) { m_buildBatches.push_back(std::move(value)); return *this; }


    /**
     * <p>An array that contains the identifiers of any batch builds that are not
     * found.</p>
     */
    inline const Aws::Vector<Aws::String>& GetBuildBatchesNotFound() const{ return m_buildBatchesNotFound; }

    /**
     * <p>An array that contains the identifiers of any batch builds that are not
     * found.</p>
     */
    inline void SetBuildBatchesNotFound(const Aws::Vector<Aws::String>& value) { m_buildBatchesNotFound = value; }

    /**
     * <p>An array that contains the identifiers of any batch builds that are not
     * found.</p>
     */
    inline void SetBuildBatchesNotFound(Aws::Vector<Aws::String>&& value) { m_buildBatchesNotFound = std::move(value); }

    /**
     * <p>An array that contains the identifiers of any batch builds that are not
     * found.</p>
     */
    inline BatchGetBuildBatchesResult& WithBuildBatchesNotFound(const Aws::Vector<Aws::String>& value) { SetBuildBatchesNotFound(value); return *this;}

    /**
     * <p>An array that contains the identifiers of any batch builds that are not
     * found.</p>
     */
    inline BatchGetBuildBatchesResult& WithBuildBatchesNotFound(Aws::Vector<Aws::String>&& value) { SetBuildBatchesNotFound(std::move(value)); return *this;}

    /**
     * <p>An array that contains the identifiers of any batch builds that are not
     * found.</p>
     */
    inline BatchGetBuildBatchesResult& AddBuildBatchesNotFound(const Aws::String& value) { m_buildBatchesNotFound.push_back(value); return *this; }

    /**
     * <p>An array that contains the identifiers of any batch builds that are not
     * found.</p>
     */
    inline BatchGetBuildBatchesResult& AddBuildBatchesNotFound(Aws::String&& value) { m_buildBatchesNotFound.push_back(std::move(value)); return *this; }

    /**
     * <p>An array that contains the identifiers of any batch builds that are not
     * found.</p>
     */
    inline BatchGetBuildBatchesResult& AddBuildBatchesNotFound(const char* value) { m_buildBatchesNotFound.push_back(value); return *this; }

  private:

    Aws::Vector<BuildBatch> m_buildBatches;

    Aws::Vector<Aws::String> m_buildBatchesNotFound;
  };

} // namespace Model
} // namespace CodeBuild
} // namespace Aws
