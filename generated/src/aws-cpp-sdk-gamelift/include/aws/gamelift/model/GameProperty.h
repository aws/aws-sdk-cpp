/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class JsonView;
} // namespace Json
} // namespace Utils
namespace GameLift
{
namespace Model
{

  /**
   * <p>Set of key-value pairs that contain information about a game session. When
   * included in a game session request, these properties communicate details to be
   * used when setting up the new game session. For example, a game property might
   * specify a game mode, level, or map. Game properties are passed to the game
   * server process when initiating a new game session. For more information, see the
   * <a
   * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/gamelift-sdk-client-api.html#gamelift-sdk-client-api-create">
   * Amazon GameLift Developer Guide</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/GameProperty">AWS
   * API Reference</a></p>
   */
  class GameProperty
  {
  public:
    AWS_GAMELIFT_API GameProperty();
    AWS_GAMELIFT_API GameProperty(Aws::Utils::Json::JsonView jsonValue);
    AWS_GAMELIFT_API GameProperty& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GAMELIFT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The game property identifier.</p>
     */
    inline const Aws::String& GetKey() const{ return m_key; }

    /**
     * <p>The game property identifier.</p>
     */
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }

    /**
     * <p>The game property identifier.</p>
     */
    inline void SetKey(const Aws::String& value) { m_keyHasBeenSet = true; m_key = value; }

    /**
     * <p>The game property identifier.</p>
     */
    inline void SetKey(Aws::String&& value) { m_keyHasBeenSet = true; m_key = std::move(value); }

    /**
     * <p>The game property identifier.</p>
     */
    inline void SetKey(const char* value) { m_keyHasBeenSet = true; m_key.assign(value); }

    /**
     * <p>The game property identifier.</p>
     */
    inline GameProperty& WithKey(const Aws::String& value) { SetKey(value); return *this;}

    /**
     * <p>The game property identifier.</p>
     */
    inline GameProperty& WithKey(Aws::String&& value) { SetKey(std::move(value)); return *this;}

    /**
     * <p>The game property identifier.</p>
     */
    inline GameProperty& WithKey(const char* value) { SetKey(value); return *this;}


    /**
     * <p>The game property value.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * <p>The game property value.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>The game property value.</p>
     */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The game property value.</p>
     */
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>The game property value.</p>
     */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /**
     * <p>The game property value.</p>
     */
    inline GameProperty& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p>The game property value.</p>
     */
    inline GameProperty& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}

    /**
     * <p>The game property value.</p>
     */
    inline GameProperty& WithValue(const char* value) { SetValue(value); return *this;}

  private:

    Aws::String m_key;
    bool m_keyHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
