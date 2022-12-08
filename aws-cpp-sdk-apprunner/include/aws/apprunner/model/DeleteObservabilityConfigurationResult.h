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
  class DeleteObservabilityConfigurationResult
  {
  public:
    AWS_APPRUNNER_API DeleteObservabilityConfigurationResult();
    AWS_APPRUNNER_API DeleteObservabilityConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPRUNNER_API DeleteObservabilityConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A description of the App Runner observability configuration that this request
     * just deleted.</p>
     */
    inline const ObservabilityConfiguration& GetObservabilityConfiguration() const{ return m_observabilityConfiguration; }

    /**
     * <p>A description of the App Runner observability configuration that this request
     * just deleted.</p>
     */
    inline void SetObservabilityConfiguration(const ObservabilityConfiguration& value) { m_observabilityConfiguration = value; }

    /**
     * <p>A description of the App Runner observability configuration that this request
     * just deleted.</p>
     */
    inline void SetObservabilityConfiguration(ObservabilityConfiguration&& value) { m_observabilityConfiguration = std::move(value); }

    /**
     * <p>A description of the App Runner observability configuration that this request
     * just deleted.</p>
     */
    inline DeleteObservabilityConfigurationResult& WithObservabilityConfiguration(const ObservabilityConfiguration& value) { SetObservabilityConfiguration(value); return *this;}

    /**
     * <p>A description of the App Runner observability configuration that this request
     * just deleted.</p>
     */
    inline DeleteObservabilityConfigurationResult& WithObservabilityConfiguration(ObservabilityConfiguration&& value) { SetObservabilityConfiguration(std::move(value)); return *this;}

  private:

    ObservabilityConfiguration m_observabilityConfiguration;
  };

} // namespace Model
} // namespace AppRunner
} // namespace Aws
