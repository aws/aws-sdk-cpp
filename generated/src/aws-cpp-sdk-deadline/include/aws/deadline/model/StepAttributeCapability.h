/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/deadline/Deadline_EXPORTS.h>
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
namespace deadline
{
namespace Model
{

  /**
   * <p>The list of step attributes.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/deadline-2023-10-12/StepAttributeCapability">AWS
   * API Reference</a></p>
   */
  class StepAttributeCapability
  {
  public:
    AWS_DEADLINE_API StepAttributeCapability();
    AWS_DEADLINE_API StepAttributeCapability(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEADLINE_API StepAttributeCapability& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEADLINE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Requires all of the step attribute values.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAllOf() const{ return m_allOf; }

    /**
     * <p>Requires all of the step attribute values.</p>
     */
    inline bool AllOfHasBeenSet() const { return m_allOfHasBeenSet; }

    /**
     * <p>Requires all of the step attribute values.</p>
     */
    inline void SetAllOf(const Aws::Vector<Aws::String>& value) { m_allOfHasBeenSet = true; m_allOf = value; }

    /**
     * <p>Requires all of the step attribute values.</p>
     */
    inline void SetAllOf(Aws::Vector<Aws::String>&& value) { m_allOfHasBeenSet = true; m_allOf = std::move(value); }

    /**
     * <p>Requires all of the step attribute values.</p>
     */
    inline StepAttributeCapability& WithAllOf(const Aws::Vector<Aws::String>& value) { SetAllOf(value); return *this;}

    /**
     * <p>Requires all of the step attribute values.</p>
     */
    inline StepAttributeCapability& WithAllOf(Aws::Vector<Aws::String>&& value) { SetAllOf(std::move(value)); return *this;}

    /**
     * <p>Requires all of the step attribute values.</p>
     */
    inline StepAttributeCapability& AddAllOf(const Aws::String& value) { m_allOfHasBeenSet = true; m_allOf.push_back(value); return *this; }

    /**
     * <p>Requires all of the step attribute values.</p>
     */
    inline StepAttributeCapability& AddAllOf(Aws::String&& value) { m_allOfHasBeenSet = true; m_allOf.push_back(std::move(value)); return *this; }

    /**
     * <p>Requires all of the step attribute values.</p>
     */
    inline StepAttributeCapability& AddAllOf(const char* value) { m_allOfHasBeenSet = true; m_allOf.push_back(value); return *this; }


    /**
     * <p>Requires any of the step attributes in a given list.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAnyOf() const{ return m_anyOf; }

    /**
     * <p>Requires any of the step attributes in a given list.</p>
     */
    inline bool AnyOfHasBeenSet() const { return m_anyOfHasBeenSet; }

    /**
     * <p>Requires any of the step attributes in a given list.</p>
     */
    inline void SetAnyOf(const Aws::Vector<Aws::String>& value) { m_anyOfHasBeenSet = true; m_anyOf = value; }

    /**
     * <p>Requires any of the step attributes in a given list.</p>
     */
    inline void SetAnyOf(Aws::Vector<Aws::String>&& value) { m_anyOfHasBeenSet = true; m_anyOf = std::move(value); }

    /**
     * <p>Requires any of the step attributes in a given list.</p>
     */
    inline StepAttributeCapability& WithAnyOf(const Aws::Vector<Aws::String>& value) { SetAnyOf(value); return *this;}

    /**
     * <p>Requires any of the step attributes in a given list.</p>
     */
    inline StepAttributeCapability& WithAnyOf(Aws::Vector<Aws::String>&& value) { SetAnyOf(std::move(value)); return *this;}

    /**
     * <p>Requires any of the step attributes in a given list.</p>
     */
    inline StepAttributeCapability& AddAnyOf(const Aws::String& value) { m_anyOfHasBeenSet = true; m_anyOf.push_back(value); return *this; }

    /**
     * <p>Requires any of the step attributes in a given list.</p>
     */
    inline StepAttributeCapability& AddAnyOf(Aws::String&& value) { m_anyOfHasBeenSet = true; m_anyOf.push_back(std::move(value)); return *this; }

    /**
     * <p>Requires any of the step attributes in a given list.</p>
     */
    inline StepAttributeCapability& AddAnyOf(const char* value) { m_anyOfHasBeenSet = true; m_anyOf.push_back(value); return *this; }


    /**
     * <p>The name of the step attribute.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the step attribute.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the step attribute.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the step attribute.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the step attribute.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the step attribute.</p>
     */
    inline StepAttributeCapability& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the step attribute.</p>
     */
    inline StepAttributeCapability& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the step attribute.</p>
     */
    inline StepAttributeCapability& WithName(const char* value) { SetName(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_allOf;
    bool m_allOfHasBeenSet = false;

    Aws::Vector<Aws::String> m_anyOf;
    bool m_anyOfHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;
  };

} // namespace Model
} // namespace deadline
} // namespace Aws
