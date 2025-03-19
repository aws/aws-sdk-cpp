/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/drs/Drs_EXPORTS.h>
#include <aws/drs/DrsRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace drs
{
namespace Model
{

  /**
   */
  class StartFailbackLaunchRequest : public DrsRequest
  {
  public:
    AWS_DRS_API StartFailbackLaunchRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartFailbackLaunch"; }

    AWS_DRS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The IDs of the Recovery Instance whose failback launch we want to
     * request.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRecoveryInstanceIDs() const { return m_recoveryInstanceIDs; }
    inline bool RecoveryInstanceIDsHasBeenSet() const { return m_recoveryInstanceIDsHasBeenSet; }
    template<typename RecoveryInstanceIDsT = Aws::Vector<Aws::String>>
    void SetRecoveryInstanceIDs(RecoveryInstanceIDsT&& value) { m_recoveryInstanceIDsHasBeenSet = true; m_recoveryInstanceIDs = std::forward<RecoveryInstanceIDsT>(value); }
    template<typename RecoveryInstanceIDsT = Aws::Vector<Aws::String>>
    StartFailbackLaunchRequest& WithRecoveryInstanceIDs(RecoveryInstanceIDsT&& value) { SetRecoveryInstanceIDs(std::forward<RecoveryInstanceIDsT>(value)); return *this;}
    template<typename RecoveryInstanceIDsT = Aws::String>
    StartFailbackLaunchRequest& AddRecoveryInstanceIDs(RecoveryInstanceIDsT&& value) { m_recoveryInstanceIDsHasBeenSet = true; m_recoveryInstanceIDs.emplace_back(std::forward<RecoveryInstanceIDsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The tags to be associated with the failback launch Job.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    StartFailbackLaunchRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    StartFailbackLaunchRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::Vector<Aws::String> m_recoveryInstanceIDs;
    bool m_recoveryInstanceIDsHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace drs
} // namespace Aws
