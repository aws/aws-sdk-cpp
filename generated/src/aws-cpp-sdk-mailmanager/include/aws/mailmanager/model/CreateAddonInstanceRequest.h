/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mailmanager/MailManager_EXPORTS.h>
#include <aws/mailmanager/MailManagerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mailmanager/model/Tag.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace MailManager
{
namespace Model
{

  /**
   */
  class CreateAddonInstanceRequest : public MailManagerRequest
  {
  public:
    AWS_MAILMANAGER_API CreateAddonInstanceRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateAddonInstance"; }

    AWS_MAILMANAGER_API Aws::String SerializePayload() const override;

    AWS_MAILMANAGER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>A unique token that Amazon SES uses to recognize subsequent retries of the
     * same request.</p>
     */
    inline const Aws::String& GetClientToken() const { return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    template<typename ClientTokenT = Aws::String>
    void SetClientToken(ClientTokenT&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::forward<ClientTokenT>(value); }
    template<typename ClientTokenT = Aws::String>
    CreateAddonInstanceRequest& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique ID of a previously created subscription that an Add On instance is
     * created for. You can only have one instance per subscription.</p>
     */
    inline const Aws::String& GetAddonSubscriptionId() const { return m_addonSubscriptionId; }
    inline bool AddonSubscriptionIdHasBeenSet() const { return m_addonSubscriptionIdHasBeenSet; }
    template<typename AddonSubscriptionIdT = Aws::String>
    void SetAddonSubscriptionId(AddonSubscriptionIdT&& value) { m_addonSubscriptionIdHasBeenSet = true; m_addonSubscriptionId = std::forward<AddonSubscriptionIdT>(value); }
    template<typename AddonSubscriptionIdT = Aws::String>
    CreateAddonInstanceRequest& WithAddonSubscriptionId(AddonSubscriptionIdT&& value) { SetAddonSubscriptionId(std::forward<AddonSubscriptionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags used to organize, track, or control access for the resource. For
     * example, { "tags": {"key1":"value1", "key2":"value2"} }.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    CreateAddonInstanceRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    CreateAddonInstanceRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientTokenHasBeenSet = true;

    Aws::String m_addonSubscriptionId;
    bool m_addonSubscriptionIdHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace MailManager
} // namespace Aws
