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
#include <aws/apigateway/model/ThrottleSettings.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace APIGateway
{
namespace Model
{

  /**
   * <p>API stage name of the associated API stage in a usage plan.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/ApiStage">AWS
   * API Reference</a></p>
   */
  class AWS_APIGATEWAY_API ApiStage
  {
  public:
    ApiStage();
    ApiStage(Aws::Utils::Json::JsonView jsonValue);
    ApiStage& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>API Id of the associated API stage in a usage plan.</p>
     */
    inline const Aws::String& GetApiId() const{ return m_apiId; }

    /**
     * <p>API Id of the associated API stage in a usage plan.</p>
     */
    inline void SetApiId(const Aws::String& value) { m_apiIdHasBeenSet = true; m_apiId = value; }

    /**
     * <p>API Id of the associated API stage in a usage plan.</p>
     */
    inline void SetApiId(Aws::String&& value) { m_apiIdHasBeenSet = true; m_apiId = std::move(value); }

    /**
     * <p>API Id of the associated API stage in a usage plan.</p>
     */
    inline void SetApiId(const char* value) { m_apiIdHasBeenSet = true; m_apiId.assign(value); }

    /**
     * <p>API Id of the associated API stage in a usage plan.</p>
     */
    inline ApiStage& WithApiId(const Aws::String& value) { SetApiId(value); return *this;}

    /**
     * <p>API Id of the associated API stage in a usage plan.</p>
     */
    inline ApiStage& WithApiId(Aws::String&& value) { SetApiId(std::move(value)); return *this;}

    /**
     * <p>API Id of the associated API stage in a usage plan.</p>
     */
    inline ApiStage& WithApiId(const char* value) { SetApiId(value); return *this;}


    /**
     * <p>API stage name of the associated API stage in a usage plan.</p>
     */
    inline const Aws::String& GetStage() const{ return m_stage; }

    /**
     * <p>API stage name of the associated API stage in a usage plan.</p>
     */
    inline void SetStage(const Aws::String& value) { m_stageHasBeenSet = true; m_stage = value; }

    /**
     * <p>API stage name of the associated API stage in a usage plan.</p>
     */
    inline void SetStage(Aws::String&& value) { m_stageHasBeenSet = true; m_stage = std::move(value); }

    /**
     * <p>API stage name of the associated API stage in a usage plan.</p>
     */
    inline void SetStage(const char* value) { m_stageHasBeenSet = true; m_stage.assign(value); }

    /**
     * <p>API stage name of the associated API stage in a usage plan.</p>
     */
    inline ApiStage& WithStage(const Aws::String& value) { SetStage(value); return *this;}

    /**
     * <p>API stage name of the associated API stage in a usage plan.</p>
     */
    inline ApiStage& WithStage(Aws::String&& value) { SetStage(std::move(value)); return *this;}

    /**
     * <p>API stage name of the associated API stage in a usage plan.</p>
     */
    inline ApiStage& WithStage(const char* value) { SetStage(value); return *this;}


    /**
     * <p>Map containing method level throttling information for API stage in a usage
     * plan.</p>
     */
    inline const Aws::Map<Aws::String, ThrottleSettings>& GetThrottle() const{ return m_throttle; }

    /**
     * <p>Map containing method level throttling information for API stage in a usage
     * plan.</p>
     */
    inline void SetThrottle(const Aws::Map<Aws::String, ThrottleSettings>& value) { m_throttleHasBeenSet = true; m_throttle = value; }

    /**
     * <p>Map containing method level throttling information for API stage in a usage
     * plan.</p>
     */
    inline void SetThrottle(Aws::Map<Aws::String, ThrottleSettings>&& value) { m_throttleHasBeenSet = true; m_throttle = std::move(value); }

    /**
     * <p>Map containing method level throttling information for API stage in a usage
     * plan.</p>
     */
    inline ApiStage& WithThrottle(const Aws::Map<Aws::String, ThrottleSettings>& value) { SetThrottle(value); return *this;}

    /**
     * <p>Map containing method level throttling information for API stage in a usage
     * plan.</p>
     */
    inline ApiStage& WithThrottle(Aws::Map<Aws::String, ThrottleSettings>&& value) { SetThrottle(std::move(value)); return *this;}

    /**
     * <p>Map containing method level throttling information for API stage in a usage
     * plan.</p>
     */
    inline ApiStage& AddThrottle(const Aws::String& key, const ThrottleSettings& value) { m_throttleHasBeenSet = true; m_throttle.emplace(key, value); return *this; }

    /**
     * <p>Map containing method level throttling information for API stage in a usage
     * plan.</p>
     */
    inline ApiStage& AddThrottle(Aws::String&& key, const ThrottleSettings& value) { m_throttleHasBeenSet = true; m_throttle.emplace(std::move(key), value); return *this; }

    /**
     * <p>Map containing method level throttling information for API stage in a usage
     * plan.</p>
     */
    inline ApiStage& AddThrottle(const Aws::String& key, ThrottleSettings&& value) { m_throttleHasBeenSet = true; m_throttle.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Map containing method level throttling information for API stage in a usage
     * plan.</p>
     */
    inline ApiStage& AddThrottle(Aws::String&& key, ThrottleSettings&& value) { m_throttleHasBeenSet = true; m_throttle.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Map containing method level throttling information for API stage in a usage
     * plan.</p>
     */
    inline ApiStage& AddThrottle(const char* key, ThrottleSettings&& value) { m_throttleHasBeenSet = true; m_throttle.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Map containing method level throttling information for API stage in a usage
     * plan.</p>
     */
    inline ApiStage& AddThrottle(const char* key, const ThrottleSettings& value) { m_throttleHasBeenSet = true; m_throttle.emplace(key, value); return *this; }

  private:

    Aws::String m_apiId;
    bool m_apiIdHasBeenSet;

    Aws::String m_stage;
    bool m_stageHasBeenSet;

    Aws::Map<Aws::String, ThrottleSettings> m_throttle;
    bool m_throttleHasBeenSet;
  };

} // namespace Model
} // namespace APIGateway
} // namespace Aws
