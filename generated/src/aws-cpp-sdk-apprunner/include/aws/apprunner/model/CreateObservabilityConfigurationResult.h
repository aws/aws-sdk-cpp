/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apprunner/AppRunner_EXPORTS.h>
#include <aws/apprunner/model/ObservabilityConfiguration.h>
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
namespace AppRunner
{
namespace Model
{
  class CreateObservabilityConfigurationResult
  {
  public:
    AWS_APPRUNNER_API CreateObservabilityConfigurationResult();
    AWS_APPRUNNER_API CreateObservabilityConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPRUNNER_API CreateObservabilityConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A description of the App Runner observability configuration that's created by
     * this request.</p>
     */
    inline const ObservabilityConfiguration& GetObservabilityConfiguration() const{ return m_observabilityConfiguration; }

    /**
     * <p>A description of the App Runner observability configuration that's created by
     * this request.</p>
     */
    inline void SetObservabilityConfiguration(const ObservabilityConfiguration& value) { m_observabilityConfiguration = value; }

    /**
     * <p>A description of the App Runner observability configuration that's created by
     * this request.</p>
     */
    inline void SetObservabilityConfiguration(ObservabilityConfiguration&& value) { m_observabilityConfiguration = std::move(value); }

    /**
     * <p>A description of the App Runner observability configuration that's created by
     * this request.</p>
     */
    inline CreateObservabilityConfigurationResult& WithObservabilityConfiguration(const ObservabilityConfiguration& value) { SetObservabilityConfiguration(value); return *this;}

    /**
     * <p>A description of the App Runner observability configuration that's created by
     * this request.</p>
     */
    inline CreateObservabilityConfigurationResult& WithObservabilityConfiguration(ObservabilityConfiguration&& value) { SetObservabilityConfiguration(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline CreateObservabilityConfigurationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline CreateObservabilityConfigurationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline CreateObservabilityConfigurationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    ObservabilityConfiguration m_observabilityConfiguration;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace AppRunner
} // namespace Aws
