/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
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
namespace LexModelsV2
{
namespace Model
{

  /**
   * <p>Defines an ASCII text message to send to the user.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/PlainTextMessage">AWS
   * API Reference</a></p>
   */
  class PlainTextMessage
  {
  public:
    AWS_LEXMODELSV2_API PlainTextMessage();
    AWS_LEXMODELSV2_API PlainTextMessage(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API PlainTextMessage& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The message to send to the user.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * <p>The message to send to the user.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>The message to send to the user.</p>
     */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The message to send to the user.</p>
     */
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>The message to send to the user.</p>
     */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /**
     * <p>The message to send to the user.</p>
     */
    inline PlainTextMessage& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p>The message to send to the user.</p>
     */
    inline PlainTextMessage& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}

    /**
     * <p>The message to send to the user.</p>
     */
    inline PlainTextMessage& WithValue(const char* value) { SetValue(value); return *this;}

  private:

    Aws::String m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
