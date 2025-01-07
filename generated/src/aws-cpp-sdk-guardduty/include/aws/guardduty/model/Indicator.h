/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/guardduty/model/IndicatorType.h>
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
   * <p>Contains information about the indicators that include a set of signals
   * observed in an attack sequence.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/Indicator">AWS
   * API Reference</a></p>
   */
  class Indicator
  {
  public:
    AWS_GUARDDUTY_API Indicator();
    AWS_GUARDDUTY_API Indicator(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Indicator& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specific indicator keys observed in the attack sequence.</p>
     */
    inline const IndicatorType& GetKey() const{ return m_key; }
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }
    inline void SetKey(const IndicatorType& value) { m_keyHasBeenSet = true; m_key = value; }
    inline void SetKey(IndicatorType&& value) { m_keyHasBeenSet = true; m_key = std::move(value); }
    inline Indicator& WithKey(const IndicatorType& value) { SetKey(value); return *this;}
    inline Indicator& WithKey(IndicatorType&& value) { SetKey(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Values associated with each indicator key. For example, if the indicator key
     * is <code>SUSPICIOUS_NETWORK</code>, then the value will be the name of the
     * network. If the indicator key is <code>ATTACK_TACTIC</code>, then the value will
     * be one of the MITRE tactics. </p> <p>For more information about the values
     * associated with the key, see GuardDuty Extended Threat Detection in the
     * <i>GuardDuty User Guide.</i> </p>
     */
    inline const Aws::Vector<Aws::String>& GetValues() const{ return m_values; }
    inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }
    inline void SetValues(const Aws::Vector<Aws::String>& value) { m_valuesHasBeenSet = true; m_values = value; }
    inline void SetValues(Aws::Vector<Aws::String>&& value) { m_valuesHasBeenSet = true; m_values = std::move(value); }
    inline Indicator& WithValues(const Aws::Vector<Aws::String>& value) { SetValues(value); return *this;}
    inline Indicator& WithValues(Aws::Vector<Aws::String>&& value) { SetValues(std::move(value)); return *this;}
    inline Indicator& AddValues(const Aws::String& value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }
    inline Indicator& AddValues(Aws::String&& value) { m_valuesHasBeenSet = true; m_values.push_back(std::move(value)); return *this; }
    inline Indicator& AddValues(const char* value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Title describing the indicator.</p>
     */
    inline const Aws::String& GetTitle() const{ return m_title; }
    inline bool TitleHasBeenSet() const { return m_titleHasBeenSet; }
    inline void SetTitle(const Aws::String& value) { m_titleHasBeenSet = true; m_title = value; }
    inline void SetTitle(Aws::String&& value) { m_titleHasBeenSet = true; m_title = std::move(value); }
    inline void SetTitle(const char* value) { m_titleHasBeenSet = true; m_title.assign(value); }
    inline Indicator& WithTitle(const Aws::String& value) { SetTitle(value); return *this;}
    inline Indicator& WithTitle(Aws::String&& value) { SetTitle(std::move(value)); return *this;}
    inline Indicator& WithTitle(const char* value) { SetTitle(value); return *this;}
    ///@}
  private:

    IndicatorType m_key;
    bool m_keyHasBeenSet = false;

    Aws::Vector<Aws::String> m_values;
    bool m_valuesHasBeenSet = false;

    Aws::String m_title;
    bool m_titleHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
