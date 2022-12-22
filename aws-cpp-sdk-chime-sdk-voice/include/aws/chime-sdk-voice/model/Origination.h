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

  class Origination
  {
  public:
    AWS_CHIMESDKVOICE_API Origination();
    AWS_CHIMESDKVOICE_API Origination(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKVOICE_API Origination& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKVOICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::Vector<OriginationRoute>& GetRoutes() const{ return m_routes; }

    
    inline bool RoutesHasBeenSet() const { return m_routesHasBeenSet; }

    
    inline void SetRoutes(const Aws::Vector<OriginationRoute>& value) { m_routesHasBeenSet = true; m_routes = value; }

    
    inline void SetRoutes(Aws::Vector<OriginationRoute>&& value) { m_routesHasBeenSet = true; m_routes = std::move(value); }

    
    inline Origination& WithRoutes(const Aws::Vector<OriginationRoute>& value) { SetRoutes(value); return *this;}

    
    inline Origination& WithRoutes(Aws::Vector<OriginationRoute>&& value) { SetRoutes(std::move(value)); return *this;}

    
    inline Origination& AddRoutes(const OriginationRoute& value) { m_routesHasBeenSet = true; m_routes.push_back(value); return *this; }

    
    inline Origination& AddRoutes(OriginationRoute&& value) { m_routesHasBeenSet = true; m_routes.push_back(std::move(value)); return *this; }


    
    inline bool GetDisabled() const{ return m_disabled; }

    
    inline bool DisabledHasBeenSet() const { return m_disabledHasBeenSet; }

    
    inline void SetDisabled(bool value) { m_disabledHasBeenSet = true; m_disabled = value; }

    
    inline Origination& WithDisabled(bool value) { SetDisabled(value); return *this;}

  private:

    Aws::Vector<OriginationRoute> m_routes;
    bool m_routesHasBeenSet = false;

    bool m_disabled;
    bool m_disabledHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKVoice
} // namespace Aws
