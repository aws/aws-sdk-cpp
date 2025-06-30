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
  class GetManagedResourceRequest : public ARCZonalShiftRequest
  {
  public:
    AWS_ARCZONALSHIFT_API GetManagedResourceRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetManagedResource"; }

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
    GetManagedResourceRequest& WithResourceIdentifier(ResourceIdentifierT&& value) { SetResourceIdentifier(std::forward<ResourceIdentifierT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_resourceIdentifier;
    bool m_resourceIdentifierHasBeenSet = false;
  };

} // namespace Model
} // namespace ARCZonalShift
} // namespace Aws
