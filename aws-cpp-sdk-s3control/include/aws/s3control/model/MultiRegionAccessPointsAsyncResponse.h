/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3control/S3Control_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/s3control/model/MultiRegionAccessPointRegionalResponse.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace S3Control
{
namespace Model
{

  /**
   * <p>The Multi-Region Access Point details that are returned when querying about
   * an asynchronous request.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/MultiRegionAccessPointsAsyncResponse">AWS
   * API Reference</a></p>
   */
  class MultiRegionAccessPointsAsyncResponse
  {
  public:
    AWS_S3CONTROL_API MultiRegionAccessPointsAsyncResponse();
    AWS_S3CONTROL_API MultiRegionAccessPointsAsyncResponse(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_S3CONTROL_API MultiRegionAccessPointsAsyncResponse& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_S3CONTROL_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    /**
     * <p>A collection of status information for the different Regions that a
     * Multi-Region Access Point supports.</p>
     */
    inline const Aws::Vector<MultiRegionAccessPointRegionalResponse>& GetRegions() const{ return m_regions; }

    /**
     * <p>A collection of status information for the different Regions that a
     * Multi-Region Access Point supports.</p>
     */
    inline bool RegionsHasBeenSet() const { return m_regionsHasBeenSet; }

    /**
     * <p>A collection of status information for the different Regions that a
     * Multi-Region Access Point supports.</p>
     */
    inline void SetRegions(const Aws::Vector<MultiRegionAccessPointRegionalResponse>& value) { m_regionsHasBeenSet = true; m_regions = value; }

    /**
     * <p>A collection of status information for the different Regions that a
     * Multi-Region Access Point supports.</p>
     */
    inline void SetRegions(Aws::Vector<MultiRegionAccessPointRegionalResponse>&& value) { m_regionsHasBeenSet = true; m_regions = std::move(value); }

    /**
     * <p>A collection of status information for the different Regions that a
     * Multi-Region Access Point supports.</p>
     */
    inline MultiRegionAccessPointsAsyncResponse& WithRegions(const Aws::Vector<MultiRegionAccessPointRegionalResponse>& value) { SetRegions(value); return *this;}

    /**
     * <p>A collection of status information for the different Regions that a
     * Multi-Region Access Point supports.</p>
     */
    inline MultiRegionAccessPointsAsyncResponse& WithRegions(Aws::Vector<MultiRegionAccessPointRegionalResponse>&& value) { SetRegions(std::move(value)); return *this;}

    /**
     * <p>A collection of status information for the different Regions that a
     * Multi-Region Access Point supports.</p>
     */
    inline MultiRegionAccessPointsAsyncResponse& AddRegions(const MultiRegionAccessPointRegionalResponse& value) { m_regionsHasBeenSet = true; m_regions.push_back(value); return *this; }

    /**
     * <p>A collection of status information for the different Regions that a
     * Multi-Region Access Point supports.</p>
     */
    inline MultiRegionAccessPointsAsyncResponse& AddRegions(MultiRegionAccessPointRegionalResponse&& value) { m_regionsHasBeenSet = true; m_regions.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<MultiRegionAccessPointRegionalResponse> m_regions;
    bool m_regionsHasBeenSet = false;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws
