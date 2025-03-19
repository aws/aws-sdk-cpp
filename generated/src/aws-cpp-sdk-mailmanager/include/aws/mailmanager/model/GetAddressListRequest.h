/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mailmanager/MailManager_EXPORTS.h>
#include <aws/mailmanager/MailManagerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace MailManager
{
namespace Model
{

  /**
   */
  class GetAddressListRequest : public MailManagerRequest
  {
  public:
    AWS_MAILMANAGER_API GetAddressListRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetAddressList"; }

    AWS_MAILMANAGER_API Aws::String SerializePayload() const override;

    AWS_MAILMANAGER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The identifier of an existing address list resource to be retrieved.</p>
     */
    inline const Aws::String& GetAddressListId() const { return m_addressListId; }
    inline bool AddressListIdHasBeenSet() const { return m_addressListIdHasBeenSet; }
    template<typename AddressListIdT = Aws::String>
    void SetAddressListId(AddressListIdT&& value) { m_addressListIdHasBeenSet = true; m_addressListId = std::forward<AddressListIdT>(value); }
    template<typename AddressListIdT = Aws::String>
    GetAddressListRequest& WithAddressListId(AddressListIdT&& value) { SetAddressListId(std::forward<AddressListIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_addressListId;
    bool m_addressListIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MailManager
} // namespace Aws
