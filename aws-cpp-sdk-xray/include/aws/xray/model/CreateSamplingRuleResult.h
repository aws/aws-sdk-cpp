/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/xray/XRay_EXPORTS.h>
#include <aws/xray/model/SamplingRuleRecord.h>
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
namespace XRay
{
namespace Model
{
  class CreateSamplingRuleResult
  {
  public:
    AWS_XRAY_API CreateSamplingRuleResult();
    AWS_XRAY_API CreateSamplingRuleResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_XRAY_API CreateSamplingRuleResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The saved rule definition and metadata.</p>
     */
    inline const SamplingRuleRecord& GetSamplingRuleRecord() const{ return m_samplingRuleRecord; }

    /**
     * <p>The saved rule definition and metadata.</p>
     */
    inline void SetSamplingRuleRecord(const SamplingRuleRecord& value) { m_samplingRuleRecord = value; }

    /**
     * <p>The saved rule definition and metadata.</p>
     */
    inline void SetSamplingRuleRecord(SamplingRuleRecord&& value) { m_samplingRuleRecord = std::move(value); }

    /**
     * <p>The saved rule definition and metadata.</p>
     */
    inline CreateSamplingRuleResult& WithSamplingRuleRecord(const SamplingRuleRecord& value) { SetSamplingRuleRecord(value); return *this;}

    /**
     * <p>The saved rule definition and metadata.</p>
     */
    inline CreateSamplingRuleResult& WithSamplingRuleRecord(SamplingRuleRecord&& value) { SetSamplingRuleRecord(std::move(value)); return *this;}

  private:

    SamplingRuleRecord m_samplingRuleRecord;
  };

} // namespace Model
} // namespace XRay
} // namespace Aws
