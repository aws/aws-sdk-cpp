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
   * <p>This key-value pair can store custom data about a game session. For example,
   * you might use a <code>GameProperty</code> to track a game session's map, level
   * of difficulty, or remaining time. The difficulty level could be specified like
   * this: <code>{"Key": "difficulty", "Value":"Novice"}</code>. </p> <p> You can set
   * game properties when creating a game session. You can also modify game
   * properties of an active game session. When searching for game sessions, you can
   * filter on game property keys and values. You can't delete game properties from a
   * game session. </p> <p>For examples of working with game properties, see <a
   * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/gamelift-sdk-client-api.html#game-properties">Create
   * a game session with properties</a>. </p><p><h3>See Also:</h3>   <a
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


    ///@{
    /**
     * <p>The game property identifier.</p>
     */
    inline const Aws::String& GetKey() const{ return m_key; }
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }
    inline void SetKey(const Aws::String& value) { m_keyHasBeenSet = true; m_key = value; }
    inline void SetKey(Aws::String&& value) { m_keyHasBeenSet = true; m_key = std::move(value); }
    inline void SetKey(const char* value) { m_keyHasBeenSet = true; m_key.assign(value); }
    inline GameProperty& WithKey(const Aws::String& value) { SetKey(value); return *this;}
    inline GameProperty& WithKey(Aws::String&& value) { SetKey(std::move(value)); return *this;}
    inline GameProperty& WithKey(const char* value) { SetKey(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The game property value.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }
    inline GameProperty& WithValue(const Aws::String& value) { SetValue(value); return *this;}
    inline GameProperty& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}
    inline GameProperty& WithValue(const char* value) { SetValue(value); return *this;}
    ///@}
  private:

    Aws::String m_key;
    bool m_keyHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
