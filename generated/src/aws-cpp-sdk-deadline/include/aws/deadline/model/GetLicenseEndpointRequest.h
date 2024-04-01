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
  class GetLicenseEndpointRequest : public DeadlineRequest
  {
  public:
    AWS_DEADLINE_API GetLicenseEndpointRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetLicenseEndpoint"; }

    AWS_DEADLINE_API Aws::String SerializePayload() const override;


    /**
     * <p>The license endpoint ID.</p>
     */
    inline const Aws::String& GetLicenseEndpointId() const{ return m_licenseEndpointId; }

    /**
     * <p>The license endpoint ID.</p>
     */
    inline bool LicenseEndpointIdHasBeenSet() const { return m_licenseEndpointIdHasBeenSet; }

    /**
     * <p>The license endpoint ID.</p>
     */
    inline void SetLicenseEndpointId(const Aws::String& value) { m_licenseEndpointIdHasBeenSet = true; m_licenseEndpointId = value; }

    /**
     * <p>The license endpoint ID.</p>
     */
    inline void SetLicenseEndpointId(Aws::String&& value) { m_licenseEndpointIdHasBeenSet = true; m_licenseEndpointId = std::move(value); }

    /**
     * <p>The license endpoint ID.</p>
     */
    inline void SetLicenseEndpointId(const char* value) { m_licenseEndpointIdHasBeenSet = true; m_licenseEndpointId.assign(value); }

    /**
     * <p>The license endpoint ID.</p>
     */
    inline GetLicenseEndpointRequest& WithLicenseEndpointId(const Aws::String& value) { SetLicenseEndpointId(value); return *this;}

    /**
     * <p>The license endpoint ID.</p>
     */
    inline GetLicenseEndpointRequest& WithLicenseEndpointId(Aws::String&& value) { SetLicenseEndpointId(std::move(value)); return *this;}

    /**
     * <p>The license endpoint ID.</p>
     */
    inline GetLicenseEndpointRequest& WithLicenseEndpointId(const char* value) { SetLicenseEndpointId(value); return *this;}

  private:

    Aws::String m_licenseEndpointId;
    bool m_licenseEndpointIdHasBeenSet = false;
  };

} // namespace Model
} // namespace deadline
} // namespace Aws
