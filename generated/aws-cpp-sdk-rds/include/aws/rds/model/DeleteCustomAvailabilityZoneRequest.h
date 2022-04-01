/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/rds/RDSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace RDS
{
namespace Model
{

  /**
   */
  class AWS_RDS_API DeleteCustomAvailabilityZoneRequest : public RDSRequest
  {
  public:
    DeleteCustomAvailabilityZoneRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteCustomAvailabilityZone"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The custom AZ identifier.</p>
     */
    inline const Aws::String& GetCustomAvailabilityZoneId() const{ return m_customAvailabilityZoneId; }

    /**
     * <p>The custom AZ identifier.</p>
     */
    inline bool CustomAvailabilityZoneIdHasBeenSet() const { return m_customAvailabilityZoneIdHasBeenSet; }

    /**
     * <p>The custom AZ identifier.</p>
     */
    inline void SetCustomAvailabilityZoneId(const Aws::String& value) { m_customAvailabilityZoneIdHasBeenSet = true; m_customAvailabilityZoneId = value; }

    /**
     * <p>The custom AZ identifier.</p>
     */
    inline void SetCustomAvailabilityZoneId(Aws::String&& value) { m_customAvailabilityZoneIdHasBeenSet = true; m_customAvailabilityZoneId = std::move(value); }

    /**
     * <p>The custom AZ identifier.</p>
     */
    inline void SetCustomAvailabilityZoneId(const char* value) { m_customAvailabilityZoneIdHasBeenSet = true; m_customAvailabilityZoneId.assign(value); }

    /**
     * <p>The custom AZ identifier.</p>
     */
    inline DeleteCustomAvailabilityZoneRequest& WithCustomAvailabilityZoneId(const Aws::String& value) { SetCustomAvailabilityZoneId(value); return *this;}

    /**
     * <p>The custom AZ identifier.</p>
     */
    inline DeleteCustomAvailabilityZoneRequest& WithCustomAvailabilityZoneId(Aws::String&& value) { SetCustomAvailabilityZoneId(std::move(value)); return *this;}

    /**
     * <p>The custom AZ identifier.</p>
     */
    inline DeleteCustomAvailabilityZoneRequest& WithCustomAvailabilityZoneId(const char* value) { SetCustomAvailabilityZoneId(value); return *this;}

  private:

    Aws::String m_customAvailabilityZoneId;
    bool m_customAvailabilityZoneIdHasBeenSet;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
