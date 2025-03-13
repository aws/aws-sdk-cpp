/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/launch-wizard/LaunchWizard_EXPORTS.h>
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
namespace LaunchWizard
{
namespace Model
{

  /**
   * <p>A field that details a condition of the specifications for a
   * deployment.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/launch-wizard-2018-05-10/DeploymentConditionalField">AWS
   * API Reference</a></p>
   */
  class DeploymentConditionalField
  {
  public:
    AWS_LAUNCHWIZARD_API DeploymentConditionalField() = default;
    AWS_LAUNCHWIZARD_API DeploymentConditionalField(Aws::Utils::Json::JsonView jsonValue);
    AWS_LAUNCHWIZARD_API DeploymentConditionalField& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LAUNCHWIZARD_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The comparator of the condition.</p> <p>Valid values: <code>Equal |
     * NotEqual</code> </p>
     */
    inline const Aws::String& GetComparator() const { return m_comparator; }
    inline bool ComparatorHasBeenSet() const { return m_comparatorHasBeenSet; }
    template<typename ComparatorT = Aws::String>
    void SetComparator(ComparatorT&& value) { m_comparatorHasBeenSet = true; m_comparator = std::forward<ComparatorT>(value); }
    template<typename ComparatorT = Aws::String>
    DeploymentConditionalField& WithComparator(ComparatorT&& value) { SetComparator(std::forward<ComparatorT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the deployment condition.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    DeploymentConditionalField& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value of the condition.</p>
     */
    inline const Aws::String& GetValue() const { return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    template<typename ValueT = Aws::String>
    void SetValue(ValueT&& value) { m_valueHasBeenSet = true; m_value = std::forward<ValueT>(value); }
    template<typename ValueT = Aws::String>
    DeploymentConditionalField& WithValue(ValueT&& value) { SetValue(std::forward<ValueT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_comparator;
    bool m_comparatorHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace LaunchWizard
} // namespace Aws
