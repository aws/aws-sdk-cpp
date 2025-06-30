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
    AWS_ARCZONALSHIFT_API StartZonalShiftRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartZonalShift"; }

    AWS_ARCZONALSHIFT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The identifier for the resource that Amazon Web Services shifts traffic for.
     * The identifier is the Amazon Resource Name (ARN) for the resource.</p> <p>Amazon
     * Application Recovery Controller currently supports enabling the following
     * resources for zonal shift and zonal autoshift:</p> <ul> <li> <p> <a
     * href="https://docs.aws.amazon.com/r53recovery/latest/dg/arc-zonal-shift.resource-types.ec2-auto-scaling-groups.html">Amazon
     * EC2 Auto Scaling groups</a> </p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/r53recovery/latest/dg/arc-zonal-shift.resource-types.eks.html">Amazon
     * Elastic Kubernetes Service</a> </p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/r53recovery/latest/dg/arc-zonal-shift.resource-types.app-load-balancers.html">Application
     * Load Balancer</a> </p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/r53recovery/latest/dg/arc-zonal-shift.resource-types.network-load-balancers.html">Network
     * Load Balancer</a> </p> </li> </ul>
     */
    inline const Aws::String& GetResourceIdentifier() const { return m_resourceIdentifier; }
    inline bool ResourceIdentifierHasBeenSet() const { return m_resourceIdentifierHasBeenSet; }
    template<typename ResourceIdentifierT = Aws::String>
    void SetResourceIdentifier(ResourceIdentifierT&& value) { m_resourceIdentifierHasBeenSet = true; m_resourceIdentifier = std::forward<ResourceIdentifierT>(value); }
    template<typename ResourceIdentifierT = Aws::String>
    StartZonalShiftRequest& WithResourceIdentifier(ResourceIdentifierT&& value) { SetResourceIdentifier(std::forward<ResourceIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Availability Zone (for example, <code>use1-az1</code>) that traffic is
     * moved away from for a resource when you start a zonal shift. Until the zonal
     * shift expires or you cancel it, traffic for the resource is instead moved to
     * other Availability Zones in the Amazon Web Services Region.</p>
     */
    inline const Aws::String& GetAwayFrom() const { return m_awayFrom; }
    inline bool AwayFromHasBeenSet() const { return m_awayFromHasBeenSet; }
    template<typename AwayFromT = Aws::String>
    void SetAwayFrom(AwayFromT&& value) { m_awayFromHasBeenSet = true; m_awayFrom = std::forward<AwayFromT>(value); }
    template<typename AwayFromT = Aws::String>
    StartZonalShiftRequest& WithAwayFrom(AwayFromT&& value) { SetAwayFrom(std::forward<AwayFromT>(value)); return *this;}
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
    StartZonalShiftRequest& WithExpiresIn(ExpiresInT&& value) { SetExpiresIn(std::forward<ExpiresInT>(value)); return *this;}
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
    StartZonalShiftRequest& WithComment(CommentT&& value) { SetComment(std::forward<CommentT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_resourceIdentifier;
    bool m_resourceIdentifierHasBeenSet = false;

    Aws::String m_awayFrom;
    bool m_awayFromHasBeenSet = false;

    Aws::String m_expiresIn;
    bool m_expiresInHasBeenSet = false;

    Aws::String m_comment;
    bool m_commentHasBeenSet = false;
  };

} // namespace Model
} // namespace ARCZonalShift
} // namespace Aws
