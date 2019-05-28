/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/rds/model/CharacterSet.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rds/model/UpgradeTarget.h>
#include <aws/rds/model/Timezone.h>
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
   * <p> This data type is used as a response element in the action
   * <code>DescribeDBEngineVersions</code>. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DBEngineVersion">AWS
   * API Reference</a></p>
   */
  class AWS_RDS_API DBEngineVersion
  {
  public:
    DBEngineVersion();
    DBEngineVersion(const Aws::Utils::Xml::XmlNode& xmlNode);
    DBEngineVersion& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


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
     * <p>The name of the DB parameter group family for the database engine.</p>
     */
    inline const Aws::String& GetDBParameterGroupFamily() const{ return m_dBParameterGroupFamily; }

    /**
     * <p>The name of the DB parameter group family for the database engine.</p>
     */
    inline bool DBParameterGroupFamilyHasBeenSet() const { return m_dBParameterGroupFamilyHasBeenSet; }

    /**
     * <p>The name of the DB parameter group family for the database engine.</p>
     */
    inline void SetDBParameterGroupFamily(const Aws::String& value) { m_dBParameterGroupFamilyHasBeenSet = true; m_dBParameterGroupFamily = value; }

    /**
     * <p>The name of the DB parameter group family for the database engine.</p>
     */
    inline void SetDBParameterGroupFamily(Aws::String&& value) { m_dBParameterGroupFamilyHasBeenSet = true; m_dBParameterGroupFamily = std::move(value); }

    /**
     * <p>The name of the DB parameter group family for the database engine.</p>
     */
    inline void SetDBParameterGroupFamily(const char* value) { m_dBParameterGroupFamilyHasBeenSet = true; m_dBParameterGroupFamily.assign(value); }

    /**
     * <p>The name of the DB parameter group family for the database engine.</p>
     */
    inline DBEngineVersion& WithDBParameterGroupFamily(const Aws::String& value) { SetDBParameterGroupFamily(value); return *this;}

    /**
     * <p>The name of the DB parameter group family for the database engine.</p>
     */
    inline DBEngineVersion& WithDBParameterGroupFamily(Aws::String&& value) { SetDBParameterGroupFamily(std::move(value)); return *this;}

    /**
     * <p>The name of the DB parameter group family for the database engine.</p>
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
     * <p> The default character set for new instances of this engine version, if the
     * <code>CharacterSetName</code> parameter of the CreateDBInstance API is not
     * specified. </p>
     */
    inline const CharacterSet& GetDefaultCharacterSet() const{ return m_defaultCharacterSet; }

    /**
     * <p> The default character set for new instances of this engine version, if the
     * <code>CharacterSetName</code> parameter of the CreateDBInstance API is not
     * specified. </p>
     */
    inline bool DefaultCharacterSetHasBeenSet() const { return m_defaultCharacterSetHasBeenSet; }

    /**
     * <p> The default character set for new instances of this engine version, if the
     * <code>CharacterSetName</code> parameter of the CreateDBInstance API is not
     * specified. </p>
     */
    inline void SetDefaultCharacterSet(const CharacterSet& value) { m_defaultCharacterSetHasBeenSet = true; m_defaultCharacterSet = value; }

    /**
     * <p> The default character set for new instances of this engine version, if the
     * <code>CharacterSetName</code> parameter of the CreateDBInstance API is not
     * specified. </p>
     */
    inline void SetDefaultCharacterSet(CharacterSet&& value) { m_defaultCharacterSetHasBeenSet = true; m_defaultCharacterSet = std::move(value); }

    /**
     * <p> The default character set for new instances of this engine version, if the
     * <code>CharacterSetName</code> parameter of the CreateDBInstance API is not
     * specified. </p>
     */
    inline DBEngineVersion& WithDefaultCharacterSet(const CharacterSet& value) { SetDefaultCharacterSet(value); return *this;}

    /**
     * <p> The default character set for new instances of this engine version, if the
     * <code>CharacterSetName</code> parameter of the CreateDBInstance API is not
     * specified. </p>
     */
    inline DBEngineVersion& WithDefaultCharacterSet(CharacterSet&& value) { SetDefaultCharacterSet(std::move(value)); return *this;}


    /**
     * <p> A list of the character sets supported by this engine for the
     * <code>CharacterSetName</code> parameter of the <code>CreateDBInstance</code>
     * action. </p>
     */
    inline const Aws::Vector<CharacterSet>& GetSupportedCharacterSets() const{ return m_supportedCharacterSets; }

    /**
     * <p> A list of the character sets supported by this engine for the
     * <code>CharacterSetName</code> parameter of the <code>CreateDBInstance</code>
     * action. </p>
     */
    inline bool SupportedCharacterSetsHasBeenSet() const { return m_supportedCharacterSetsHasBeenSet; }

    /**
     * <p> A list of the character sets supported by this engine for the
     * <code>CharacterSetName</code> parameter of the <code>CreateDBInstance</code>
     * action. </p>
     */
    inline void SetSupportedCharacterSets(const Aws::Vector<CharacterSet>& value) { m_supportedCharacterSetsHasBeenSet = true; m_supportedCharacterSets = value; }

    /**
     * <p> A list of the character sets supported by this engine for the
     * <code>CharacterSetName</code> parameter of the <code>CreateDBInstance</code>
     * action. </p>
     */
    inline void SetSupportedCharacterSets(Aws::Vector<CharacterSet>&& value) { m_supportedCharacterSetsHasBeenSet = true; m_supportedCharacterSets = std::move(value); }

    /**
     * <p> A list of the character sets supported by this engine for the
     * <code>CharacterSetName</code> parameter of the <code>CreateDBInstance</code>
     * action. </p>
     */
    inline DBEngineVersion& WithSupportedCharacterSets(const Aws::Vector<CharacterSet>& value) { SetSupportedCharacterSets(value); return *this;}

    /**
     * <p> A list of the character sets supported by this engine for the
     * <code>CharacterSetName</code> parameter of the <code>CreateDBInstance</code>
     * action. </p>
     */
    inline DBEngineVersion& WithSupportedCharacterSets(Aws::Vector<CharacterSet>&& value) { SetSupportedCharacterSets(std::move(value)); return *this;}

    /**
     * <p> A list of the character sets supported by this engine for the
     * <code>CharacterSetName</code> parameter of the <code>CreateDBInstance</code>
     * action. </p>
     */
    inline DBEngineVersion& AddSupportedCharacterSets(const CharacterSet& value) { m_supportedCharacterSetsHasBeenSet = true; m_supportedCharacterSets.push_back(value); return *this; }

    /**
     * <p> A list of the character sets supported by this engine for the
     * <code>CharacterSetName</code> parameter of the <code>CreateDBInstance</code>
     * action. </p>
     */
    inline DBEngineVersion& AddSupportedCharacterSets(CharacterSet&& value) { m_supportedCharacterSetsHasBeenSet = true; m_supportedCharacterSets.push_back(std::move(value)); return *this; }


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
     * <p>A list of the time zones supported by this engine for the
     * <code>Timezone</code> parameter of the <code>CreateDBInstance</code> action.
     * </p>
     */
    inline const Aws::Vector<Timezone>& GetSupportedTimezones() const{ return m_supportedTimezones; }

    /**
     * <p>A list of the time zones supported by this engine for the
     * <code>Timezone</code> parameter of the <code>CreateDBInstance</code> action.
     * </p>
     */
    inline bool SupportedTimezonesHasBeenSet() const { return m_supportedTimezonesHasBeenSet; }

    /**
     * <p>A list of the time zones supported by this engine for the
     * <code>Timezone</code> parameter of the <code>CreateDBInstance</code> action.
     * </p>
     */
    inline void SetSupportedTimezones(const Aws::Vector<Timezone>& value) { m_supportedTimezonesHasBeenSet = true; m_supportedTimezones = value; }

    /**
     * <p>A list of the time zones supported by this engine for the
     * <code>Timezone</code> parameter of the <code>CreateDBInstance</code> action.
     * </p>
     */
    inline void SetSupportedTimezones(Aws::Vector<Timezone>&& value) { m_supportedTimezonesHasBeenSet = true; m_supportedTimezones = std::move(value); }

    /**
     * <p>A list of the time zones supported by this engine for the
     * <code>Timezone</code> parameter of the <code>CreateDBInstance</code> action.
     * </p>
     */
    inline DBEngineVersion& WithSupportedTimezones(const Aws::Vector<Timezone>& value) { SetSupportedTimezones(value); return *this;}

    /**
     * <p>A list of the time zones supported by this engine for the
     * <code>Timezone</code> parameter of the <code>CreateDBInstance</code> action.
     * </p>
     */
    inline DBEngineVersion& WithSupportedTimezones(Aws::Vector<Timezone>&& value) { SetSupportedTimezones(std::move(value)); return *this;}

    /**
     * <p>A list of the time zones supported by this engine for the
     * <code>Timezone</code> parameter of the <code>CreateDBInstance</code> action.
     * </p>
     */
    inline DBEngineVersion& AddSupportedTimezones(const Timezone& value) { m_supportedTimezonesHasBeenSet = true; m_supportedTimezones.push_back(value); return *this; }

    /**
     * <p>A list of the time zones supported by this engine for the
     * <code>Timezone</code> parameter of the <code>CreateDBInstance</code> action.
     * </p>
     */
    inline DBEngineVersion& AddSupportedTimezones(Timezone&& value) { m_supportedTimezonesHasBeenSet = true; m_supportedTimezones.push_back(std::move(value)); return *this; }


    /**
     * <p>The types of logs that the database engine has available for export to
     * CloudWatch Logs.</p>
     */
    inline const Aws::Vector<Aws::String>& GetExportableLogTypes() const{ return m_exportableLogTypes; }

    /**
     * <p>The types of logs that the database engine has available for export to
     * CloudWatch Logs.</p>
     */
    inline bool ExportableLogTypesHasBeenSet() const { return m_exportableLogTypesHasBeenSet; }

    /**
     * <p>The types of logs that the database engine has available for export to
     * CloudWatch Logs.</p>
     */
    inline void SetExportableLogTypes(const Aws::Vector<Aws::String>& value) { m_exportableLogTypesHasBeenSet = true; m_exportableLogTypes = value; }

    /**
     * <p>The types of logs that the database engine has available for export to
     * CloudWatch Logs.</p>
     */
    inline void SetExportableLogTypes(Aws::Vector<Aws::String>&& value) { m_exportableLogTypesHasBeenSet = true; m_exportableLogTypes = std::move(value); }

    /**
     * <p>The types of logs that the database engine has available for export to
     * CloudWatch Logs.</p>
     */
    inline DBEngineVersion& WithExportableLogTypes(const Aws::Vector<Aws::String>& value) { SetExportableLogTypes(value); return *this;}

    /**
     * <p>The types of logs that the database engine has available for export to
     * CloudWatch Logs.</p>
     */
    inline DBEngineVersion& WithExportableLogTypes(Aws::Vector<Aws::String>&& value) { SetExportableLogTypes(std::move(value)); return *this;}

    /**
     * <p>The types of logs that the database engine has available for export to
     * CloudWatch Logs.</p>
     */
    inline DBEngineVersion& AddExportableLogTypes(const Aws::String& value) { m_exportableLogTypesHasBeenSet = true; m_exportableLogTypes.push_back(value); return *this; }

    /**
     * <p>The types of logs that the database engine has available for export to
     * CloudWatch Logs.</p>
     */
    inline DBEngineVersion& AddExportableLogTypes(Aws::String&& value) { m_exportableLogTypesHasBeenSet = true; m_exportableLogTypes.push_back(std::move(value)); return *this; }

    /**
     * <p>The types of logs that the database engine has available for export to
     * CloudWatch Logs.</p>
     */
    inline DBEngineVersion& AddExportableLogTypes(const char* value) { m_exportableLogTypesHasBeenSet = true; m_exportableLogTypes.push_back(value); return *this; }


    /**
     * <p>A value that indicates whether the engine version supports exporting the log
     * types specified by ExportableLogTypes to CloudWatch Logs.</p>
     */
    inline bool GetSupportsLogExportsToCloudwatchLogs() const{ return m_supportsLogExportsToCloudwatchLogs; }

    /**
     * <p>A value that indicates whether the engine version supports exporting the log
     * types specified by ExportableLogTypes to CloudWatch Logs.</p>
     */
    inline bool SupportsLogExportsToCloudwatchLogsHasBeenSet() const { return m_supportsLogExportsToCloudwatchLogsHasBeenSet; }

    /**
     * <p>A value that indicates whether the engine version supports exporting the log
     * types specified by ExportableLogTypes to CloudWatch Logs.</p>
     */
    inline void SetSupportsLogExportsToCloudwatchLogs(bool value) { m_supportsLogExportsToCloudwatchLogsHasBeenSet = true; m_supportsLogExportsToCloudwatchLogs = value; }

    /**
     * <p>A value that indicates whether the engine version supports exporting the log
     * types specified by ExportableLogTypes to CloudWatch Logs.</p>
     */
    inline DBEngineVersion& WithSupportsLogExportsToCloudwatchLogs(bool value) { SetSupportsLogExportsToCloudwatchLogs(value); return *this;}


    /**
     * <p>Indicates whether the database engine version supports Read Replicas.</p>
     */
    inline bool GetSupportsReadReplica() const{ return m_supportsReadReplica; }

    /**
     * <p>Indicates whether the database engine version supports Read Replicas.</p>
     */
    inline bool SupportsReadReplicaHasBeenSet() const { return m_supportsReadReplicaHasBeenSet; }

    /**
     * <p>Indicates whether the database engine version supports Read Replicas.</p>
     */
    inline void SetSupportsReadReplica(bool value) { m_supportsReadReplicaHasBeenSet = true; m_supportsReadReplica = value; }

    /**
     * <p>Indicates whether the database engine version supports Read Replicas.</p>
     */
    inline DBEngineVersion& WithSupportsReadReplica(bool value) { SetSupportsReadReplica(value); return *this;}


    /**
     * <p>A list of the supported DB engine modes.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSupportedEngineModes() const{ return m_supportedEngineModes; }

    /**
     * <p>A list of the supported DB engine modes.</p>
     */
    inline bool SupportedEngineModesHasBeenSet() const { return m_supportedEngineModesHasBeenSet; }

    /**
     * <p>A list of the supported DB engine modes.</p>
     */
    inline void SetSupportedEngineModes(const Aws::Vector<Aws::String>& value) { m_supportedEngineModesHasBeenSet = true; m_supportedEngineModes = value; }

    /**
     * <p>A list of the supported DB engine modes.</p>
     */
    inline void SetSupportedEngineModes(Aws::Vector<Aws::String>&& value) { m_supportedEngineModesHasBeenSet = true; m_supportedEngineModes = std::move(value); }

    /**
     * <p>A list of the supported DB engine modes.</p>
     */
    inline DBEngineVersion& WithSupportedEngineModes(const Aws::Vector<Aws::String>& value) { SetSupportedEngineModes(value); return *this;}

    /**
     * <p>A list of the supported DB engine modes.</p>
     */
    inline DBEngineVersion& WithSupportedEngineModes(Aws::Vector<Aws::String>&& value) { SetSupportedEngineModes(std::move(value)); return *this;}

    /**
     * <p>A list of the supported DB engine modes.</p>
     */
    inline DBEngineVersion& AddSupportedEngineModes(const Aws::String& value) { m_supportedEngineModesHasBeenSet = true; m_supportedEngineModes.push_back(value); return *this; }

    /**
     * <p>A list of the supported DB engine modes.</p>
     */
    inline DBEngineVersion& AddSupportedEngineModes(Aws::String&& value) { m_supportedEngineModesHasBeenSet = true; m_supportedEngineModes.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of the supported DB engine modes.</p>
     */
    inline DBEngineVersion& AddSupportedEngineModes(const char* value) { m_supportedEngineModesHasBeenSet = true; m_supportedEngineModes.push_back(value); return *this; }


    /**
     * <p> A list of features supported by the DB engine. Supported feature names
     * include the following. </p> <ul> <li> <p>s3Import</p> </li> </ul>
     */
    inline const Aws::Vector<Aws::String>& GetSupportedFeatureNames() const{ return m_supportedFeatureNames; }

    /**
     * <p> A list of features supported by the DB engine. Supported feature names
     * include the following. </p> <ul> <li> <p>s3Import</p> </li> </ul>
     */
    inline bool SupportedFeatureNamesHasBeenSet() const { return m_supportedFeatureNamesHasBeenSet; }

    /**
     * <p> A list of features supported by the DB engine. Supported feature names
     * include the following. </p> <ul> <li> <p>s3Import</p> </li> </ul>
     */
    inline void SetSupportedFeatureNames(const Aws::Vector<Aws::String>& value) { m_supportedFeatureNamesHasBeenSet = true; m_supportedFeatureNames = value; }

    /**
     * <p> A list of features supported by the DB engine. Supported feature names
     * include the following. </p> <ul> <li> <p>s3Import</p> </li> </ul>
     */
    inline void SetSupportedFeatureNames(Aws::Vector<Aws::String>&& value) { m_supportedFeatureNamesHasBeenSet = true; m_supportedFeatureNames = std::move(value); }

    /**
     * <p> A list of features supported by the DB engine. Supported feature names
     * include the following. </p> <ul> <li> <p>s3Import</p> </li> </ul>
     */
    inline DBEngineVersion& WithSupportedFeatureNames(const Aws::Vector<Aws::String>& value) { SetSupportedFeatureNames(value); return *this;}

    /**
     * <p> A list of features supported by the DB engine. Supported feature names
     * include the following. </p> <ul> <li> <p>s3Import</p> </li> </ul>
     */
    inline DBEngineVersion& WithSupportedFeatureNames(Aws::Vector<Aws::String>&& value) { SetSupportedFeatureNames(std::move(value)); return *this;}

    /**
     * <p> A list of features supported by the DB engine. Supported feature names
     * include the following. </p> <ul> <li> <p>s3Import</p> </li> </ul>
     */
    inline DBEngineVersion& AddSupportedFeatureNames(const Aws::String& value) { m_supportedFeatureNamesHasBeenSet = true; m_supportedFeatureNames.push_back(value); return *this; }

    /**
     * <p> A list of features supported by the DB engine. Supported feature names
     * include the following. </p> <ul> <li> <p>s3Import</p> </li> </ul>
     */
    inline DBEngineVersion& AddSupportedFeatureNames(Aws::String&& value) { m_supportedFeatureNamesHasBeenSet = true; m_supportedFeatureNames.push_back(std::move(value)); return *this; }

    /**
     * <p> A list of features supported by the DB engine. Supported feature names
     * include the following. </p> <ul> <li> <p>s3Import</p> </li> </ul>
     */
    inline DBEngineVersion& AddSupportedFeatureNames(const char* value) { m_supportedFeatureNamesHasBeenSet = true; m_supportedFeatureNames.push_back(value); return *this; }


    /**
     * <p>The status of the DB engine version, either <code>available</code> or
     * <code>deprecated</code>.</p>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the DB engine version, either <code>available</code> or
     * <code>deprecated</code>.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the DB engine version, either <code>available</code> or
     * <code>deprecated</code>.</p>
     */
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the DB engine version, either <code>available</code> or
     * <code>deprecated</code>.</p>
     */
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the DB engine version, either <code>available</code> or
     * <code>deprecated</code>.</p>
     */
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }

    /**
     * <p>The status of the DB engine version, either <code>available</code> or
     * <code>deprecated</code>.</p>
     */
    inline DBEngineVersion& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the DB engine version, either <code>available</code> or
     * <code>deprecated</code>.</p>
     */
    inline DBEngineVersion& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}

    /**
     * <p>The status of the DB engine version, either <code>available</code> or
     * <code>deprecated</code>.</p>
     */
    inline DBEngineVersion& WithStatus(const char* value) { SetStatus(value); return *this;}

  private:

    Aws::String m_engine;
    bool m_engineHasBeenSet;

    Aws::String m_engineVersion;
    bool m_engineVersionHasBeenSet;

    Aws::String m_dBParameterGroupFamily;
    bool m_dBParameterGroupFamilyHasBeenSet;

    Aws::String m_dBEngineDescription;
    bool m_dBEngineDescriptionHasBeenSet;

    Aws::String m_dBEngineVersionDescription;
    bool m_dBEngineVersionDescriptionHasBeenSet;

    CharacterSet m_defaultCharacterSet;
    bool m_defaultCharacterSetHasBeenSet;

    Aws::Vector<CharacterSet> m_supportedCharacterSets;
    bool m_supportedCharacterSetsHasBeenSet;

    Aws::Vector<UpgradeTarget> m_validUpgradeTarget;
    bool m_validUpgradeTargetHasBeenSet;

    Aws::Vector<Timezone> m_supportedTimezones;
    bool m_supportedTimezonesHasBeenSet;

    Aws::Vector<Aws::String> m_exportableLogTypes;
    bool m_exportableLogTypesHasBeenSet;

    bool m_supportsLogExportsToCloudwatchLogs;
    bool m_supportsLogExportsToCloudwatchLogsHasBeenSet;

    bool m_supportsReadReplica;
    bool m_supportsReadReplicaHasBeenSet;

    Aws::Vector<Aws::String> m_supportedEngineModes;
    bool m_supportedEngineModesHasBeenSet;

    Aws::Vector<Aws::String> m_supportedFeatureNames;
    bool m_supportedFeatureNamesHasBeenSet;

    Aws::String m_status;
    bool m_statusHasBeenSet;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
