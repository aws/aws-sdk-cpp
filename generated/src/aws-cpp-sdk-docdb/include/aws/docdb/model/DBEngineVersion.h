﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/docdb/DocDB_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/docdb/model/UpgradeTarget.h>
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
namespace DocDB
{
namespace Model
{

  /**
   * <p> Detailed information about an engine version. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/docdb-2014-10-31/DBEngineVersion">AWS
   * API Reference</a></p>
   */
  class DBEngineVersion
  {
  public:
    AWS_DOCDB_API DBEngineVersion();
    AWS_DOCDB_API DBEngineVersion(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_DOCDB_API DBEngineVersion& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_DOCDB_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_DOCDB_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The name of the database engine.</p>
     */
    inline const Aws::String& GetEngine() const{ return m_engine; }

    /**
     * <p>The name of the database engine.</p>
     */
    inline bool EngineHasBeenSet() const { return m_engineHasBeenSet; }

    /**
     * <p>The name of the database engine.</p>
     */
    inline void SetEngine(const Aws::String& value) { m_engineHasBeenSet = true; m_engine = value; }

    /**
     * <p>The name of the database engine.</p>
     */
    inline void SetEngine(Aws::String&& value) { m_engineHasBeenSet = true; m_engine = std::move(value); }

    /**
     * <p>The name of the database engine.</p>
     */
    inline void SetEngine(const char* value) { m_engineHasBeenSet = true; m_engine.assign(value); }

    /**
     * <p>The name of the database engine.</p>
     */
    inline DBEngineVersion& WithEngine(const Aws::String& value) { SetEngine(value); return *this;}

    /**
     * <p>The name of the database engine.</p>
     */
    inline DBEngineVersion& WithEngine(Aws::String&& value) { SetEngine(std::move(value)); return *this;}

    /**
     * <p>The name of the database engine.</p>
     */
    inline DBEngineVersion& WithEngine(const char* value) { SetEngine(value); return *this;}


    /**
     * <p>The version number of the database engine.</p>
     */
    inline const Aws::String& GetEngineVersion() const{ return m_engineVersion; }

    /**
     * <p>The version number of the database engine.</p>
     */
    inline bool EngineVersionHasBeenSet() const { return m_engineVersionHasBeenSet; }

    /**
     * <p>The version number of the database engine.</p>
     */
    inline void SetEngineVersion(const Aws::String& value) { m_engineVersionHasBeenSet = true; m_engineVersion = value; }

    /**
     * <p>The version number of the database engine.</p>
     */
    inline void SetEngineVersion(Aws::String&& value) { m_engineVersionHasBeenSet = true; m_engineVersion = std::move(value); }

    /**
     * <p>The version number of the database engine.</p>
     */
    inline void SetEngineVersion(const char* value) { m_engineVersionHasBeenSet = true; m_engineVersion.assign(value); }

    /**
     * <p>The version number of the database engine.</p>
     */
    inline DBEngineVersion& WithEngineVersion(const Aws::String& value) { SetEngineVersion(value); return *this;}

    /**
     * <p>The version number of the database engine.</p>
     */
    inline DBEngineVersion& WithEngineVersion(Aws::String&& value) { SetEngineVersion(std::move(value)); return *this;}

    /**
     * <p>The version number of the database engine.</p>
     */
    inline DBEngineVersion& WithEngineVersion(const char* value) { SetEngineVersion(value); return *this;}


    /**
     * <p>The name of the parameter group family for the database engine.</p>
     */
    inline const Aws::String& GetDBParameterGroupFamily() const{ return m_dBParameterGroupFamily; }

    /**
     * <p>The name of the parameter group family for the database engine.</p>
     */
    inline bool DBParameterGroupFamilyHasBeenSet() const { return m_dBParameterGroupFamilyHasBeenSet; }

    /**
     * <p>The name of the parameter group family for the database engine.</p>
     */
    inline void SetDBParameterGroupFamily(const Aws::String& value) { m_dBParameterGroupFamilyHasBeenSet = true; m_dBParameterGroupFamily = value; }

    /**
     * <p>The name of the parameter group family for the database engine.</p>
     */
    inline void SetDBParameterGroupFamily(Aws::String&& value) { m_dBParameterGroupFamilyHasBeenSet = true; m_dBParameterGroupFamily = std::move(value); }

    /**
     * <p>The name of the parameter group family for the database engine.</p>
     */
    inline void SetDBParameterGroupFamily(const char* value) { m_dBParameterGroupFamilyHasBeenSet = true; m_dBParameterGroupFamily.assign(value); }

    /**
     * <p>The name of the parameter group family for the database engine.</p>
     */
    inline DBEngineVersion& WithDBParameterGroupFamily(const Aws::String& value) { SetDBParameterGroupFamily(value); return *this;}

    /**
     * <p>The name of the parameter group family for the database engine.</p>
     */
    inline DBEngineVersion& WithDBParameterGroupFamily(Aws::String&& value) { SetDBParameterGroupFamily(std::move(value)); return *this;}

    /**
     * <p>The name of the parameter group family for the database engine.</p>
     */
    inline DBEngineVersion& WithDBParameterGroupFamily(const char* value) { SetDBParameterGroupFamily(value); return *this;}


    /**
     * <p>The description of the database engine.</p>
     */
    inline const Aws::String& GetDBEngineDescription() const{ return m_dBEngineDescription; }

    /**
     * <p>The description of the database engine.</p>
     */
    inline bool DBEngineDescriptionHasBeenSet() const { return m_dBEngineDescriptionHasBeenSet; }

    /**
     * <p>The description of the database engine.</p>
     */
    inline void SetDBEngineDescription(const Aws::String& value) { m_dBEngineDescriptionHasBeenSet = true; m_dBEngineDescription = value; }

    /**
     * <p>The description of the database engine.</p>
     */
    inline void SetDBEngineDescription(Aws::String&& value) { m_dBEngineDescriptionHasBeenSet = true; m_dBEngineDescription = std::move(value); }

    /**
     * <p>The description of the database engine.</p>
     */
    inline void SetDBEngineDescription(const char* value) { m_dBEngineDescriptionHasBeenSet = true; m_dBEngineDescription.assign(value); }

    /**
     * <p>The description of the database engine.</p>
     */
    inline DBEngineVersion& WithDBEngineDescription(const Aws::String& value) { SetDBEngineDescription(value); return *this;}

    /**
     * <p>The description of the database engine.</p>
     */
    inline DBEngineVersion& WithDBEngineDescription(Aws::String&& value) { SetDBEngineDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the database engine.</p>
     */
    inline DBEngineVersion& WithDBEngineDescription(const char* value) { SetDBEngineDescription(value); return *this;}


    /**
     * <p>The description of the database engine version.</p>
     */
    inline const Aws::String& GetDBEngineVersionDescription() const{ return m_dBEngineVersionDescription; }

    /**
     * <p>The description of the database engine version.</p>
     */
    inline bool DBEngineVersionDescriptionHasBeenSet() const { return m_dBEngineVersionDescriptionHasBeenSet; }

    /**
     * <p>The description of the database engine version.</p>
     */
    inline void SetDBEngineVersionDescription(const Aws::String& value) { m_dBEngineVersionDescriptionHasBeenSet = true; m_dBEngineVersionDescription = value; }

    /**
     * <p>The description of the database engine version.</p>
     */
    inline void SetDBEngineVersionDescription(Aws::String&& value) { m_dBEngineVersionDescriptionHasBeenSet = true; m_dBEngineVersionDescription = std::move(value); }

    /**
     * <p>The description of the database engine version.</p>
     */
    inline void SetDBEngineVersionDescription(const char* value) { m_dBEngineVersionDescriptionHasBeenSet = true; m_dBEngineVersionDescription.assign(value); }

    /**
     * <p>The description of the database engine version.</p>
     */
    inline DBEngineVersion& WithDBEngineVersionDescription(const Aws::String& value) { SetDBEngineVersionDescription(value); return *this;}

    /**
     * <p>The description of the database engine version.</p>
     */
    inline DBEngineVersion& WithDBEngineVersionDescription(Aws::String&& value) { SetDBEngineVersionDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the database engine version.</p>
     */
    inline DBEngineVersion& WithDBEngineVersionDescription(const char* value) { SetDBEngineVersionDescription(value); return *this;}


    /**
     * <p>A list of engine versions that this database engine version can be upgraded
     * to.</p>
     */
    inline const Aws::Vector<UpgradeTarget>& GetValidUpgradeTarget() const{ return m_validUpgradeTarget; }

    /**
     * <p>A list of engine versions that this database engine version can be upgraded
     * to.</p>
     */
    inline bool ValidUpgradeTargetHasBeenSet() const { return m_validUpgradeTargetHasBeenSet; }

    /**
     * <p>A list of engine versions that this database engine version can be upgraded
     * to.</p>
     */
    inline void SetValidUpgradeTarget(const Aws::Vector<UpgradeTarget>& value) { m_validUpgradeTargetHasBeenSet = true; m_validUpgradeTarget = value; }

    /**
     * <p>A list of engine versions that this database engine version can be upgraded
     * to.</p>
     */
    inline void SetValidUpgradeTarget(Aws::Vector<UpgradeTarget>&& value) { m_validUpgradeTargetHasBeenSet = true; m_validUpgradeTarget = std::move(value); }

    /**
     * <p>A list of engine versions that this database engine version can be upgraded
     * to.</p>
     */
    inline DBEngineVersion& WithValidUpgradeTarget(const Aws::Vector<UpgradeTarget>& value) { SetValidUpgradeTarget(value); return *this;}

    /**
     * <p>A list of engine versions that this database engine version can be upgraded
     * to.</p>
     */
    inline DBEngineVersion& WithValidUpgradeTarget(Aws::Vector<UpgradeTarget>&& value) { SetValidUpgradeTarget(std::move(value)); return *this;}

    /**
     * <p>A list of engine versions that this database engine version can be upgraded
     * to.</p>
     */
    inline DBEngineVersion& AddValidUpgradeTarget(const UpgradeTarget& value) { m_validUpgradeTargetHasBeenSet = true; m_validUpgradeTarget.push_back(value); return *this; }

    /**
     * <p>A list of engine versions that this database engine version can be upgraded
     * to.</p>
     */
    inline DBEngineVersion& AddValidUpgradeTarget(UpgradeTarget&& value) { m_validUpgradeTargetHasBeenSet = true; m_validUpgradeTarget.push_back(std::move(value)); return *this; }


    /**
     * <p>The types of logs that the database engine has available for export to Amazon
     * CloudWatch Logs.</p>
     */
    inline const Aws::Vector<Aws::String>& GetExportableLogTypes() const{ return m_exportableLogTypes; }

    /**
     * <p>The types of logs that the database engine has available for export to Amazon
     * CloudWatch Logs.</p>
     */
    inline bool ExportableLogTypesHasBeenSet() const { return m_exportableLogTypesHasBeenSet; }

    /**
     * <p>The types of logs that the database engine has available for export to Amazon
     * CloudWatch Logs.</p>
     */
    inline void SetExportableLogTypes(const Aws::Vector<Aws::String>& value) { m_exportableLogTypesHasBeenSet = true; m_exportableLogTypes = value; }

    /**
     * <p>The types of logs that the database engine has available for export to Amazon
     * CloudWatch Logs.</p>
     */
    inline void SetExportableLogTypes(Aws::Vector<Aws::String>&& value) { m_exportableLogTypesHasBeenSet = true; m_exportableLogTypes = std::move(value); }

    /**
     * <p>The types of logs that the database engine has available for export to Amazon
     * CloudWatch Logs.</p>
     */
    inline DBEngineVersion& WithExportableLogTypes(const Aws::Vector<Aws::String>& value) { SetExportableLogTypes(value); return *this;}

    /**
     * <p>The types of logs that the database engine has available for export to Amazon
     * CloudWatch Logs.</p>
     */
    inline DBEngineVersion& WithExportableLogTypes(Aws::Vector<Aws::String>&& value) { SetExportableLogTypes(std::move(value)); return *this;}

    /**
     * <p>The types of logs that the database engine has available for export to Amazon
     * CloudWatch Logs.</p>
     */
    inline DBEngineVersion& AddExportableLogTypes(const Aws::String& value) { m_exportableLogTypesHasBeenSet = true; m_exportableLogTypes.push_back(value); return *this; }

    /**
     * <p>The types of logs that the database engine has available for export to Amazon
     * CloudWatch Logs.</p>
     */
    inline DBEngineVersion& AddExportableLogTypes(Aws::String&& value) { m_exportableLogTypesHasBeenSet = true; m_exportableLogTypes.push_back(std::move(value)); return *this; }

    /**
     * <p>The types of logs that the database engine has available for export to Amazon
     * CloudWatch Logs.</p>
     */
    inline DBEngineVersion& AddExportableLogTypes(const char* value) { m_exportableLogTypesHasBeenSet = true; m_exportableLogTypes.push_back(value); return *this; }


    /**
     * <p>A value that indicates whether the engine version supports exporting the log
     * types specified by <code>ExportableLogTypes</code> to CloudWatch Logs.</p>
     */
    inline bool GetSupportsLogExportsToCloudwatchLogs() const{ return m_supportsLogExportsToCloudwatchLogs; }

    /**
     * <p>A value that indicates whether the engine version supports exporting the log
     * types specified by <code>ExportableLogTypes</code> to CloudWatch Logs.</p>
     */
    inline bool SupportsLogExportsToCloudwatchLogsHasBeenSet() const { return m_supportsLogExportsToCloudwatchLogsHasBeenSet; }

    /**
     * <p>A value that indicates whether the engine version supports exporting the log
     * types specified by <code>ExportableLogTypes</code> to CloudWatch Logs.</p>
     */
    inline void SetSupportsLogExportsToCloudwatchLogs(bool value) { m_supportsLogExportsToCloudwatchLogsHasBeenSet = true; m_supportsLogExportsToCloudwatchLogs = value; }

    /**
     * <p>A value that indicates whether the engine version supports exporting the log
     * types specified by <code>ExportableLogTypes</code> to CloudWatch Logs.</p>
     */
    inline DBEngineVersion& WithSupportsLogExportsToCloudwatchLogs(bool value) { SetSupportsLogExportsToCloudwatchLogs(value); return *this;}


    /**
     * <p>A list of the supported CA certificate identifiers.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/documentdb/latest/developerguide/ca_cert_rotation.html">Updating
     * Your Amazon DocumentDB TLS Certificates</a> and <a
     * href="https://docs.aws.amazon.com/documentdb/latest/developerguide/security.encryption.ssl.html">
     * Encrypting Data in Transit</a> in the <i>Amazon DocumentDB Developer
     * Guide</i>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSupportedCACertificateIdentifiers() const{ return m_supportedCACertificateIdentifiers; }

    /**
     * <p>A list of the supported CA certificate identifiers.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/documentdb/latest/developerguide/ca_cert_rotation.html">Updating
     * Your Amazon DocumentDB TLS Certificates</a> and <a
     * href="https://docs.aws.amazon.com/documentdb/latest/developerguide/security.encryption.ssl.html">
     * Encrypting Data in Transit</a> in the <i>Amazon DocumentDB Developer
     * Guide</i>.</p>
     */
    inline bool SupportedCACertificateIdentifiersHasBeenSet() const { return m_supportedCACertificateIdentifiersHasBeenSet; }

    /**
     * <p>A list of the supported CA certificate identifiers.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/documentdb/latest/developerguide/ca_cert_rotation.html">Updating
     * Your Amazon DocumentDB TLS Certificates</a> and <a
     * href="https://docs.aws.amazon.com/documentdb/latest/developerguide/security.encryption.ssl.html">
     * Encrypting Data in Transit</a> in the <i>Amazon DocumentDB Developer
     * Guide</i>.</p>
     */
    inline void SetSupportedCACertificateIdentifiers(const Aws::Vector<Aws::String>& value) { m_supportedCACertificateIdentifiersHasBeenSet = true; m_supportedCACertificateIdentifiers = value; }

    /**
     * <p>A list of the supported CA certificate identifiers.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/documentdb/latest/developerguide/ca_cert_rotation.html">Updating
     * Your Amazon DocumentDB TLS Certificates</a> and <a
     * href="https://docs.aws.amazon.com/documentdb/latest/developerguide/security.encryption.ssl.html">
     * Encrypting Data in Transit</a> in the <i>Amazon DocumentDB Developer
     * Guide</i>.</p>
     */
    inline void SetSupportedCACertificateIdentifiers(Aws::Vector<Aws::String>&& value) { m_supportedCACertificateIdentifiersHasBeenSet = true; m_supportedCACertificateIdentifiers = std::move(value); }

    /**
     * <p>A list of the supported CA certificate identifiers.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/documentdb/latest/developerguide/ca_cert_rotation.html">Updating
     * Your Amazon DocumentDB TLS Certificates</a> and <a
     * href="https://docs.aws.amazon.com/documentdb/latest/developerguide/security.encryption.ssl.html">
     * Encrypting Data in Transit</a> in the <i>Amazon DocumentDB Developer
     * Guide</i>.</p>
     */
    inline DBEngineVersion& WithSupportedCACertificateIdentifiers(const Aws::Vector<Aws::String>& value) { SetSupportedCACertificateIdentifiers(value); return *this;}

    /**
     * <p>A list of the supported CA certificate identifiers.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/documentdb/latest/developerguide/ca_cert_rotation.html">Updating
     * Your Amazon DocumentDB TLS Certificates</a> and <a
     * href="https://docs.aws.amazon.com/documentdb/latest/developerguide/security.encryption.ssl.html">
     * Encrypting Data in Transit</a> in the <i>Amazon DocumentDB Developer
     * Guide</i>.</p>
     */
    inline DBEngineVersion& WithSupportedCACertificateIdentifiers(Aws::Vector<Aws::String>&& value) { SetSupportedCACertificateIdentifiers(std::move(value)); return *this;}

    /**
     * <p>A list of the supported CA certificate identifiers.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/documentdb/latest/developerguide/ca_cert_rotation.html">Updating
     * Your Amazon DocumentDB TLS Certificates</a> and <a
     * href="https://docs.aws.amazon.com/documentdb/latest/developerguide/security.encryption.ssl.html">
     * Encrypting Data in Transit</a> in the <i>Amazon DocumentDB Developer
     * Guide</i>.</p>
     */
    inline DBEngineVersion& AddSupportedCACertificateIdentifiers(const Aws::String& value) { m_supportedCACertificateIdentifiersHasBeenSet = true; m_supportedCACertificateIdentifiers.push_back(value); return *this; }

    /**
     * <p>A list of the supported CA certificate identifiers.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/documentdb/latest/developerguide/ca_cert_rotation.html">Updating
     * Your Amazon DocumentDB TLS Certificates</a> and <a
     * href="https://docs.aws.amazon.com/documentdb/latest/developerguide/security.encryption.ssl.html">
     * Encrypting Data in Transit</a> in the <i>Amazon DocumentDB Developer
     * Guide</i>.</p>
     */
    inline DBEngineVersion& AddSupportedCACertificateIdentifiers(Aws::String&& value) { m_supportedCACertificateIdentifiersHasBeenSet = true; m_supportedCACertificateIdentifiers.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of the supported CA certificate identifiers.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/documentdb/latest/developerguide/ca_cert_rotation.html">Updating
     * Your Amazon DocumentDB TLS Certificates</a> and <a
     * href="https://docs.aws.amazon.com/documentdb/latest/developerguide/security.encryption.ssl.html">
     * Encrypting Data in Transit</a> in the <i>Amazon DocumentDB Developer
     * Guide</i>.</p>
     */
    inline DBEngineVersion& AddSupportedCACertificateIdentifiers(const char* value) { m_supportedCACertificateIdentifiersHasBeenSet = true; m_supportedCACertificateIdentifiers.push_back(value); return *this; }


    /**
     * <p>Indicates whether the engine version supports rotating the server certificate
     * without rebooting the DB instance.</p>
     */
    inline bool GetSupportsCertificateRotationWithoutRestart() const{ return m_supportsCertificateRotationWithoutRestart; }

    /**
     * <p>Indicates whether the engine version supports rotating the server certificate
     * without rebooting the DB instance.</p>
     */
    inline bool SupportsCertificateRotationWithoutRestartHasBeenSet() const { return m_supportsCertificateRotationWithoutRestartHasBeenSet; }

    /**
     * <p>Indicates whether the engine version supports rotating the server certificate
     * without rebooting the DB instance.</p>
     */
    inline void SetSupportsCertificateRotationWithoutRestart(bool value) { m_supportsCertificateRotationWithoutRestartHasBeenSet = true; m_supportsCertificateRotationWithoutRestart = value; }

    /**
     * <p>Indicates whether the engine version supports rotating the server certificate
     * without rebooting the DB instance.</p>
     */
    inline DBEngineVersion& WithSupportsCertificateRotationWithoutRestart(bool value) { SetSupportsCertificateRotationWithoutRestart(value); return *this;}

  private:

    Aws::String m_engine;
    bool m_engineHasBeenSet = false;

    Aws::String m_engineVersion;
    bool m_engineVersionHasBeenSet = false;

    Aws::String m_dBParameterGroupFamily;
    bool m_dBParameterGroupFamilyHasBeenSet = false;

    Aws::String m_dBEngineDescription;
    bool m_dBEngineDescriptionHasBeenSet = false;

    Aws::String m_dBEngineVersionDescription;
    bool m_dBEngineVersionDescriptionHasBeenSet = false;

    Aws::Vector<UpgradeTarget> m_validUpgradeTarget;
    bool m_validUpgradeTargetHasBeenSet = false;

    Aws::Vector<Aws::String> m_exportableLogTypes;
    bool m_exportableLogTypesHasBeenSet = false;

    bool m_supportsLogExportsToCloudwatchLogs;
    bool m_supportsLogExportsToCloudwatchLogsHasBeenSet = false;

    Aws::Vector<Aws::String> m_supportedCACertificateIdentifiers;
    bool m_supportedCACertificateIdentifiersHasBeenSet = false;

    bool m_supportsCertificateRotationWithoutRestart;
    bool m_supportsCertificateRotationWithoutRestartHasBeenSet = false;
  };

} // namespace Model
} // namespace DocDB
} // namespace Aws
