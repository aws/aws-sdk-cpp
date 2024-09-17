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
  class StartZonalShiftRequest : public ARCZonalShiftRequest
  {
  public:
    AWS_ARCZONALSHIFT_API StartZonalShiftRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartZonalShift"; }

    AWS_ARCZONALSHIFT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The Availability Zone (for example, <code>use1-az1</code>) that traffic is
     * moved away from for a resource when you start a zonal shift. Until the zonal
     * shift expires or you cancel it, traffic for the resource is instead moved to
     * other Availability Zones in the Amazon Web Services Region.</p>
     */
    inline const Aws::String& GetAwayFrom() const{ return m_awayFrom; }
    inline bool AwayFromHasBeenSet() const { return m_awayFromHasBeenSet; }
    inline void SetAwayFrom(const Aws::String& value) { m_awayFromHasBeenSet = true; m_awayFrom = value; }
    inline void SetAwayFrom(Aws::String&& value) { m_awayFromHasBeenSet = true; m_awayFrom = std::move(value); }
    inline void SetAwayFrom(const char* value) { m_awayFromHasBeenSet = true; m_awayFrom.assign(value); }
    inline StartZonalShiftRequest& WithAwayFrom(const Aws::String& value) { SetAwayFrom(value); return *this;}
    inline StartZonalShiftRequest& WithAwayFrom(Aws::String&& value) { SetAwayFrom(std::move(value)); return *this;}
    inline StartZonalShiftRequest& WithAwayFrom(const char* value) { SetAwayFrom(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A comment that you enter about the zonal shift. Only the latest comment is
     * retained; no comment history is maintained. A new comment overwrites any
     * existing comment string.</p>
     */
    inline const Aws::String& GetComment() const{ return m_comment; }
    inline bool CommentHasBeenSet() const { return m_commentHasBeenSet; }
    inline void SetComment(const Aws::String& value) { m_commentHasBeenSet = true; m_comment = value; }
    inline void SetComment(Aws::String&& value) { m_commentHasBeenSet = true; m_comment = std::move(value); }
    inline void SetComment(const char* value) { m_commentHasBeenSet = true; m_comment.assign(value); }
    inline StartZonalShiftRequest& WithComment(const Aws::String& value) { SetComment(value); return *this;}
    inline StartZonalShiftRequest& WithComment(Aws::String&& value) { SetComment(std::move(value)); return *this;}
    inline StartZonalShiftRequest& WithComment(const char* value) { SetComment(value); return *this;}
    ///@}

    ///@{
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
    inline bool ExpiresInHasBeenSet() const { return m_expiresInHasBeenSet; }
    inline void SetExpiresIn(const Aws::String& value) { m_expiresInHasBeenSet = true; m_expiresIn = value; }
    inline void SetExpiresIn(Aws::String&& value) { m_expiresInHasBeenSet = true; m_expiresIn = std::move(value); }
    inline void SetExpiresIn(const char* value) { m_expiresInHasBeenSet = true; m_expiresIn.assign(value); }
    inline StartZonalShiftRequest& WithExpiresIn(const Aws::String& value) { SetExpiresIn(value); return *this;}
    inline StartZonalShiftRequest& WithExpiresIn(Aws::String&& value) { SetExpiresIn(std::move(value)); return *this;}
    inline StartZonalShiftRequest& WithExpiresIn(const char* value) { SetExpiresIn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier for the resource that Amazon Web Services shifts traffic for.
     * The identifier is the Amazon Resource Name (ARN) for the resource.</p> <p>At
     * this time, supported resources are Network Load Balancers and Application Load
     * Balancers with cross-zone load balancing turned off.</p>
     */
    inline const Aws::String& GetResourceIdentifier() const{ return m_resourceIdentifier; }
    inline bool ResourceIdentifierHasBeenSet() const { return m_resourceIdentifierHasBeenSet; }
    inline void SetResourceIdentifier(const Aws::String& value) { m_resourceIdentifierHasBeenSet = true; m_resourceIdentifier = value; }
    inline void SetResourceIdentifier(Aws::String&& value) { m_resourceIdentifierHasBeenSet = true; m_resourceIdentifier = std::move(value); }
    inline void SetResourceIdentifier(const char* value) { m_resourceIdentifierHasBeenSet = true; m_resourceIdentifier.assign(value); }
    inline StartZonalShiftRequest& WithResourceIdentifier(const Aws::String& value) { SetResourceIdentifier(value); return *this;}
    inline StartZonalShiftRequest& WithResourceIdentifier(Aws::String&& value) { SetResourceIdentifier(std::move(value)); return *this;}
    inline StartZonalShiftRequest& WithResourceIdentifier(const char* value) { SetResourceIdentifier(value); return *this;}
    ///@}
  private:

    Aws::String m_awayFrom;
    bool m_awayFromHasBeenSet = false;

    Aws::String m_comment;
    bool m_commentHasBeenSet = false;

    Aws::String m_expiresIn;
    bool m_expiresInHasBeenSet = false;

    Aws::String m_resourceIdentifier;
    bool m_resourceIdentifierHasBeenSet = false;
  };

} // namespace Model
} // namespace ARCZonalShift
} // namespace Aws
