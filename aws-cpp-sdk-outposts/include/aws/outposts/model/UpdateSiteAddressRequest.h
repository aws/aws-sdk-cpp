/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/outposts/Outposts_EXPORTS.h>
#include <aws/outposts/OutpostsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/outposts/model/AddressType.h>
#include <aws/outposts/model/Address.h>
#include <utility>

namespace Aws
{
namespace Outposts
{
namespace Model
{

  /**
   */
  class UpdateSiteAddressRequest : public OutpostsRequest
  {
  public:
    AWS_OUTPOSTS_API UpdateSiteAddressRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateSiteAddress"; }

    AWS_OUTPOSTS_API Aws::String SerializePayload() const override;


    /**
     * <p> The ID or the Amazon Resource Name (ARN) of the site. </p>
     */
    inline const Aws::String& GetSiteId() const{ return m_siteId; }

    /**
     * <p> The ID or the Amazon Resource Name (ARN) of the site. </p>
     */
    inline bool SiteIdHasBeenSet() const { return m_siteIdHasBeenSet; }

    /**
     * <p> The ID or the Amazon Resource Name (ARN) of the site. </p>
     */
    inline void SetSiteId(const Aws::String& value) { m_siteIdHasBeenSet = true; m_siteId = value; }

    /**
     * <p> The ID or the Amazon Resource Name (ARN) of the site. </p>
     */
    inline void SetSiteId(Aws::String&& value) { m_siteIdHasBeenSet = true; m_siteId = std::move(value); }

    /**
     * <p> The ID or the Amazon Resource Name (ARN) of the site. </p>
     */
    inline void SetSiteId(const char* value) { m_siteIdHasBeenSet = true; m_siteId.assign(value); }

    /**
     * <p> The ID or the Amazon Resource Name (ARN) of the site. </p>
     */
    inline UpdateSiteAddressRequest& WithSiteId(const Aws::String& value) { SetSiteId(value); return *this;}

    /**
     * <p> The ID or the Amazon Resource Name (ARN) of the site. </p>
     */
    inline UpdateSiteAddressRequest& WithSiteId(Aws::String&& value) { SetSiteId(std::move(value)); return *this;}

    /**
     * <p> The ID or the Amazon Resource Name (ARN) of the site. </p>
     */
    inline UpdateSiteAddressRequest& WithSiteId(const char* value) { SetSiteId(value); return *this;}


    /**
     * <p> The type of the address. </p>
     */
    inline const AddressType& GetAddressType() const{ return m_addressType; }

    /**
     * <p> The type of the address. </p>
     */
    inline bool AddressTypeHasBeenSet() const { return m_addressTypeHasBeenSet; }

    /**
     * <p> The type of the address. </p>
     */
    inline void SetAddressType(const AddressType& value) { m_addressTypeHasBeenSet = true; m_addressType = value; }

    /**
     * <p> The type of the address. </p>
     */
    inline void SetAddressType(AddressType&& value) { m_addressTypeHasBeenSet = true; m_addressType = std::move(value); }

    /**
     * <p> The type of the address. </p>
     */
    inline UpdateSiteAddressRequest& WithAddressType(const AddressType& value) { SetAddressType(value); return *this;}

    /**
     * <p> The type of the address. </p>
     */
    inline UpdateSiteAddressRequest& WithAddressType(AddressType&& value) { SetAddressType(std::move(value)); return *this;}


    /**
     * <p> The address for the site. </p>
     */
    inline const Address& GetAddress() const{ return m_address; }

    /**
     * <p> The address for the site. </p>
     */
    inline bool AddressHasBeenSet() const { return m_addressHasBeenSet; }

    /**
     * <p> The address for the site. </p>
     */
    inline void SetAddress(const Address& value) { m_addressHasBeenSet = true; m_address = value; }

    /**
     * <p> The address for the site. </p>
     */
    inline void SetAddress(Address&& value) { m_addressHasBeenSet = true; m_address = std::move(value); }

    /**
     * <p> The address for the site. </p>
     */
    inline UpdateSiteAddressRequest& WithAddress(const Address& value) { SetAddress(value); return *this;}

    /**
     * <p> The address for the site. </p>
     */
    inline UpdateSiteAddressRequest& WithAddress(Address&& value) { SetAddress(std::move(value)); return *this;}

  private:

    Aws::String m_siteId;
    bool m_siteIdHasBeenSet = false;

    AddressType m_addressType;
    bool m_addressTypeHasBeenSet = false;

    Address m_address;
    bool m_addressHasBeenSet = false;
  };

} // namespace Model
} // namespace Outposts
} // namespace Aws
