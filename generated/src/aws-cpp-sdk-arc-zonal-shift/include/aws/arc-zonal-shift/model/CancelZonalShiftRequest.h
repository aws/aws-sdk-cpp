/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/arc-zonal-shift/ARCZonalShift_EXPORTS.h>
#include <aws/arc-zonal-shift/ARCZonalShiftRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace ARCZonalShift
{
namespace Model
{

  /**
   */
  class CancelZonalShiftRequest : public ARCZonalShiftRequest
  {
  public:
    AWS_ARCZONALSHIFT_API CancelZonalShiftRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CancelZonalShift"; }

    AWS_ARCZONALSHIFT_API Aws::String SerializePayload() const override;


    /**
     * <p>The internally-generated identifier of a zonal shift.</p>
     */
    inline const Aws::String& GetZonalShiftId() const{ return m_zonalShiftId; }

    /**
     * <p>The internally-generated identifier of a zonal shift.</p>
     */
    inline bool ZonalShiftIdHasBeenSet() const { return m_zonalShiftIdHasBeenSet; }

    /**
     * <p>The internally-generated identifier of a zonal shift.</p>
     */
    inline void SetZonalShiftId(const Aws::String& value) { m_zonalShiftIdHasBeenSet = true; m_zonalShiftId = value; }

    /**
     * <p>The internally-generated identifier of a zonal shift.</p>
     */
    inline void SetZonalShiftId(Aws::String&& value) { m_zonalShiftIdHasBeenSet = true; m_zonalShiftId = std::move(value); }

    /**
     * <p>The internally-generated identifier of a zonal shift.</p>
     */
    inline void SetZonalShiftId(const char* value) { m_zonalShiftIdHasBeenSet = true; m_zonalShiftId.assign(value); }

    /**
     * <p>The internally-generated identifier of a zonal shift.</p>
     */
    inline CancelZonalShiftRequest& WithZonalShiftId(const Aws::String& value) { SetZonalShiftId(value); return *this;}

    /**
     * <p>The internally-generated identifier of a zonal shift.</p>
     */
    inline CancelZonalShiftRequest& WithZonalShiftId(Aws::String&& value) { SetZonalShiftId(std::move(value)); return *this;}

    /**
     * <p>The internally-generated identifier of a zonal shift.</p>
     */
    inline CancelZonalShiftRequest& WithZonalShiftId(const char* value) { SetZonalShiftId(value); return *this;}

  private:

    Aws::String m_zonalShiftId;
    bool m_zonalShiftIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ARCZonalShift
} // namespace Aws
