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
#include <aws/workspaces/WorkSpaces_EXPORTS.h>
#include <aws/workspaces/model/ReconnectEnum.h>
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
namespace WorkSpaces
{
namespace Model
{

  /**
   * <p>Describes an Amazon WorkSpaces client.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/ClientProperties">AWS
   * API Reference</a></p>
   */
  class AWS_WORKSPACES_API ClientProperties
  {
  public:
    ClientProperties();
    ClientProperties(Aws::Utils::Json::JsonView jsonValue);
    ClientProperties& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Specifies whether users can cache their credentials on the Amazon WorkSpaces
     * client. When enabled, users can choose to reconnect to their WorkSpaces without
     * re-entering their credentials. </p>
     */
    inline const ReconnectEnum& GetReconnectEnabled() const{ return m_reconnectEnabled; }

    /**
     * <p>Specifies whether users can cache their credentials on the Amazon WorkSpaces
     * client. When enabled, users can choose to reconnect to their WorkSpaces without
     * re-entering their credentials. </p>
     */
    inline bool ReconnectEnabledHasBeenSet() const { return m_reconnectEnabledHasBeenSet; }

    /**
     * <p>Specifies whether users can cache their credentials on the Amazon WorkSpaces
     * client. When enabled, users can choose to reconnect to their WorkSpaces without
     * re-entering their credentials. </p>
     */
    inline void SetReconnectEnabled(const ReconnectEnum& value) { m_reconnectEnabledHasBeenSet = true; m_reconnectEnabled = value; }

    /**
     * <p>Specifies whether users can cache their credentials on the Amazon WorkSpaces
     * client. When enabled, users can choose to reconnect to their WorkSpaces without
     * re-entering their credentials. </p>
     */
    inline void SetReconnectEnabled(ReconnectEnum&& value) { m_reconnectEnabledHasBeenSet = true; m_reconnectEnabled = std::move(value); }

    /**
     * <p>Specifies whether users can cache their credentials on the Amazon WorkSpaces
     * client. When enabled, users can choose to reconnect to their WorkSpaces without
     * re-entering their credentials. </p>
     */
    inline ClientProperties& WithReconnectEnabled(const ReconnectEnum& value) { SetReconnectEnabled(value); return *this;}

    /**
     * <p>Specifies whether users can cache their credentials on the Amazon WorkSpaces
     * client. When enabled, users can choose to reconnect to their WorkSpaces without
     * re-entering their credentials. </p>
     */
    inline ClientProperties& WithReconnectEnabled(ReconnectEnum&& value) { SetReconnectEnabled(std::move(value)); return *this;}

  private:

    ReconnectEnum m_reconnectEnabled;
    bool m_reconnectEnabledHasBeenSet;
  };

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
