/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dlm/DLM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/dlm/model/CrossRegionCopyAction.h>
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
namespace DLM
{
namespace Model
{

  /**
   * <p> <b>[Event-based policies only]</b> Specifies an action for an event-based
   * policy.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dlm-2018-01-12/Action">AWS API
   * Reference</a></p>
   */
  class Action
  {
  public:
    AWS_DLM_API Action() = default;
    AWS_DLM_API Action(Aws::Utils::Json::JsonView jsonValue);
    AWS_DLM_API Action& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DLM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A descriptive name for the action.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    Action& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The rule for copying shared snapshots across Regions.</p>
     */
    inline const Aws::Vector<CrossRegionCopyAction>& GetCrossRegionCopy() const { return m_crossRegionCopy; }
    inline bool CrossRegionCopyHasBeenSet() const { return m_crossRegionCopyHasBeenSet; }
    template<typename CrossRegionCopyT = Aws::Vector<CrossRegionCopyAction>>
    void SetCrossRegionCopy(CrossRegionCopyT&& value) { m_crossRegionCopyHasBeenSet = true; m_crossRegionCopy = std::forward<CrossRegionCopyT>(value); }
    template<typename CrossRegionCopyT = Aws::Vector<CrossRegionCopyAction>>
    Action& WithCrossRegionCopy(CrossRegionCopyT&& value) { SetCrossRegionCopy(std::forward<CrossRegionCopyT>(value)); return *this;}
    template<typename CrossRegionCopyT = CrossRegionCopyAction>
    Action& AddCrossRegionCopy(CrossRegionCopyT&& value) { m_crossRegionCopyHasBeenSet = true; m_crossRegionCopy.emplace_back(std::forward<CrossRegionCopyT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<CrossRegionCopyAction> m_crossRegionCopy;
    bool m_crossRegionCopyHasBeenSet = false;
  };

} // namespace Model
} // namespace DLM
} // namespace Aws
