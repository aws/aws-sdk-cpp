/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apprunner/AppRunner_EXPORTS.h>
#include <aws/apprunner/model/ObservabilityConfiguration.h>
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
namespace AppRunner
{
namespace Model
{
  class DescribeObservabilityConfigurationResult
  {
  public:
    AWS_APPRUNNER_API DescribeObservabilityConfigurationResult();
    AWS_APPRUNNER_API DescribeObservabilityConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPRUNNER_API DescribeObservabilityConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A full description of the App Runner observability configuration that you
     * specified in this request.</p>
     */
    inline const ObservabilityConfiguration& GetObservabilityConfiguration() const{ return m_observabilityConfiguration; }

    /**
     * <p>A full description of the App Runner observability configuration that you
     * specified in this request.</p>
     */
    inline void SetObservabilityConfiguration(const ObservabilityConfiguration& value) { m_observabilityConfiguration = value; }

    /**
     * <p>A full description of the App Runner observability configuration that you
     * specified in this request.</p>
     */
    inline void SetObservabilityConfiguration(ObservabilityConfiguration&& value) { m_observabilityConfiguration = std::move(value); }

    /**
     * <p>A full description of the App Runner observability configuration that you
     * specified in this request.</p>
     */
    inline DescribeObservabilityConfigurationResult& WithObservabilityConfiguration(const ObservabilityConfiguration& value) { SetObservabilityConfiguration(value); return *this;}

    /**
     * <p>A full description of the App Runner observability configuration that you
     * specified in this request.</p>
     */
    inline DescribeObservabilityConfigurationResult& WithObservabilityConfiguration(ObservabilityConfiguration&& value) { SetObservabilityConfiguration(std::move(value)); return *this;}

  private:

    ObservabilityConfiguration m_observabilityConfiguration;
  };

} // namespace Model
} // namespace AppRunner
} // namespace Aws
