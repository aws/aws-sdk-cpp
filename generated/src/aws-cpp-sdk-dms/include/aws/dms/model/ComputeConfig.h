/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dms/DatabaseMigrationService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace DatabaseMigrationService
{
namespace Model
{

  /**
   * <p>Configuration parameters for provisioning an DMS Serverless
   * replication.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/ComputeConfig">AWS
   * API Reference</a></p>
   */
  class ComputeConfig
  {
  public:
    AWS_DATABASEMIGRATIONSERVICE_API ComputeConfig();
    AWS_DATABASEMIGRATIONSERVICE_API ComputeConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATABASEMIGRATIONSERVICE_API ComputeConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATABASEMIGRATIONSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Availability Zone where the DMS Serverless replication using this
     * configuration will run. The default value is a random, system-chosen
     * Availability Zone in the configuration's Amazon Web Services Region, for
     * example, <code>"us-west-2"</code>. You can't set this parameter if the
     * <code>MultiAZ</code> parameter is set to <code>true</code>.</p>
     */
    inline const Aws::String& GetAvailabilityZone() const{ return m_availabilityZone; }

    /**
     * <p>The Availability Zone where the DMS Serverless replication using this
     * configuration will run. The default value is a random, system-chosen
     * Availability Zone in the configuration's Amazon Web Services Region, for
     * example, <code>"us-west-2"</code>. You can't set this parameter if the
     * <code>MultiAZ</code> parameter is set to <code>true</code>.</p>
     */
    inline bool AvailabilityZoneHasBeenSet() const { return m_availabilityZoneHasBeenSet; }

    /**
     * <p>The Availability Zone where the DMS Serverless replication using this
     * configuration will run. The default value is a random, system-chosen
     * Availability Zone in the configuration's Amazon Web Services Region, for
     * example, <code>"us-west-2"</code>. You can't set this parameter if the
     * <code>MultiAZ</code> parameter is set to <code>true</code>.</p>
     */
    inline void SetAvailabilityZone(const Aws::String& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = value; }

    /**
     * <p>The Availability Zone where the DMS Serverless replication using this
     * configuration will run. The default value is a random, system-chosen
     * Availability Zone in the configuration's Amazon Web Services Region, for
     * example, <code>"us-west-2"</code>. You can't set this parameter if the
     * <code>MultiAZ</code> parameter is set to <code>true</code>.</p>
     */
    inline void SetAvailabilityZone(Aws::String&& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = std::move(value); }

    /**
     * <p>The Availability Zone where the DMS Serverless replication using this
     * configuration will run. The default value is a random, system-chosen
     * Availability Zone in the configuration's Amazon Web Services Region, for
     * example, <code>"us-west-2"</code>. You can't set this parameter if the
     * <code>MultiAZ</code> parameter is set to <code>true</code>.</p>
     */
    inline void SetAvailabilityZone(const char* value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone.assign(value); }

    /**
     * <p>The Availability Zone where the DMS Serverless replication using this
     * configuration will run. The default value is a random, system-chosen
     * Availability Zone in the configuration's Amazon Web Services Region, for
     * example, <code>"us-west-2"</code>. You can't set this parameter if the
     * <code>MultiAZ</code> parameter is set to <code>true</code>.</p>
     */
    inline ComputeConfig& WithAvailabilityZone(const Aws::String& value) { SetAvailabilityZone(value); return *this;}

    /**
     * <p>The Availability Zone where the DMS Serverless replication using this
     * configuration will run. The default value is a random, system-chosen
     * Availability Zone in the configuration's Amazon Web Services Region, for
     * example, <code>"us-west-2"</code>. You can't set this parameter if the
     * <code>MultiAZ</code> parameter is set to <code>true</code>.</p>
     */
    inline ComputeConfig& WithAvailabilityZone(Aws::String&& value) { SetAvailabilityZone(std::move(value)); return *this;}

    /**
     * <p>The Availability Zone where the DMS Serverless replication using this
     * configuration will run. The default value is a random, system-chosen
     * Availability Zone in the configuration's Amazon Web Services Region, for
     * example, <code>"us-west-2"</code>. You can't set this parameter if the
     * <code>MultiAZ</code> parameter is set to <code>true</code>.</p>
     */
    inline ComputeConfig& WithAvailabilityZone(const char* value) { SetAvailabilityZone(value); return *this;}


    /**
     * <p>A list of custom DNS name servers supported for the DMS Serverless
     * replication to access your source or target database. This list overrides the
     * default name servers supported by the DMS Serverless replication. You can
     * specify a comma-separated list of internet addresses for up to four DNS name
     * servers. For example: <code>"1.1.1.1,2.2.2.2,3.3.3.3,4.4.4.4"</code> </p>
     */
    inline const Aws::String& GetDnsNameServers() const{ return m_dnsNameServers; }

    /**
     * <p>A list of custom DNS name servers supported for the DMS Serverless
     * replication to access your source or target database. This list overrides the
     * default name servers supported by the DMS Serverless replication. You can
     * specify a comma-separated list of internet addresses for up to four DNS name
     * servers. For example: <code>"1.1.1.1,2.2.2.2,3.3.3.3,4.4.4.4"</code> </p>
     */
    inline bool DnsNameServersHasBeenSet() const { return m_dnsNameServersHasBeenSet; }

    /**
     * <p>A list of custom DNS name servers supported for the DMS Serverless
     * replication to access your source or target database. This list overrides the
     * default name servers supported by the DMS Serverless replication. You can
     * specify a comma-separated list of internet addresses for up to four DNS name
     * servers. For example: <code>"1.1.1.1,2.2.2.2,3.3.3.3,4.4.4.4"</code> </p>
     */
    inline void SetDnsNameServers(const Aws::String& value) { m_dnsNameServersHasBeenSet = true; m_dnsNameServers = value; }

    /**
     * <p>A list of custom DNS name servers supported for the DMS Serverless
     * replication to access your source or target database. This list overrides the
     * default name servers supported by the DMS Serverless replication. You can
     * specify a comma-separated list of internet addresses for up to four DNS name
     * servers. For example: <code>"1.1.1.1,2.2.2.2,3.3.3.3,4.4.4.4"</code> </p>
     */
    inline void SetDnsNameServers(Aws::String&& value) { m_dnsNameServersHasBeenSet = true; m_dnsNameServers = std::move(value); }

    /**
     * <p>A list of custom DNS name servers supported for the DMS Serverless
     * replication to access your source or target database. This list overrides the
     * default name servers supported by the DMS Serverless replication. You can
     * specify a comma-separated list of internet addresses for up to four DNS name
     * servers. For example: <code>"1.1.1.1,2.2.2.2,3.3.3.3,4.4.4.4"</code> </p>
     */
    inline void SetDnsNameServers(const char* value) { m_dnsNameServersHasBeenSet = true; m_dnsNameServers.assign(value); }

    /**
     * <p>A list of custom DNS name servers supported for the DMS Serverless
     * replication to access your source or target database. This list overrides the
     * default name servers supported by the DMS Serverless replication. You can
     * specify a comma-separated list of internet addresses for up to four DNS name
     * servers. For example: <code>"1.1.1.1,2.2.2.2,3.3.3.3,4.4.4.4"</code> </p>
     */
    inline ComputeConfig& WithDnsNameServers(const Aws::String& value) { SetDnsNameServers(value); return *this;}

    /**
     * <p>A list of custom DNS name servers supported for the DMS Serverless
     * replication to access your source or target database. This list overrides the
     * default name servers supported by the DMS Serverless replication. You can
     * specify a comma-separated list of internet addresses for up to four DNS name
     * servers. For example: <code>"1.1.1.1,2.2.2.2,3.3.3.3,4.4.4.4"</code> </p>
     */
    inline ComputeConfig& WithDnsNameServers(Aws::String&& value) { SetDnsNameServers(std::move(value)); return *this;}

    /**
     * <p>A list of custom DNS name servers supported for the DMS Serverless
     * replication to access your source or target database. This list overrides the
     * default name servers supported by the DMS Serverless replication. You can
     * specify a comma-separated list of internet addresses for up to four DNS name
     * servers. For example: <code>"1.1.1.1,2.2.2.2,3.3.3.3,4.4.4.4"</code> </p>
     */
    inline ComputeConfig& WithDnsNameServers(const char* value) { SetDnsNameServers(value); return *this;}


    /**
     * <p>An Key Management Service (KMS) key Amazon Resource Name (ARN) that is used
     * to encrypt the data during DMS Serverless replication.</p> <p>If you don't
     * specify a value for the <code>KmsKeyId</code> parameter, DMS uses your default
     * encryption key.</p> <p>KMS creates the default encryption key for your Amazon
     * Web Services account. Your Amazon Web Services account has a different default
     * encryption key for each Amazon Web Services Region.</p>
     */
    inline const Aws::String& GetKmsKeyId() const{ return m_kmsKeyId; }

    /**
     * <p>An Key Management Service (KMS) key Amazon Resource Name (ARN) that is used
     * to encrypt the data during DMS Serverless replication.</p> <p>If you don't
     * specify a value for the <code>KmsKeyId</code> parameter, DMS uses your default
     * encryption key.</p> <p>KMS creates the default encryption key for your Amazon
     * Web Services account. Your Amazon Web Services account has a different default
     * encryption key for each Amazon Web Services Region.</p>
     */
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }

    /**
     * <p>An Key Management Service (KMS) key Amazon Resource Name (ARN) that is used
     * to encrypt the data during DMS Serverless replication.</p> <p>If you don't
     * specify a value for the <code>KmsKeyId</code> parameter, DMS uses your default
     * encryption key.</p> <p>KMS creates the default encryption key for your Amazon
     * Web Services account. Your Amazon Web Services account has a different default
     * encryption key for each Amazon Web Services Region.</p>
     */
    inline void SetKmsKeyId(const Aws::String& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = value; }

    /**
     * <p>An Key Management Service (KMS) key Amazon Resource Name (ARN) that is used
     * to encrypt the data during DMS Serverless replication.</p> <p>If you don't
     * specify a value for the <code>KmsKeyId</code> parameter, DMS uses your default
     * encryption key.</p> <p>KMS creates the default encryption key for your Amazon
     * Web Services account. Your Amazon Web Services account has a different default
     * encryption key for each Amazon Web Services Region.</p>
     */
    inline void SetKmsKeyId(Aws::String&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::move(value); }

    /**
     * <p>An Key Management Service (KMS) key Amazon Resource Name (ARN) that is used
     * to encrypt the data during DMS Serverless replication.</p> <p>If you don't
     * specify a value for the <code>KmsKeyId</code> parameter, DMS uses your default
     * encryption key.</p> <p>KMS creates the default encryption key for your Amazon
     * Web Services account. Your Amazon Web Services account has a different default
     * encryption key for each Amazon Web Services Region.</p>
     */
    inline void SetKmsKeyId(const char* value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId.assign(value); }

    /**
     * <p>An Key Management Service (KMS) key Amazon Resource Name (ARN) that is used
     * to encrypt the data during DMS Serverless replication.</p> <p>If you don't
     * specify a value for the <code>KmsKeyId</code> parameter, DMS uses your default
     * encryption key.</p> <p>KMS creates the default encryption key for your Amazon
     * Web Services account. Your Amazon Web Services account has a different default
     * encryption key for each Amazon Web Services Region.</p>
     */
    inline ComputeConfig& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}

    /**
     * <p>An Key Management Service (KMS) key Amazon Resource Name (ARN) that is used
     * to encrypt the data during DMS Serverless replication.</p> <p>If you don't
     * specify a value for the <code>KmsKeyId</code> parameter, DMS uses your default
     * encryption key.</p> <p>KMS creates the default encryption key for your Amazon
     * Web Services account. Your Amazon Web Services account has a different default
     * encryption key for each Amazon Web Services Region.</p>
     */
    inline ComputeConfig& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(std::move(value)); return *this;}

    /**
     * <p>An Key Management Service (KMS) key Amazon Resource Name (ARN) that is used
     * to encrypt the data during DMS Serverless replication.</p> <p>If you don't
     * specify a value for the <code>KmsKeyId</code> parameter, DMS uses your default
     * encryption key.</p> <p>KMS creates the default encryption key for your Amazon
     * Web Services account. Your Amazon Web Services account has a different default
     * encryption key for each Amazon Web Services Region.</p>
     */
    inline ComputeConfig& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}


    /**
     * <p>Specifies the maximum value of the DMS capacity units (DCUs) for which a
     * given DMS Serverless replication can be provisioned. A single DCU is 2GB of RAM,
     * with 1 DCU as the minimum value allowed. The list of valid DCU values includes
     * 1, 2, 4, 8, 16, 32, 64, 128, 192, 256, and 384. So, the maximum value that you
     * can specify for DMS Serverless is 384. The <code>MaxCapacityUnits</code>
     * parameter is the only DCU parameter you are required to specify.</p>
     */
    inline int GetMaxCapacityUnits() const{ return m_maxCapacityUnits; }

    /**
     * <p>Specifies the maximum value of the DMS capacity units (DCUs) for which a
     * given DMS Serverless replication can be provisioned. A single DCU is 2GB of RAM,
     * with 1 DCU as the minimum value allowed. The list of valid DCU values includes
     * 1, 2, 4, 8, 16, 32, 64, 128, 192, 256, and 384. So, the maximum value that you
     * can specify for DMS Serverless is 384. The <code>MaxCapacityUnits</code>
     * parameter is the only DCU parameter you are required to specify.</p>
     */
    inline bool MaxCapacityUnitsHasBeenSet() const { return m_maxCapacityUnitsHasBeenSet; }

    /**
     * <p>Specifies the maximum value of the DMS capacity units (DCUs) for which a
     * given DMS Serverless replication can be provisioned. A single DCU is 2GB of RAM,
     * with 1 DCU as the minimum value allowed. The list of valid DCU values includes
     * 1, 2, 4, 8, 16, 32, 64, 128, 192, 256, and 384. So, the maximum value that you
     * can specify for DMS Serverless is 384. The <code>MaxCapacityUnits</code>
     * parameter is the only DCU parameter you are required to specify.</p>
     */
    inline void SetMaxCapacityUnits(int value) { m_maxCapacityUnitsHasBeenSet = true; m_maxCapacityUnits = value; }

    /**
     * <p>Specifies the maximum value of the DMS capacity units (DCUs) for which a
     * given DMS Serverless replication can be provisioned. A single DCU is 2GB of RAM,
     * with 1 DCU as the minimum value allowed. The list of valid DCU values includes
     * 1, 2, 4, 8, 16, 32, 64, 128, 192, 256, and 384. So, the maximum value that you
     * can specify for DMS Serverless is 384. The <code>MaxCapacityUnits</code>
     * parameter is the only DCU parameter you are required to specify.</p>
     */
    inline ComputeConfig& WithMaxCapacityUnits(int value) { SetMaxCapacityUnits(value); return *this;}


    /**
     * <p>Specifies the minimum value of the DMS capacity units (DCUs) for which a
     * given DMS Serverless replication can be provisioned. A single DCU is 2GB of RAM,
     * with 1 DCU as the minimum value allowed. The list of valid DCU values includes
     * 1, 2, 4, 8, 16, 32, 64, 128, 192, 256, and 384. So, the minimum DCU value that
     * you can specify for DMS Serverless is 1. You don't have to specify a value for
     * the <code>MinCapacityUnits</code> parameter. If you don't set this value, DMS
     * scans the current activity of available source tables to identify an optimum
     * setting for this parameter. If there is no current source activity or DMS can't
     * otherwise identify a more appropriate value, it sets this parameter to the
     * minimum DCU value allowed, 1.</p>
     */
    inline int GetMinCapacityUnits() const{ return m_minCapacityUnits; }

    /**
     * <p>Specifies the minimum value of the DMS capacity units (DCUs) for which a
     * given DMS Serverless replication can be provisioned. A single DCU is 2GB of RAM,
     * with 1 DCU as the minimum value allowed. The list of valid DCU values includes
     * 1, 2, 4, 8, 16, 32, 64, 128, 192, 256, and 384. So, the minimum DCU value that
     * you can specify for DMS Serverless is 1. You don't have to specify a value for
     * the <code>MinCapacityUnits</code> parameter. If you don't set this value, DMS
     * scans the current activity of available source tables to identify an optimum
     * setting for this parameter. If there is no current source activity or DMS can't
     * otherwise identify a more appropriate value, it sets this parameter to the
     * minimum DCU value allowed, 1.</p>
     */
    inline bool MinCapacityUnitsHasBeenSet() const { return m_minCapacityUnitsHasBeenSet; }

    /**
     * <p>Specifies the minimum value of the DMS capacity units (DCUs) for which a
     * given DMS Serverless replication can be provisioned. A single DCU is 2GB of RAM,
     * with 1 DCU as the minimum value allowed. The list of valid DCU values includes
     * 1, 2, 4, 8, 16, 32, 64, 128, 192, 256, and 384. So, the minimum DCU value that
     * you can specify for DMS Serverless is 1. You don't have to specify a value for
     * the <code>MinCapacityUnits</code> parameter. If you don't set this value, DMS
     * scans the current activity of available source tables to identify an optimum
     * setting for this parameter. If there is no current source activity or DMS can't
     * otherwise identify a more appropriate value, it sets this parameter to the
     * minimum DCU value allowed, 1.</p>
     */
    inline void SetMinCapacityUnits(int value) { m_minCapacityUnitsHasBeenSet = true; m_minCapacityUnits = value; }

    /**
     * <p>Specifies the minimum value of the DMS capacity units (DCUs) for which a
     * given DMS Serverless replication can be provisioned. A single DCU is 2GB of RAM,
     * with 1 DCU as the minimum value allowed. The list of valid DCU values includes
     * 1, 2, 4, 8, 16, 32, 64, 128, 192, 256, and 384. So, the minimum DCU value that
     * you can specify for DMS Serverless is 1. You don't have to specify a value for
     * the <code>MinCapacityUnits</code> parameter. If you don't set this value, DMS
     * scans the current activity of available source tables to identify an optimum
     * setting for this parameter. If there is no current source activity or DMS can't
     * otherwise identify a more appropriate value, it sets this parameter to the
     * minimum DCU value allowed, 1.</p>
     */
    inline ComputeConfig& WithMinCapacityUnits(int value) { SetMinCapacityUnits(value); return *this;}


    /**
     * <p>Specifies whether the DMS Serverless replication is a Multi-AZ deployment.
     * You can't set the <code>AvailabilityZone</code> parameter if the
     * <code>MultiAZ</code> parameter is set to <code>true</code>.</p>
     */
    inline bool GetMultiAZ() const{ return m_multiAZ; }

    /**
     * <p>Specifies whether the DMS Serverless replication is a Multi-AZ deployment.
     * You can't set the <code>AvailabilityZone</code> parameter if the
     * <code>MultiAZ</code> parameter is set to <code>true</code>.</p>
     */
    inline bool MultiAZHasBeenSet() const { return m_multiAZHasBeenSet; }

    /**
     * <p>Specifies whether the DMS Serverless replication is a Multi-AZ deployment.
     * You can't set the <code>AvailabilityZone</code> parameter if the
     * <code>MultiAZ</code> parameter is set to <code>true</code>.</p>
     */
    inline void SetMultiAZ(bool value) { m_multiAZHasBeenSet = true; m_multiAZ = value; }

    /**
     * <p>Specifies whether the DMS Serverless replication is a Multi-AZ deployment.
     * You can't set the <code>AvailabilityZone</code> parameter if the
     * <code>MultiAZ</code> parameter is set to <code>true</code>.</p>
     */
    inline ComputeConfig& WithMultiAZ(bool value) { SetMultiAZ(value); return *this;}


    /**
     * <p>The weekly time range during which system maintenance can occur for the DMS
     * Serverless replication, in Universal Coordinated Time (UTC). The format is
     * <code>ddd:hh24:mi-ddd:hh24:mi</code>.</p> <p>The default is a 30-minute window
     * selected at random from an 8-hour block of time per Amazon Web Services Region.
     * This maintenance occurs on a random day of the week. Valid values for days of
     * the week include <code>Mon</code>, <code>Tue</code>, <code>Wed</code>,
     * <code>Thu</code>, <code>Fri</code>, <code>Sat</code>, and <code>Sun</code>.</p>
     * <p>Constraints include a minimum 30-minute window.</p>
     */
    inline const Aws::String& GetPreferredMaintenanceWindow() const{ return m_preferredMaintenanceWindow; }

    /**
     * <p>The weekly time range during which system maintenance can occur for the DMS
     * Serverless replication, in Universal Coordinated Time (UTC). The format is
     * <code>ddd:hh24:mi-ddd:hh24:mi</code>.</p> <p>The default is a 30-minute window
     * selected at random from an 8-hour block of time per Amazon Web Services Region.
     * This maintenance occurs on a random day of the week. Valid values for days of
     * the week include <code>Mon</code>, <code>Tue</code>, <code>Wed</code>,
     * <code>Thu</code>, <code>Fri</code>, <code>Sat</code>, and <code>Sun</code>.</p>
     * <p>Constraints include a minimum 30-minute window.</p>
     */
    inline bool PreferredMaintenanceWindowHasBeenSet() const { return m_preferredMaintenanceWindowHasBeenSet; }

    /**
     * <p>The weekly time range during which system maintenance can occur for the DMS
     * Serverless replication, in Universal Coordinated Time (UTC). The format is
     * <code>ddd:hh24:mi-ddd:hh24:mi</code>.</p> <p>The default is a 30-minute window
     * selected at random from an 8-hour block of time per Amazon Web Services Region.
     * This maintenance occurs on a random day of the week. Valid values for days of
     * the week include <code>Mon</code>, <code>Tue</code>, <code>Wed</code>,
     * <code>Thu</code>, <code>Fri</code>, <code>Sat</code>, and <code>Sun</code>.</p>
     * <p>Constraints include a minimum 30-minute window.</p>
     */
    inline void SetPreferredMaintenanceWindow(const Aws::String& value) { m_preferredMaintenanceWindowHasBeenSet = true; m_preferredMaintenanceWindow = value; }

    /**
     * <p>The weekly time range during which system maintenance can occur for the DMS
     * Serverless replication, in Universal Coordinated Time (UTC). The format is
     * <code>ddd:hh24:mi-ddd:hh24:mi</code>.</p> <p>The default is a 30-minute window
     * selected at random from an 8-hour block of time per Amazon Web Services Region.
     * This maintenance occurs on a random day of the week. Valid values for days of
     * the week include <code>Mon</code>, <code>Tue</code>, <code>Wed</code>,
     * <code>Thu</code>, <code>Fri</code>, <code>Sat</code>, and <code>Sun</code>.</p>
     * <p>Constraints include a minimum 30-minute window.</p>
     */
    inline void SetPreferredMaintenanceWindow(Aws::String&& value) { m_preferredMaintenanceWindowHasBeenSet = true; m_preferredMaintenanceWindow = std::move(value); }

    /**
     * <p>The weekly time range during which system maintenance can occur for the DMS
     * Serverless replication, in Universal Coordinated Time (UTC). The format is
     * <code>ddd:hh24:mi-ddd:hh24:mi</code>.</p> <p>The default is a 30-minute window
     * selected at random from an 8-hour block of time per Amazon Web Services Region.
     * This maintenance occurs on a random day of the week. Valid values for days of
     * the week include <code>Mon</code>, <code>Tue</code>, <code>Wed</code>,
     * <code>Thu</code>, <code>Fri</code>, <code>Sat</code>, and <code>Sun</code>.</p>
     * <p>Constraints include a minimum 30-minute window.</p>
     */
    inline void SetPreferredMaintenanceWindow(const char* value) { m_preferredMaintenanceWindowHasBeenSet = true; m_preferredMaintenanceWindow.assign(value); }

    /**
     * <p>The weekly time range during which system maintenance can occur for the DMS
     * Serverless replication, in Universal Coordinated Time (UTC). The format is
     * <code>ddd:hh24:mi-ddd:hh24:mi</code>.</p> <p>The default is a 30-minute window
     * selected at random from an 8-hour block of time per Amazon Web Services Region.
     * This maintenance occurs on a random day of the week. Valid values for days of
     * the week include <code>Mon</code>, <code>Tue</code>, <code>Wed</code>,
     * <code>Thu</code>, <code>Fri</code>, <code>Sat</code>, and <code>Sun</code>.</p>
     * <p>Constraints include a minimum 30-minute window.</p>
     */
    inline ComputeConfig& WithPreferredMaintenanceWindow(const Aws::String& value) { SetPreferredMaintenanceWindow(value); return *this;}

    /**
     * <p>The weekly time range during which system maintenance can occur for the DMS
     * Serverless replication, in Universal Coordinated Time (UTC). The format is
     * <code>ddd:hh24:mi-ddd:hh24:mi</code>.</p> <p>The default is a 30-minute window
     * selected at random from an 8-hour block of time per Amazon Web Services Region.
     * This maintenance occurs on a random day of the week. Valid values for days of
     * the week include <code>Mon</code>, <code>Tue</code>, <code>Wed</code>,
     * <code>Thu</code>, <code>Fri</code>, <code>Sat</code>, and <code>Sun</code>.</p>
     * <p>Constraints include a minimum 30-minute window.</p>
     */
    inline ComputeConfig& WithPreferredMaintenanceWindow(Aws::String&& value) { SetPreferredMaintenanceWindow(std::move(value)); return *this;}

    /**
     * <p>The weekly time range during which system maintenance can occur for the DMS
     * Serverless replication, in Universal Coordinated Time (UTC). The format is
     * <code>ddd:hh24:mi-ddd:hh24:mi</code>.</p> <p>The default is a 30-minute window
     * selected at random from an 8-hour block of time per Amazon Web Services Region.
     * This maintenance occurs on a random day of the week. Valid values for days of
     * the week include <code>Mon</code>, <code>Tue</code>, <code>Wed</code>,
     * <code>Thu</code>, <code>Fri</code>, <code>Sat</code>, and <code>Sun</code>.</p>
     * <p>Constraints include a minimum 30-minute window.</p>
     */
    inline ComputeConfig& WithPreferredMaintenanceWindow(const char* value) { SetPreferredMaintenanceWindow(value); return *this;}


    /**
     * <p>Specifies a subnet group identifier to associate with the DMS Serverless
     * replication.</p>
     */
    inline const Aws::String& GetReplicationSubnetGroupId() const{ return m_replicationSubnetGroupId; }

    /**
     * <p>Specifies a subnet group identifier to associate with the DMS Serverless
     * replication.</p>
     */
    inline bool ReplicationSubnetGroupIdHasBeenSet() const { return m_replicationSubnetGroupIdHasBeenSet; }

    /**
     * <p>Specifies a subnet group identifier to associate with the DMS Serverless
     * replication.</p>
     */
    inline void SetReplicationSubnetGroupId(const Aws::String& value) { m_replicationSubnetGroupIdHasBeenSet = true; m_replicationSubnetGroupId = value; }

    /**
     * <p>Specifies a subnet group identifier to associate with the DMS Serverless
     * replication.</p>
     */
    inline void SetReplicationSubnetGroupId(Aws::String&& value) { m_replicationSubnetGroupIdHasBeenSet = true; m_replicationSubnetGroupId = std::move(value); }

    /**
     * <p>Specifies a subnet group identifier to associate with the DMS Serverless
     * replication.</p>
     */
    inline void SetReplicationSubnetGroupId(const char* value) { m_replicationSubnetGroupIdHasBeenSet = true; m_replicationSubnetGroupId.assign(value); }

    /**
     * <p>Specifies a subnet group identifier to associate with the DMS Serverless
     * replication.</p>
     */
    inline ComputeConfig& WithReplicationSubnetGroupId(const Aws::String& value) { SetReplicationSubnetGroupId(value); return *this;}

    /**
     * <p>Specifies a subnet group identifier to associate with the DMS Serverless
     * replication.</p>
     */
    inline ComputeConfig& WithReplicationSubnetGroupId(Aws::String&& value) { SetReplicationSubnetGroupId(std::move(value)); return *this;}

    /**
     * <p>Specifies a subnet group identifier to associate with the DMS Serverless
     * replication.</p>
     */
    inline ComputeConfig& WithReplicationSubnetGroupId(const char* value) { SetReplicationSubnetGroupId(value); return *this;}


    /**
     * <p>Specifies the virtual private cloud (VPC) security group to use with the DMS
     * Serverless replication. The VPC security group must work with the VPC containing
     * the replication.</p>
     */
    inline const Aws::Vector<Aws::String>& GetVpcSecurityGroupIds() const{ return m_vpcSecurityGroupIds; }

    /**
     * <p>Specifies the virtual private cloud (VPC) security group to use with the DMS
     * Serverless replication. The VPC security group must work with the VPC containing
     * the replication.</p>
     */
    inline bool VpcSecurityGroupIdsHasBeenSet() const { return m_vpcSecurityGroupIdsHasBeenSet; }

    /**
     * <p>Specifies the virtual private cloud (VPC) security group to use with the DMS
     * Serverless replication. The VPC security group must work with the VPC containing
     * the replication.</p>
     */
    inline void SetVpcSecurityGroupIds(const Aws::Vector<Aws::String>& value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds = value; }

    /**
     * <p>Specifies the virtual private cloud (VPC) security group to use with the DMS
     * Serverless replication. The VPC security group must work with the VPC containing
     * the replication.</p>
     */
    inline void SetVpcSecurityGroupIds(Aws::Vector<Aws::String>&& value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds = std::move(value); }

    /**
     * <p>Specifies the virtual private cloud (VPC) security group to use with the DMS
     * Serverless replication. The VPC security group must work with the VPC containing
     * the replication.</p>
     */
    inline ComputeConfig& WithVpcSecurityGroupIds(const Aws::Vector<Aws::String>& value) { SetVpcSecurityGroupIds(value); return *this;}

    /**
     * <p>Specifies the virtual private cloud (VPC) security group to use with the DMS
     * Serverless replication. The VPC security group must work with the VPC containing
     * the replication.</p>
     */
    inline ComputeConfig& WithVpcSecurityGroupIds(Aws::Vector<Aws::String>&& value) { SetVpcSecurityGroupIds(std::move(value)); return *this;}

    /**
     * <p>Specifies the virtual private cloud (VPC) security group to use with the DMS
     * Serverless replication. The VPC security group must work with the VPC containing
     * the replication.</p>
     */
    inline ComputeConfig& AddVpcSecurityGroupIds(const Aws::String& value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds.push_back(value); return *this; }

    /**
     * <p>Specifies the virtual private cloud (VPC) security group to use with the DMS
     * Serverless replication. The VPC security group must work with the VPC containing
     * the replication.</p>
     */
    inline ComputeConfig& AddVpcSecurityGroupIds(Aws::String&& value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds.push_back(std::move(value)); return *this; }

    /**
     * <p>Specifies the virtual private cloud (VPC) security group to use with the DMS
     * Serverless replication. The VPC security group must work with the VPC containing
     * the replication.</p>
     */
    inline ComputeConfig& AddVpcSecurityGroupIds(const char* value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds.push_back(value); return *this; }

  private:

    Aws::String m_availabilityZone;
    bool m_availabilityZoneHasBeenSet = false;

    Aws::String m_dnsNameServers;
    bool m_dnsNameServersHasBeenSet = false;

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet = false;

    int m_maxCapacityUnits;
    bool m_maxCapacityUnitsHasBeenSet = false;

    int m_minCapacityUnits;
    bool m_minCapacityUnitsHasBeenSet = false;

    bool m_multiAZ;
    bool m_multiAZHasBeenSet = false;

    Aws::String m_preferredMaintenanceWindow;
    bool m_preferredMaintenanceWindowHasBeenSet = false;

    Aws::String m_replicationSubnetGroupId;
    bool m_replicationSubnetGroupIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_vpcSecurityGroupIds;
    bool m_vpcSecurityGroupIdsHasBeenSet = false;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
