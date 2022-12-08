/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>Information about an Amazon RDS DB cluster snapshot.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsRdsDbClusterSnapshotDetails">AWS
   * API Reference</a></p>
   */
  class AwsRdsDbClusterSnapshotDetails
  {
  public:
    AWS_SECURITYHUB_API AwsRdsDbClusterSnapshotDetails();
    AWS_SECURITYHUB_API AwsRdsDbClusterSnapshotDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsRdsDbClusterSnapshotDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A list of Availability Zones where instances in the DB cluster can be
     * created.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAvailabilityZones() const{ return m_availabilityZones; }

    /**
     * <p>A list of Availability Zones where instances in the DB cluster can be
     * created.</p>
     */
    inline bool AvailabilityZonesHasBeenSet() const { return m_availabilityZonesHasBeenSet; }

    /**
     * <p>A list of Availability Zones where instances in the DB cluster can be
     * created.</p>
     */
    inline void SetAvailabilityZones(const Aws::Vector<Aws::String>& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones = value; }

    /**
     * <p>A list of Availability Zones where instances in the DB cluster can be
     * created.</p>
     */
    inline void SetAvailabilityZones(Aws::Vector<Aws::String>&& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones = std::move(value); }

    /**
     * <p>A list of Availability Zones where instances in the DB cluster can be
     * created.</p>
     */
    inline AwsRdsDbClusterSnapshotDetails& WithAvailabilityZones(const Aws::Vector<Aws::String>& value) { SetAvailabilityZones(value); return *this;}

    /**
     * <p>A list of Availability Zones where instances in the DB cluster can be
     * created.</p>
     */
    inline AwsRdsDbClusterSnapshotDetails& WithAvailabilityZones(Aws::Vector<Aws::String>&& value) { SetAvailabilityZones(std::move(value)); return *this;}

    /**
     * <p>A list of Availability Zones where instances in the DB cluster can be
     * created.</p>
     */
    inline AwsRdsDbClusterSnapshotDetails& AddAvailabilityZones(const Aws::String& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones.push_back(value); return *this; }

    /**
     * <p>A list of Availability Zones where instances in the DB cluster can be
     * created.</p>
     */
    inline AwsRdsDbClusterSnapshotDetails& AddAvailabilityZones(Aws::String&& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of Availability Zones where instances in the DB cluster can be
     * created.</p>
     */
    inline AwsRdsDbClusterSnapshotDetails& AddAvailabilityZones(const char* value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones.push_back(value); return *this; }


    /**
     * <p>Indicates when the snapshot was taken.</p> <p>Uses the <code>date-time</code>
     * format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline const Aws::String& GetSnapshotCreateTime() const{ return m_snapshotCreateTime; }

    /**
     * <p>Indicates when the snapshot was taken.</p> <p>Uses the <code>date-time</code>
     * format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline bool SnapshotCreateTimeHasBeenSet() const { return m_snapshotCreateTimeHasBeenSet; }

    /**
     * <p>Indicates when the snapshot was taken.</p> <p>Uses the <code>date-time</code>
     * format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline void SetSnapshotCreateTime(const Aws::String& value) { m_snapshotCreateTimeHasBeenSet = true; m_snapshotCreateTime = value; }

    /**
     * <p>Indicates when the snapshot was taken.</p> <p>Uses the <code>date-time</code>
     * format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline void SetSnapshotCreateTime(Aws::String&& value) { m_snapshotCreateTimeHasBeenSet = true; m_snapshotCreateTime = std::move(value); }

    /**
     * <p>Indicates when the snapshot was taken.</p> <p>Uses the <code>date-time</code>
     * format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline void SetSnapshotCreateTime(const char* value) { m_snapshotCreateTimeHasBeenSet = true; m_snapshotCreateTime.assign(value); }

    /**
     * <p>Indicates when the snapshot was taken.</p> <p>Uses the <code>date-time</code>
     * format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline AwsRdsDbClusterSnapshotDetails& WithSnapshotCreateTime(const Aws::String& value) { SetSnapshotCreateTime(value); return *this;}

    /**
     * <p>Indicates when the snapshot was taken.</p> <p>Uses the <code>date-time</code>
     * format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline AwsRdsDbClusterSnapshotDetails& WithSnapshotCreateTime(Aws::String&& value) { SetSnapshotCreateTime(std::move(value)); return *this;}

    /**
     * <p>Indicates when the snapshot was taken.</p> <p>Uses the <code>date-time</code>
     * format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline AwsRdsDbClusterSnapshotDetails& WithSnapshotCreateTime(const char* value) { SetSnapshotCreateTime(value); return *this;}


    /**
     * <p>The name of the database engine that you want to use for this DB
     * instance.</p>
     */
    inline const Aws::String& GetEngine() const{ return m_engine; }

    /**
     * <p>The name of the database engine that you want to use for this DB
     * instance.</p>
     */
    inline bool EngineHasBeenSet() const { return m_engineHasBeenSet; }

    /**
     * <p>The name of the database engine that you want to use for this DB
     * instance.</p>
     */
    inline void SetEngine(const Aws::String& value) { m_engineHasBeenSet = true; m_engine = value; }

    /**
     * <p>The name of the database engine that you want to use for this DB
     * instance.</p>
     */
    inline void SetEngine(Aws::String&& value) { m_engineHasBeenSet = true; m_engine = std::move(value); }

    /**
     * <p>The name of the database engine that you want to use for this DB
     * instance.</p>
     */
    inline void SetEngine(const char* value) { m_engineHasBeenSet = true; m_engine.assign(value); }

    /**
     * <p>The name of the database engine that you want to use for this DB
     * instance.</p>
     */
    inline AwsRdsDbClusterSnapshotDetails& WithEngine(const Aws::String& value) { SetEngine(value); return *this;}

    /**
     * <p>The name of the database engine that you want to use for this DB
     * instance.</p>
     */
    inline AwsRdsDbClusterSnapshotDetails& WithEngine(Aws::String&& value) { SetEngine(std::move(value)); return *this;}

    /**
     * <p>The name of the database engine that you want to use for this DB
     * instance.</p>
     */
    inline AwsRdsDbClusterSnapshotDetails& WithEngine(const char* value) { SetEngine(value); return *this;}


    /**
     * <p>Specifies the allocated storage size in gibibytes (GiB).</p>
     */
    inline int GetAllocatedStorage() const{ return m_allocatedStorage; }

    /**
     * <p>Specifies the allocated storage size in gibibytes (GiB).</p>
     */
    inline bool AllocatedStorageHasBeenSet() const { return m_allocatedStorageHasBeenSet; }

    /**
     * <p>Specifies the allocated storage size in gibibytes (GiB).</p>
     */
    inline void SetAllocatedStorage(int value) { m_allocatedStorageHasBeenSet = true; m_allocatedStorage = value; }

    /**
     * <p>Specifies the allocated storage size in gibibytes (GiB).</p>
     */
    inline AwsRdsDbClusterSnapshotDetails& WithAllocatedStorage(int value) { SetAllocatedStorage(value); return *this;}


    /**
     * <p>The status of this DB cluster snapshot.</p>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }

    /**
     * <p>The status of this DB cluster snapshot.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of this DB cluster snapshot.</p>
     */
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of this DB cluster snapshot.</p>
     */
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of this DB cluster snapshot.</p>
     */
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }

    /**
     * <p>The status of this DB cluster snapshot.</p>
     */
    inline AwsRdsDbClusterSnapshotDetails& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of this DB cluster snapshot.</p>
     */
    inline AwsRdsDbClusterSnapshotDetails& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}

    /**
     * <p>The status of this DB cluster snapshot.</p>
     */
    inline AwsRdsDbClusterSnapshotDetails& WithStatus(const char* value) { SetStatus(value); return *this;}


    /**
     * <p>The port number on which the DB instances in the DB cluster accept
     * connections.</p>
     */
    inline int GetPort() const{ return m_port; }

    /**
     * <p>The port number on which the DB instances in the DB cluster accept
     * connections.</p>
     */
    inline bool PortHasBeenSet() const { return m_portHasBeenSet; }

    /**
     * <p>The port number on which the DB instances in the DB cluster accept
     * connections.</p>
     */
    inline void SetPort(int value) { m_portHasBeenSet = true; m_port = value; }

    /**
     * <p>The port number on which the DB instances in the DB cluster accept
     * connections.</p>
     */
    inline AwsRdsDbClusterSnapshotDetails& WithPort(int value) { SetPort(value); return *this;}


    /**
     * <p>The VPC ID that is associated with the DB cluster snapshot.</p>
     */
    inline const Aws::String& GetVpcId() const{ return m_vpcId; }

    /**
     * <p>The VPC ID that is associated with the DB cluster snapshot.</p>
     */
    inline bool VpcIdHasBeenSet() const { return m_vpcIdHasBeenSet; }

    /**
     * <p>The VPC ID that is associated with the DB cluster snapshot.</p>
     */
    inline void SetVpcId(const Aws::String& value) { m_vpcIdHasBeenSet = true; m_vpcId = value; }

    /**
     * <p>The VPC ID that is associated with the DB cluster snapshot.</p>
     */
    inline void SetVpcId(Aws::String&& value) { m_vpcIdHasBeenSet = true; m_vpcId = std::move(value); }

    /**
     * <p>The VPC ID that is associated with the DB cluster snapshot.</p>
     */
    inline void SetVpcId(const char* value) { m_vpcIdHasBeenSet = true; m_vpcId.assign(value); }

    /**
     * <p>The VPC ID that is associated with the DB cluster snapshot.</p>
     */
    inline AwsRdsDbClusterSnapshotDetails& WithVpcId(const Aws::String& value) { SetVpcId(value); return *this;}

    /**
     * <p>The VPC ID that is associated with the DB cluster snapshot.</p>
     */
    inline AwsRdsDbClusterSnapshotDetails& WithVpcId(Aws::String&& value) { SetVpcId(std::move(value)); return *this;}

    /**
     * <p>The VPC ID that is associated with the DB cluster snapshot.</p>
     */
    inline AwsRdsDbClusterSnapshotDetails& WithVpcId(const char* value) { SetVpcId(value); return *this;}


    /**
     * <p>Indicates when the DB cluster was created, in Universal Coordinated Time
     * (UTC).</p> <p>Uses the <code>date-time</code> format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline const Aws::String& GetClusterCreateTime() const{ return m_clusterCreateTime; }

    /**
     * <p>Indicates when the DB cluster was created, in Universal Coordinated Time
     * (UTC).</p> <p>Uses the <code>date-time</code> format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline bool ClusterCreateTimeHasBeenSet() const { return m_clusterCreateTimeHasBeenSet; }

    /**
     * <p>Indicates when the DB cluster was created, in Universal Coordinated Time
     * (UTC).</p> <p>Uses the <code>date-time</code> format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline void SetClusterCreateTime(const Aws::String& value) { m_clusterCreateTimeHasBeenSet = true; m_clusterCreateTime = value; }

    /**
     * <p>Indicates when the DB cluster was created, in Universal Coordinated Time
     * (UTC).</p> <p>Uses the <code>date-time</code> format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline void SetClusterCreateTime(Aws::String&& value) { m_clusterCreateTimeHasBeenSet = true; m_clusterCreateTime = std::move(value); }

    /**
     * <p>Indicates when the DB cluster was created, in Universal Coordinated Time
     * (UTC).</p> <p>Uses the <code>date-time</code> format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline void SetClusterCreateTime(const char* value) { m_clusterCreateTimeHasBeenSet = true; m_clusterCreateTime.assign(value); }

    /**
     * <p>Indicates when the DB cluster was created, in Universal Coordinated Time
     * (UTC).</p> <p>Uses the <code>date-time</code> format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline AwsRdsDbClusterSnapshotDetails& WithClusterCreateTime(const Aws::String& value) { SetClusterCreateTime(value); return *this;}

    /**
     * <p>Indicates when the DB cluster was created, in Universal Coordinated Time
     * (UTC).</p> <p>Uses the <code>date-time</code> format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline AwsRdsDbClusterSnapshotDetails& WithClusterCreateTime(Aws::String&& value) { SetClusterCreateTime(std::move(value)); return *this;}

    /**
     * <p>Indicates when the DB cluster was created, in Universal Coordinated Time
     * (UTC).</p> <p>Uses the <code>date-time</code> format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline AwsRdsDbClusterSnapshotDetails& WithClusterCreateTime(const char* value) { SetClusterCreateTime(value); return *this;}


    /**
     * <p>The name of the master user for the DB cluster.</p>
     */
    inline const Aws::String& GetMasterUsername() const{ return m_masterUsername; }

    /**
     * <p>The name of the master user for the DB cluster.</p>
     */
    inline bool MasterUsernameHasBeenSet() const { return m_masterUsernameHasBeenSet; }

    /**
     * <p>The name of the master user for the DB cluster.</p>
     */
    inline void SetMasterUsername(const Aws::String& value) { m_masterUsernameHasBeenSet = true; m_masterUsername = value; }

    /**
     * <p>The name of the master user for the DB cluster.</p>
     */
    inline void SetMasterUsername(Aws::String&& value) { m_masterUsernameHasBeenSet = true; m_masterUsername = std::move(value); }

    /**
     * <p>The name of the master user for the DB cluster.</p>
     */
    inline void SetMasterUsername(const char* value) { m_masterUsernameHasBeenSet = true; m_masterUsername.assign(value); }

    /**
     * <p>The name of the master user for the DB cluster.</p>
     */
    inline AwsRdsDbClusterSnapshotDetails& WithMasterUsername(const Aws::String& value) { SetMasterUsername(value); return *this;}

    /**
     * <p>The name of the master user for the DB cluster.</p>
     */
    inline AwsRdsDbClusterSnapshotDetails& WithMasterUsername(Aws::String&& value) { SetMasterUsername(std::move(value)); return *this;}

    /**
     * <p>The name of the master user for the DB cluster.</p>
     */
    inline AwsRdsDbClusterSnapshotDetails& WithMasterUsername(const char* value) { SetMasterUsername(value); return *this;}


    /**
     * <p>The version of the database engine to use.</p>
     */
    inline const Aws::String& GetEngineVersion() const{ return m_engineVersion; }

    /**
     * <p>The version of the database engine to use.</p>
     */
    inline bool EngineVersionHasBeenSet() const { return m_engineVersionHasBeenSet; }

    /**
     * <p>The version of the database engine to use.</p>
     */
    inline void SetEngineVersion(const Aws::String& value) { m_engineVersionHasBeenSet = true; m_engineVersion = value; }

    /**
     * <p>The version of the database engine to use.</p>
     */
    inline void SetEngineVersion(Aws::String&& value) { m_engineVersionHasBeenSet = true; m_engineVersion = std::move(value); }

    /**
     * <p>The version of the database engine to use.</p>
     */
    inline void SetEngineVersion(const char* value) { m_engineVersionHasBeenSet = true; m_engineVersion.assign(value); }

    /**
     * <p>The version of the database engine to use.</p>
     */
    inline AwsRdsDbClusterSnapshotDetails& WithEngineVersion(const Aws::String& value) { SetEngineVersion(value); return *this;}

    /**
     * <p>The version of the database engine to use.</p>
     */
    inline AwsRdsDbClusterSnapshotDetails& WithEngineVersion(Aws::String&& value) { SetEngineVersion(std::move(value)); return *this;}

    /**
     * <p>The version of the database engine to use.</p>
     */
    inline AwsRdsDbClusterSnapshotDetails& WithEngineVersion(const char* value) { SetEngineVersion(value); return *this;}


    /**
     * <p>The license model information for this DB cluster snapshot.</p>
     */
    inline const Aws::String& GetLicenseModel() const{ return m_licenseModel; }

    /**
     * <p>The license model information for this DB cluster snapshot.</p>
     */
    inline bool LicenseModelHasBeenSet() const { return m_licenseModelHasBeenSet; }

    /**
     * <p>The license model information for this DB cluster snapshot.</p>
     */
    inline void SetLicenseModel(const Aws::String& value) { m_licenseModelHasBeenSet = true; m_licenseModel = value; }

    /**
     * <p>The license model information for this DB cluster snapshot.</p>
     */
    inline void SetLicenseModel(Aws::String&& value) { m_licenseModelHasBeenSet = true; m_licenseModel = std::move(value); }

    /**
     * <p>The license model information for this DB cluster snapshot.</p>
     */
    inline void SetLicenseModel(const char* value) { m_licenseModelHasBeenSet = true; m_licenseModel.assign(value); }

    /**
     * <p>The license model information for this DB cluster snapshot.</p>
     */
    inline AwsRdsDbClusterSnapshotDetails& WithLicenseModel(const Aws::String& value) { SetLicenseModel(value); return *this;}

    /**
     * <p>The license model information for this DB cluster snapshot.</p>
     */
    inline AwsRdsDbClusterSnapshotDetails& WithLicenseModel(Aws::String&& value) { SetLicenseModel(std::move(value)); return *this;}

    /**
     * <p>The license model information for this DB cluster snapshot.</p>
     */
    inline AwsRdsDbClusterSnapshotDetails& WithLicenseModel(const char* value) { SetLicenseModel(value); return *this;}


    /**
     * <p>The type of DB cluster snapshot.</p>
     */
    inline const Aws::String& GetSnapshotType() const{ return m_snapshotType; }

    /**
     * <p>The type of DB cluster snapshot.</p>
     */
    inline bool SnapshotTypeHasBeenSet() const { return m_snapshotTypeHasBeenSet; }

    /**
     * <p>The type of DB cluster snapshot.</p>
     */
    inline void SetSnapshotType(const Aws::String& value) { m_snapshotTypeHasBeenSet = true; m_snapshotType = value; }

    /**
     * <p>The type of DB cluster snapshot.</p>
     */
    inline void SetSnapshotType(Aws::String&& value) { m_snapshotTypeHasBeenSet = true; m_snapshotType = std::move(value); }

    /**
     * <p>The type of DB cluster snapshot.</p>
     */
    inline void SetSnapshotType(const char* value) { m_snapshotTypeHasBeenSet = true; m_snapshotType.assign(value); }

    /**
     * <p>The type of DB cluster snapshot.</p>
     */
    inline AwsRdsDbClusterSnapshotDetails& WithSnapshotType(const Aws::String& value) { SetSnapshotType(value); return *this;}

    /**
     * <p>The type of DB cluster snapshot.</p>
     */
    inline AwsRdsDbClusterSnapshotDetails& WithSnapshotType(Aws::String&& value) { SetSnapshotType(std::move(value)); return *this;}

    /**
     * <p>The type of DB cluster snapshot.</p>
     */
    inline AwsRdsDbClusterSnapshotDetails& WithSnapshotType(const char* value) { SetSnapshotType(value); return *this;}


    /**
     * <p>Specifies the percentage of the estimated data that has been transferred.</p>
     */
    inline int GetPercentProgress() const{ return m_percentProgress; }

    /**
     * <p>Specifies the percentage of the estimated data that has been transferred.</p>
     */
    inline bool PercentProgressHasBeenSet() const { return m_percentProgressHasBeenSet; }

    /**
     * <p>Specifies the percentage of the estimated data that has been transferred.</p>
     */
    inline void SetPercentProgress(int value) { m_percentProgressHasBeenSet = true; m_percentProgress = value; }

    /**
     * <p>Specifies the percentage of the estimated data that has been transferred.</p>
     */
    inline AwsRdsDbClusterSnapshotDetails& WithPercentProgress(int value) { SetPercentProgress(value); return *this;}


    /**
     * <p>Whether the DB cluster is encrypted.</p>
     */
    inline bool GetStorageEncrypted() const{ return m_storageEncrypted; }

    /**
     * <p>Whether the DB cluster is encrypted.</p>
     */
    inline bool StorageEncryptedHasBeenSet() const { return m_storageEncryptedHasBeenSet; }

    /**
     * <p>Whether the DB cluster is encrypted.</p>
     */
    inline void SetStorageEncrypted(bool value) { m_storageEncryptedHasBeenSet = true; m_storageEncrypted = value; }

    /**
     * <p>Whether the DB cluster is encrypted.</p>
     */
    inline AwsRdsDbClusterSnapshotDetails& WithStorageEncrypted(bool value) { SetStorageEncrypted(value); return *this;}


    /**
     * <p>The ARN of the KMS master key that is used to encrypt the database instances
     * in the DB cluster.</p>
     */
    inline const Aws::String& GetKmsKeyId() const{ return m_kmsKeyId; }

    /**
     * <p>The ARN of the KMS master key that is used to encrypt the database instances
     * in the DB cluster.</p>
     */
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }

    /**
     * <p>The ARN of the KMS master key that is used to encrypt the database instances
     * in the DB cluster.</p>
     */
    inline void SetKmsKeyId(const Aws::String& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = value; }

    /**
     * <p>The ARN of the KMS master key that is used to encrypt the database instances
     * in the DB cluster.</p>
     */
    inline void SetKmsKeyId(Aws::String&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::move(value); }

    /**
     * <p>The ARN of the KMS master key that is used to encrypt the database instances
     * in the DB cluster.</p>
     */
    inline void SetKmsKeyId(const char* value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId.assign(value); }

    /**
     * <p>The ARN of the KMS master key that is used to encrypt the database instances
     * in the DB cluster.</p>
     */
    inline AwsRdsDbClusterSnapshotDetails& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}

    /**
     * <p>The ARN of the KMS master key that is used to encrypt the database instances
     * in the DB cluster.</p>
     */
    inline AwsRdsDbClusterSnapshotDetails& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(std::move(value)); return *this;}

    /**
     * <p>The ARN of the KMS master key that is used to encrypt the database instances
     * in the DB cluster.</p>
     */
    inline AwsRdsDbClusterSnapshotDetails& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}


    /**
     * <p>The DB cluster identifier.</p>
     */
    inline const Aws::String& GetDbClusterIdentifier() const{ return m_dbClusterIdentifier; }

    /**
     * <p>The DB cluster identifier.</p>
     */
    inline bool DbClusterIdentifierHasBeenSet() const { return m_dbClusterIdentifierHasBeenSet; }

    /**
     * <p>The DB cluster identifier.</p>
     */
    inline void SetDbClusterIdentifier(const Aws::String& value) { m_dbClusterIdentifierHasBeenSet = true; m_dbClusterIdentifier = value; }

    /**
     * <p>The DB cluster identifier.</p>
     */
    inline void SetDbClusterIdentifier(Aws::String&& value) { m_dbClusterIdentifierHasBeenSet = true; m_dbClusterIdentifier = std::move(value); }

    /**
     * <p>The DB cluster identifier.</p>
     */
    inline void SetDbClusterIdentifier(const char* value) { m_dbClusterIdentifierHasBeenSet = true; m_dbClusterIdentifier.assign(value); }

    /**
     * <p>The DB cluster identifier.</p>
     */
    inline AwsRdsDbClusterSnapshotDetails& WithDbClusterIdentifier(const Aws::String& value) { SetDbClusterIdentifier(value); return *this;}

    /**
     * <p>The DB cluster identifier.</p>
     */
    inline AwsRdsDbClusterSnapshotDetails& WithDbClusterIdentifier(Aws::String&& value) { SetDbClusterIdentifier(std::move(value)); return *this;}

    /**
     * <p>The DB cluster identifier.</p>
     */
    inline AwsRdsDbClusterSnapshotDetails& WithDbClusterIdentifier(const char* value) { SetDbClusterIdentifier(value); return *this;}


    /**
     * <p>The identifier of the DB cluster snapshot.</p>
     */
    inline const Aws::String& GetDbClusterSnapshotIdentifier() const{ return m_dbClusterSnapshotIdentifier; }

    /**
     * <p>The identifier of the DB cluster snapshot.</p>
     */
    inline bool DbClusterSnapshotIdentifierHasBeenSet() const { return m_dbClusterSnapshotIdentifierHasBeenSet; }

    /**
     * <p>The identifier of the DB cluster snapshot.</p>
     */
    inline void SetDbClusterSnapshotIdentifier(const Aws::String& value) { m_dbClusterSnapshotIdentifierHasBeenSet = true; m_dbClusterSnapshotIdentifier = value; }

    /**
     * <p>The identifier of the DB cluster snapshot.</p>
     */
    inline void SetDbClusterSnapshotIdentifier(Aws::String&& value) { m_dbClusterSnapshotIdentifierHasBeenSet = true; m_dbClusterSnapshotIdentifier = std::move(value); }

    /**
     * <p>The identifier of the DB cluster snapshot.</p>
     */
    inline void SetDbClusterSnapshotIdentifier(const char* value) { m_dbClusterSnapshotIdentifierHasBeenSet = true; m_dbClusterSnapshotIdentifier.assign(value); }

    /**
     * <p>The identifier of the DB cluster snapshot.</p>
     */
    inline AwsRdsDbClusterSnapshotDetails& WithDbClusterSnapshotIdentifier(const Aws::String& value) { SetDbClusterSnapshotIdentifier(value); return *this;}

    /**
     * <p>The identifier of the DB cluster snapshot.</p>
     */
    inline AwsRdsDbClusterSnapshotDetails& WithDbClusterSnapshotIdentifier(Aws::String&& value) { SetDbClusterSnapshotIdentifier(std::move(value)); return *this;}

    /**
     * <p>The identifier of the DB cluster snapshot.</p>
     */
    inline AwsRdsDbClusterSnapshotDetails& WithDbClusterSnapshotIdentifier(const char* value) { SetDbClusterSnapshotIdentifier(value); return *this;}


    /**
     * <p>Whether mapping of IAM accounts to database accounts is enabled.</p>
     */
    inline bool GetIamDatabaseAuthenticationEnabled() const{ return m_iamDatabaseAuthenticationEnabled; }

    /**
     * <p>Whether mapping of IAM accounts to database accounts is enabled.</p>
     */
    inline bool IamDatabaseAuthenticationEnabledHasBeenSet() const { return m_iamDatabaseAuthenticationEnabledHasBeenSet; }

    /**
     * <p>Whether mapping of IAM accounts to database accounts is enabled.</p>
     */
    inline void SetIamDatabaseAuthenticationEnabled(bool value) { m_iamDatabaseAuthenticationEnabledHasBeenSet = true; m_iamDatabaseAuthenticationEnabled = value; }

    /**
     * <p>Whether mapping of IAM accounts to database accounts is enabled.</p>
     */
    inline AwsRdsDbClusterSnapshotDetails& WithIamDatabaseAuthenticationEnabled(bool value) { SetIamDatabaseAuthenticationEnabled(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_availabilityZones;
    bool m_availabilityZonesHasBeenSet = false;

    Aws::String m_snapshotCreateTime;
    bool m_snapshotCreateTimeHasBeenSet = false;

    Aws::String m_engine;
    bool m_engineHasBeenSet = false;

    int m_allocatedStorage;
    bool m_allocatedStorageHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;

    int m_port;
    bool m_portHasBeenSet = false;

    Aws::String m_vpcId;
    bool m_vpcIdHasBeenSet = false;

    Aws::String m_clusterCreateTime;
    bool m_clusterCreateTimeHasBeenSet = false;

    Aws::String m_masterUsername;
    bool m_masterUsernameHasBeenSet = false;

    Aws::String m_engineVersion;
    bool m_engineVersionHasBeenSet = false;

    Aws::String m_licenseModel;
    bool m_licenseModelHasBeenSet = false;

    Aws::String m_snapshotType;
    bool m_snapshotTypeHasBeenSet = false;

    int m_percentProgress;
    bool m_percentProgressHasBeenSet = false;

    bool m_storageEncrypted;
    bool m_storageEncryptedHasBeenSet = false;

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet = false;

    Aws::String m_dbClusterIdentifier;
    bool m_dbClusterIdentifierHasBeenSet = false;

    Aws::String m_dbClusterSnapshotIdentifier;
    bool m_dbClusterSnapshotIdentifierHasBeenSet = false;

    bool m_iamDatabaseAuthenticationEnabled;
    bool m_iamDatabaseAuthenticationEnabledHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
