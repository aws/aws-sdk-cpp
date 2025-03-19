/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apprunner/AppRunner_EXPORTS.h>
#include <aws/apprunner/model/AutoScalingConfiguration.h>
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
  class UpdateDefaultAutoScalingConfigurationResult
  {
  public:
    AWS_APPRUNNER_API UpdateDefaultAutoScalingConfigurationResult() = default;
    AWS_APPRUNNER_API UpdateDefaultAutoScalingConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPRUNNER_API UpdateDefaultAutoScalingConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A description of the App Runner auto scaling configuration that was set as
     * default.</p>
     */
    inline const AutoScalingConfiguration& GetAutoScalingConfiguration() const { return m_autoScalingConfiguration; }
    template<typename AutoScalingConfigurationT = AutoScalingConfiguration>
    void SetAutoScalingConfiguration(AutoScalingConfigurationT&& value) { m_autoScalingConfigurationHasBeenSet = true; m_autoScalingConfiguration = std::forward<AutoScalingConfigurationT>(value); }
    template<typename AutoScalingConfigurationT = AutoScalingConfiguration>
    UpdateDefaultAutoScalingConfigurationResult& WithAutoScalingConfiguration(AutoScalingConfigurationT&& value) { SetAutoScalingConfiguration(std::forward<AutoScalingConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    UpdateDefaultAutoScalingConfigurationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    AutoScalingConfiguration m_autoScalingConfiguration;
    bool m_autoScalingConfigurationHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace AppRunner
} // namespace Aws
