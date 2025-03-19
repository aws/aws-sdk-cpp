/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/drs/Drs_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace drs
{
namespace Model
{

  /**
   * <p>Properties of the cloud environment where this Source Server originated
   * from.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/drs-2020-02-26/SourceCloudProperties">AWS
   * API Reference</a></p>
   */
  class SourceCloudProperties
  {
  public:
    AWS_DRS_API SourceCloudProperties() = default;
    AWS_DRS_API SourceCloudProperties(Aws::Utils::Json::JsonView jsonValue);
    AWS_DRS_API SourceCloudProperties& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DRS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>AWS Account ID for an EC2-originated Source Server.</p>
     */
    inline const Aws::String& GetOriginAccountID() const { return m_originAccountID; }
    inline bool OriginAccountIDHasBeenSet() const { return m_originAccountIDHasBeenSet; }
    template<typename OriginAccountIDT = Aws::String>
    void SetOriginAccountID(OriginAccountIDT&& value) { m_originAccountIDHasBeenSet = true; m_originAccountID = std::forward<OriginAccountIDT>(value); }
    template<typename OriginAccountIDT = Aws::String>
    SourceCloudProperties& WithOriginAccountID(OriginAccountIDT&& value) { SetOriginAccountID(std::forward<OriginAccountIDT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>AWS Availability Zone for an EC2-originated Source Server.</p>
     */
    inline const Aws::String& GetOriginAvailabilityZone() const { return m_originAvailabilityZone; }
    inline bool OriginAvailabilityZoneHasBeenSet() const { return m_originAvailabilityZoneHasBeenSet; }
    template<typename OriginAvailabilityZoneT = Aws::String>
    void SetOriginAvailabilityZone(OriginAvailabilityZoneT&& value) { m_originAvailabilityZoneHasBeenSet = true; m_originAvailabilityZone = std::forward<OriginAvailabilityZoneT>(value); }
    template<typename OriginAvailabilityZoneT = Aws::String>
    SourceCloudProperties& WithOriginAvailabilityZone(OriginAvailabilityZoneT&& value) { SetOriginAvailabilityZone(std::forward<OriginAvailabilityZoneT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>AWS Region for an EC2-originated Source Server.</p>
     */
    inline const Aws::String& GetOriginRegion() const { return m_originRegion; }
    inline bool OriginRegionHasBeenSet() const { return m_originRegionHasBeenSet; }
    template<typename OriginRegionT = Aws::String>
    void SetOriginRegion(OriginRegionT&& value) { m_originRegionHasBeenSet = true; m_originRegion = std::forward<OriginRegionT>(value); }
    template<typename OriginRegionT = Aws::String>
    SourceCloudProperties& WithOriginRegion(OriginRegionT&& value) { SetOriginRegion(std::forward<OriginRegionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the source Outpost</p>
     */
    inline const Aws::String& GetSourceOutpostArn() const { return m_sourceOutpostArn; }
    inline bool SourceOutpostArnHasBeenSet() const { return m_sourceOutpostArnHasBeenSet; }
    template<typename SourceOutpostArnT = Aws::String>
    void SetSourceOutpostArn(SourceOutpostArnT&& value) { m_sourceOutpostArnHasBeenSet = true; m_sourceOutpostArn = std::forward<SourceOutpostArnT>(value); }
    template<typename SourceOutpostArnT = Aws::String>
    SourceCloudProperties& WithSourceOutpostArn(SourceOutpostArnT&& value) { SetSourceOutpostArn(std::forward<SourceOutpostArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_originAccountID;
    bool m_originAccountIDHasBeenSet = false;

    Aws::String m_originAvailabilityZone;
    bool m_originAvailabilityZoneHasBeenSet = false;

    Aws::String m_originRegion;
    bool m_originRegionHasBeenSet = false;

    Aws::String m_sourceOutpostArn;
    bool m_sourceOutpostArnHasBeenSet = false;
  };

} // namespace Model
} // namespace drs
} // namespace Aws
