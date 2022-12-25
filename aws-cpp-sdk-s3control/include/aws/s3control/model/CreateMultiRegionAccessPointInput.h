/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3control/S3Control_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/s3control/model/PublicAccessBlockConfiguration.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/s3control/model/Region.h>
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
   * <p>A container for the information associated with a <a
   * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_CreateMultiRegionAccessPoint.html">CreateMultiRegionAccessPoint</a>
   * request. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/CreateMultiRegionAccessPointInput">AWS
   * API Reference</a></p>
   */
  class CreateMultiRegionAccessPointInput
  {
  public:
    AWS_S3CONTROL_API CreateMultiRegionAccessPointInput();
    AWS_S3CONTROL_API CreateMultiRegionAccessPointInput(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_S3CONTROL_API CreateMultiRegionAccessPointInput& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_S3CONTROL_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    /**
     * <p>The name of the Multi-Region Access Point associated with this request.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the Multi-Region Access Point associated with this request.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the Multi-Region Access Point associated with this request.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the Multi-Region Access Point associated with this request.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the Multi-Region Access Point associated with this request.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the Multi-Region Access Point associated with this request.</p>
     */
    inline CreateMultiRegionAccessPointInput& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the Multi-Region Access Point associated with this request.</p>
     */
    inline CreateMultiRegionAccessPointInput& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the Multi-Region Access Point associated with this request.</p>
     */
    inline CreateMultiRegionAccessPointInput& WithName(const char* value) { SetName(value); return *this;}


    
    inline const PublicAccessBlockConfiguration& GetPublicAccessBlock() const{ return m_publicAccessBlock; }

    
    inline bool PublicAccessBlockHasBeenSet() const { return m_publicAccessBlockHasBeenSet; }

    
    inline void SetPublicAccessBlock(const PublicAccessBlockConfiguration& value) { m_publicAccessBlockHasBeenSet = true; m_publicAccessBlock = value; }

    
    inline void SetPublicAccessBlock(PublicAccessBlockConfiguration&& value) { m_publicAccessBlockHasBeenSet = true; m_publicAccessBlock = std::move(value); }

    
    inline CreateMultiRegionAccessPointInput& WithPublicAccessBlock(const PublicAccessBlockConfiguration& value) { SetPublicAccessBlock(value); return *this;}

    
    inline CreateMultiRegionAccessPointInput& WithPublicAccessBlock(PublicAccessBlockConfiguration&& value) { SetPublicAccessBlock(std::move(value)); return *this;}


    /**
     * <p>The buckets in different Regions that are associated with the Multi-Region
     * Access Point.</p>
     */
    inline const Aws::Vector<Region>& GetRegions() const{ return m_regions; }

    /**
     * <p>The buckets in different Regions that are associated with the Multi-Region
     * Access Point.</p>
     */
    inline bool RegionsHasBeenSet() const { return m_regionsHasBeenSet; }

    /**
     * <p>The buckets in different Regions that are associated with the Multi-Region
     * Access Point.</p>
     */
    inline void SetRegions(const Aws::Vector<Region>& value) { m_regionsHasBeenSet = true; m_regions = value; }

    /**
     * <p>The buckets in different Regions that are associated with the Multi-Region
     * Access Point.</p>
     */
    inline void SetRegions(Aws::Vector<Region>&& value) { m_regionsHasBeenSet = true; m_regions = std::move(value); }

    /**
     * <p>The buckets in different Regions that are associated with the Multi-Region
     * Access Point.</p>
     */
    inline CreateMultiRegionAccessPointInput& WithRegions(const Aws::Vector<Region>& value) { SetRegions(value); return *this;}

    /**
     * <p>The buckets in different Regions that are associated with the Multi-Region
     * Access Point.</p>
     */
    inline CreateMultiRegionAccessPointInput& WithRegions(Aws::Vector<Region>&& value) { SetRegions(std::move(value)); return *this;}

    /**
     * <p>The buckets in different Regions that are associated with the Multi-Region
     * Access Point.</p>
     */
    inline CreateMultiRegionAccessPointInput& AddRegions(const Region& value) { m_regionsHasBeenSet = true; m_regions.push_back(value); return *this; }

    /**
     * <p>The buckets in different Regions that are associated with the Multi-Region
     * Access Point.</p>
     */
    inline CreateMultiRegionAccessPointInput& AddRegions(Region&& value) { m_regionsHasBeenSet = true; m_regions.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    PublicAccessBlockConfiguration m_publicAccessBlock;
    bool m_publicAccessBlockHasBeenSet = false;

    Aws::Vector<Region> m_regions;
    bool m_regionsHasBeenSet = false;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws
