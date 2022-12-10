/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/personalize/Personalize_EXPORTS.h>
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
namespace Personalize
{
namespace Model
{
  class CreateMetricAttributionResult
  {
  public:
    AWS_PERSONALIZE_API CreateMetricAttributionResult();
    AWS_PERSONALIZE_API CreateMetricAttributionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PERSONALIZE_API CreateMetricAttributionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Resource Name (ARN) for the new metric attribution.</p>
     */
    inline const Aws::String& GetMetricAttributionArn() const{ return m_metricAttributionArn; }

    /**
     * <p>The Amazon Resource Name (ARN) for the new metric attribution.</p>
     */
    inline void SetMetricAttributionArn(const Aws::String& value) { m_metricAttributionArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) for the new metric attribution.</p>
     */
    inline void SetMetricAttributionArn(Aws::String&& value) { m_metricAttributionArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the new metric attribution.</p>
     */
    inline void SetMetricAttributionArn(const char* value) { m_metricAttributionArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the new metric attribution.</p>
     */
    inline CreateMetricAttributionResult& WithMetricAttributionArn(const Aws::String& value) { SetMetricAttributionArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the new metric attribution.</p>
     */
    inline CreateMetricAttributionResult& WithMetricAttributionArn(Aws::String&& value) { SetMetricAttributionArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the new metric attribution.</p>
     */
    inline CreateMetricAttributionResult& WithMetricAttributionArn(const char* value) { SetMetricAttributionArn(value); return *this;}

  private:

    Aws::String m_metricAttributionArn;
  };

} // namespace Model
} // namespace Personalize
} // namespace Aws
