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
   * <p>A custom response string that Amazon Lex sends to your application. You
   * define the content and structure the string.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/CustomPayload">AWS
   * API Reference</a></p>
   */
  class CustomPayload
  {
  public:
    AWS_LEXMODELSV2_API CustomPayload();
    AWS_LEXMODELSV2_API CustomPayload(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API CustomPayload& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The string that is sent to your application.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * <p>The string that is sent to your application.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>The string that is sent to your application.</p>
     */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The string that is sent to your application.</p>
     */
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>The string that is sent to your application.</p>
     */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /**
     * <p>The string that is sent to your application.</p>
     */
    inline CustomPayload& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p>The string that is sent to your application.</p>
     */
    inline CustomPayload& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}

    /**
     * <p>The string that is sent to your application.</p>
     */
    inline CustomPayload& WithValue(const char* value) { SetValue(value); return *this;}

  private:

    Aws::String m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
