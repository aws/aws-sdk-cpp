/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamelift/GameLift_EXPORTS.h>
#include <aws/gamelift/model/RuntimeConfiguration.h>
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
    AWS_GAMELIFT_API UpdateRuntimeConfigurationResult();
    AWS_GAMELIFT_API UpdateRuntimeConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GAMELIFT_API UpdateRuntimeConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The runtime configuration currently in use by all instances in the fleet. If
     * the update was successful, all property changes are shown. </p>
     */
    inline const RuntimeConfiguration& GetRuntimeConfiguration() const{ return m_runtimeConfiguration; }

    /**
     * <p>The runtime configuration currently in use by all instances in the fleet. If
     * the update was successful, all property changes are shown. </p>
     */
    inline void SetRuntimeConfiguration(const RuntimeConfiguration& value) { m_runtimeConfiguration = value; }

    /**
     * <p>The runtime configuration currently in use by all instances in the fleet. If
     * the update was successful, all property changes are shown. </p>
     */
    inline void SetRuntimeConfiguration(RuntimeConfiguration&& value) { m_runtimeConfiguration = std::move(value); }

    /**
     * <p>The runtime configuration currently in use by all instances in the fleet. If
     * the update was successful, all property changes are shown. </p>
     */
    inline UpdateRuntimeConfigurationResult& WithRuntimeConfiguration(const RuntimeConfiguration& value) { SetRuntimeConfiguration(value); return *this;}

    /**
     * <p>The runtime configuration currently in use by all instances in the fleet. If
     * the update was successful, all property changes are shown. </p>
     */
    inline UpdateRuntimeConfigurationResult& WithRuntimeConfiguration(RuntimeConfiguration&& value) { SetRuntimeConfiguration(std::move(value)); return *this;}

  private:

    RuntimeConfiguration m_runtimeConfiguration;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
