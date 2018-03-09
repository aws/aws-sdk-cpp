﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/apigateway/APIGateway_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace APIGateway
{
namespace Model
{

  /**
   * <p>Configuration settings of a canary deployment.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/CanarySettings">AWS
   * API Reference</a></p>
   */
  class AWS_APIGATEWAY_API CanarySettings
  {
  public:
    CanarySettings();
    CanarySettings(const Aws::Utils::Json::JsonValue& jsonValue);
    CanarySettings& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The percent (0-100) of traffic diverted to a canary deployment.</p>
     */
    inline double GetPercentTraffic() const{ return m_percentTraffic; }

    /**
     * <p>The percent (0-100) of traffic diverted to a canary deployment.</p>
     */
    inline void SetPercentTraffic(double value) { m_percentTrafficHasBeenSet = true; m_percentTraffic = value; }

    /**
     * <p>The percent (0-100) of traffic diverted to a canary deployment.</p>
     */
    inline CanarySettings& WithPercentTraffic(double value) { SetPercentTraffic(value); return *this;}


    /**
     * <p>The ID of the canary deployment.</p>
     */
    inline const Aws::String& GetDeploymentId() const{ return m_deploymentId; }

    /**
     * <p>The ID of the canary deployment.</p>
     */
    inline void SetDeploymentId(const Aws::String& value) { m_deploymentIdHasBeenSet = true; m_deploymentId = value; }

    /**
     * <p>The ID of the canary deployment.</p>
     */
    inline void SetDeploymentId(Aws::String&& value) { m_deploymentIdHasBeenSet = true; m_deploymentId = std::move(value); }

    /**
     * <p>The ID of the canary deployment.</p>
     */
    inline void SetDeploymentId(const char* value) { m_deploymentIdHasBeenSet = true; m_deploymentId.assign(value); }

    /**
     * <p>The ID of the canary deployment.</p>
     */
    inline CanarySettings& WithDeploymentId(const Aws::String& value) { SetDeploymentId(value); return *this;}

    /**
     * <p>The ID of the canary deployment.</p>
     */
    inline CanarySettings& WithDeploymentId(Aws::String&& value) { SetDeploymentId(std::move(value)); return *this;}

    /**
     * <p>The ID of the canary deployment.</p>
     */
    inline CanarySettings& WithDeploymentId(const char* value) { SetDeploymentId(value); return *this;}


    /**
     * <p>Stage variables overridden for a canary release deployment, including new
     * stage variables introduced in the canary. These stage variables are represented
     * as a string-to-string map between stage variable names and their values.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetStageVariableOverrides() const{ return m_stageVariableOverrides; }

    /**
     * <p>Stage variables overridden for a canary release deployment, including new
     * stage variables introduced in the canary. These stage variables are represented
     * as a string-to-string map between stage variable names and their values.</p>
     */
    inline void SetStageVariableOverrides(const Aws::Map<Aws::String, Aws::String>& value) { m_stageVariableOverridesHasBeenSet = true; m_stageVariableOverrides = value; }

    /**
     * <p>Stage variables overridden for a canary release deployment, including new
     * stage variables introduced in the canary. These stage variables are represented
     * as a string-to-string map between stage variable names and their values.</p>
     */
    inline void SetStageVariableOverrides(Aws::Map<Aws::String, Aws::String>&& value) { m_stageVariableOverridesHasBeenSet = true; m_stageVariableOverrides = std::move(value); }

    /**
     * <p>Stage variables overridden for a canary release deployment, including new
     * stage variables introduced in the canary. These stage variables are represented
     * as a string-to-string map between stage variable names and their values.</p>
     */
    inline CanarySettings& WithStageVariableOverrides(const Aws::Map<Aws::String, Aws::String>& value) { SetStageVariableOverrides(value); return *this;}

    /**
     * <p>Stage variables overridden for a canary release deployment, including new
     * stage variables introduced in the canary. These stage variables are represented
     * as a string-to-string map between stage variable names and their values.</p>
     */
    inline CanarySettings& WithStageVariableOverrides(Aws::Map<Aws::String, Aws::String>&& value) { SetStageVariableOverrides(std::move(value)); return *this;}

    /**
     * <p>Stage variables overridden for a canary release deployment, including new
     * stage variables introduced in the canary. These stage variables are represented
     * as a string-to-string map between stage variable names and their values.</p>
     */
    inline CanarySettings& AddStageVariableOverrides(const Aws::String& key, const Aws::String& value) { m_stageVariableOverridesHasBeenSet = true; m_stageVariableOverrides.emplace(key, value); return *this; }

    /**
     * <p>Stage variables overridden for a canary release deployment, including new
     * stage variables introduced in the canary. These stage variables are represented
     * as a string-to-string map between stage variable names and their values.</p>
     */
    inline CanarySettings& AddStageVariableOverrides(Aws::String&& key, const Aws::String& value) { m_stageVariableOverridesHasBeenSet = true; m_stageVariableOverrides.emplace(std::move(key), value); return *this; }

    /**
     * <p>Stage variables overridden for a canary release deployment, including new
     * stage variables introduced in the canary. These stage variables are represented
     * as a string-to-string map between stage variable names and their values.</p>
     */
    inline CanarySettings& AddStageVariableOverrides(const Aws::String& key, Aws::String&& value) { m_stageVariableOverridesHasBeenSet = true; m_stageVariableOverrides.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Stage variables overridden for a canary release deployment, including new
     * stage variables introduced in the canary. These stage variables are represented
     * as a string-to-string map between stage variable names and their values.</p>
     */
    inline CanarySettings& AddStageVariableOverrides(Aws::String&& key, Aws::String&& value) { m_stageVariableOverridesHasBeenSet = true; m_stageVariableOverrides.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Stage variables overridden for a canary release deployment, including new
     * stage variables introduced in the canary. These stage variables are represented
     * as a string-to-string map between stage variable names and their values.</p>
     */
    inline CanarySettings& AddStageVariableOverrides(const char* key, Aws::String&& value) { m_stageVariableOverridesHasBeenSet = true; m_stageVariableOverrides.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Stage variables overridden for a canary release deployment, including new
     * stage variables introduced in the canary. These stage variables are represented
     * as a string-to-string map between stage variable names and their values.</p>
     */
    inline CanarySettings& AddStageVariableOverrides(Aws::String&& key, const char* value) { m_stageVariableOverridesHasBeenSet = true; m_stageVariableOverrides.emplace(std::move(key), value); return *this; }

    /**
     * <p>Stage variables overridden for a canary release deployment, including new
     * stage variables introduced in the canary. These stage variables are represented
     * as a string-to-string map between stage variable names and their values.</p>
     */
    inline CanarySettings& AddStageVariableOverrides(const char* key, const char* value) { m_stageVariableOverridesHasBeenSet = true; m_stageVariableOverrides.emplace(key, value); return *this; }


    /**
     * <p>A Boolean flag to indicate whether the canary deployment uses the stage cache
     * or not.</p>
     */
    inline bool GetUseStageCache() const{ return m_useStageCache; }

    /**
     * <p>A Boolean flag to indicate whether the canary deployment uses the stage cache
     * or not.</p>
     */
    inline void SetUseStageCache(bool value) { m_useStageCacheHasBeenSet = true; m_useStageCache = value; }

    /**
     * <p>A Boolean flag to indicate whether the canary deployment uses the stage cache
     * or not.</p>
     */
    inline CanarySettings& WithUseStageCache(bool value) { SetUseStageCache(value); return *this;}

  private:

    double m_percentTraffic;
    bool m_percentTrafficHasBeenSet;

    Aws::String m_deploymentId;
    bool m_deploymentIdHasBeenSet;

    Aws::Map<Aws::String, Aws::String> m_stageVariableOverrides;
    bool m_stageVariableOverridesHasBeenSet;

    bool m_useStageCache;
    bool m_useStageCacheHasBeenSet;
  };

} // namespace Model
} // namespace APIGateway
} // namespace Aws
