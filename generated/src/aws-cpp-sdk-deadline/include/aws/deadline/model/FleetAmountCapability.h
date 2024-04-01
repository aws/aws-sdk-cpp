/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/deadline/Deadline_EXPORTS.h>
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
namespace deadline
{
namespace Model
{

  /**
   * <p>The fleet amount and attribute capabilities.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/deadline-2023-10-12/FleetAmountCapability">AWS
   * API Reference</a></p>
   */
  class FleetAmountCapability
  {
  public:
    AWS_DEADLINE_API FleetAmountCapability();
    AWS_DEADLINE_API FleetAmountCapability(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEADLINE_API FleetAmountCapability& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEADLINE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The maximum amount of the fleet worker capability.</p>
     */
    inline double GetMax() const{ return m_max; }

    /**
     * <p>The maximum amount of the fleet worker capability.</p>
     */
    inline bool MaxHasBeenSet() const { return m_maxHasBeenSet; }

    /**
     * <p>The maximum amount of the fleet worker capability.</p>
     */
    inline void SetMax(double value) { m_maxHasBeenSet = true; m_max = value; }

    /**
     * <p>The maximum amount of the fleet worker capability.</p>
     */
    inline FleetAmountCapability& WithMax(double value) { SetMax(value); return *this;}


    /**
     * <p>The minimum amount of fleet worker capability.</p>
     */
    inline double GetMin() const{ return m_min; }

    /**
     * <p>The minimum amount of fleet worker capability.</p>
     */
    inline bool MinHasBeenSet() const { return m_minHasBeenSet; }

    /**
     * <p>The minimum amount of fleet worker capability.</p>
     */
    inline void SetMin(double value) { m_minHasBeenSet = true; m_min = value; }

    /**
     * <p>The minimum amount of fleet worker capability.</p>
     */
    inline FleetAmountCapability& WithMin(double value) { SetMin(value); return *this;}


    /**
     * <p>The name of the fleet capability.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the fleet capability.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the fleet capability.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the fleet capability.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the fleet capability.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the fleet capability.</p>
     */
    inline FleetAmountCapability& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the fleet capability.</p>
     */
    inline FleetAmountCapability& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the fleet capability.</p>
     */
    inline FleetAmountCapability& WithName(const char* value) { SetName(value); return *this;}

  private:

    double m_max;
    bool m_maxHasBeenSet = false;

    double m_min;
    bool m_minHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;
  };

} // namespace Model
} // namespace deadline
} // namespace Aws
