/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>
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
   * <p>Represents key, value pair to be matched against given resource
   * property.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/ScanConditionPair">AWS
   * API Reference</a></p>
   */
  class ScanConditionPair
  {
  public:
    AWS_GUARDDUTY_API ScanConditionPair();
    AWS_GUARDDUTY_API ScanConditionPair(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API ScanConditionPair& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Represents <i>key</i> <b/> in the map condition.</p>
     */
    inline const Aws::String& GetKey() const{ return m_key; }

    /**
     * <p>Represents <i>key</i> <b/> in the map condition.</p>
     */
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }

    /**
     * <p>Represents <i>key</i> <b/> in the map condition.</p>
     */
    inline void SetKey(const Aws::String& value) { m_keyHasBeenSet = true; m_key = value; }

    /**
     * <p>Represents <i>key</i> <b/> in the map condition.</p>
     */
    inline void SetKey(Aws::String&& value) { m_keyHasBeenSet = true; m_key = std::move(value); }

    /**
     * <p>Represents <i>key</i> <b/> in the map condition.</p>
     */
    inline void SetKey(const char* value) { m_keyHasBeenSet = true; m_key.assign(value); }

    /**
     * <p>Represents <i>key</i> <b/> in the map condition.</p>
     */
    inline ScanConditionPair& WithKey(const Aws::String& value) { SetKey(value); return *this;}

    /**
     * <p>Represents <i>key</i> <b/> in the map condition.</p>
     */
    inline ScanConditionPair& WithKey(Aws::String&& value) { SetKey(std::move(value)); return *this;}

    /**
     * <p>Represents <i>key</i> <b/> in the map condition.</p>
     */
    inline ScanConditionPair& WithKey(const char* value) { SetKey(value); return *this;}


    /**
     * <p>Represents optional <i>value</i> <b/> in the map condition. If not specified,
     * only <i>key</i> <b/> will be matched.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * <p>Represents optional <i>value</i> <b/> in the map condition. If not specified,
     * only <i>key</i> <b/> will be matched.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>Represents optional <i>value</i> <b/> in the map condition. If not specified,
     * only <i>key</i> <b/> will be matched.</p>
     */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>Represents optional <i>value</i> <b/> in the map condition. If not specified,
     * only <i>key</i> <b/> will be matched.</p>
     */
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>Represents optional <i>value</i> <b/> in the map condition. If not specified,
     * only <i>key</i> <b/> will be matched.</p>
     */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /**
     * <p>Represents optional <i>value</i> <b/> in the map condition. If not specified,
     * only <i>key</i> <b/> will be matched.</p>
     */
    inline ScanConditionPair& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p>Represents optional <i>value</i> <b/> in the map condition. If not specified,
     * only <i>key</i> <b/> will be matched.</p>
     */
    inline ScanConditionPair& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}

    /**
     * <p>Represents optional <i>value</i> <b/> in the map condition. If not specified,
     * only <i>key</i> <b/> will be matched.</p>
     */
    inline ScanConditionPair& WithValue(const char* value) { SetValue(value); return *this;}

  private:

    Aws::String m_key;
    bool m_keyHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
