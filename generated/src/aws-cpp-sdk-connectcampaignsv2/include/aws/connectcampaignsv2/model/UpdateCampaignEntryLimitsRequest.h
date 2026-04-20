/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectcampaignsv2/ConnectCampaignsV2Request.h>
#include <aws/connectcampaignsv2/ConnectCampaignsV2_EXPORTS.h>
#include <aws/connectcampaignsv2/model/EntryLimitsConfig.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace ConnectCampaignsV2 {
namespace Model {

/**
 * <p>The request for UpdateCampaignEntryLimits API.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connectcampaignsv2-2024-04-23/UpdateCampaignEntryLimitsRequest">AWS
 * API Reference</a></p>
 */
class UpdateCampaignEntryLimitsRequest : public ConnectCampaignsV2Request {
 public:
  AWS_CONNECTCAMPAIGNSV2_API UpdateCampaignEntryLimitsRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "UpdateCampaignEntryLimits"; }

  AWS_CONNECTCAMPAIGNSV2_API Aws::String SerializePayload() const override;

  ///@{

  inline const Aws::String& GetId() const { return m_id; }
  inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
  template <typename IdT = Aws::String>
  void SetId(IdT&& value) {
    m_idHasBeenSet = true;
    m_id = std::forward<IdT>(value);
  }
  template <typename IdT = Aws::String>
  UpdateCampaignEntryLimitsRequest& WithId(IdT&& value) {
    SetId(std::forward<IdT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const EntryLimitsConfig& GetEntryLimitsConfig() const { return m_entryLimitsConfig; }
  inline bool EntryLimitsConfigHasBeenSet() const { return m_entryLimitsConfigHasBeenSet; }
  template <typename EntryLimitsConfigT = EntryLimitsConfig>
  void SetEntryLimitsConfig(EntryLimitsConfigT&& value) {
    m_entryLimitsConfigHasBeenSet = true;
    m_entryLimitsConfig = std::forward<EntryLimitsConfigT>(value);
  }
  template <typename EntryLimitsConfigT = EntryLimitsConfig>
  UpdateCampaignEntryLimitsRequest& WithEntryLimitsConfig(EntryLimitsConfigT&& value) {
    SetEntryLimitsConfig(std::forward<EntryLimitsConfigT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_id;

  EntryLimitsConfig m_entryLimitsConfig;
  bool m_idHasBeenSet = false;
  bool m_entryLimitsConfigHasBeenSet = false;
};

}  // namespace Model
}  // namespace ConnectCampaignsV2
}  // namespace Aws
