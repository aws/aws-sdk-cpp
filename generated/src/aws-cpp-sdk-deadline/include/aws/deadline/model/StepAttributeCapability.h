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
    AWS_DEADLINE_API StepAttributeCapability() = default;
    AWS_DEADLINE_API StepAttributeCapability(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEADLINE_API StepAttributeCapability& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEADLINE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the step attribute.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    StepAttributeCapability& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Requires any of the step attributes in a given list.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAnyOf() const { return m_anyOf; }
    inline bool AnyOfHasBeenSet() const { return m_anyOfHasBeenSet; }
    template<typename AnyOfT = Aws::Vector<Aws::String>>
    void SetAnyOf(AnyOfT&& value) { m_anyOfHasBeenSet = true; m_anyOf = std::forward<AnyOfT>(value); }
    template<typename AnyOfT = Aws::Vector<Aws::String>>
    StepAttributeCapability& WithAnyOf(AnyOfT&& value) { SetAnyOf(std::forward<AnyOfT>(value)); return *this;}
    template<typename AnyOfT = Aws::String>
    StepAttributeCapability& AddAnyOf(AnyOfT&& value) { m_anyOfHasBeenSet = true; m_anyOf.emplace_back(std::forward<AnyOfT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Requires all of the step attribute values.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAllOf() const { return m_allOf; }
    inline bool AllOfHasBeenSet() const { return m_allOfHasBeenSet; }
    template<typename AllOfT = Aws::Vector<Aws::String>>
    void SetAllOf(AllOfT&& value) { m_allOfHasBeenSet = true; m_allOf = std::forward<AllOfT>(value); }
    template<typename AllOfT = Aws::Vector<Aws::String>>
    StepAttributeCapability& WithAllOf(AllOfT&& value) { SetAllOf(std::forward<AllOfT>(value)); return *this;}
    template<typename AllOfT = Aws::String>
    StepAttributeCapability& AddAllOf(AllOfT&& value) { m_allOfHasBeenSet = true; m_allOf.emplace_back(std::forward<AllOfT>(value)); return *this; }
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
