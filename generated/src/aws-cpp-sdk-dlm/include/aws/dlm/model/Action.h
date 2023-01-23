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
    AWS_DLM_API Action();
    AWS_DLM_API Action(Aws::Utils::Json::JsonView jsonValue);
    AWS_DLM_API Action& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DLM_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A descriptive name for the action.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>A descriptive name for the action.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>A descriptive name for the action.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>A descriptive name for the action.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>A descriptive name for the action.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>A descriptive name for the action.</p>
     */
    inline Action& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>A descriptive name for the action.</p>
     */
    inline Action& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>A descriptive name for the action.</p>
     */
    inline Action& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The rule for copying shared snapshots across Regions.</p>
     */
    inline const Aws::Vector<CrossRegionCopyAction>& GetCrossRegionCopy() const{ return m_crossRegionCopy; }

    /**
     * <p>The rule for copying shared snapshots across Regions.</p>
     */
    inline bool CrossRegionCopyHasBeenSet() const { return m_crossRegionCopyHasBeenSet; }

    /**
     * <p>The rule for copying shared snapshots across Regions.</p>
     */
    inline void SetCrossRegionCopy(const Aws::Vector<CrossRegionCopyAction>& value) { m_crossRegionCopyHasBeenSet = true; m_crossRegionCopy = value; }

    /**
     * <p>The rule for copying shared snapshots across Regions.</p>
     */
    inline void SetCrossRegionCopy(Aws::Vector<CrossRegionCopyAction>&& value) { m_crossRegionCopyHasBeenSet = true; m_crossRegionCopy = std::move(value); }

    /**
     * <p>The rule for copying shared snapshots across Regions.</p>
     */
    inline Action& WithCrossRegionCopy(const Aws::Vector<CrossRegionCopyAction>& value) { SetCrossRegionCopy(value); return *this;}

    /**
     * <p>The rule for copying shared snapshots across Regions.</p>
     */
    inline Action& WithCrossRegionCopy(Aws::Vector<CrossRegionCopyAction>&& value) { SetCrossRegionCopy(std::move(value)); return *this;}

    /**
     * <p>The rule for copying shared snapshots across Regions.</p>
     */
    inline Action& AddCrossRegionCopy(const CrossRegionCopyAction& value) { m_crossRegionCopyHasBeenSet = true; m_crossRegionCopy.push_back(value); return *this; }

    /**
     * <p>The rule for copying shared snapshots across Regions.</p>
     */
    inline Action& AddCrossRegionCopy(CrossRegionCopyAction&& value) { m_crossRegionCopyHasBeenSet = true; m_crossRegionCopy.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<CrossRegionCopyAction> m_crossRegionCopy;
    bool m_crossRegionCopyHasBeenSet = false;
  };

} // namespace Model
} // namespace DLM
} // namespace Aws
