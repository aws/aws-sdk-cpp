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
#include <aws/gamelift/GameLift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace GameLift
{
namespace Model
{

  /**
   * <p>Set of key-value pairs that contain information about a game session. When
   * included in a game session request, these properties communicate details to be
   * used when setting up the new game session, such as to specify a game mode,
   * level, or map. Game properties are passed to the game server process when
   * initiating a new game session; the server process uses the properties as
   * appropriate. For more information, see the <a
   * href="http://docs.aws.amazon.com/gamelift/latest/developerguide/gamelift-sdk-client-api.html#gamelift-sdk-client-api-create">
   * Amazon GameLift Developer Guide</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/GameProperty">AWS
   * API Reference</a></p>
   */
  class AWS_GAMELIFT_API GameProperty
  {
  public:
    GameProperty();
    GameProperty(const Aws::Utils::Json::JsonValue& jsonValue);
    GameProperty& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Game property identifier.</p>
     */
    inline const Aws::String& GetKey() const{ return m_key; }

    /**
     * <p>Game property identifier.</p>
     */
    inline void SetKey(const Aws::String& value) { m_keyHasBeenSet = true; m_key = value; }

    /**
     * <p>Game property identifier.</p>
     */
    inline void SetKey(Aws::String&& value) { m_keyHasBeenSet = true; m_key = std::move(value); }

    /**
     * <p>Game property identifier.</p>
     */
    inline void SetKey(const char* value) { m_keyHasBeenSet = true; m_key.assign(value); }

    /**
     * <p>Game property identifier.</p>
     */
    inline GameProperty& WithKey(const Aws::String& value) { SetKey(value); return *this;}

    /**
     * <p>Game property identifier.</p>
     */
    inline GameProperty& WithKey(Aws::String&& value) { SetKey(std::move(value)); return *this;}

    /**
     * <p>Game property identifier.</p>
     */
    inline GameProperty& WithKey(const char* value) { SetKey(value); return *this;}


    /**
     * <p>Game property value.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * <p>Game property value.</p>
     */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>Game property value.</p>
     */
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>Game property value.</p>
     */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /**
     * <p>Game property value.</p>
     */
    inline GameProperty& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p>Game property value.</p>
     */
    inline GameProperty& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}

    /**
     * <p>Game property value.</p>
     */
    inline GameProperty& WithValue(const char* value) { SetValue(value); return *this;}

  private:

    Aws::String m_key;
    bool m_keyHasBeenSet;

    Aws::String m_value;
    bool m_valueHasBeenSet;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
