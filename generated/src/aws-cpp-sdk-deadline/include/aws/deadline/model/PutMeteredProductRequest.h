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
    AWS_DEADLINE_API PutMeteredProductRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutMeteredProduct"; }

    AWS_DEADLINE_API Aws::String SerializePayload() const override;


    /**
     * <p>The license endpoint ID to add to the metered product.</p>
     */
    inline const Aws::String& GetLicenseEndpointId() const{ return m_licenseEndpointId; }

    /**
     * <p>The license endpoint ID to add to the metered product.</p>
     */
    inline bool LicenseEndpointIdHasBeenSet() const { return m_licenseEndpointIdHasBeenSet; }

    /**
     * <p>The license endpoint ID to add to the metered product.</p>
     */
    inline void SetLicenseEndpointId(const Aws::String& value) { m_licenseEndpointIdHasBeenSet = true; m_licenseEndpointId = value; }

    /**
     * <p>The license endpoint ID to add to the metered product.</p>
     */
    inline void SetLicenseEndpointId(Aws::String&& value) { m_licenseEndpointIdHasBeenSet = true; m_licenseEndpointId = std::move(value); }

    /**
     * <p>The license endpoint ID to add to the metered product.</p>
     */
    inline void SetLicenseEndpointId(const char* value) { m_licenseEndpointIdHasBeenSet = true; m_licenseEndpointId.assign(value); }

    /**
     * <p>The license endpoint ID to add to the metered product.</p>
     */
    inline PutMeteredProductRequest& WithLicenseEndpointId(const Aws::String& value) { SetLicenseEndpointId(value); return *this;}

    /**
     * <p>The license endpoint ID to add to the metered product.</p>
     */
    inline PutMeteredProductRequest& WithLicenseEndpointId(Aws::String&& value) { SetLicenseEndpointId(std::move(value)); return *this;}

    /**
     * <p>The license endpoint ID to add to the metered product.</p>
     */
    inline PutMeteredProductRequest& WithLicenseEndpointId(const char* value) { SetLicenseEndpointId(value); return *this;}


    /**
     * <p>The product ID to add to the metered product.</p>
     */
    inline const Aws::String& GetProductId() const{ return m_productId; }

    /**
     * <p>The product ID to add to the metered product.</p>
     */
    inline bool ProductIdHasBeenSet() const { return m_productIdHasBeenSet; }

    /**
     * <p>The product ID to add to the metered product.</p>
     */
    inline void SetProductId(const Aws::String& value) { m_productIdHasBeenSet = true; m_productId = value; }

    /**
     * <p>The product ID to add to the metered product.</p>
     */
    inline void SetProductId(Aws::String&& value) { m_productIdHasBeenSet = true; m_productId = std::move(value); }

    /**
     * <p>The product ID to add to the metered product.</p>
     */
    inline void SetProductId(const char* value) { m_productIdHasBeenSet = true; m_productId.assign(value); }

    /**
     * <p>The product ID to add to the metered product.</p>
     */
    inline PutMeteredProductRequest& WithProductId(const Aws::String& value) { SetProductId(value); return *this;}

    /**
     * <p>The product ID to add to the metered product.</p>
     */
    inline PutMeteredProductRequest& WithProductId(Aws::String&& value) { SetProductId(std::move(value)); return *this;}

    /**
     * <p>The product ID to add to the metered product.</p>
     */
    inline PutMeteredProductRequest& WithProductId(const char* value) { SetProductId(value); return *this;}

  private:

    Aws::String m_licenseEndpointId;
    bool m_licenseEndpointIdHasBeenSet = false;

    Aws::String m_productId;
    bool m_productIdHasBeenSet = false;
  };

} // namespace Model
} // namespace deadline
} // namespace Aws
