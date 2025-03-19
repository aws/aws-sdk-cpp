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
  class DeleteObservabilityConfigurationResult
  {
  public:
    AWS_APPRUNNER_API DeleteObservabilityConfigurationResult() = default;
    AWS_APPRUNNER_API DeleteObservabilityConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPRUNNER_API DeleteObservabilityConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A description of the App Runner observability configuration that this request
     * just deleted.</p>
     */
    inline const ObservabilityConfiguration& GetObservabilityConfiguration() const { return m_observabilityConfiguration; }
    template<typename ObservabilityConfigurationT = ObservabilityConfiguration>
    void SetObservabilityConfiguration(ObservabilityConfigurationT&& value) { m_observabilityConfigurationHasBeenSet = true; m_observabilityConfiguration = std::forward<ObservabilityConfigurationT>(value); }
    template<typename ObservabilityConfigurationT = ObservabilityConfiguration>
    DeleteObservabilityConfigurationResult& WithObservabilityConfiguration(ObservabilityConfigurationT&& value) { SetObservabilityConfiguration(std::forward<ObservabilityConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DeleteObservabilityConfigurationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    ObservabilityConfiguration m_observabilityConfiguration;
    bool m_observabilityConfigurationHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace AppRunner
} // namespace Aws
