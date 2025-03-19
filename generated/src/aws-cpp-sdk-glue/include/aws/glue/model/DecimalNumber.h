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
    AWS_GLUE_API DecimalNumber() = default;
    AWS_GLUE_API DecimalNumber(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API DecimalNumber& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unscaled numeric value.</p>
     */
    inline const Aws::Utils::ByteBuffer& GetUnscaledValue() const { return m_unscaledValue; }
    inline bool UnscaledValueHasBeenSet() const { return m_unscaledValueHasBeenSet; }
    template<typename UnscaledValueT = Aws::Utils::ByteBuffer>
    void SetUnscaledValue(UnscaledValueT&& value) { m_unscaledValueHasBeenSet = true; m_unscaledValue = std::forward<UnscaledValueT>(value); }
    template<typename UnscaledValueT = Aws::Utils::ByteBuffer>
    DecimalNumber& WithUnscaledValue(UnscaledValueT&& value) { SetUnscaledValue(std::forward<UnscaledValueT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The scale that determines where the decimal point falls in the unscaled
     * value.</p>
     */
    inline int GetScale() const { return m_scale; }
    inline bool ScaleHasBeenSet() const { return m_scaleHasBeenSet; }
    inline void SetScale(int value) { m_scaleHasBeenSet = true; m_scale = value; }
    inline DecimalNumber& WithScale(int value) { SetScale(value); return *this;}
    ///@}
  private:

    Aws::Utils::ByteBuffer m_unscaledValue{};
    bool m_unscaledValueHasBeenSet = false;

    int m_scale{0};
    bool m_scaleHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
