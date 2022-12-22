/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/BatchDescribeModelPackageSummary.h>
#include <aws/sagemaker/model/BatchDescribeModelPackageError.h>
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
namespace SageMaker
{
namespace Model
{
  class BatchDescribeModelPackageResult
  {
  public:
    AWS_SAGEMAKER_API BatchDescribeModelPackageResult();
    AWS_SAGEMAKER_API BatchDescribeModelPackageResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API BatchDescribeModelPackageResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The summaries for the model package versions</p>
     */
    inline const Aws::Map<Aws::String, BatchDescribeModelPackageSummary>& GetModelPackageSummaries() const{ return m_modelPackageSummaries; }

    /**
     * <p>The summaries for the model package versions</p>
     */
    inline void SetModelPackageSummaries(const Aws::Map<Aws::String, BatchDescribeModelPackageSummary>& value) { m_modelPackageSummaries = value; }

    /**
     * <p>The summaries for the model package versions</p>
     */
    inline void SetModelPackageSummaries(Aws::Map<Aws::String, BatchDescribeModelPackageSummary>&& value) { m_modelPackageSummaries = std::move(value); }

    /**
     * <p>The summaries for the model package versions</p>
     */
    inline BatchDescribeModelPackageResult& WithModelPackageSummaries(const Aws::Map<Aws::String, BatchDescribeModelPackageSummary>& value) { SetModelPackageSummaries(value); return *this;}

    /**
     * <p>The summaries for the model package versions</p>
     */
    inline BatchDescribeModelPackageResult& WithModelPackageSummaries(Aws::Map<Aws::String, BatchDescribeModelPackageSummary>&& value) { SetModelPackageSummaries(std::move(value)); return *this;}

    /**
     * <p>The summaries for the model package versions</p>
     */
    inline BatchDescribeModelPackageResult& AddModelPackageSummaries(const Aws::String& key, const BatchDescribeModelPackageSummary& value) { m_modelPackageSummaries.emplace(key, value); return *this; }

    /**
     * <p>The summaries for the model package versions</p>
     */
    inline BatchDescribeModelPackageResult& AddModelPackageSummaries(Aws::String&& key, const BatchDescribeModelPackageSummary& value) { m_modelPackageSummaries.emplace(std::move(key), value); return *this; }

    /**
     * <p>The summaries for the model package versions</p>
     */
    inline BatchDescribeModelPackageResult& AddModelPackageSummaries(const Aws::String& key, BatchDescribeModelPackageSummary&& value) { m_modelPackageSummaries.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The summaries for the model package versions</p>
     */
    inline BatchDescribeModelPackageResult& AddModelPackageSummaries(Aws::String&& key, BatchDescribeModelPackageSummary&& value) { m_modelPackageSummaries.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The summaries for the model package versions</p>
     */
    inline BatchDescribeModelPackageResult& AddModelPackageSummaries(const char* key, BatchDescribeModelPackageSummary&& value) { m_modelPackageSummaries.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The summaries for the model package versions</p>
     */
    inline BatchDescribeModelPackageResult& AddModelPackageSummaries(const char* key, const BatchDescribeModelPackageSummary& value) { m_modelPackageSummaries.emplace(key, value); return *this; }


    /**
     * <p>A map of the resource and BatchDescribeModelPackageError objects reporting
     * the error associated with describing the model package.</p>
     */
    inline const Aws::Map<Aws::String, BatchDescribeModelPackageError>& GetBatchDescribeModelPackageErrorMap() const{ return m_batchDescribeModelPackageErrorMap; }

    /**
     * <p>A map of the resource and BatchDescribeModelPackageError objects reporting
     * the error associated with describing the model package.</p>
     */
    inline void SetBatchDescribeModelPackageErrorMap(const Aws::Map<Aws::String, BatchDescribeModelPackageError>& value) { m_batchDescribeModelPackageErrorMap = value; }

    /**
     * <p>A map of the resource and BatchDescribeModelPackageError objects reporting
     * the error associated with describing the model package.</p>
     */
    inline void SetBatchDescribeModelPackageErrorMap(Aws::Map<Aws::String, BatchDescribeModelPackageError>&& value) { m_batchDescribeModelPackageErrorMap = std::move(value); }

    /**
     * <p>A map of the resource and BatchDescribeModelPackageError objects reporting
     * the error associated with describing the model package.</p>
     */
    inline BatchDescribeModelPackageResult& WithBatchDescribeModelPackageErrorMap(const Aws::Map<Aws::String, BatchDescribeModelPackageError>& value) { SetBatchDescribeModelPackageErrorMap(value); return *this;}

    /**
     * <p>A map of the resource and BatchDescribeModelPackageError objects reporting
     * the error associated with describing the model package.</p>
     */
    inline BatchDescribeModelPackageResult& WithBatchDescribeModelPackageErrorMap(Aws::Map<Aws::String, BatchDescribeModelPackageError>&& value) { SetBatchDescribeModelPackageErrorMap(std::move(value)); return *this;}

    /**
     * <p>A map of the resource and BatchDescribeModelPackageError objects reporting
     * the error associated with describing the model package.</p>
     */
    inline BatchDescribeModelPackageResult& AddBatchDescribeModelPackageErrorMap(const Aws::String& key, const BatchDescribeModelPackageError& value) { m_batchDescribeModelPackageErrorMap.emplace(key, value); return *this; }

    /**
     * <p>A map of the resource and BatchDescribeModelPackageError objects reporting
     * the error associated with describing the model package.</p>
     */
    inline BatchDescribeModelPackageResult& AddBatchDescribeModelPackageErrorMap(Aws::String&& key, const BatchDescribeModelPackageError& value) { m_batchDescribeModelPackageErrorMap.emplace(std::move(key), value); return *this; }

    /**
     * <p>A map of the resource and BatchDescribeModelPackageError objects reporting
     * the error associated with describing the model package.</p>
     */
    inline BatchDescribeModelPackageResult& AddBatchDescribeModelPackageErrorMap(const Aws::String& key, BatchDescribeModelPackageError&& value) { m_batchDescribeModelPackageErrorMap.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A map of the resource and BatchDescribeModelPackageError objects reporting
     * the error associated with describing the model package.</p>
     */
    inline BatchDescribeModelPackageResult& AddBatchDescribeModelPackageErrorMap(Aws::String&& key, BatchDescribeModelPackageError&& value) { m_batchDescribeModelPackageErrorMap.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A map of the resource and BatchDescribeModelPackageError objects reporting
     * the error associated with describing the model package.</p>
     */
    inline BatchDescribeModelPackageResult& AddBatchDescribeModelPackageErrorMap(const char* key, BatchDescribeModelPackageError&& value) { m_batchDescribeModelPackageErrorMap.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A map of the resource and BatchDescribeModelPackageError objects reporting
     * the error associated with describing the model package.</p>
     */
    inline BatchDescribeModelPackageResult& AddBatchDescribeModelPackageErrorMap(const char* key, const BatchDescribeModelPackageError& value) { m_batchDescribeModelPackageErrorMap.emplace(key, value); return *this; }

  private:

    Aws::Map<Aws::String, BatchDescribeModelPackageSummary> m_modelPackageSummaries;

    Aws::Map<Aws::String, BatchDescribeModelPackageError> m_batchDescribeModelPackageErrorMap;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
