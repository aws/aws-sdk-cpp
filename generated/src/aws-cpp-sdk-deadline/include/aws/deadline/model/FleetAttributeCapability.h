/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/deadline/Deadline_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p>Defines the fleet's capability name, minimum, and maximum.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/deadline-2023-10-12/FleetAttributeCapability">AWS
   * API Reference</a></p>
   */
  class FleetAttributeCapability
  {
  public:
    AWS_DEADLINE_API FleetAttributeCapability();
    AWS_DEADLINE_API FleetAttributeCapability(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEADLINE_API FleetAttributeCapability& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEADLINE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the fleet attribute capability for the worker.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the fleet attribute capability for the worker.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the fleet attribute capability for the worker.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the fleet attribute capability for the worker.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the fleet attribute capability for the worker.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the fleet attribute capability for the worker.</p>
     */
    inline FleetAttributeCapability& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the fleet attribute capability for the worker.</p>
     */
    inline FleetAttributeCapability& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the fleet attribute capability for the worker.</p>
     */
    inline FleetAttributeCapability& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The number of fleet attribute capabilities.</p>
     */
    inline const Aws::Vector<Aws::String>& GetValues() const{ return m_values; }

    /**
     * <p>The number of fleet attribute capabilities.</p>
     */
    inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }

    /**
     * <p>The number of fleet attribute capabilities.</p>
     */
    inline void SetValues(const Aws::Vector<Aws::String>& value) { m_valuesHasBeenSet = true; m_values = value; }

    /**
     * <p>The number of fleet attribute capabilities.</p>
     */
    inline void SetValues(Aws::Vector<Aws::String>&& value) { m_valuesHasBeenSet = true; m_values = std::move(value); }

    /**
     * <p>The number of fleet attribute capabilities.</p>
     */
    inline FleetAttributeCapability& WithValues(const Aws::Vector<Aws::String>& value) { SetValues(value); return *this;}

    /**
     * <p>The number of fleet attribute capabilities.</p>
     */
    inline FleetAttributeCapability& WithValues(Aws::Vector<Aws::String>&& value) { SetValues(std::move(value)); return *this;}

    /**
     * <p>The number of fleet attribute capabilities.</p>
     */
    inline FleetAttributeCapability& AddValues(const Aws::String& value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }

    /**
     * <p>The number of fleet attribute capabilities.</p>
     */
    inline FleetAttributeCapability& AddValues(Aws::String&& value) { m_valuesHasBeenSet = true; m_values.push_back(std::move(value)); return *this; }

    /**
     * <p>The number of fleet attribute capabilities.</p>
     */
    inline FleetAttributeCapability& AddValues(const char* value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<Aws::String> m_values;
    bool m_valuesHasBeenSet = false;
  };

} // namespace Model
} // namespace deadline
} // namespace Aws
