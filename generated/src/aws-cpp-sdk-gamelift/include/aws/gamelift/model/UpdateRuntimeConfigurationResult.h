﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamelift/GameLift_EXPORTS.h>
#include <aws/gamelift/model/RuntimeConfiguration.h>
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
namespace GameLift
{
namespace Model
{
  class UpdateRuntimeConfigurationResult
  {
  public:
    AWS_GAMELIFT_API UpdateRuntimeConfigurationResult() = default;
    AWS_GAMELIFT_API UpdateRuntimeConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GAMELIFT_API UpdateRuntimeConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The runtime configuration currently in use by computes in the fleet. If the
     * update is successful, all property changes are shown. </p>
     */
    inline const RuntimeConfiguration& GetRuntimeConfiguration() const { return m_runtimeConfiguration; }
    template<typename RuntimeConfigurationT = RuntimeConfiguration>
    void SetRuntimeConfiguration(RuntimeConfigurationT&& value) { m_runtimeConfigurationHasBeenSet = true; m_runtimeConfiguration = std::forward<RuntimeConfigurationT>(value); }
    template<typename RuntimeConfigurationT = RuntimeConfiguration>
    UpdateRuntimeConfigurationResult& WithRuntimeConfiguration(RuntimeConfigurationT&& value) { SetRuntimeConfiguration(std::forward<RuntimeConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    UpdateRuntimeConfigurationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    RuntimeConfiguration m_runtimeConfiguration;
    bool m_runtimeConfigurationHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
