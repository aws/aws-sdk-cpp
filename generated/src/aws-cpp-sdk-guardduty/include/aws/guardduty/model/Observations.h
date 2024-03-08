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
    AWS_GUARDDUTY_API Observations();
    AWS_GUARDDUTY_API Observations(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Observations& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The text that was unusual.</p>
     */
    inline const Aws::Vector<Aws::String>& GetText() const{ return m_text; }

    /**
     * <p>The text that was unusual.</p>
     */
    inline bool TextHasBeenSet() const { return m_textHasBeenSet; }

    /**
     * <p>The text that was unusual.</p>
     */
    inline void SetText(const Aws::Vector<Aws::String>& value) { m_textHasBeenSet = true; m_text = value; }

    /**
     * <p>The text that was unusual.</p>
     */
    inline void SetText(Aws::Vector<Aws::String>&& value) { m_textHasBeenSet = true; m_text = std::move(value); }

    /**
     * <p>The text that was unusual.</p>
     */
    inline Observations& WithText(const Aws::Vector<Aws::String>& value) { SetText(value); return *this;}

    /**
     * <p>The text that was unusual.</p>
     */
    inline Observations& WithText(Aws::Vector<Aws::String>&& value) { SetText(std::move(value)); return *this;}

    /**
     * <p>The text that was unusual.</p>
     */
    inline Observations& AddText(const Aws::String& value) { m_textHasBeenSet = true; m_text.push_back(value); return *this; }

    /**
     * <p>The text that was unusual.</p>
     */
    inline Observations& AddText(Aws::String&& value) { m_textHasBeenSet = true; m_text.push_back(std::move(value)); return *this; }

    /**
     * <p>The text that was unusual.</p>
     */
    inline Observations& AddText(const char* value) { m_textHasBeenSet = true; m_text.push_back(value); return *this; }

  private:

    Aws::Vector<Aws::String> m_text;
    bool m_textHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
