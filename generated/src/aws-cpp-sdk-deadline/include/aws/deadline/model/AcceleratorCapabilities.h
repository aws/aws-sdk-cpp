/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/deadline/Deadline_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/deadline/model/AcceleratorCountRange.h>
#include <aws/deadline/model/AcceleratorSelection.h>
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
   * <p>Provides information about the GPU accelerators used for jobs processed by a
   * fleet.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/deadline-2023-10-12/AcceleratorCapabilities">AWS
   * API Reference</a></p>
   */
  class AcceleratorCapabilities
  {
  public:
    AWS_DEADLINE_API AcceleratorCapabilities() = default;
    AWS_DEADLINE_API AcceleratorCapabilities(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEADLINE_API AcceleratorCapabilities& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEADLINE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A list of accelerator capabilities requested for this fleet. Only Amazon
     * Elastic Compute Cloud instances that provide these capabilities will be used.
     * For example, if you specify both L4 and T4 chips, Deadline Cloud will use Amazon
     * EC2 instances that have either the L4 or the T4 chip installed.</p>
     */
    inline const Aws::Vector<AcceleratorSelection>& GetSelections() const { return m_selections; }
    inline bool SelectionsHasBeenSet() const { return m_selectionsHasBeenSet; }
    template<typename SelectionsT = Aws::Vector<AcceleratorSelection>>
    void SetSelections(SelectionsT&& value) { m_selectionsHasBeenSet = true; m_selections = std::forward<SelectionsT>(value); }
    template<typename SelectionsT = Aws::Vector<AcceleratorSelection>>
    AcceleratorCapabilities& WithSelections(SelectionsT&& value) { SetSelections(std::forward<SelectionsT>(value)); return *this;}
    template<typename SelectionsT = AcceleratorSelection>
    AcceleratorCapabilities& AddSelections(SelectionsT&& value) { m_selectionsHasBeenSet = true; m_selections.emplace_back(std::forward<SelectionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The number of GPU accelerators specified for worker hosts in this fleet. </p>
     */
    inline const AcceleratorCountRange& GetCount() const { return m_count; }
    inline bool CountHasBeenSet() const { return m_countHasBeenSet; }
    template<typename CountT = AcceleratorCountRange>
    void SetCount(CountT&& value) { m_countHasBeenSet = true; m_count = std::forward<CountT>(value); }
    template<typename CountT = AcceleratorCountRange>
    AcceleratorCapabilities& WithCount(CountT&& value) { SetCount(std::forward<CountT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<AcceleratorSelection> m_selections;
    bool m_selectionsHasBeenSet = false;

    AcceleratorCountRange m_count;
    bool m_countHasBeenSet = false;
  };

} // namespace Model
} // namespace deadline
} // namespace Aws
