/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/rds/model/PendingCloudwatchLogsExports.h>
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
namespace RDS
{
namespace Model
{

  /**
   * <p>This data type is used as a response element in the
   * <code>ModifyDBCluster</code> operation and contains changes that will be applied
   * during the next maintenance window.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/ClusterPendingModifiedValues">AWS
   * API Reference</a></p>
   */
  class AWS_RDS_API ClusterPendingModifiedValues
  {
  public:
    ClusterPendingModifiedValues();
    ClusterPendingModifiedValues(const Aws::Utils::Xml::XmlNode& xmlNode);
    ClusterPendingModifiedValues& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    
    inline const PendingCloudwatchLogsExports& GetPendingCloudwatchLogsExports() const{ return m_pendingCloudwatchLogsExports; }

    
    inline bool PendingCloudwatchLogsExportsHasBeenSet() const { return m_pendingCloudwatchLogsExportsHasBeenSet; }

    
    inline void SetPendingCloudwatchLogsExports(const PendingCloudwatchLogsExports& value) { m_pendingCloudwatchLogsExportsHasBeenSet = true; m_pendingCloudwatchLogsExports = value; }

    
    inline void SetPendingCloudwatchLogsExports(PendingCloudwatchLogsExports&& value) { m_pendingCloudwatchLogsExportsHasBeenSet = true; m_pendingCloudwatchLogsExports = std::move(value); }

    
    inline ClusterPendingModifiedValues& WithPendingCloudwatchLogsExports(const PendingCloudwatchLogsExports& value) { SetPendingCloudwatchLogsExports(value); return *this;}

    
    inline ClusterPendingModifiedValues& WithPendingCloudwatchLogsExports(PendingCloudwatchLogsExports&& value) { SetPendingCloudwatchLogsExports(std::move(value)); return *this;}


    /**
     * <p>The DBClusterIdentifier value for the DB cluster.</p>
     */
    inline const Aws::String& GetDBClusterIdentifier() const{ return m_dBClusterIdentifier; }

    /**
     * <p>The DBClusterIdentifier value for the DB cluster.</p>
     */
    inline bool DBClusterIdentifierHasBeenSet() const { return m_dBClusterIdentifierHasBeenSet; }

    /**
     * <p>The DBClusterIdentifier value for the DB cluster.</p>
     */
    inline void SetDBClusterIdentifier(const Aws::String& value) { m_dBClusterIdentifierHasBeenSet = true; m_dBClusterIdentifier = value; }

    /**
     * <p>The DBClusterIdentifier value for the DB cluster.</p>
     */
    inline void SetDBClusterIdentifier(Aws::String&& value) { m_dBClusterIdentifierHasBeenSet = true; m_dBClusterIdentifier = std::move(value); }

    /**
     * <p>The DBClusterIdentifier value for the DB cluster.</p>
     */
    inline void SetDBClusterIdentifier(const char* value) { m_dBClusterIdentifierHasBeenSet = true; m_dBClusterIdentifier.assign(value); }

    /**
     * <p>The DBClusterIdentifier value for the DB cluster.</p>
     */
    inline ClusterPendingModifiedValues& WithDBClusterIdentifier(const Aws::String& value) { SetDBClusterIdentifier(value); return *this;}

    /**
     * <p>The DBClusterIdentifier value for the DB cluster.</p>
     */
    inline ClusterPendingModifiedValues& WithDBClusterIdentifier(Aws::String&& value) { SetDBClusterIdentifier(std::move(value)); return *this;}

    /**
     * <p>The DBClusterIdentifier value for the DB cluster.</p>
     */
    inline ClusterPendingModifiedValues& WithDBClusterIdentifier(const char* value) { SetDBClusterIdentifier(value); return *this;}


    /**
     * <p>The master credentials for the DB cluster.</p>
     */
    inline const Aws::String& GetMasterUserPassword() const{ return m_masterUserPassword; }

    /**
     * <p>The master credentials for the DB cluster.</p>
     */
    inline bool MasterUserPasswordHasBeenSet() const { return m_masterUserPasswordHasBeenSet; }

    /**
     * <p>The master credentials for the DB cluster.</p>
     */
    inline void SetMasterUserPassword(const Aws::String& value) { m_masterUserPasswordHasBeenSet = true; m_masterUserPassword = value; }

    /**
     * <p>The master credentials for the DB cluster.</p>
     */
    inline void SetMasterUserPassword(Aws::String&& value) { m_masterUserPasswordHasBeenSet = true; m_masterUserPassword = std::move(value); }

    /**
     * <p>The master credentials for the DB cluster.</p>
     */
    inline void SetMasterUserPassword(const char* value) { m_masterUserPasswordHasBeenSet = true; m_masterUserPassword.assign(value); }

    /**
     * <p>The master credentials for the DB cluster.</p>
     */
    inline ClusterPendingModifiedValues& WithMasterUserPassword(const Aws::String& value) { SetMasterUserPassword(value); return *this;}

    /**
     * <p>The master credentials for the DB cluster.</p>
     */
    inline ClusterPendingModifiedValues& WithMasterUserPassword(Aws::String&& value) { SetMasterUserPassword(std::move(value)); return *this;}

    /**
     * <p>The master credentials for the DB cluster.</p>
     */
    inline ClusterPendingModifiedValues& WithMasterUserPassword(const char* value) { SetMasterUserPassword(value); return *this;}


    /**
     * <p>A value that indicates whether mapping of AWS Identity and Access Management
     * (IAM) accounts to database accounts is enabled.</p>
     */
    inline bool GetIAMDatabaseAuthenticationEnabled() const{ return m_iAMDatabaseAuthenticationEnabled; }

    /**
     * <p>A value that indicates whether mapping of AWS Identity and Access Management
     * (IAM) accounts to database accounts is enabled.</p>
     */
    inline bool IAMDatabaseAuthenticationEnabledHasBeenSet() const { return m_iAMDatabaseAuthenticationEnabledHasBeenSet; }

    /**
     * <p>A value that indicates whether mapping of AWS Identity and Access Management
     * (IAM) accounts to database accounts is enabled.</p>
     */
    inline void SetIAMDatabaseAuthenticationEnabled(bool value) { m_iAMDatabaseAuthenticationEnabledHasBeenSet = true; m_iAMDatabaseAuthenticationEnabled = value; }

    /**
     * <p>A value that indicates whether mapping of AWS Identity and Access Management
     * (IAM) accounts to database accounts is enabled.</p>
     */
    inline ClusterPendingModifiedValues& WithIAMDatabaseAuthenticationEnabled(bool value) { SetIAMDatabaseAuthenticationEnabled(value); return *this;}


    /**
     * <p>The database engine version.</p>
     */
    inline const Aws::String& GetEngineVersion() const{ return m_engineVersion; }

    /**
     * <p>The database engine version.</p>
     */
    inline bool EngineVersionHasBeenSet() const { return m_engineVersionHasBeenSet; }

    /**
     * <p>The database engine version.</p>
     */
    inline void SetEngineVersion(const Aws::String& value) { m_engineVersionHasBeenSet = true; m_engineVersion = value; }

    /**
     * <p>The database engine version.</p>
     */
    inline void SetEngineVersion(Aws::String&& value) { m_engineVersionHasBeenSet = true; m_engineVersion = std::move(value); }

    /**
     * <p>The database engine version.</p>
     */
    inline void SetEngineVersion(const char* value) { m_engineVersionHasBeenSet = true; m_engineVersion.assign(value); }

    /**
     * <p>The database engine version.</p>
     */
    inline ClusterPendingModifiedValues& WithEngineVersion(const Aws::String& value) { SetEngineVersion(value); return *this;}

    /**
     * <p>The database engine version.</p>
     */
    inline ClusterPendingModifiedValues& WithEngineVersion(Aws::String&& value) { SetEngineVersion(std::move(value)); return *this;}

    /**
     * <p>The database engine version.</p>
     */
    inline ClusterPendingModifiedValues& WithEngineVersion(const char* value) { SetEngineVersion(value); return *this;}

  private:

    PendingCloudwatchLogsExports m_pendingCloudwatchLogsExports;
    bool m_pendingCloudwatchLogsExportsHasBeenSet;

    Aws::String m_dBClusterIdentifier;
    bool m_dBClusterIdentifierHasBeenSet;

    Aws::String m_masterUserPassword;
    bool m_masterUserPasswordHasBeenSet;

    bool m_iAMDatabaseAuthenticationEnabled;
    bool m_iAMDatabaseAuthenticationEnabledHasBeenSet;

    Aws::String m_engineVersion;
    bool m_engineVersionHasBeenSet;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
