/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime/Chime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/chime/model/OriginationRoute.h>
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
namespace Chime
{
namespace Model
{

  /**
   * <p>Origination settings enable your SIP hosts to receive inbound calls using
   * your Amazon Chime Voice Connector.</p>  <p>The parameters listed below are
   * not required, but you must use at least one. </p> <p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/Origination">AWS
   * API Reference</a></p>
   */
  class Origination
  {
  public:
    AWS_CHIME_API Origination();
    AWS_CHIME_API Origination(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIME_API Origination& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The call distribution properties defined for your SIP hosts. Valid range:
     * Minimum value of 1. Maximum value of 20. This parameter is not required, but you
     * must specify this parameter or <code>Disabled</code>.</p>
     */
    inline const Aws::Vector<OriginationRoute>& GetRoutes() const{ return m_routes; }

    /**
     * <p>The call distribution properties defined for your SIP hosts. Valid range:
     * Minimum value of 1. Maximum value of 20. This parameter is not required, but you
     * must specify this parameter or <code>Disabled</code>.</p>
     */
    inline bool RoutesHasBeenSet() const { return m_routesHasBeenSet; }

    /**
     * <p>The call distribution properties defined for your SIP hosts. Valid range:
     * Minimum value of 1. Maximum value of 20. This parameter is not required, but you
     * must specify this parameter or <code>Disabled</code>.</p>
     */
    inline void SetRoutes(const Aws::Vector<OriginationRoute>& value) { m_routesHasBeenSet = true; m_routes = value; }

    /**
     * <p>The call distribution properties defined for your SIP hosts. Valid range:
     * Minimum value of 1. Maximum value of 20. This parameter is not required, but you
     * must specify this parameter or <code>Disabled</code>.</p>
     */
    inline void SetRoutes(Aws::Vector<OriginationRoute>&& value) { m_routesHasBeenSet = true; m_routes = std::move(value); }

    /**
     * <p>The call distribution properties defined for your SIP hosts. Valid range:
     * Minimum value of 1. Maximum value of 20. This parameter is not required, but you
     * must specify this parameter or <code>Disabled</code>.</p>
     */
    inline Origination& WithRoutes(const Aws::Vector<OriginationRoute>& value) { SetRoutes(value); return *this;}

    /**
     * <p>The call distribution properties defined for your SIP hosts. Valid range:
     * Minimum value of 1. Maximum value of 20. This parameter is not required, but you
     * must specify this parameter or <code>Disabled</code>.</p>
     */
    inline Origination& WithRoutes(Aws::Vector<OriginationRoute>&& value) { SetRoutes(std::move(value)); return *this;}

    /**
     * <p>The call distribution properties defined for your SIP hosts. Valid range:
     * Minimum value of 1. Maximum value of 20. This parameter is not required, but you
     * must specify this parameter or <code>Disabled</code>.</p>
     */
    inline Origination& AddRoutes(const OriginationRoute& value) { m_routesHasBeenSet = true; m_routes.push_back(value); return *this; }

    /**
     * <p>The call distribution properties defined for your SIP hosts. Valid range:
     * Minimum value of 1. Maximum value of 20. This parameter is not required, but you
     * must specify this parameter or <code>Disabled</code>.</p>
     */
    inline Origination& AddRoutes(OriginationRoute&& value) { m_routesHasBeenSet = true; m_routes.push_back(std::move(value)); return *this; }


    /**
     * <p>When origination settings are disabled, inbound calls are not enabled for
     * your Amazon Chime Voice Connector. This parameter is not required, but you must
     * specify this parameter or <code>Routes</code>.</p>
     */
    inline bool GetDisabled() const{ return m_disabled; }

    /**
     * <p>When origination settings are disabled, inbound calls are not enabled for
     * your Amazon Chime Voice Connector. This parameter is not required, but you must
     * specify this parameter or <code>Routes</code>.</p>
     */
    inline bool DisabledHasBeenSet() const { return m_disabledHasBeenSet; }

    /**
     * <p>When origination settings are disabled, inbound calls are not enabled for
     * your Amazon Chime Voice Connector. This parameter is not required, but you must
     * specify this parameter or <code>Routes</code>.</p>
     */
    inline void SetDisabled(bool value) { m_disabledHasBeenSet = true; m_disabled = value; }

    /**
     * <p>When origination settings are disabled, inbound calls are not enabled for
     * your Amazon Chime Voice Connector. This parameter is not required, but you must
     * specify this parameter or <code>Routes</code>.</p>
     */
    inline Origination& WithDisabled(bool value) { SetDisabled(value); return *this;}

  private:

    Aws::Vector<OriginationRoute> m_routes;
    bool m_routesHasBeenSet = false;

    bool m_disabled;
    bool m_disabledHasBeenSet = false;
  };

} // namespace Model
} // namespace Chime
} // namespace Aws
