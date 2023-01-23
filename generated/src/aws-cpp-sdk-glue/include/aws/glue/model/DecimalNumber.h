/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/Array.h>
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
namespace Glue
{
namespace Model
{

  /**
   * <p>Contains a numeric value in decimal format.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/DecimalNumber">AWS
   * API Reference</a></p>
   */
  class DecimalNumber
  {
  public:
    AWS_GLUE_API DecimalNumber();
    AWS_GLUE_API DecimalNumber(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API DecimalNumber& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The unscaled numeric value.</p>
     */
    inline const Aws::Utils::ByteBuffer& GetUnscaledValue() const{ return m_unscaledValue; }

    /**
     * <p>The unscaled numeric value.</p>
     */
    inline bool UnscaledValueHasBeenSet() const { return m_unscaledValueHasBeenSet; }

    /**
     * <p>The unscaled numeric value.</p>
     */
    inline void SetUnscaledValue(const Aws::Utils::ByteBuffer& value) { m_unscaledValueHasBeenSet = true; m_unscaledValue = value; }

    /**
     * <p>The unscaled numeric value.</p>
     */
    inline void SetUnscaledValue(Aws::Utils::ByteBuffer&& value) { m_unscaledValueHasBeenSet = true; m_unscaledValue = std::move(value); }

    /**
     * <p>The unscaled numeric value.</p>
     */
    inline DecimalNumber& WithUnscaledValue(const Aws::Utils::ByteBuffer& value) { SetUnscaledValue(value); return *this;}

    /**
     * <p>The unscaled numeric value.</p>
     */
    inline DecimalNumber& WithUnscaledValue(Aws::Utils::ByteBuffer&& value) { SetUnscaledValue(std::move(value)); return *this;}


    /**
     * <p>The scale that determines where the decimal point falls in the unscaled
     * value.</p>
     */
    inline int GetScale() const{ return m_scale; }

    /**
     * <p>The scale that determines where the decimal point falls in the unscaled
     * value.</p>
     */
    inline bool ScaleHasBeenSet() const { return m_scaleHasBeenSet; }

    /**
     * <p>The scale that determines where the decimal point falls in the unscaled
     * value.</p>
     */
    inline void SetScale(int value) { m_scaleHasBeenSet = true; m_scale = value; }

    /**
     * <p>The scale that determines where the decimal point falls in the unscaled
     * value.</p>
     */
    inline DecimalNumber& WithScale(int value) { SetScale(value); return *this;}

  private:

    Aws::Utils::ByteBuffer m_unscaledValue;
    bool m_unscaledValueHasBeenSet = false;

    int m_scale;
    bool m_scaleHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
