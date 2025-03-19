/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backup-gateway/BackupGateway_EXPORTS.h>
#include <aws/backup-gateway/BackupGatewayRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/backup-gateway/model/GatewayType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/backup-gateway/model/Tag.h>
#include <utility>

namespace Aws
{
namespace BackupGateway
{
namespace Model
{

  /**
   */
  class CreateGatewayRequest : public BackupGatewayRequest
  {
  public:
    AWS_BACKUPGATEWAY_API CreateGatewayRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateGateway"; }

    AWS_BACKUPGATEWAY_API Aws::String SerializePayload() const override;

    AWS_BACKUPGATEWAY_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The activation key of the created gateway.</p>
     */
    inline const Aws::String& GetActivationKey() const { return m_activationKey; }
    inline bool ActivationKeyHasBeenSet() const { return m_activationKeyHasBeenSet; }
    template<typename ActivationKeyT = Aws::String>
    void SetActivationKey(ActivationKeyT&& value) { m_activationKeyHasBeenSet = true; m_activationKey = std::forward<ActivationKeyT>(value); }
    template<typename ActivationKeyT = Aws::String>
    CreateGatewayRequest& WithActivationKey(ActivationKeyT&& value) { SetActivationKey(std::forward<ActivationKeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The display name of the created gateway.</p>
     */
    inline const Aws::String& GetGatewayDisplayName() const { return m_gatewayDisplayName; }
    inline bool GatewayDisplayNameHasBeenSet() const { return m_gatewayDisplayNameHasBeenSet; }
    template<typename GatewayDisplayNameT = Aws::String>
    void SetGatewayDisplayName(GatewayDisplayNameT&& value) { m_gatewayDisplayNameHasBeenSet = true; m_gatewayDisplayName = std::forward<GatewayDisplayNameT>(value); }
    template<typename GatewayDisplayNameT = Aws::String>
    CreateGatewayRequest& WithGatewayDisplayName(GatewayDisplayNameT&& value) { SetGatewayDisplayName(std::forward<GatewayDisplayNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of created gateway.</p>
     */
    inline GatewayType GetGatewayType() const { return m_gatewayType; }
    inline bool GatewayTypeHasBeenSet() const { return m_gatewayTypeHasBeenSet; }
    inline void SetGatewayType(GatewayType value) { m_gatewayTypeHasBeenSet = true; m_gatewayType = value; }
    inline CreateGatewayRequest& WithGatewayType(GatewayType value) { SetGatewayType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of up to 50 tags to assign to the gateway. Each tag is a key-value
     * pair.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    CreateGatewayRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    CreateGatewayRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_activationKey;
    bool m_activationKeyHasBeenSet = false;

    Aws::String m_gatewayDisplayName;
    bool m_gatewayDisplayNameHasBeenSet = false;

    GatewayType m_gatewayType{GatewayType::NOT_SET};
    bool m_gatewayTypeHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace BackupGateway
} // namespace Aws
