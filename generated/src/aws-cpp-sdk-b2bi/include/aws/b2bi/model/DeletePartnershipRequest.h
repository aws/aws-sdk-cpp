/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/b2bi/B2BI_EXPORTS.h>
#include <aws/b2bi/B2BIRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace B2BI
{
namespace Model
{

  /**
   */
  class DeletePartnershipRequest : public B2BIRequest
  {
  public:
    AWS_B2BI_API DeletePartnershipRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeletePartnership"; }

    AWS_B2BI_API Aws::String SerializePayload() const override;

    AWS_B2BI_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Specifies the unique, system-generated identifier for a partnership.</p>
     */
    inline const Aws::String& GetPartnershipId() const{ return m_partnershipId; }

    /**
     * <p>Specifies the unique, system-generated identifier for a partnership.</p>
     */
    inline bool PartnershipIdHasBeenSet() const { return m_partnershipIdHasBeenSet; }

    /**
     * <p>Specifies the unique, system-generated identifier for a partnership.</p>
     */
    inline void SetPartnershipId(const Aws::String& value) { m_partnershipIdHasBeenSet = true; m_partnershipId = value; }

    /**
     * <p>Specifies the unique, system-generated identifier for a partnership.</p>
     */
    inline void SetPartnershipId(Aws::String&& value) { m_partnershipIdHasBeenSet = true; m_partnershipId = std::move(value); }

    /**
     * <p>Specifies the unique, system-generated identifier for a partnership.</p>
     */
    inline void SetPartnershipId(const char* value) { m_partnershipIdHasBeenSet = true; m_partnershipId.assign(value); }

    /**
     * <p>Specifies the unique, system-generated identifier for a partnership.</p>
     */
    inline DeletePartnershipRequest& WithPartnershipId(const Aws::String& value) { SetPartnershipId(value); return *this;}

    /**
     * <p>Specifies the unique, system-generated identifier for a partnership.</p>
     */
    inline DeletePartnershipRequest& WithPartnershipId(Aws::String&& value) { SetPartnershipId(std::move(value)); return *this;}

    /**
     * <p>Specifies the unique, system-generated identifier for a partnership.</p>
     */
    inline DeletePartnershipRequest& WithPartnershipId(const char* value) { SetPartnershipId(value); return *this;}

  private:

    Aws::String m_partnershipId;
    bool m_partnershipIdHasBeenSet = false;
  };

} // namespace Model
} // namespace B2BI
} // namespace Aws
