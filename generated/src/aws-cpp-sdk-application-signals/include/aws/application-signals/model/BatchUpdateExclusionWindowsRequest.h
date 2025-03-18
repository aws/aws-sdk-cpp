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
    AWS_APPLICATIONSIGNALS_API BatchUpdateExclusionWindowsRequest() = default;

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
    inline const Aws::Vector<Aws::String>& GetSloIds() const { return m_sloIds; }
    inline bool SloIdsHasBeenSet() const { return m_sloIdsHasBeenSet; }
    template<typename SloIdsT = Aws::Vector<Aws::String>>
    void SetSloIds(SloIdsT&& value) { m_sloIdsHasBeenSet = true; m_sloIds = std::forward<SloIdsT>(value); }
    template<typename SloIdsT = Aws::Vector<Aws::String>>
    BatchUpdateExclusionWindowsRequest& WithSloIds(SloIdsT&& value) { SetSloIds(std::forward<SloIdsT>(value)); return *this;}
    template<typename SloIdsT = Aws::String>
    BatchUpdateExclusionWindowsRequest& AddSloIds(SloIdsT&& value) { m_sloIdsHasBeenSet = true; m_sloIds.emplace_back(std::forward<SloIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of exclusion windows to add to the specified SLOs. You can add up to
     * 10 exclusion windows per SLO.</p>
     */
    inline const Aws::Vector<ExclusionWindow>& GetAddExclusionWindows() const { return m_addExclusionWindows; }
    inline bool AddExclusionWindowsHasBeenSet() const { return m_addExclusionWindowsHasBeenSet; }
    template<typename AddExclusionWindowsT = Aws::Vector<ExclusionWindow>>
    void SetAddExclusionWindows(AddExclusionWindowsT&& value) { m_addExclusionWindowsHasBeenSet = true; m_addExclusionWindows = std::forward<AddExclusionWindowsT>(value); }
    template<typename AddExclusionWindowsT = Aws::Vector<ExclusionWindow>>
    BatchUpdateExclusionWindowsRequest& WithAddExclusionWindows(AddExclusionWindowsT&& value) { SetAddExclusionWindows(std::forward<AddExclusionWindowsT>(value)); return *this;}
    template<typename AddExclusionWindowsT = ExclusionWindow>
    BatchUpdateExclusionWindowsRequest& AddAddExclusionWindows(AddExclusionWindowsT&& value) { m_addExclusionWindowsHasBeenSet = true; m_addExclusionWindows.emplace_back(std::forward<AddExclusionWindowsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of exclusion windows to remove from the specified SLOs. The window
     * configuration must match an existing exclusion window.</p>
     */
    inline const Aws::Vector<ExclusionWindow>& GetRemoveExclusionWindows() const { return m_removeExclusionWindows; }
    inline bool RemoveExclusionWindowsHasBeenSet() const { return m_removeExclusionWindowsHasBeenSet; }
    template<typename RemoveExclusionWindowsT = Aws::Vector<ExclusionWindow>>
    void SetRemoveExclusionWindows(RemoveExclusionWindowsT&& value) { m_removeExclusionWindowsHasBeenSet = true; m_removeExclusionWindows = std::forward<RemoveExclusionWindowsT>(value); }
    template<typename RemoveExclusionWindowsT = Aws::Vector<ExclusionWindow>>
    BatchUpdateExclusionWindowsRequest& WithRemoveExclusionWindows(RemoveExclusionWindowsT&& value) { SetRemoveExclusionWindows(std::forward<RemoveExclusionWindowsT>(value)); return *this;}
    template<typename RemoveExclusionWindowsT = ExclusionWindow>
    BatchUpdateExclusionWindowsRequest& AddRemoveExclusionWindows(RemoveExclusionWindowsT&& value) { m_removeExclusionWindowsHasBeenSet = true; m_removeExclusionWindows.emplace_back(std::forward<RemoveExclusionWindowsT>(value)); return *this; }
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
