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
   * <p>Contains information about the Autonomous System (AS) associated with the
   * network endpoints involved in an attack sequence.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/AutonomousSystem">AWS
   * API Reference</a></p>
   */
  class AutonomousSystem
  {
  public:
    AWS_GUARDDUTY_API AutonomousSystem();
    AWS_GUARDDUTY_API AutonomousSystem(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API AutonomousSystem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Name associated with the Autonomous System (AS).</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline AutonomousSystem& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline AutonomousSystem& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline AutonomousSystem& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique number that identifies the Autonomous System (AS).</p>
     */
    inline int GetNumber() const{ return m_number; }
    inline bool NumberHasBeenSet() const { return m_numberHasBeenSet; }
    inline void SetNumber(int value) { m_numberHasBeenSet = true; m_number = value; }
    inline AutonomousSystem& WithNumber(int value) { SetNumber(value); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    int m_number;
    bool m_numberHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
