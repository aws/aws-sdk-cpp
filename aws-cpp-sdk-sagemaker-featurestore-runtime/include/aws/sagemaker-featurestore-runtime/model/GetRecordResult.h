/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker-featurestore-runtime/SageMakerFeatureStoreRuntime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker-featurestore-runtime/model/FeatureValue.h>
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
namespace SageMakerFeatureStoreRuntime
{
namespace Model
{
  class GetRecordResult
  {
  public:
    AWS_SAGEMAKERFEATURESTORERUNTIME_API GetRecordResult();
    AWS_SAGEMAKERFEATURESTORERUNTIME_API GetRecordResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKERFEATURESTORERUNTIME_API GetRecordResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The record you requested. A list of <code>FeatureValues</code>.</p>
     */
    inline const Aws::Vector<FeatureValue>& GetRecord() const{ return m_record; }

    /**
     * <p>The record you requested. A list of <code>FeatureValues</code>.</p>
     */
    inline void SetRecord(const Aws::Vector<FeatureValue>& value) { m_record = value; }

    /**
     * <p>The record you requested. A list of <code>FeatureValues</code>.</p>
     */
    inline void SetRecord(Aws::Vector<FeatureValue>&& value) { m_record = std::move(value); }

    /**
     * <p>The record you requested. A list of <code>FeatureValues</code>.</p>
     */
    inline GetRecordResult& WithRecord(const Aws::Vector<FeatureValue>& value) { SetRecord(value); return *this;}

    /**
     * <p>The record you requested. A list of <code>FeatureValues</code>.</p>
     */
    inline GetRecordResult& WithRecord(Aws::Vector<FeatureValue>&& value) { SetRecord(std::move(value)); return *this;}

    /**
     * <p>The record you requested. A list of <code>FeatureValues</code>.</p>
     */
    inline GetRecordResult& AddRecord(const FeatureValue& value) { m_record.push_back(value); return *this; }

    /**
     * <p>The record you requested. A list of <code>FeatureValues</code>.</p>
     */
    inline GetRecordResult& AddRecord(FeatureValue&& value) { m_record.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<FeatureValue> m_record;
  };

} // namespace Model
} // namespace SageMakerFeatureStoreRuntime
} // namespace Aws
