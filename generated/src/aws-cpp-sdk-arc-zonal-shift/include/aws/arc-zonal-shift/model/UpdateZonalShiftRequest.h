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
    AWS_ARCZONALSHIFT_API UpdateZonalShiftRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateZonalShift"; }

    AWS_ARCZONALSHIFT_API Aws::String SerializePayload() const override;


    /**
     * <p>A comment that you enter about the zonal shift. Only the latest comment is
     * retained; no comment history is maintained. A new comment overwrites any
     * existing comment string.</p>
     */
    inline const Aws::String& GetComment() const{ return m_comment; }

    /**
     * <p>A comment that you enter about the zonal shift. Only the latest comment is
     * retained; no comment history is maintained. A new comment overwrites any
     * existing comment string.</p>
     */
    inline bool CommentHasBeenSet() const { return m_commentHasBeenSet; }

    /**
     * <p>A comment that you enter about the zonal shift. Only the latest comment is
     * retained; no comment history is maintained. A new comment overwrites any
     * existing comment string.</p>
     */
    inline void SetComment(const Aws::String& value) { m_commentHasBeenSet = true; m_comment = value; }

    /**
     * <p>A comment that you enter about the zonal shift. Only the latest comment is
     * retained; no comment history is maintained. A new comment overwrites any
     * existing comment string.</p>
     */
    inline void SetComment(Aws::String&& value) { m_commentHasBeenSet = true; m_comment = std::move(value); }

    /**
     * <p>A comment that you enter about the zonal shift. Only the latest comment is
     * retained; no comment history is maintained. A new comment overwrites any
     * existing comment string.</p>
     */
    inline void SetComment(const char* value) { m_commentHasBeenSet = true; m_comment.assign(value); }

    /**
     * <p>A comment that you enter about the zonal shift. Only the latest comment is
     * retained; no comment history is maintained. A new comment overwrites any
     * existing comment string.</p>
     */
    inline UpdateZonalShiftRequest& WithComment(const Aws::String& value) { SetComment(value); return *this;}

    /**
     * <p>A comment that you enter about the zonal shift. Only the latest comment is
     * retained; no comment history is maintained. A new comment overwrites any
     * existing comment string.</p>
     */
    inline UpdateZonalShiftRequest& WithComment(Aws::String&& value) { SetComment(std::move(value)); return *this;}

    /**
     * <p>A comment that you enter about the zonal shift. Only the latest comment is
     * retained; no comment history is maintained. A new comment overwrites any
     * existing comment string.</p>
     */
    inline UpdateZonalShiftRequest& WithComment(const char* value) { SetComment(value); return *this;}


    /**
     * <p>The length of time that you want a zonal shift to be active, which Route 53
     * ARC converts to an expiry time (expiration time). Zonal shifts are temporary.
     * You can set a zonal shift to be active initially for up to three days (72
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
    inline const Aws::String& GetExpiresIn() const{ return m_expiresIn; }

    /**
     * <p>The length of time that you want a zonal shift to be active, which Route 53
     * ARC converts to an expiry time (expiration time). Zonal shifts are temporary.
     * You can set a zonal shift to be active initially for up to three days (72
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
    inline bool ExpiresInHasBeenSet() const { return m_expiresInHasBeenSet; }

    /**
     * <p>The length of time that you want a zonal shift to be active, which Route 53
     * ARC converts to an expiry time (expiration time). Zonal shifts are temporary.
     * You can set a zonal shift to be active initially for up to three days (72
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
    inline void SetExpiresIn(const Aws::String& value) { m_expiresInHasBeenSet = true; m_expiresIn = value; }

    /**
     * <p>The length of time that you want a zonal shift to be active, which Route 53
     * ARC converts to an expiry time (expiration time). Zonal shifts are temporary.
     * You can set a zonal shift to be active initially for up to three days (72
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
    inline void SetExpiresIn(Aws::String&& value) { m_expiresInHasBeenSet = true; m_expiresIn = std::move(value); }

    /**
     * <p>The length of time that you want a zonal shift to be active, which Route 53
     * ARC converts to an expiry time (expiration time). Zonal shifts are temporary.
     * You can set a zonal shift to be active initially for up to three days (72
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
    inline void SetExpiresIn(const char* value) { m_expiresInHasBeenSet = true; m_expiresIn.assign(value); }

    /**
     * <p>The length of time that you want a zonal shift to be active, which Route 53
     * ARC converts to an expiry time (expiration time). Zonal shifts are temporary.
     * You can set a zonal shift to be active initially for up to three days (72
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
    inline UpdateZonalShiftRequest& WithExpiresIn(const Aws::String& value) { SetExpiresIn(value); return *this;}

    /**
     * <p>The length of time that you want a zonal shift to be active, which Route 53
     * ARC converts to an expiry time (expiration time). Zonal shifts are temporary.
     * You can set a zonal shift to be active initially for up to three days (72
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
    inline UpdateZonalShiftRequest& WithExpiresIn(Aws::String&& value) { SetExpiresIn(std::move(value)); return *this;}

    /**
     * <p>The length of time that you want a zonal shift to be active, which Route 53
     * ARC converts to an expiry time (expiration time). Zonal shifts are temporary.
     * You can set a zonal shift to be active initially for up to three days (72
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
    inline UpdateZonalShiftRequest& WithExpiresIn(const char* value) { SetExpiresIn(value); return *this;}


    /**
     * <p>The identifier of a zonal shift.</p>
     */
    inline const Aws::String& GetZonalShiftId() const{ return m_zonalShiftId; }

    /**
     * <p>The identifier of a zonal shift.</p>
     */
    inline bool ZonalShiftIdHasBeenSet() const { return m_zonalShiftIdHasBeenSet; }

    /**
     * <p>The identifier of a zonal shift.</p>
     */
    inline void SetZonalShiftId(const Aws::String& value) { m_zonalShiftIdHasBeenSet = true; m_zonalShiftId = value; }

    /**
     * <p>The identifier of a zonal shift.</p>
     */
    inline void SetZonalShiftId(Aws::String&& value) { m_zonalShiftIdHasBeenSet = true; m_zonalShiftId = std::move(value); }

    /**
     * <p>The identifier of a zonal shift.</p>
     */
    inline void SetZonalShiftId(const char* value) { m_zonalShiftIdHasBeenSet = true; m_zonalShiftId.assign(value); }

    /**
     * <p>The identifier of a zonal shift.</p>
     */
    inline UpdateZonalShiftRequest& WithZonalShiftId(const Aws::String& value) { SetZonalShiftId(value); return *this;}

    /**
     * <p>The identifier of a zonal shift.</p>
     */
    inline UpdateZonalShiftRequest& WithZonalShiftId(Aws::String&& value) { SetZonalShiftId(std::move(value)); return *this;}

    /**
     * <p>The identifier of a zonal shift.</p>
     */
    inline UpdateZonalShiftRequest& WithZonalShiftId(const char* value) { SetZonalShiftId(value); return *this;}

  private:

    Aws::String m_comment;
    bool m_commentHasBeenSet = false;

    Aws::String m_expiresIn;
    bool m_expiresInHasBeenSet = false;

    Aws::String m_zonalShiftId;
    bool m_zonalShiftIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ARCZonalShift
} // namespace Aws
