﻿/**
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
  class GetPartnershipRequest : public B2BIRequest
  {
  public:
    AWS_B2BI_API GetPartnershipRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetPartnership"; }

    AWS_B2BI_API Aws::String SerializePayload() const override;

    AWS_B2BI_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>Specifies the unique, system-generated identifier for a partnership.</p>
     */
    inline const Aws::String& GetPartnershipId() const { return m_partnershipId; }
    inline bool PartnershipIdHasBeenSet() const { return m_partnershipIdHasBeenSet; }
    template<typename PartnershipIdT = Aws::String>
    void SetPartnershipId(PartnershipIdT&& value) { m_partnershipIdHasBeenSet = true; m_partnershipId = std::forward<PartnershipIdT>(value); }
    template<typename PartnershipIdT = Aws::String>
    GetPartnershipRequest& WithPartnershipId(PartnershipIdT&& value) { SetPartnershipId(std::forward<PartnershipIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_partnershipId;
    bool m_partnershipIdHasBeenSet = false;
  };

} // namespace Model
} // namespace B2BI
} // namespace Aws
