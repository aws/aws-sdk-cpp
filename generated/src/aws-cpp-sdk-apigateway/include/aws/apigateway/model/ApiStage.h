/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class ApiStage
  {
  public:
    AWS_APIGATEWAY_API ApiStage() = default;
    AWS_APIGATEWAY_API ApiStage(Aws::Utils::Json::JsonView jsonValue);
    AWS_APIGATEWAY_API ApiStage& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APIGATEWAY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>API Id of the associated API stage in a usage plan.</p>
     */
    inline const Aws::String& GetApiId() const { return m_apiId; }
    inline bool ApiIdHasBeenSet() const { return m_apiIdHasBeenSet; }
    template<typename ApiIdT = Aws::String>
    void SetApiId(ApiIdT&& value) { m_apiIdHasBeenSet = true; m_apiId = std::forward<ApiIdT>(value); }
    template<typename ApiIdT = Aws::String>
    ApiStage& WithApiId(ApiIdT&& value) { SetApiId(std::forward<ApiIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>API stage name of the associated API stage in a usage plan.</p>
     */
    inline const Aws::String& GetStage() const { return m_stage; }
    inline bool StageHasBeenSet() const { return m_stageHasBeenSet; }
    template<typename StageT = Aws::String>
    void SetStage(StageT&& value) { m_stageHasBeenSet = true; m_stage = std::forward<StageT>(value); }
    template<typename StageT = Aws::String>
    ApiStage& WithStage(StageT&& value) { SetStage(std::forward<StageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Map containing method level throttling information for API stage in a usage
     * plan.</p>
     */
    inline const Aws::Map<Aws::String, ThrottleSettings>& GetThrottle() const { return m_throttle; }
    inline bool ThrottleHasBeenSet() const { return m_throttleHasBeenSet; }
    template<typename ThrottleT = Aws::Map<Aws::String, ThrottleSettings>>
    void SetThrottle(ThrottleT&& value) { m_throttleHasBeenSet = true; m_throttle = std::forward<ThrottleT>(value); }
    template<typename ThrottleT = Aws::Map<Aws::String, ThrottleSettings>>
    ApiStage& WithThrottle(ThrottleT&& value) { SetThrottle(std::forward<ThrottleT>(value)); return *this;}
    template<typename ThrottleKeyT = Aws::String, typename ThrottleValueT = ThrottleSettings>
    ApiStage& AddThrottle(ThrottleKeyT&& key, ThrottleValueT&& value) {
      m_throttleHasBeenSet = true; m_throttle.emplace(std::forward<ThrottleKeyT>(key), std::forward<ThrottleValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::String m_apiId;
    bool m_apiIdHasBeenSet = false;

    Aws::String m_stage;
    bool m_stageHasBeenSet = false;

    Aws::Map<Aws::String, ThrottleSettings> m_throttle;
    bool m_throttleHasBeenSet = false;
  };

} // namespace Model
} // namespace APIGateway
} // namespace Aws
