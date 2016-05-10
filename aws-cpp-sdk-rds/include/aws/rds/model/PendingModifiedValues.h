/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#pragma once
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace RDS
{
namespace Model
{

  /**
   * <p> This data type is used as a response element in the <a>ModifyDBInstance</a>
   * action. </p>
   */
  class AWS_RDS_API PendingModifiedValues
  {
  public:
    PendingModifiedValues();
    PendingModifiedValues(const Aws::Utils::Xml::XmlNode& xmlNode);
    PendingModifiedValues& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;

    /**
     * <p> Contains the new <code>DBInstanceClass</code> for the DB instance that will
     * be applied or is in progress. </p>
     */
    inline const Aws::String& GetDBInstanceClass() const{ return m_dBInstanceClass; }

    /**
     * <p> Contains the new <code>DBInstanceClass</code> for the DB instance that will
     * be applied or is in progress. </p>
     */
    inline void SetDBInstanceClass(const Aws::String& value) { m_dBInstanceClassHasBeenSet = true; m_dBInstanceClass = value; }

    /**
     * <p> Contains the new <code>DBInstanceClass</code> for the DB instance that will
     * be applied or is in progress. </p>
     */
    inline void SetDBInstanceClass(Aws::String&& value) { m_dBInstanceClassHasBeenSet = true; m_dBInstanceClass = value; }

    /**
     * <p> Contains the new <code>DBInstanceClass</code> for the DB instance that will
     * be applied or is in progress. </p>
     */
    inline void SetDBInstanceClass(const char* value) { m_dBInstanceClassHasBeenSet = true; m_dBInstanceClass.assign(value); }

    /**
     * <p> Contains the new <code>DBInstanceClass</code> for the DB instance that will
     * be applied or is in progress. </p>
     */
    inline PendingModifiedValues& WithDBInstanceClass(const Aws::String& value) { SetDBInstanceClass(value); return *this;}

    /**
     * <p> Contains the new <code>DBInstanceClass</code> for the DB instance that will
     * be applied or is in progress. </p>
     */
    inline PendingModifiedValues& WithDBInstanceClass(Aws::String&& value) { SetDBInstanceClass(value); return *this;}

    /**
     * <p> Contains the new <code>DBInstanceClass</code> for the DB instance that will
     * be applied or is in progress. </p>
     */
    inline PendingModifiedValues& WithDBInstanceClass(const char* value) { SetDBInstanceClass(value); return *this;}

    /**
     * <p> Contains the new <code>AllocatedStorage</code> size for the DB instance that
     * will be applied or is in progress. </p>
     */
    inline long GetAllocatedStorage() const{ return m_allocatedStorage; }

    /**
     * <p> Contains the new <code>AllocatedStorage</code> size for the DB instance that
     * will be applied or is in progress. </p>
     */
    inline void SetAllocatedStorage(long value) { m_allocatedStorageHasBeenSet = true; m_allocatedStorage = value; }

    /**
     * <p> Contains the new <code>AllocatedStorage</code> size for the DB instance that
     * will be applied or is in progress. </p>
     */
    inline PendingModifiedValues& WithAllocatedStorage(long value) { SetAllocatedStorage(value); return *this;}

    /**
     * <p> Contains the pending or in-progress change of the master credentials for the
     * DB instance. </p>
     */
    inline const Aws::String& GetMasterUserPassword() const{ return m_masterUserPassword; }

    /**
     * <p> Contains the pending or in-progress change of the master credentials for the
     * DB instance. </p>
     */
    inline void SetMasterUserPassword(const Aws::String& value) { m_masterUserPasswordHasBeenSet = true; m_masterUserPassword = value; }

    /**
     * <p> Contains the pending or in-progress change of the master credentials for the
     * DB instance. </p>
     */
    inline void SetMasterUserPassword(Aws::String&& value) { m_masterUserPasswordHasBeenSet = true; m_masterUserPassword = value; }

    /**
     * <p> Contains the pending or in-progress change of the master credentials for the
     * DB instance. </p>
     */
    inline void SetMasterUserPassword(const char* value) { m_masterUserPasswordHasBeenSet = true; m_masterUserPassword.assign(value); }

    /**
     * <p> Contains the pending or in-progress change of the master credentials for the
     * DB instance. </p>
     */
    inline PendingModifiedValues& WithMasterUserPassword(const Aws::String& value) { SetMasterUserPassword(value); return *this;}

    /**
     * <p> Contains the pending or in-progress change of the master credentials for the
     * DB instance. </p>
     */
    inline PendingModifiedValues& WithMasterUserPassword(Aws::String&& value) { SetMasterUserPassword(value); return *this;}

    /**
     * <p> Contains the pending or in-progress change of the master credentials for the
     * DB instance. </p>
     */
    inline PendingModifiedValues& WithMasterUserPassword(const char* value) { SetMasterUserPassword(value); return *this;}

    /**
     * <p> Specifies the pending port for the DB instance. </p>
     */
    inline long GetPort() const{ return m_port; }

    /**
     * <p> Specifies the pending port for the DB instance. </p>
     */
    inline void SetPort(long value) { m_portHasBeenSet = true; m_port = value; }

    /**
     * <p> Specifies the pending port for the DB instance. </p>
     */
    inline PendingModifiedValues& WithPort(long value) { SetPort(value); return *this;}

    /**
     * <p> Specifies the pending number of days for which automated backups are
     * retained. </p>
     */
    inline long GetBackupRetentionPeriod() const{ return m_backupRetentionPeriod; }

    /**
     * <p> Specifies the pending number of days for which automated backups are
     * retained. </p>
     */
    inline void SetBackupRetentionPeriod(long value) { m_backupRetentionPeriodHasBeenSet = true; m_backupRetentionPeriod = value; }

    /**
     * <p> Specifies the pending number of days for which automated backups are
     * retained. </p>
     */
    inline PendingModifiedValues& WithBackupRetentionPeriod(long value) { SetBackupRetentionPeriod(value); return *this;}

    /**
     * <p> Indicates that the Single-AZ DB instance is to change to a Multi-AZ
     * deployment. </p>
     */
    inline bool GetMultiAZ() const{ return m_multiAZ; }

    /**
     * <p> Indicates that the Single-AZ DB instance is to change to a Multi-AZ
     * deployment. </p>
     */
    inline void SetMultiAZ(bool value) { m_multiAZHasBeenSet = true; m_multiAZ = value; }

    /**
     * <p> Indicates that the Single-AZ DB instance is to change to a Multi-AZ
     * deployment. </p>
     */
    inline PendingModifiedValues& WithMultiAZ(bool value) { SetMultiAZ(value); return *this;}

    /**
     * <p> Indicates the database engine version. </p>
     */
    inline const Aws::String& GetEngineVersion() const{ return m_engineVersion; }

    /**
     * <p> Indicates the database engine version. </p>
     */
    inline void SetEngineVersion(const Aws::String& value) { m_engineVersionHasBeenSet = true; m_engineVersion = value; }

    /**
     * <p> Indicates the database engine version. </p>
     */
    inline void SetEngineVersion(Aws::String&& value) { m_engineVersionHasBeenSet = true; m_engineVersion = value; }

    /**
     * <p> Indicates the database engine version. </p>
     */
    inline void SetEngineVersion(const char* value) { m_engineVersionHasBeenSet = true; m_engineVersion.assign(value); }

    /**
     * <p> Indicates the database engine version. </p>
     */
    inline PendingModifiedValues& WithEngineVersion(const Aws::String& value) { SetEngineVersion(value); return *this;}

    /**
     * <p> Indicates the database engine version. </p>
     */
    inline PendingModifiedValues& WithEngineVersion(Aws::String&& value) { SetEngineVersion(value); return *this;}

    /**
     * <p> Indicates the database engine version. </p>
     */
    inline PendingModifiedValues& WithEngineVersion(const char* value) { SetEngineVersion(value); return *this;}

    /**
     * <p> Specifies the new Provisioned IOPS value for the DB instance that will be
     * applied or is being applied. </p>
     */
    inline long GetIops() const{ return m_iops; }

    /**
     * <p> Specifies the new Provisioned IOPS value for the DB instance that will be
     * applied or is being applied. </p>
     */
    inline void SetIops(long value) { m_iopsHasBeenSet = true; m_iops = value; }

    /**
     * <p> Specifies the new Provisioned IOPS value for the DB instance that will be
     * applied or is being applied. </p>
     */
    inline PendingModifiedValues& WithIops(long value) { SetIops(value); return *this;}

    /**
     * <p> Contains the new <code>DBInstanceIdentifier</code> for the DB instance that
     * will be applied or is in progress. </p>
     */
    inline const Aws::String& GetDBInstanceIdentifier() const{ return m_dBInstanceIdentifier; }

    /**
     * <p> Contains the new <code>DBInstanceIdentifier</code> for the DB instance that
     * will be applied or is in progress. </p>
     */
    inline void SetDBInstanceIdentifier(const Aws::String& value) { m_dBInstanceIdentifierHasBeenSet = true; m_dBInstanceIdentifier = value; }

    /**
     * <p> Contains the new <code>DBInstanceIdentifier</code> for the DB instance that
     * will be applied or is in progress. </p>
     */
    inline void SetDBInstanceIdentifier(Aws::String&& value) { m_dBInstanceIdentifierHasBeenSet = true; m_dBInstanceIdentifier = value; }

    /**
     * <p> Contains the new <code>DBInstanceIdentifier</code> for the DB instance that
     * will be applied or is in progress. </p>
     */
    inline void SetDBInstanceIdentifier(const char* value) { m_dBInstanceIdentifierHasBeenSet = true; m_dBInstanceIdentifier.assign(value); }

    /**
     * <p> Contains the new <code>DBInstanceIdentifier</code> for the DB instance that
     * will be applied or is in progress. </p>
     */
    inline PendingModifiedValues& WithDBInstanceIdentifier(const Aws::String& value) { SetDBInstanceIdentifier(value); return *this;}

    /**
     * <p> Contains the new <code>DBInstanceIdentifier</code> for the DB instance that
     * will be applied or is in progress. </p>
     */
    inline PendingModifiedValues& WithDBInstanceIdentifier(Aws::String&& value) { SetDBInstanceIdentifier(value); return *this;}

    /**
     * <p> Contains the new <code>DBInstanceIdentifier</code> for the DB instance that
     * will be applied or is in progress. </p>
     */
    inline PendingModifiedValues& WithDBInstanceIdentifier(const char* value) { SetDBInstanceIdentifier(value); return *this;}

    /**
     * <p> Specifies the storage type to be associated with the DB instance. </p>
     */
    inline const Aws::String& GetStorageType() const{ return m_storageType; }

    /**
     * <p> Specifies the storage type to be associated with the DB instance. </p>
     */
    inline void SetStorageType(const Aws::String& value) { m_storageTypeHasBeenSet = true; m_storageType = value; }

    /**
     * <p> Specifies the storage type to be associated with the DB instance. </p>
     */
    inline void SetStorageType(Aws::String&& value) { m_storageTypeHasBeenSet = true; m_storageType = value; }

    /**
     * <p> Specifies the storage type to be associated with the DB instance. </p>
     */
    inline void SetStorageType(const char* value) { m_storageTypeHasBeenSet = true; m_storageType.assign(value); }

    /**
     * <p> Specifies the storage type to be associated with the DB instance. </p>
     */
    inline PendingModifiedValues& WithStorageType(const Aws::String& value) { SetStorageType(value); return *this;}

    /**
     * <p> Specifies the storage type to be associated with the DB instance. </p>
     */
    inline PendingModifiedValues& WithStorageType(Aws::String&& value) { SetStorageType(value); return *this;}

    /**
     * <p> Specifies the storage type to be associated with the DB instance. </p>
     */
    inline PendingModifiedValues& WithStorageType(const char* value) { SetStorageType(value); return *this;}

    /**
     * <p>Specifies the identifier of the CA certificate for the DB instance.</p>
     */
    inline const Aws::String& GetCACertificateIdentifier() const{ return m_cACertificateIdentifier; }

    /**
     * <p>Specifies the identifier of the CA certificate for the DB instance.</p>
     */
    inline void SetCACertificateIdentifier(const Aws::String& value) { m_cACertificateIdentifierHasBeenSet = true; m_cACertificateIdentifier = value; }

    /**
     * <p>Specifies the identifier of the CA certificate for the DB instance.</p>
     */
    inline void SetCACertificateIdentifier(Aws::String&& value) { m_cACertificateIdentifierHasBeenSet = true; m_cACertificateIdentifier = value; }

    /**
     * <p>Specifies the identifier of the CA certificate for the DB instance.</p>
     */
    inline void SetCACertificateIdentifier(const char* value) { m_cACertificateIdentifierHasBeenSet = true; m_cACertificateIdentifier.assign(value); }

    /**
     * <p>Specifies the identifier of the CA certificate for the DB instance.</p>
     */
    inline PendingModifiedValues& WithCACertificateIdentifier(const Aws::String& value) { SetCACertificateIdentifier(value); return *this;}

    /**
     * <p>Specifies the identifier of the CA certificate for the DB instance.</p>
     */
    inline PendingModifiedValues& WithCACertificateIdentifier(Aws::String&& value) { SetCACertificateIdentifier(value); return *this;}

    /**
     * <p>Specifies the identifier of the CA certificate for the DB instance.</p>
     */
    inline PendingModifiedValues& WithCACertificateIdentifier(const char* value) { SetCACertificateIdentifier(value); return *this;}

  private:
    Aws::String m_dBInstanceClass;
    bool m_dBInstanceClassHasBeenSet;
    long m_allocatedStorage;
    bool m_allocatedStorageHasBeenSet;
    Aws::String m_masterUserPassword;
    bool m_masterUserPasswordHasBeenSet;
    long m_port;
    bool m_portHasBeenSet;
    long m_backupRetentionPeriod;
    bool m_backupRetentionPeriodHasBeenSet;
    bool m_multiAZ;
    bool m_multiAZHasBeenSet;
    Aws::String m_engineVersion;
    bool m_engineVersionHasBeenSet;
    long m_iops;
    bool m_iopsHasBeenSet;
    Aws::String m_dBInstanceIdentifier;
    bool m_dBInstanceIdentifierHasBeenSet;
    Aws::String m_storageType;
    bool m_storageTypeHasBeenSet;
    Aws::String m_cACertificateIdentifier;
    bool m_cACertificateIdentifierHasBeenSet;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
