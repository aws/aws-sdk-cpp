/*
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
   * your Amazon Chime Voice Connector.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/Origination">AWS
   * API Reference</a></p>
   */
  class AWS_CHIME_API Origination
  {
  public:
    Origination();
    Origination(Aws::Utils::Json::JsonView jsonValue);
    Origination& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The call distribution properties defined for your SIP hosts. Valid range:
     * Minimum value of 1. Maximum value of 20.</p>
     */
    inline const Aws::Vector<OriginationRoute>& GetRoutes() const{ return m_routes; }

    /**
     * <p>The call distribution properties defined for your SIP hosts. Valid range:
     * Minimum value of 1. Maximum value of 20.</p>
     */
    inline bool RoutesHasBeenSet() const { return m_routesHasBeenSet; }

    /**
     * <p>The call distribution properties defined for your SIP hosts. Valid range:
     * Minimum value of 1. Maximum value of 20.</p>
     */
    inline void SetRoutes(const Aws::Vector<OriginationRoute>& value) { m_routesHasBeenSet = true; m_routes = value; }

    /**
     * <p>The call distribution properties defined for your SIP hosts. Valid range:
     * Minimum value of 1. Maximum value of 20.</p>
     */
    inline void SetRoutes(Aws::Vector<OriginationRoute>&& value) { m_routesHasBeenSet = true; m_routes = std::move(value); }

    /**
     * <p>The call distribution properties defined for your SIP hosts. Valid range:
     * Minimum value of 1. Maximum value of 20.</p>
     */
    inline Origination& WithRoutes(const Aws::Vector<OriginationRoute>& value) { SetRoutes(value); return *this;}

    /**
     * <p>The call distribution properties defined for your SIP hosts. Valid range:
     * Minimum value of 1. Maximum value of 20.</p>
     */
    inline Origination& WithRoutes(Aws::Vector<OriginationRoute>&& value) { SetRoutes(std::move(value)); return *this;}

    /**
     * <p>The call distribution properties defined for your SIP hosts. Valid range:
     * Minimum value of 1. Maximum value of 20.</p>
     */
    inline Origination& AddRoutes(const OriginationRoute& value) { m_routesHasBeenSet = true; m_routes.push_back(value); return *this; }

    /**
     * <p>The call distribution properties defined for your SIP hosts. Valid range:
     * Minimum value of 1. Maximum value of 20.</p>
     */
    inline Origination& AddRoutes(OriginationRoute&& value) { m_routesHasBeenSet = true; m_routes.push_back(std::move(value)); return *this; }


    /**
     * <p>When origination settings are disabled, inbound calls are not enabled for
     * your Amazon Chime Voice Connector.</p>
     */
    inline bool GetDisabled() const{ return m_disabled; }

    /**
     * <p>When origination settings are disabled, inbound calls are not enabled for
     * your Amazon Chime Voice Connector.</p>
     */
    inline bool DisabledHasBeenSet() const { return m_disabledHasBeenSet; }

    /**
     * <p>When origination settings are disabled, inbound calls are not enabled for
     * your Amazon Chime Voice Connector.</p>
     */
    inline void SetDisabled(bool value) { m_disabledHasBeenSet = true; m_disabled = value; }

    /**
     * <p>When origination settings are disabled, inbound calls are not enabled for
     * your Amazon Chime Voice Connector.</p>
     */
    inline Origination& WithDisabled(bool value) { SetDisabled(value); return *this;}

  private:

    Aws::Vector<OriginationRoute> m_routes;
    bool m_routesHasBeenSet;

    bool m_disabled;
    bool m_disabledHasBeenSet;
  };

} // namespace Model
} // namespace Chime
} // namespace Aws
