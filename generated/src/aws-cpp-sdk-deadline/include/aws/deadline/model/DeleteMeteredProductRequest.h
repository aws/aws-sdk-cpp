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
  class DeleteMeteredProductRequest : public DeadlineRequest
  {
  public:
    AWS_DEADLINE_API DeleteMeteredProductRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteMeteredProduct"; }

    AWS_DEADLINE_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The ID of the license endpoint from which to remove the metered product.</p>
     */
    inline const Aws::String& GetLicenseEndpointId() const{ return m_licenseEndpointId; }
    inline bool LicenseEndpointIdHasBeenSet() const { return m_licenseEndpointIdHasBeenSet; }
    inline void SetLicenseEndpointId(const Aws::String& value) { m_licenseEndpointIdHasBeenSet = true; m_licenseEndpointId = value; }
    inline void SetLicenseEndpointId(Aws::String&& value) { m_licenseEndpointIdHasBeenSet = true; m_licenseEndpointId = std::move(value); }
    inline void SetLicenseEndpointId(const char* value) { m_licenseEndpointIdHasBeenSet = true; m_licenseEndpointId.assign(value); }
    inline DeleteMeteredProductRequest& WithLicenseEndpointId(const Aws::String& value) { SetLicenseEndpointId(value); return *this;}
    inline DeleteMeteredProductRequest& WithLicenseEndpointId(Aws::String&& value) { SetLicenseEndpointId(std::move(value)); return *this;}
    inline DeleteMeteredProductRequest& WithLicenseEndpointId(const char* value) { SetLicenseEndpointId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The product ID to remove from the license endpoint.</p>
     */
    inline const Aws::String& GetProductId() const{ return m_productId; }
    inline bool ProductIdHasBeenSet() const { return m_productIdHasBeenSet; }
    inline void SetProductId(const Aws::String& value) { m_productIdHasBeenSet = true; m_productId = value; }
    inline void SetProductId(Aws::String&& value) { m_productIdHasBeenSet = true; m_productId = std::move(value); }
    inline void SetProductId(const char* value) { m_productIdHasBeenSet = true; m_productId.assign(value); }
    inline DeleteMeteredProductRequest& WithProductId(const Aws::String& value) { SetProductId(value); return *this;}
    inline DeleteMeteredProductRequest& WithProductId(Aws::String&& value) { SetProductId(std::move(value)); return *this;}
    inline DeleteMeteredProductRequest& WithProductId(const char* value) { SetProductId(value); return *this;}
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
