/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3control/S3Control_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>A container for what Amazon S3 Storage Lens configuration
   * includes.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/Include">AWS
   * API Reference</a></p>
   */
  class Include
  {
  public:
    AWS_S3CONTROL_API Include();
    AWS_S3CONTROL_API Include(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_S3CONTROL_API Include& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_S3CONTROL_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    /**
     * <p>A container for the S3 Storage Lens bucket includes.</p>
     */
    inline const Aws::Vector<Aws::String>& GetBuckets() const{ return m_buckets; }

    /**
     * <p>A container for the S3 Storage Lens bucket includes.</p>
     */
    inline bool BucketsHasBeenSet() const { return m_bucketsHasBeenSet; }

    /**
     * <p>A container for the S3 Storage Lens bucket includes.</p>
     */
    inline void SetBuckets(const Aws::Vector<Aws::String>& value) { m_bucketsHasBeenSet = true; m_buckets = value; }

    /**
     * <p>A container for the S3 Storage Lens bucket includes.</p>
     */
    inline void SetBuckets(Aws::Vector<Aws::String>&& value) { m_bucketsHasBeenSet = true; m_buckets = std::move(value); }

    /**
     * <p>A container for the S3 Storage Lens bucket includes.</p>
     */
    inline Include& WithBuckets(const Aws::Vector<Aws::String>& value) { SetBuckets(value); return *this;}

    /**
     * <p>A container for the S3 Storage Lens bucket includes.</p>
     */
    inline Include& WithBuckets(Aws::Vector<Aws::String>&& value) { SetBuckets(std::move(value)); return *this;}

    /**
     * <p>A container for the S3 Storage Lens bucket includes.</p>
     */
    inline Include& AddBuckets(const Aws::String& value) { m_bucketsHasBeenSet = true; m_buckets.push_back(value); return *this; }

    /**
     * <p>A container for the S3 Storage Lens bucket includes.</p>
     */
    inline Include& AddBuckets(Aws::String&& value) { m_bucketsHasBeenSet = true; m_buckets.push_back(std::move(value)); return *this; }

    /**
     * <p>A container for the S3 Storage Lens bucket includes.</p>
     */
    inline Include& AddBuckets(const char* value) { m_bucketsHasBeenSet = true; m_buckets.push_back(value); return *this; }


    /**
     * <p>A container for the S3 Storage Lens Region includes.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRegions() const{ return m_regions; }

    /**
     * <p>A container for the S3 Storage Lens Region includes.</p>
     */
    inline bool RegionsHasBeenSet() const { return m_regionsHasBeenSet; }

    /**
     * <p>A container for the S3 Storage Lens Region includes.</p>
     */
    inline void SetRegions(const Aws::Vector<Aws::String>& value) { m_regionsHasBeenSet = true; m_regions = value; }

    /**
     * <p>A container for the S3 Storage Lens Region includes.</p>
     */
    inline void SetRegions(Aws::Vector<Aws::String>&& value) { m_regionsHasBeenSet = true; m_regions = std::move(value); }

    /**
     * <p>A container for the S3 Storage Lens Region includes.</p>
     */
    inline Include& WithRegions(const Aws::Vector<Aws::String>& value) { SetRegions(value); return *this;}

    /**
     * <p>A container for the S3 Storage Lens Region includes.</p>
     */
    inline Include& WithRegions(Aws::Vector<Aws::String>&& value) { SetRegions(std::move(value)); return *this;}

    /**
     * <p>A container for the S3 Storage Lens Region includes.</p>
     */
    inline Include& AddRegions(const Aws::String& value) { m_regionsHasBeenSet = true; m_regions.push_back(value); return *this; }

    /**
     * <p>A container for the S3 Storage Lens Region includes.</p>
     */
    inline Include& AddRegions(Aws::String&& value) { m_regionsHasBeenSet = true; m_regions.push_back(std::move(value)); return *this; }

    /**
     * <p>A container for the S3 Storage Lens Region includes.</p>
     */
    inline Include& AddRegions(const char* value) { m_regionsHasBeenSet = true; m_regions.push_back(value); return *this; }

  private:

    Aws::Vector<Aws::String> m_buckets;
    bool m_bucketsHasBeenSet = false;

    Aws::Vector<Aws::String> m_regions;
    bool m_regionsHasBeenSet = false;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws
