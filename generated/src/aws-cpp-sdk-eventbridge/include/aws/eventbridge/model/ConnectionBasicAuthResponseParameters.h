﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eventbridge/EventBridge_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace EventBridge
{
namespace Model
{

  /**
   * <p>The authorization parameters for the connection if Basic is specified as the
   * authorization type.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/eventbridge-2015-10-07/ConnectionBasicAuthResponseParameters">AWS
   * API Reference</a></p>
   */
  class ConnectionBasicAuthResponseParameters
  {
  public:
    AWS_EVENTBRIDGE_API ConnectionBasicAuthResponseParameters();
    AWS_EVENTBRIDGE_API ConnectionBasicAuthResponseParameters(Aws::Utils::Json::JsonView jsonValue);
    AWS_EVENTBRIDGE_API ConnectionBasicAuthResponseParameters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EVENTBRIDGE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The user name to use for Basic authorization.</p>
     */
    inline const Aws::String& GetUsername() const{ return m_username; }
    inline bool UsernameHasBeenSet() const { return m_usernameHasBeenSet; }
    inline void SetUsername(const Aws::String& value) { m_usernameHasBeenSet = true; m_username = value; }
    inline void SetUsername(Aws::String&& value) { m_usernameHasBeenSet = true; m_username = std::move(value); }
    inline void SetUsername(const char* value) { m_usernameHasBeenSet = true; m_username.assign(value); }
    inline ConnectionBasicAuthResponseParameters& WithUsername(const Aws::String& value) { SetUsername(value); return *this;}
    inline ConnectionBasicAuthResponseParameters& WithUsername(Aws::String&& value) { SetUsername(std::move(value)); return *this;}
    inline ConnectionBasicAuthResponseParameters& WithUsername(const char* value) { SetUsername(value); return *this;}
    ///@}
  private:

    Aws::String m_username;
    bool m_usernameHasBeenSet = false;
  };

} // namespace Model
} // namespace EventBridge
} // namespace Aws
