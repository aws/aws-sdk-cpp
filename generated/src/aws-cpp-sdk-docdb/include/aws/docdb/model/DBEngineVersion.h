/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/docdb/DocDB_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/docdb/model/ServerlessV2FeaturesSupport.h>
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
    AWS_DOCDB_API DBEngineVersion() = default;
    AWS_DOCDB_API DBEngineVersion(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_DOCDB_API DBEngineVersion& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_DOCDB_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_DOCDB_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The name of the database engine.</p>
     */
    inline const Aws::String& GetEngine() const { return m_engine; }
    inline bool EngineHasBeenSet() const { return m_engineHasBeenSet; }
    template<typename EngineT = Aws::String>
    void SetEngine(EngineT&& value) { m_engineHasBeenSet = true; m_engine = std::forward<EngineT>(value); }
    template<typename EngineT = Aws::String>
    DBEngineVersion& WithEngine(EngineT&& value) { SetEngine(std::forward<EngineT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version number of the database engine.</p>
     */
    inline const Aws::String& GetEngineVersion() const { return m_engineVersion; }
    inline bool EngineVersionHasBeenSet() const { return m_engineVersionHasBeenSet; }
    template<typename EngineVersionT = Aws::String>
    void SetEngineVersion(EngineVersionT&& value) { m_engineVersionHasBeenSet = true; m_engineVersion = std::forward<EngineVersionT>(value); }
    template<typename EngineVersionT = Aws::String>
    DBEngineVersion& WithEngineVersion(EngineVersionT&& value) { SetEngineVersion(std::forward<EngineVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the parameter group family for the database engine.</p>
     */
    inline const Aws::String& GetDBParameterGroupFamily() const { return m_dBParameterGroupFamily; }
    inline bool DBParameterGroupFamilyHasBeenSet() const { return m_dBParameterGroupFamilyHasBeenSet; }
    template<typename DBParameterGroupFamilyT = Aws::String>
    void SetDBParameterGroupFamily(DBParameterGroupFamilyT&& value) { m_dBParameterGroupFamilyHasBeenSet = true; m_dBParameterGroupFamily = std::forward<DBParameterGroupFamilyT>(value); }
    template<typename DBParameterGroupFamilyT = Aws::String>
    DBEngineVersion& WithDBParameterGroupFamily(DBParameterGroupFamilyT&& value) { SetDBParameterGroupFamily(std::forward<DBParameterGroupFamilyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the database engine.</p>
     */
    inline const Aws::String& GetDBEngineDescription() const { return m_dBEngineDescription; }
    inline bool DBEngineDescriptionHasBeenSet() const { return m_dBEngineDescriptionHasBeenSet; }
    template<typename DBEngineDescriptionT = Aws::String>
    void SetDBEngineDescription(DBEngineDescriptionT&& value) { m_dBEngineDescriptionHasBeenSet = true; m_dBEngineDescription = std::forward<DBEngineDescriptionT>(value); }
    template<typename DBEngineDescriptionT = Aws::String>
    DBEngineVersion& WithDBEngineDescription(DBEngineDescriptionT&& value) { SetDBEngineDescription(std::forward<DBEngineDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the database engine version.</p>
     */
    inline const Aws::String& GetDBEngineVersionDescription() const { return m_dBEngineVersionDescription; }
    inline bool DBEngineVersionDescriptionHasBeenSet() const { return m_dBEngineVersionDescriptionHasBeenSet; }
    template<typename DBEngineVersionDescriptionT = Aws::String>
    void SetDBEngineVersionDescription(DBEngineVersionDescriptionT&& value) { m_dBEngineVersionDescriptionHasBeenSet = true; m_dBEngineVersionDescription = std::forward<DBEngineVersionDescriptionT>(value); }
    template<typename DBEngineVersionDescriptionT = Aws::String>
    DBEngineVersion& WithDBEngineVersionDescription(DBEngineVersionDescriptionT&& value) { SetDBEngineVersionDescription(std::forward<DBEngineVersionDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of engine versions that this database engine version can be upgraded
     * to.</p>
     */
    inline const Aws::Vector<UpgradeTarget>& GetValidUpgradeTarget() const { return m_validUpgradeTarget; }
    inline bool ValidUpgradeTargetHasBeenSet() const { return m_validUpgradeTargetHasBeenSet; }
    template<typename ValidUpgradeTargetT = Aws::Vector<UpgradeTarget>>
    void SetValidUpgradeTarget(ValidUpgradeTargetT&& value) { m_validUpgradeTargetHasBeenSet = true; m_validUpgradeTarget = std::forward<ValidUpgradeTargetT>(value); }
    template<typename ValidUpgradeTargetT = Aws::Vector<UpgradeTarget>>
    DBEngineVersion& WithValidUpgradeTarget(ValidUpgradeTargetT&& value) { SetValidUpgradeTarget(std::forward<ValidUpgradeTargetT>(value)); return *this;}
    template<typename ValidUpgradeTargetT = UpgradeTarget>
    DBEngineVersion& AddValidUpgradeTarget(ValidUpgradeTargetT&& value) { m_validUpgradeTargetHasBeenSet = true; m_validUpgradeTarget.emplace_back(std::forward<ValidUpgradeTargetT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The types of logs that the database engine has available for export to Amazon
     * CloudWatch Logs.</p>
     */
    inline const Aws::Vector<Aws::String>& GetExportableLogTypes() const { return m_exportableLogTypes; }
    inline bool ExportableLogTypesHasBeenSet() const { return m_exportableLogTypesHasBeenSet; }
    template<typename ExportableLogTypesT = Aws::Vector<Aws::String>>
    void SetExportableLogTypes(ExportableLogTypesT&& value) { m_exportableLogTypesHasBeenSet = true; m_exportableLogTypes = std::forward<ExportableLogTypesT>(value); }
    template<typename ExportableLogTypesT = Aws::Vector<Aws::String>>
    DBEngineVersion& WithExportableLogTypes(ExportableLogTypesT&& value) { SetExportableLogTypes(std::forward<ExportableLogTypesT>(value)); return *this;}
    template<typename ExportableLogTypesT = Aws::String>
    DBEngineVersion& AddExportableLogTypes(ExportableLogTypesT&& value) { m_exportableLogTypesHasBeenSet = true; m_exportableLogTypes.emplace_back(std::forward<ExportableLogTypesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A value that indicates whether the engine version supports exporting the log
     * types specified by <code>ExportableLogTypes</code> to CloudWatch Logs.</p>
     */
    inline bool GetSupportsLogExportsToCloudwatchLogs() const { return m_supportsLogExportsToCloudwatchLogs; }
    inline bool SupportsLogExportsToCloudwatchLogsHasBeenSet() const { return m_supportsLogExportsToCloudwatchLogsHasBeenSet; }
    inline void SetSupportsLogExportsToCloudwatchLogs(bool value) { m_supportsLogExportsToCloudwatchLogsHasBeenSet = true; m_supportsLogExportsToCloudwatchLogs = value; }
    inline DBEngineVersion& WithSupportsLogExportsToCloudwatchLogs(bool value) { SetSupportsLogExportsToCloudwatchLogs(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of the supported CA certificate identifiers.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/documentdb/latest/developerguide/ca_cert_rotation.html">Updating
     * Your Amazon DocumentDB TLS Certificates</a> and <a
     * href="https://docs.aws.amazon.com/documentdb/latest/developerguide/security.encryption.ssl.html">
     * Encrypting Data in Transit</a> in the <i>Amazon DocumentDB Developer
     * Guide</i>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSupportedCACertificateIdentifiers() const { return m_supportedCACertificateIdentifiers; }
    inline bool SupportedCACertificateIdentifiersHasBeenSet() const { return m_supportedCACertificateIdentifiersHasBeenSet; }
    template<typename SupportedCACertificateIdentifiersT = Aws::Vector<Aws::String>>
    void SetSupportedCACertificateIdentifiers(SupportedCACertificateIdentifiersT&& value) { m_supportedCACertificateIdentifiersHasBeenSet = true; m_supportedCACertificateIdentifiers = std::forward<SupportedCACertificateIdentifiersT>(value); }
    template<typename SupportedCACertificateIdentifiersT = Aws::Vector<Aws::String>>
    DBEngineVersion& WithSupportedCACertificateIdentifiers(SupportedCACertificateIdentifiersT&& value) { SetSupportedCACertificateIdentifiers(std::forward<SupportedCACertificateIdentifiersT>(value)); return *this;}
    template<typename SupportedCACertificateIdentifiersT = Aws::String>
    DBEngineVersion& AddSupportedCACertificateIdentifiers(SupportedCACertificateIdentifiersT&& value) { m_supportedCACertificateIdentifiersHasBeenSet = true; m_supportedCACertificateIdentifiers.emplace_back(std::forward<SupportedCACertificateIdentifiersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Indicates whether the engine version supports rotating the server certificate
     * without rebooting the DB instance.</p>
     */
    inline bool GetSupportsCertificateRotationWithoutRestart() const { return m_supportsCertificateRotationWithoutRestart; }
    inline bool SupportsCertificateRotationWithoutRestartHasBeenSet() const { return m_supportsCertificateRotationWithoutRestartHasBeenSet; }
    inline void SetSupportsCertificateRotationWithoutRestart(bool value) { m_supportsCertificateRotationWithoutRestartHasBeenSet = true; m_supportsCertificateRotationWithoutRestart = value; }
    inline DBEngineVersion& WithSupportsCertificateRotationWithoutRestart(bool value) { SetSupportsCertificateRotationWithoutRestart(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies any Amazon DocumentDB Serverless properties or limits that differ
     * between Amazon DocumentDB engine versions. You can test the values of this
     * attribute when deciding which Amazon DocumentDB version to use in a new or
     * upgraded cluster. You can also retrieve the version of an existing cluster and
     * check whether that version supports certain Amazon DocumentDB Serverless
     * features before you attempt to use those features.</p>
     */
    inline const ServerlessV2FeaturesSupport& GetServerlessV2FeaturesSupport() const { return m_serverlessV2FeaturesSupport; }
    inline bool ServerlessV2FeaturesSupportHasBeenSet() const { return m_serverlessV2FeaturesSupportHasBeenSet; }
    template<typename ServerlessV2FeaturesSupportT = ServerlessV2FeaturesSupport>
    void SetServerlessV2FeaturesSupport(ServerlessV2FeaturesSupportT&& value) { m_serverlessV2FeaturesSupportHasBeenSet = true; m_serverlessV2FeaturesSupport = std::forward<ServerlessV2FeaturesSupportT>(value); }
    template<typename ServerlessV2FeaturesSupportT = ServerlessV2FeaturesSupport>
    DBEngineVersion& WithServerlessV2FeaturesSupport(ServerlessV2FeaturesSupportT&& value) { SetServerlessV2FeaturesSupport(std::forward<ServerlessV2FeaturesSupportT>(value)); return *this;}
    ///@}
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

    bool m_supportsLogExportsToCloudwatchLogs{false};
    bool m_supportsLogExportsToCloudwatchLogsHasBeenSet = false;

    Aws::Vector<Aws::String> m_supportedCACertificateIdentifiers;
    bool m_supportedCACertificateIdentifiersHasBeenSet = false;

    bool m_supportsCertificateRotationWithoutRestart{false};
    bool m_supportsCertificateRotationWithoutRestartHasBeenSet = false;

    ServerlessV2FeaturesSupport m_serverlessV2FeaturesSupport;
    bool m_serverlessV2FeaturesSupportHasBeenSet = false;
  };

} // namespace Model
} // namespace DocDB
} // namespace Aws
