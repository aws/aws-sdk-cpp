/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/deadline/Deadline_EXPORTS.h>
#include <aws/deadline/DeadlineRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace deadline
{
namespace Model
{

  /**
   */
  class PutMeteredProductRequest : public DeadlineRequest
  {
  public:
    AWS_DEADLINE_API PutMeteredProductRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutMeteredProduct"; }

    AWS_DEADLINE_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The license endpoint ID to add to the metered product.</p>
     */
    inline const Aws::String& GetLicenseEndpointId() const { return m_licenseEndpointId; }
    inline bool LicenseEndpointIdHasBeenSet() const { return m_licenseEndpointIdHasBeenSet; }
    template<typename LicenseEndpointIdT = Aws::String>
    void SetLicenseEndpointId(LicenseEndpointIdT&& value) { m_licenseEndpointIdHasBeenSet = true; m_licenseEndpointId = std::forward<LicenseEndpointIdT>(value); }
    template<typename LicenseEndpointIdT = Aws::String>
    PutMeteredProductRequest& WithLicenseEndpointId(LicenseEndpointIdT&& value) { SetLicenseEndpointId(std::forward<LicenseEndpointIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The product ID to add to the metered product.</p>
     */
    inline const Aws::String& GetProductId() const { return m_productId; }
    inline bool ProductIdHasBeenSet() const { return m_productIdHasBeenSet; }
    template<typename ProductIdT = Aws::String>
    void SetProductId(ProductIdT&& value) { m_productIdHasBeenSet = true; m_productId = std::forward<ProductIdT>(value); }
    template<typename ProductIdT = Aws::String>
    PutMeteredProductRequest& WithProductId(ProductIdT&& value) { SetProductId(std::forward<ProductIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_licenseEndpointId;
    bool m_licenseEndpointIdHasBeenSet = false;

    Aws::String m_productId;
    bool m_productIdHasBeenSet = false;
  };

} // namespace Model
} // namespace deadline
} // namespace Aws
