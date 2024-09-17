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
    AWS_DRS_API SourceCloudProperties();
    AWS_DRS_API SourceCloudProperties(Aws::Utils::Json::JsonView jsonValue);
    AWS_DRS_API SourceCloudProperties& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DRS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>AWS Account ID for an EC2-originated Source Server.</p>
     */
    inline const Aws::String& GetOriginAccountID() const{ return m_originAccountID; }
    inline bool OriginAccountIDHasBeenSet() const { return m_originAccountIDHasBeenSet; }
    inline void SetOriginAccountID(const Aws::String& value) { m_originAccountIDHasBeenSet = true; m_originAccountID = value; }
    inline void SetOriginAccountID(Aws::String&& value) { m_originAccountIDHasBeenSet = true; m_originAccountID = std::move(value); }
    inline void SetOriginAccountID(const char* value) { m_originAccountIDHasBeenSet = true; m_originAccountID.assign(value); }
    inline SourceCloudProperties& WithOriginAccountID(const Aws::String& value) { SetOriginAccountID(value); return *this;}
    inline SourceCloudProperties& WithOriginAccountID(Aws::String&& value) { SetOriginAccountID(std::move(value)); return *this;}
    inline SourceCloudProperties& WithOriginAccountID(const char* value) { SetOriginAccountID(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>AWS Availability Zone for an EC2-originated Source Server.</p>
     */
    inline const Aws::String& GetOriginAvailabilityZone() const{ return m_originAvailabilityZone; }
    inline bool OriginAvailabilityZoneHasBeenSet() const { return m_originAvailabilityZoneHasBeenSet; }
    inline void SetOriginAvailabilityZone(const Aws::String& value) { m_originAvailabilityZoneHasBeenSet = true; m_originAvailabilityZone = value; }
    inline void SetOriginAvailabilityZone(Aws::String&& value) { m_originAvailabilityZoneHasBeenSet = true; m_originAvailabilityZone = std::move(value); }
    inline void SetOriginAvailabilityZone(const char* value) { m_originAvailabilityZoneHasBeenSet = true; m_originAvailabilityZone.assign(value); }
    inline SourceCloudProperties& WithOriginAvailabilityZone(const Aws::String& value) { SetOriginAvailabilityZone(value); return *this;}
    inline SourceCloudProperties& WithOriginAvailabilityZone(Aws::String&& value) { SetOriginAvailabilityZone(std::move(value)); return *this;}
    inline SourceCloudProperties& WithOriginAvailabilityZone(const char* value) { SetOriginAvailabilityZone(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>AWS Region for an EC2-originated Source Server.</p>
     */
    inline const Aws::String& GetOriginRegion() const{ return m_originRegion; }
    inline bool OriginRegionHasBeenSet() const { return m_originRegionHasBeenSet; }
    inline void SetOriginRegion(const Aws::String& value) { m_originRegionHasBeenSet = true; m_originRegion = value; }
    inline void SetOriginRegion(Aws::String&& value) { m_originRegionHasBeenSet = true; m_originRegion = std::move(value); }
    inline void SetOriginRegion(const char* value) { m_originRegionHasBeenSet = true; m_originRegion.assign(value); }
    inline SourceCloudProperties& WithOriginRegion(const Aws::String& value) { SetOriginRegion(value); return *this;}
    inline SourceCloudProperties& WithOriginRegion(Aws::String&& value) { SetOriginRegion(std::move(value)); return *this;}
    inline SourceCloudProperties& WithOriginRegion(const char* value) { SetOriginRegion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the source Outpost</p>
     */
    inline const Aws::String& GetSourceOutpostArn() const{ return m_sourceOutpostArn; }
    inline bool SourceOutpostArnHasBeenSet() const { return m_sourceOutpostArnHasBeenSet; }
    inline void SetSourceOutpostArn(const Aws::String& value) { m_sourceOutpostArnHasBeenSet = true; m_sourceOutpostArn = value; }
    inline void SetSourceOutpostArn(Aws::String&& value) { m_sourceOutpostArnHasBeenSet = true; m_sourceOutpostArn = std::move(value); }
    inline void SetSourceOutpostArn(const char* value) { m_sourceOutpostArnHasBeenSet = true; m_sourceOutpostArn.assign(value); }
    inline SourceCloudProperties& WithSourceOutpostArn(const Aws::String& value) { SetSourceOutpostArn(value); return *this;}
    inline SourceCloudProperties& WithSourceOutpostArn(Aws::String&& value) { SetSourceOutpostArn(std::move(value)); return *this;}
    inline SourceCloudProperties& WithSourceOutpostArn(const char* value) { SetSourceOutpostArn(value); return *this;}
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
