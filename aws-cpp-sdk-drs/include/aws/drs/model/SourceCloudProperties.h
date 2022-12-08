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


    /**
     * <p>AWS Account ID for an EC2-originated Source Server.</p>
     */
    inline const Aws::String& GetOriginAccountID() const{ return m_originAccountID; }

    /**
     * <p>AWS Account ID for an EC2-originated Source Server.</p>
     */
    inline bool OriginAccountIDHasBeenSet() const { return m_originAccountIDHasBeenSet; }

    /**
     * <p>AWS Account ID for an EC2-originated Source Server.</p>
     */
    inline void SetOriginAccountID(const Aws::String& value) { m_originAccountIDHasBeenSet = true; m_originAccountID = value; }

    /**
     * <p>AWS Account ID for an EC2-originated Source Server.</p>
     */
    inline void SetOriginAccountID(Aws::String&& value) { m_originAccountIDHasBeenSet = true; m_originAccountID = std::move(value); }

    /**
     * <p>AWS Account ID for an EC2-originated Source Server.</p>
     */
    inline void SetOriginAccountID(const char* value) { m_originAccountIDHasBeenSet = true; m_originAccountID.assign(value); }

    /**
     * <p>AWS Account ID for an EC2-originated Source Server.</p>
     */
    inline SourceCloudProperties& WithOriginAccountID(const Aws::String& value) { SetOriginAccountID(value); return *this;}

    /**
     * <p>AWS Account ID for an EC2-originated Source Server.</p>
     */
    inline SourceCloudProperties& WithOriginAccountID(Aws::String&& value) { SetOriginAccountID(std::move(value)); return *this;}

    /**
     * <p>AWS Account ID for an EC2-originated Source Server.</p>
     */
    inline SourceCloudProperties& WithOriginAccountID(const char* value) { SetOriginAccountID(value); return *this;}


    /**
     * <p>AWS Availability Zone for an EC2-originated Source Server.</p>
     */
    inline const Aws::String& GetOriginAvailabilityZone() const{ return m_originAvailabilityZone; }

    /**
     * <p>AWS Availability Zone for an EC2-originated Source Server.</p>
     */
    inline bool OriginAvailabilityZoneHasBeenSet() const { return m_originAvailabilityZoneHasBeenSet; }

    /**
     * <p>AWS Availability Zone for an EC2-originated Source Server.</p>
     */
    inline void SetOriginAvailabilityZone(const Aws::String& value) { m_originAvailabilityZoneHasBeenSet = true; m_originAvailabilityZone = value; }

    /**
     * <p>AWS Availability Zone for an EC2-originated Source Server.</p>
     */
    inline void SetOriginAvailabilityZone(Aws::String&& value) { m_originAvailabilityZoneHasBeenSet = true; m_originAvailabilityZone = std::move(value); }

    /**
     * <p>AWS Availability Zone for an EC2-originated Source Server.</p>
     */
    inline void SetOriginAvailabilityZone(const char* value) { m_originAvailabilityZoneHasBeenSet = true; m_originAvailabilityZone.assign(value); }

    /**
     * <p>AWS Availability Zone for an EC2-originated Source Server.</p>
     */
    inline SourceCloudProperties& WithOriginAvailabilityZone(const Aws::String& value) { SetOriginAvailabilityZone(value); return *this;}

    /**
     * <p>AWS Availability Zone for an EC2-originated Source Server.</p>
     */
    inline SourceCloudProperties& WithOriginAvailabilityZone(Aws::String&& value) { SetOriginAvailabilityZone(std::move(value)); return *this;}

    /**
     * <p>AWS Availability Zone for an EC2-originated Source Server.</p>
     */
    inline SourceCloudProperties& WithOriginAvailabilityZone(const char* value) { SetOriginAvailabilityZone(value); return *this;}


    /**
     * <p>AWS Region for an EC2-originated Source Server.</p>
     */
    inline const Aws::String& GetOriginRegion() const{ return m_originRegion; }

    /**
     * <p>AWS Region for an EC2-originated Source Server.</p>
     */
    inline bool OriginRegionHasBeenSet() const { return m_originRegionHasBeenSet; }

    /**
     * <p>AWS Region for an EC2-originated Source Server.</p>
     */
    inline void SetOriginRegion(const Aws::String& value) { m_originRegionHasBeenSet = true; m_originRegion = value; }

    /**
     * <p>AWS Region for an EC2-originated Source Server.</p>
     */
    inline void SetOriginRegion(Aws::String&& value) { m_originRegionHasBeenSet = true; m_originRegion = std::move(value); }

    /**
     * <p>AWS Region for an EC2-originated Source Server.</p>
     */
    inline void SetOriginRegion(const char* value) { m_originRegionHasBeenSet = true; m_originRegion.assign(value); }

    /**
     * <p>AWS Region for an EC2-originated Source Server.</p>
     */
    inline SourceCloudProperties& WithOriginRegion(const Aws::String& value) { SetOriginRegion(value); return *this;}

    /**
     * <p>AWS Region for an EC2-originated Source Server.</p>
     */
    inline SourceCloudProperties& WithOriginRegion(Aws::String&& value) { SetOriginRegion(std::move(value)); return *this;}

    /**
     * <p>AWS Region for an EC2-originated Source Server.</p>
     */
    inline SourceCloudProperties& WithOriginRegion(const char* value) { SetOriginRegion(value); return *this;}

  private:

    Aws::String m_originAccountID;
    bool m_originAccountIDHasBeenSet = false;

    Aws::String m_originAvailabilityZone;
    bool m_originAvailabilityZoneHasBeenSet = false;

    Aws::String m_originRegion;
    bool m_originRegionHasBeenSet = false;
  };

} // namespace Model
} // namespace drs
} // namespace Aws
