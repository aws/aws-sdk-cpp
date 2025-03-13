/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-voice/ChimeSDKVoice_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/chime-sdk-voice/model/OriginationRoute.h>
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
namespace ChimeSDKVoice
{
namespace Model
{

  /**
   * <p>Origination settings enable your SIP hosts to receive inbound calls using
   * your Amazon Chime SDK Voice Connector.</p>  <p>The parameters listed below
   * are not required, but you must use at least one.</p> <p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-voice-2022-08-03/Origination">AWS
   * API Reference</a></p>
   */
  class Origination
  {
  public:
    AWS_CHIMESDKVOICE_API Origination() = default;
    AWS_CHIMESDKVOICE_API Origination(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKVOICE_API Origination& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKVOICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The call distribution properties defined for your SIP hosts. Valid range:
     * Minimum value of 1. Maximum value of 20. This parameter is not required, but you
     * must specify this parameter or <code>Disabled</code>.</p>
     */
    inline const Aws::Vector<OriginationRoute>& GetRoutes() const { return m_routes; }
    inline bool RoutesHasBeenSet() const { return m_routesHasBeenSet; }
    template<typename RoutesT = Aws::Vector<OriginationRoute>>
    void SetRoutes(RoutesT&& value) { m_routesHasBeenSet = true; m_routes = std::forward<RoutesT>(value); }
    template<typename RoutesT = Aws::Vector<OriginationRoute>>
    Origination& WithRoutes(RoutesT&& value) { SetRoutes(std::forward<RoutesT>(value)); return *this;}
    template<typename RoutesT = OriginationRoute>
    Origination& AddRoutes(RoutesT&& value) { m_routesHasBeenSet = true; m_routes.emplace_back(std::forward<RoutesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>When origination settings are disabled, inbound calls are not enabled for
     * your Amazon Chime SDK Voice Connector. This parameter is not required, but you
     * must specify this parameter or <code>Routes</code>.</p>
     */
    inline bool GetDisabled() const { return m_disabled; }
    inline bool DisabledHasBeenSet() const { return m_disabledHasBeenSet; }
    inline void SetDisabled(bool value) { m_disabledHasBeenSet = true; m_disabled = value; }
    inline Origination& WithDisabled(bool value) { SetDisabled(value); return *this;}
    ///@}
  private:

    Aws::Vector<OriginationRoute> m_routes;
    bool m_routesHasBeenSet = false;

    bool m_disabled{false};
    bool m_disabledHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKVoice
} // namespace Aws
