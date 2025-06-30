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
  class UpdateZonalShiftRequest : public ARCZonalShiftRequest
  {
  public:
    AWS_ARCZONALSHIFT_API UpdateZonalShiftRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateZonalShift"; }

    AWS_ARCZONALSHIFT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The identifier of a zonal shift.</p>
     */
    inline const Aws::String& GetZonalShiftId() const { return m_zonalShiftId; }
    inline bool ZonalShiftIdHasBeenSet() const { return m_zonalShiftIdHasBeenSet; }
    template<typename ZonalShiftIdT = Aws::String>
    void SetZonalShiftId(ZonalShiftIdT&& value) { m_zonalShiftIdHasBeenSet = true; m_zonalShiftId = std::forward<ZonalShiftIdT>(value); }
    template<typename ZonalShiftIdT = Aws::String>
    UpdateZonalShiftRequest& WithZonalShiftId(ZonalShiftIdT&& value) { SetZonalShiftId(std::forward<ZonalShiftIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A comment that you enter about the zonal shift. Only the latest comment is
     * retained; no comment history is maintained. A new comment overwrites any
     * existing comment string.</p>
     */
    inline const Aws::String& GetComment() const { return m_comment; }
    inline bool CommentHasBeenSet() const { return m_commentHasBeenSet; }
    template<typename CommentT = Aws::String>
    void SetComment(CommentT&& value) { m_commentHasBeenSet = true; m_comment = std::forward<CommentT>(value); }
    template<typename CommentT = Aws::String>
    UpdateZonalShiftRequest& WithComment(CommentT&& value) { SetComment(std::forward<CommentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The length of time that you want a zonal shift to be active, which ARC
     * converts to an expiry time (expiration time). Zonal shifts are temporary. You
     * can set a zonal shift to be active initially for up to three days (72
     * hours).</p> <p>If you want to still keep traffic away from an Availability Zone,
     * you can update the zonal shift and set a new expiration. You can also cancel a
     * zonal shift, before it expires, for example, if you're ready to restore traffic
     * to the Availability Zone.</p> <p>To set a length of time for a zonal shift to be
     * active, specify a whole number, and then one of the following, with no
     * space:</p> <ul> <li> <p> <b>A lowercase letter m:</b> To specify that the value
     * is in minutes.</p> </li> <li> <p> <b>A lowercase letter h:</b> To specify that
     * the value is in hours.</p> </li> </ul> <p>For example: <code>20h</code> means
     * the zonal shift expires in 20 hours. <code>120m</code> means the zonal shift
     * expires in 120 minutes (2 hours).</p>
     */
    inline const Aws::String& GetExpiresIn() const { return m_expiresIn; }
    inline bool ExpiresInHasBeenSet() const { return m_expiresInHasBeenSet; }
    template<typename ExpiresInT = Aws::String>
    void SetExpiresIn(ExpiresInT&& value) { m_expiresInHasBeenSet = true; m_expiresIn = std::forward<ExpiresInT>(value); }
    template<typename ExpiresInT = Aws::String>
    UpdateZonalShiftRequest& WithExpiresIn(ExpiresInT&& value) { SetExpiresIn(std::forward<ExpiresInT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_zonalShiftId;
    bool m_zonalShiftIdHasBeenSet = false;

    Aws::String m_comment;
    bool m_commentHasBeenSet = false;

    Aws::String m_expiresIn;
    bool m_expiresInHasBeenSet = false;
  };

} // namespace Model
} // namespace ARCZonalShift
} // namespace Aws
