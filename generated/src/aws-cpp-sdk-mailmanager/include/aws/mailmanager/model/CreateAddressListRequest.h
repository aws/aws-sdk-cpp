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
  class CreateAddressListRequest : public MailManagerRequest
  {
  public:
    AWS_MAILMANAGER_API CreateAddressListRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateAddressList"; }

    AWS_MAILMANAGER_API Aws::String SerializePayload() const override;

    AWS_MAILMANAGER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>A user-friendly name for the address list.</p>
     */
    inline const Aws::String& GetAddressListName() const{ return m_addressListName; }
    inline bool AddressListNameHasBeenSet() const { return m_addressListNameHasBeenSet; }
    inline void SetAddressListName(const Aws::String& value) { m_addressListNameHasBeenSet = true; m_addressListName = value; }
    inline void SetAddressListName(Aws::String&& value) { m_addressListNameHasBeenSet = true; m_addressListName = std::move(value); }
    inline void SetAddressListName(const char* value) { m_addressListNameHasBeenSet = true; m_addressListName.assign(value); }
    inline CreateAddressListRequest& WithAddressListName(const Aws::String& value) { SetAddressListName(value); return *this;}
    inline CreateAddressListRequest& WithAddressListName(Aws::String&& value) { SetAddressListName(std::move(value)); return *this;}
    inline CreateAddressListRequest& WithAddressListName(const char* value) { SetAddressListName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique token that Amazon SES uses to recognize subsequent retries of the
     * same request.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }
    inline CreateAddressListRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}
    inline CreateAddressListRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}
    inline CreateAddressListRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags used to organize, track, or control access for the resource. For
     * example, { "tags": {"key1":"value1", "key2":"value2"} }.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline CreateAddressListRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline CreateAddressListRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateAddressListRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline CreateAddressListRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_addressListName;
    bool m_addressListNameHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace MailManager
} // namespace Aws
