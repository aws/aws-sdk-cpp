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


    ///@{
    /**
     * <p>The name of the step attribute.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline StepAttributeCapability& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline StepAttributeCapability& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline StepAttributeCapability& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Requires any of the step attributes in a given list.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAnyOf() const{ return m_anyOf; }
    inline bool AnyOfHasBeenSet() const { return m_anyOfHasBeenSet; }
    inline void SetAnyOf(const Aws::Vector<Aws::String>& value) { m_anyOfHasBeenSet = true; m_anyOf = value; }
    inline void SetAnyOf(Aws::Vector<Aws::String>&& value) { m_anyOfHasBeenSet = true; m_anyOf = std::move(value); }
    inline StepAttributeCapability& WithAnyOf(const Aws::Vector<Aws::String>& value) { SetAnyOf(value); return *this;}
    inline StepAttributeCapability& WithAnyOf(Aws::Vector<Aws::String>&& value) { SetAnyOf(std::move(value)); return *this;}
    inline StepAttributeCapability& AddAnyOf(const Aws::String& value) { m_anyOfHasBeenSet = true; m_anyOf.push_back(value); return *this; }
    inline StepAttributeCapability& AddAnyOf(Aws::String&& value) { m_anyOfHasBeenSet = true; m_anyOf.push_back(std::move(value)); return *this; }
    inline StepAttributeCapability& AddAnyOf(const char* value) { m_anyOfHasBeenSet = true; m_anyOf.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Requires all of the step attribute values.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAllOf() const{ return m_allOf; }
    inline bool AllOfHasBeenSet() const { return m_allOfHasBeenSet; }
    inline void SetAllOf(const Aws::Vector<Aws::String>& value) { m_allOfHasBeenSet = true; m_allOf = value; }
    inline void SetAllOf(Aws::Vector<Aws::String>&& value) { m_allOfHasBeenSet = true; m_allOf = std::move(value); }
    inline StepAttributeCapability& WithAllOf(const Aws::Vector<Aws::String>& value) { SetAllOf(value); return *this;}
    inline StepAttributeCapability& WithAllOf(Aws::Vector<Aws::String>&& value) { SetAllOf(std::move(value)); return *this;}
    inline StepAttributeCapability& AddAllOf(const Aws::String& value) { m_allOfHasBeenSet = true; m_allOf.push_back(value); return *this; }
    inline StepAttributeCapability& AddAllOf(Aws::String&& value) { m_allOfHasBeenSet = true; m_allOf.push_back(std::move(value)); return *this; }
    inline StepAttributeCapability& AddAllOf(const char* value) { m_allOfHasBeenSet = true; m_allOf.push_back(value); return *this; }
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<Aws::String> m_anyOf;
    bool m_anyOfHasBeenSet = false;

    Aws::Vector<Aws::String> m_allOf;
    bool m_allOfHasBeenSet = false;
  };

} // namespace Model
} // namespace deadline
} // namespace Aws
