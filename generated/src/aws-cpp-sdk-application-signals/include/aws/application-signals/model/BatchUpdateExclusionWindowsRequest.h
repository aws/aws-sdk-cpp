/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/application-signals/ApplicationSignals_EXPORTS.h>
#include <aws/application-signals/ApplicationSignalsRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/application-signals/model/ExclusionWindow.h>
#include <utility>

namespace Aws
{
namespace ApplicationSignals
{
namespace Model
{

  /**
   */
  class BatchUpdateExclusionWindowsRequest : public ApplicationSignalsRequest
  {
  public:
    AWS_APPLICATIONSIGNALS_API BatchUpdateExclusionWindowsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchUpdateExclusionWindows"; }

    AWS_APPLICATIONSIGNALS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The list of SLO IDs to add or remove exclusion windows from.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSloIds() const{ return m_sloIds; }
    inline bool SloIdsHasBeenSet() const { return m_sloIdsHasBeenSet; }
    inline void SetSloIds(const Aws::Vector<Aws::String>& value) { m_sloIdsHasBeenSet = true; m_sloIds = value; }
    inline void SetSloIds(Aws::Vector<Aws::String>&& value) { m_sloIdsHasBeenSet = true; m_sloIds = std::move(value); }
    inline BatchUpdateExclusionWindowsRequest& WithSloIds(const Aws::Vector<Aws::String>& value) { SetSloIds(value); return *this;}
    inline BatchUpdateExclusionWindowsRequest& WithSloIds(Aws::Vector<Aws::String>&& value) { SetSloIds(std::move(value)); return *this;}
    inline BatchUpdateExclusionWindowsRequest& AddSloIds(const Aws::String& value) { m_sloIdsHasBeenSet = true; m_sloIds.push_back(value); return *this; }
    inline BatchUpdateExclusionWindowsRequest& AddSloIds(Aws::String&& value) { m_sloIdsHasBeenSet = true; m_sloIds.push_back(std::move(value)); return *this; }
    inline BatchUpdateExclusionWindowsRequest& AddSloIds(const char* value) { m_sloIdsHasBeenSet = true; m_sloIds.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of exclusion windows to add to the specified SLOs. You can add up to
     * 10 exclusion windows per SLO.</p>
     */
    inline const Aws::Vector<ExclusionWindow>& GetAddExclusionWindows() const{ return m_addExclusionWindows; }
    inline bool AddExclusionWindowsHasBeenSet() const { return m_addExclusionWindowsHasBeenSet; }
    inline void SetAddExclusionWindows(const Aws::Vector<ExclusionWindow>& value) { m_addExclusionWindowsHasBeenSet = true; m_addExclusionWindows = value; }
    inline void SetAddExclusionWindows(Aws::Vector<ExclusionWindow>&& value) { m_addExclusionWindowsHasBeenSet = true; m_addExclusionWindows = std::move(value); }
    inline BatchUpdateExclusionWindowsRequest& WithAddExclusionWindows(const Aws::Vector<ExclusionWindow>& value) { SetAddExclusionWindows(value); return *this;}
    inline BatchUpdateExclusionWindowsRequest& WithAddExclusionWindows(Aws::Vector<ExclusionWindow>&& value) { SetAddExclusionWindows(std::move(value)); return *this;}
    inline BatchUpdateExclusionWindowsRequest& AddAddExclusionWindows(const ExclusionWindow& value) { m_addExclusionWindowsHasBeenSet = true; m_addExclusionWindows.push_back(value); return *this; }
    inline BatchUpdateExclusionWindowsRequest& AddAddExclusionWindows(ExclusionWindow&& value) { m_addExclusionWindowsHasBeenSet = true; m_addExclusionWindows.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of exclusion windows to remove from the specified SLOs. The window
     * configuration must match an existing exclusion window.</p>
     */
    inline const Aws::Vector<ExclusionWindow>& GetRemoveExclusionWindows() const{ return m_removeExclusionWindows; }
    inline bool RemoveExclusionWindowsHasBeenSet() const { return m_removeExclusionWindowsHasBeenSet; }
    inline void SetRemoveExclusionWindows(const Aws::Vector<ExclusionWindow>& value) { m_removeExclusionWindowsHasBeenSet = true; m_removeExclusionWindows = value; }
    inline void SetRemoveExclusionWindows(Aws::Vector<ExclusionWindow>&& value) { m_removeExclusionWindowsHasBeenSet = true; m_removeExclusionWindows = std::move(value); }
    inline BatchUpdateExclusionWindowsRequest& WithRemoveExclusionWindows(const Aws::Vector<ExclusionWindow>& value) { SetRemoveExclusionWindows(value); return *this;}
    inline BatchUpdateExclusionWindowsRequest& WithRemoveExclusionWindows(Aws::Vector<ExclusionWindow>&& value) { SetRemoveExclusionWindows(std::move(value)); return *this;}
    inline BatchUpdateExclusionWindowsRequest& AddRemoveExclusionWindows(const ExclusionWindow& value) { m_removeExclusionWindowsHasBeenSet = true; m_removeExclusionWindows.push_back(value); return *this; }
    inline BatchUpdateExclusionWindowsRequest& AddRemoveExclusionWindows(ExclusionWindow&& value) { m_removeExclusionWindowsHasBeenSet = true; m_removeExclusionWindows.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_sloIds;
    bool m_sloIdsHasBeenSet = false;

    Aws::Vector<ExclusionWindow> m_addExclusionWindows;
    bool m_addExclusionWindowsHasBeenSet = false;

    Aws::Vector<ExclusionWindow> m_removeExclusionWindows;
    bool m_removeExclusionWindowsHasBeenSet = false;
  };

} // namespace Model
} // namespace ApplicationSignals
} // namespace Aws
