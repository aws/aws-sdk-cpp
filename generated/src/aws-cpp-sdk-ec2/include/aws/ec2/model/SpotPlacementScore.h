/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
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
namespace EC2
{
namespace Model
{

  /**
   * <p>The Spot placement score for this Region or Availability Zone. The score is
   * calculated based on the assumption that the <code>capacity-optimized</code>
   * allocation strategy is used and that all of the Availability Zones in the Region
   * can be used.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/SpotPlacementScore">AWS
   * API Reference</a></p>
   */
  class SpotPlacementScore
  {
  public:
    AWS_EC2_API SpotPlacementScore();
    AWS_EC2_API SpotPlacementScore(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API SpotPlacementScore& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The Region.</p>
     */
    inline const Aws::String& GetRegion() const{ return m_region; }

    /**
     * <p>The Region.</p>
     */
    inline bool RegionHasBeenSet() const { return m_regionHasBeenSet; }

    /**
     * <p>The Region.</p>
     */
    inline void SetRegion(const Aws::String& value) { m_regionHasBeenSet = true; m_region = value; }

    /**
     * <p>The Region.</p>
     */
    inline void SetRegion(Aws::String&& value) { m_regionHasBeenSet = true; m_region = std::move(value); }

    /**
     * <p>The Region.</p>
     */
    inline void SetRegion(const char* value) { m_regionHasBeenSet = true; m_region.assign(value); }

    /**
     * <p>The Region.</p>
     */
    inline SpotPlacementScore& WithRegion(const Aws::String& value) { SetRegion(value); return *this;}

    /**
     * <p>The Region.</p>
     */
    inline SpotPlacementScore& WithRegion(Aws::String&& value) { SetRegion(std::move(value)); return *this;}

    /**
     * <p>The Region.</p>
     */
    inline SpotPlacementScore& WithRegion(const char* value) { SetRegion(value); return *this;}


    /**
     * <p>The Availability Zone.</p>
     */
    inline const Aws::String& GetAvailabilityZoneId() const{ return m_availabilityZoneId; }

    /**
     * <p>The Availability Zone.</p>
     */
    inline bool AvailabilityZoneIdHasBeenSet() const { return m_availabilityZoneIdHasBeenSet; }

    /**
     * <p>The Availability Zone.</p>
     */
    inline void SetAvailabilityZoneId(const Aws::String& value) { m_availabilityZoneIdHasBeenSet = true; m_availabilityZoneId = value; }

    /**
     * <p>The Availability Zone.</p>
     */
    inline void SetAvailabilityZoneId(Aws::String&& value) { m_availabilityZoneIdHasBeenSet = true; m_availabilityZoneId = std::move(value); }

    /**
     * <p>The Availability Zone.</p>
     */
    inline void SetAvailabilityZoneId(const char* value) { m_availabilityZoneIdHasBeenSet = true; m_availabilityZoneId.assign(value); }

    /**
     * <p>The Availability Zone.</p>
     */
    inline SpotPlacementScore& WithAvailabilityZoneId(const Aws::String& value) { SetAvailabilityZoneId(value); return *this;}

    /**
     * <p>The Availability Zone.</p>
     */
    inline SpotPlacementScore& WithAvailabilityZoneId(Aws::String&& value) { SetAvailabilityZoneId(std::move(value)); return *this;}

    /**
     * <p>The Availability Zone.</p>
     */
    inline SpotPlacementScore& WithAvailabilityZoneId(const char* value) { SetAvailabilityZoneId(value); return *this;}


    /**
     * <p>The placement score, on a scale from <code>1</code> to <code>10</code>. A
     * score of <code>10</code> indicates that your Spot request is highly likely to
     * succeed in this Region or Availability Zone. A score of <code>1</code> indicates
     * that your Spot request is not likely to succeed. </p>
     */
    inline int GetScore() const{ return m_score; }

    /**
     * <p>The placement score, on a scale from <code>1</code> to <code>10</code>. A
     * score of <code>10</code> indicates that your Spot request is highly likely to
     * succeed in this Region or Availability Zone. A score of <code>1</code> indicates
     * that your Spot request is not likely to succeed. </p>
     */
    inline bool ScoreHasBeenSet() const { return m_scoreHasBeenSet; }

    /**
     * <p>The placement score, on a scale from <code>1</code> to <code>10</code>. A
     * score of <code>10</code> indicates that your Spot request is highly likely to
     * succeed in this Region or Availability Zone. A score of <code>1</code> indicates
     * that your Spot request is not likely to succeed. </p>
     */
    inline void SetScore(int value) { m_scoreHasBeenSet = true; m_score = value; }

    /**
     * <p>The placement score, on a scale from <code>1</code> to <code>10</code>. A
     * score of <code>10</code> indicates that your Spot request is highly likely to
     * succeed in this Region or Availability Zone. A score of <code>1</code> indicates
     * that your Spot request is not likely to succeed. </p>
     */
    inline SpotPlacementScore& WithScore(int value) { SetScore(value); return *this;}

  private:

    Aws::String m_region;
    bool m_regionHasBeenSet = false;

    Aws::String m_availabilityZoneId;
    bool m_availabilityZoneIdHasBeenSet = false;

    int m_score;
    bool m_scoreHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
