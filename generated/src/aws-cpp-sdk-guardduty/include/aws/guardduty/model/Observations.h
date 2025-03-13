/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace GuardDuty
{
namespace Model
{

  /**
   * <p>Contains information about the observed behavior.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/Observations">AWS
   * API Reference</a></p>
   */
  class Observations
  {
  public:
    AWS_GUARDDUTY_API Observations() = default;
    AWS_GUARDDUTY_API Observations(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Observations& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The text that was unusual.</p>
     */
    inline const Aws::Vector<Aws::String>& GetText() const { return m_text; }
    inline bool TextHasBeenSet() const { return m_textHasBeenSet; }
    template<typename TextT = Aws::Vector<Aws::String>>
    void SetText(TextT&& value) { m_textHasBeenSet = true; m_text = std::forward<TextT>(value); }
    template<typename TextT = Aws::Vector<Aws::String>>
    Observations& WithText(TextT&& value) { SetText(std::forward<TextT>(value)); return *this;}
    template<typename TextT = Aws::String>
    Observations& AddText(TextT&& value) { m_textHasBeenSet = true; m_text.emplace_back(std::forward<TextT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_text;
    bool m_textHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
