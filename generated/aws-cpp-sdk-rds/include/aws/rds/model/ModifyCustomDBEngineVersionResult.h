﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rds/model/CharacterSet.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <aws/rds/model/ResponseMetadata.h>
#include <aws/rds/model/UpgradeTarget.h>
#include <aws/rds/model/Timezone.h>
#include <aws/rds/model/Tag.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace RDS
{
namespace Model
{
  /**
   * <p>This data type is used as a response element in the action
   * <code>DescribeDBEngineVersions</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DBEngineVersion">AWS
   * API Reference</a></p>
   */
  class AWS_RDS_API ModifyCustomDBEngineVersionResult
  {
  public:
    ModifyCustomDBEngineVersionResult();
    ModifyCustomDBEngineVersionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    ModifyCustomDBEngineVersionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>The name of the database engine.</p>
     */
    inline const Aws::String& GetEngine() const{ return m_engine; }

    /**
     * <p>The name of the database engine.</p>
     */
    inline void SetEngine(const Aws::String& value) { m_engine = value; }

    /**
     * <p>The name of the database engine.</p>
     */
    inline void SetEngine(Aws::String&& value) { m_engine = std::move(value); }

    /**
     * <p>The name of the database engine.</p>
     */
    inline void SetEngine(const char* value) { m_engine.assign(value); }

    /**
     * <p>The name of the database engine.</p>
     */
    inline ModifyCustomDBEngineVersionResult& WithEngine(const Aws::String& value) { SetEngine(value); return *this;}

    /**
     * <p>The name of the database engine.</p>
     */
    inline ModifyCustomDBEngineVersionResult& WithEngine(Aws::String&& value) { SetEngine(std::move(value)); return *this;}

    /**
     * <p>The name of the database engine.</p>
     */
    inline ModifyCustomDBEngineVersionResult& WithEngine(const char* value) { SetEngine(value); return *this;}


    /**
     * <p>The version number of the database engine.</p>
     */
    inline const Aws::String& GetEngineVersion() const{ return m_engineVersion; }

    /**
     * <p>The version number of the database engine.</p>
     */
    inline void SetEngineVersion(const Aws::String& value) { m_engineVersion = value; }

    /**
     * <p>The version number of the database engine.</p>
     */
    inline void SetEngineVersion(Aws::String&& value) { m_engineVersion = std::move(value); }

    /**
     * <p>The version number of the database engine.</p>
     */
    inline void SetEngineVersion(const char* value) { m_engineVersion.assign(value); }

    /**
     * <p>The version number of the database engine.</p>
     */
    inline ModifyCustomDBEngineVersionResult& WithEngineVersion(const Aws::String& value) { SetEngineVersion(value); return *this;}

    /**
     * <p>The version number of the database engine.</p>
     */
    inline ModifyCustomDBEngineVersionResult& WithEngineVersion(Aws::String&& value) { SetEngineVersion(std::move(value)); return *this;}

    /**
     * <p>The version number of the database engine.</p>
     */
    inline ModifyCustomDBEngineVersionResult& WithEngineVersion(const char* value) { SetEngineVersion(value); return *this;}


    /**
     * <p>The name of the DB parameter group family for the database engine.</p>
     */
    inline const Aws::String& GetDBParameterGroupFamily() const{ return m_dBParameterGroupFamily; }

    /**
     * <p>The name of the DB parameter group family for the database engine.</p>
     */
    inline void SetDBParameterGroupFamily(const Aws::String& value) { m_dBParameterGroupFamily = value; }

    /**
     * <p>The name of the DB parameter group family for the database engine.</p>
     */
    inline void SetDBParameterGroupFamily(Aws::String&& value) { m_dBParameterGroupFamily = std::move(value); }

    /**
     * <p>The name of the DB parameter group family for the database engine.</p>
     */
    inline void SetDBParameterGroupFamily(const char* value) { m_dBParameterGroupFamily.assign(value); }

    /**
     * <p>The name of the DB parameter group family for the database engine.</p>
     */
    inline ModifyCustomDBEngineVersionResult& WithDBParameterGroupFamily(const Aws::String& value) { SetDBParameterGroupFamily(value); return *this;}

    /**
     * <p>The name of the DB parameter group family for the database engine.</p>
     */
    inline ModifyCustomDBEngineVersionResult& WithDBParameterGroupFamily(Aws::String&& value) { SetDBParameterGroupFamily(std::move(value)); return *this;}

    /**
     * <p>The name of the DB parameter group family for the database engine.</p>
     */
    inline ModifyCustomDBEngineVersionResult& WithDBParameterGroupFamily(const char* value) { SetDBParameterGroupFamily(value); return *this;}


    /**
     * <p>The description of the database engine.</p>
     */
    inline const Aws::String& GetDBEngineDescription() const{ return m_dBEngineDescription; }

    /**
     * <p>The description of the database engine.</p>
     */
    inline void SetDBEngineDescription(const Aws::String& value) { m_dBEngineDescription = value; }

    /**
     * <p>The description of the database engine.</p>
     */
    inline void SetDBEngineDescription(Aws::String&& value) { m_dBEngineDescription = std::move(value); }

    /**
     * <p>The description of the database engine.</p>
     */
    inline void SetDBEngineDescription(const char* value) { m_dBEngineDescription.assign(value); }

    /**
     * <p>The description of the database engine.</p>
     */
    inline ModifyCustomDBEngineVersionResult& WithDBEngineDescription(const Aws::String& value) { SetDBEngineDescription(value); return *this;}

    /**
     * <p>The description of the database engine.</p>
     */
    inline ModifyCustomDBEngineVersionResult& WithDBEngineDescription(Aws::String&& value) { SetDBEngineDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the database engine.</p>
     */
    inline ModifyCustomDBEngineVersionResult& WithDBEngineDescription(const char* value) { SetDBEngineDescription(value); return *this;}


    /**
     * <p>The description of the database engine version.</p>
     */
    inline const Aws::String& GetDBEngineVersionDescription() const{ return m_dBEngineVersionDescription; }

    /**
     * <p>The description of the database engine version.</p>
     */
    inline void SetDBEngineVersionDescription(const Aws::String& value) { m_dBEngineVersionDescription = value; }

    /**
     * <p>The description of the database engine version.</p>
     */
    inline void SetDBEngineVersionDescription(Aws::String&& value) { m_dBEngineVersionDescription = std::move(value); }

    /**
     * <p>The description of the database engine version.</p>
     */
    inline void SetDBEngineVersionDescription(const char* value) { m_dBEngineVersionDescription.assign(value); }

    /**
     * <p>The description of the database engine version.</p>
     */
    inline ModifyCustomDBEngineVersionResult& WithDBEngineVersionDescription(const Aws::String& value) { SetDBEngineVersionDescription(value); return *this;}

    /**
     * <p>The description of the database engine version.</p>
     */
    inline ModifyCustomDBEngineVersionResult& WithDBEngineVersionDescription(Aws::String&& value) { SetDBEngineVersionDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the database engine version.</p>
     */
    inline ModifyCustomDBEngineVersionResult& WithDBEngineVersionDescription(const char* value) { SetDBEngineVersionDescription(value); return *this;}


    /**
     * <p>The default character set for new instances of this engine version, if the
     * <code>CharacterSetName</code> parameter of the CreateDBInstance API isn't
     * specified.</p>
     */
    inline const CharacterSet& GetDefaultCharacterSet() const{ return m_defaultCharacterSet; }

    /**
     * <p>The default character set for new instances of this engine version, if the
     * <code>CharacterSetName</code> parameter of the CreateDBInstance API isn't
     * specified.</p>
     */
    inline void SetDefaultCharacterSet(const CharacterSet& value) { m_defaultCharacterSet = value; }

    /**
     * <p>The default character set for new instances of this engine version, if the
     * <code>CharacterSetName</code> parameter of the CreateDBInstance API isn't
     * specified.</p>
     */
    inline void SetDefaultCharacterSet(CharacterSet&& value) { m_defaultCharacterSet = std::move(value); }

    /**
     * <p>The default character set for new instances of this engine version, if the
     * <code>CharacterSetName</code> parameter of the CreateDBInstance API isn't
     * specified.</p>
     */
    inline ModifyCustomDBEngineVersionResult& WithDefaultCharacterSet(const CharacterSet& value) { SetDefaultCharacterSet(value); return *this;}

    /**
     * <p>The default character set for new instances of this engine version, if the
     * <code>CharacterSetName</code> parameter of the CreateDBInstance API isn't
     * specified.</p>
     */
    inline ModifyCustomDBEngineVersionResult& WithDefaultCharacterSet(CharacterSet&& value) { SetDefaultCharacterSet(std::move(value)); return *this;}


    /**
     * <p>A list of the character sets supported by this engine for the
     * <code>CharacterSetName</code> parameter of the <code>CreateDBInstance</code>
     * operation.</p>
     */
    inline const Aws::Vector<CharacterSet>& GetSupportedCharacterSets() const{ return m_supportedCharacterSets; }

    /**
     * <p>A list of the character sets supported by this engine for the
     * <code>CharacterSetName</code> parameter of the <code>CreateDBInstance</code>
     * operation.</p>
     */
    inline void SetSupportedCharacterSets(const Aws::Vector<CharacterSet>& value) { m_supportedCharacterSets = value; }

    /**
     * <p>A list of the character sets supported by this engine for the
     * <code>CharacterSetName</code> parameter of the <code>CreateDBInstance</code>
     * operation.</p>
     */
    inline void SetSupportedCharacterSets(Aws::Vector<CharacterSet>&& value) { m_supportedCharacterSets = std::move(value); }

    /**
     * <p>A list of the character sets supported by this engine for the
     * <code>CharacterSetName</code> parameter of the <code>CreateDBInstance</code>
     * operation.</p>
     */
    inline ModifyCustomDBEngineVersionResult& WithSupportedCharacterSets(const Aws::Vector<CharacterSet>& value) { SetSupportedCharacterSets(value); return *this;}

    /**
     * <p>A list of the character sets supported by this engine for the
     * <code>CharacterSetName</code> parameter of the <code>CreateDBInstance</code>
     * operation.</p>
     */
    inline ModifyCustomDBEngineVersionResult& WithSupportedCharacterSets(Aws::Vector<CharacterSet>&& value) { SetSupportedCharacterSets(std::move(value)); return *this;}

    /**
     * <p>A list of the character sets supported by this engine for the
     * <code>CharacterSetName</code> parameter of the <code>CreateDBInstance</code>
     * operation.</p>
     */
    inline ModifyCustomDBEngineVersionResult& AddSupportedCharacterSets(const CharacterSet& value) { m_supportedCharacterSets.push_back(value); return *this; }

    /**
     * <p>A list of the character sets supported by this engine for the
     * <code>CharacterSetName</code> parameter of the <code>CreateDBInstance</code>
     * operation.</p>
     */
    inline ModifyCustomDBEngineVersionResult& AddSupportedCharacterSets(CharacterSet&& value) { m_supportedCharacterSets.push_back(std::move(value)); return *this; }


    /**
     * <p>A list of the character sets supported by the Oracle DB engine for the
     * <code>NcharCharacterSetName</code> parameter of the
     * <code>CreateDBInstance</code> operation.</p>
     */
    inline const Aws::Vector<CharacterSet>& GetSupportedNcharCharacterSets() const{ return m_supportedNcharCharacterSets; }

    /**
     * <p>A list of the character sets supported by the Oracle DB engine for the
     * <code>NcharCharacterSetName</code> parameter of the
     * <code>CreateDBInstance</code> operation.</p>
     */
    inline void SetSupportedNcharCharacterSets(const Aws::Vector<CharacterSet>& value) { m_supportedNcharCharacterSets = value; }

    /**
     * <p>A list of the character sets supported by the Oracle DB engine for the
     * <code>NcharCharacterSetName</code> parameter of the
     * <code>CreateDBInstance</code> operation.</p>
     */
    inline void SetSupportedNcharCharacterSets(Aws::Vector<CharacterSet>&& value) { m_supportedNcharCharacterSets = std::move(value); }

    /**
     * <p>A list of the character sets supported by the Oracle DB engine for the
     * <code>NcharCharacterSetName</code> parameter of the
     * <code>CreateDBInstance</code> operation.</p>
     */
    inline ModifyCustomDBEngineVersionResult& WithSupportedNcharCharacterSets(const Aws::Vector<CharacterSet>& value) { SetSupportedNcharCharacterSets(value); return *this;}

    /**
     * <p>A list of the character sets supported by the Oracle DB engine for the
     * <code>NcharCharacterSetName</code> parameter of the
     * <code>CreateDBInstance</code> operation.</p>
     */
    inline ModifyCustomDBEngineVersionResult& WithSupportedNcharCharacterSets(Aws::Vector<CharacterSet>&& value) { SetSupportedNcharCharacterSets(std::move(value)); return *this;}

    /**
     * <p>A list of the character sets supported by the Oracle DB engine for the
     * <code>NcharCharacterSetName</code> parameter of the
     * <code>CreateDBInstance</code> operation.</p>
     */
    inline ModifyCustomDBEngineVersionResult& AddSupportedNcharCharacterSets(const CharacterSet& value) { m_supportedNcharCharacterSets.push_back(value); return *this; }

    /**
     * <p>A list of the character sets supported by the Oracle DB engine for the
     * <code>NcharCharacterSetName</code> parameter of the
     * <code>CreateDBInstance</code> operation.</p>
     */
    inline ModifyCustomDBEngineVersionResult& AddSupportedNcharCharacterSets(CharacterSet&& value) { m_supportedNcharCharacterSets.push_back(std::move(value)); return *this; }


    /**
     * <p>A list of engine versions that this database engine version can be upgraded
     * to.</p>
     */
    inline const Aws::Vector<UpgradeTarget>& GetValidUpgradeTarget() const{ return m_validUpgradeTarget; }

    /**
     * <p>A list of engine versions that this database engine version can be upgraded
     * to.</p>
     */
    inline void SetValidUpgradeTarget(const Aws::Vector<UpgradeTarget>& value) { m_validUpgradeTarget = value; }

    /**
     * <p>A list of engine versions that this database engine version can be upgraded
     * to.</p>
     */
    inline void SetValidUpgradeTarget(Aws::Vector<UpgradeTarget>&& value) { m_validUpgradeTarget = std::move(value); }

    /**
     * <p>A list of engine versions that this database engine version can be upgraded
     * to.</p>
     */
    inline ModifyCustomDBEngineVersionResult& WithValidUpgradeTarget(const Aws::Vector<UpgradeTarget>& value) { SetValidUpgradeTarget(value); return *this;}

    /**
     * <p>A list of engine versions that this database engine version can be upgraded
     * to.</p>
     */
    inline ModifyCustomDBEngineVersionResult& WithValidUpgradeTarget(Aws::Vector<UpgradeTarget>&& value) { SetValidUpgradeTarget(std::move(value)); return *this;}

    /**
     * <p>A list of engine versions that this database engine version can be upgraded
     * to.</p>
     */
    inline ModifyCustomDBEngineVersionResult& AddValidUpgradeTarget(const UpgradeTarget& value) { m_validUpgradeTarget.push_back(value); return *this; }

    /**
     * <p>A list of engine versions that this database engine version can be upgraded
     * to.</p>
     */
    inline ModifyCustomDBEngineVersionResult& AddValidUpgradeTarget(UpgradeTarget&& value) { m_validUpgradeTarget.push_back(std::move(value)); return *this; }


    /**
     * <p>A list of the time zones supported by this engine for the
     * <code>Timezone</code> parameter of the <code>CreateDBInstance</code> action.</p>
     */
    inline const Aws::Vector<Timezone>& GetSupportedTimezones() const{ return m_supportedTimezones; }

    /**
     * <p>A list of the time zones supported by this engine for the
     * <code>Timezone</code> parameter of the <code>CreateDBInstance</code> action.</p>
     */
    inline void SetSupportedTimezones(const Aws::Vector<Timezone>& value) { m_supportedTimezones = value; }

    /**
     * <p>A list of the time zones supported by this engine for the
     * <code>Timezone</code> parameter of the <code>CreateDBInstance</code> action.</p>
     */
    inline void SetSupportedTimezones(Aws::Vector<Timezone>&& value) { m_supportedTimezones = std::move(value); }

    /**
     * <p>A list of the time zones supported by this engine for the
     * <code>Timezone</code> parameter of the <code>CreateDBInstance</code> action.</p>
     */
    inline ModifyCustomDBEngineVersionResult& WithSupportedTimezones(const Aws::Vector<Timezone>& value) { SetSupportedTimezones(value); return *this;}

    /**
     * <p>A list of the time zones supported by this engine for the
     * <code>Timezone</code> parameter of the <code>CreateDBInstance</code> action.</p>
     */
    inline ModifyCustomDBEngineVersionResult& WithSupportedTimezones(Aws::Vector<Timezone>&& value) { SetSupportedTimezones(std::move(value)); return *this;}

    /**
     * <p>A list of the time zones supported by this engine for the
     * <code>Timezone</code> parameter of the <code>CreateDBInstance</code> action.</p>
     */
    inline ModifyCustomDBEngineVersionResult& AddSupportedTimezones(const Timezone& value) { m_supportedTimezones.push_back(value); return *this; }

    /**
     * <p>A list of the time zones supported by this engine for the
     * <code>Timezone</code> parameter of the <code>CreateDBInstance</code> action.</p>
     */
    inline ModifyCustomDBEngineVersionResult& AddSupportedTimezones(Timezone&& value) { m_supportedTimezones.push_back(std::move(value)); return *this; }


    /**
     * <p>The types of logs that the database engine has available for export to
     * CloudWatch Logs.</p>
     */
    inline const Aws::Vector<Aws::String>& GetExportableLogTypes() const{ return m_exportableLogTypes; }

    /**
     * <p>The types of logs that the database engine has available for export to
     * CloudWatch Logs.</p>
     */
    inline void SetExportableLogTypes(const Aws::Vector<Aws::String>& value) { m_exportableLogTypes = value; }

    /**
     * <p>The types of logs that the database engine has available for export to
     * CloudWatch Logs.</p>
     */
    inline void SetExportableLogTypes(Aws::Vector<Aws::String>&& value) { m_exportableLogTypes = std::move(value); }

    /**
     * <p>The types of logs that the database engine has available for export to
     * CloudWatch Logs.</p>
     */
    inline ModifyCustomDBEngineVersionResult& WithExportableLogTypes(const Aws::Vector<Aws::String>& value) { SetExportableLogTypes(value); return *this;}

    /**
     * <p>The types of logs that the database engine has available for export to
     * CloudWatch Logs.</p>
     */
    inline ModifyCustomDBEngineVersionResult& WithExportableLogTypes(Aws::Vector<Aws::String>&& value) { SetExportableLogTypes(std::move(value)); return *this;}

    /**
     * <p>The types of logs that the database engine has available for export to
     * CloudWatch Logs.</p>
     */
    inline ModifyCustomDBEngineVersionResult& AddExportableLogTypes(const Aws::String& value) { m_exportableLogTypes.push_back(value); return *this; }

    /**
     * <p>The types of logs that the database engine has available for export to
     * CloudWatch Logs.</p>
     */
    inline ModifyCustomDBEngineVersionResult& AddExportableLogTypes(Aws::String&& value) { m_exportableLogTypes.push_back(std::move(value)); return *this; }

    /**
     * <p>The types of logs that the database engine has available for export to
     * CloudWatch Logs.</p>
     */
    inline ModifyCustomDBEngineVersionResult& AddExportableLogTypes(const char* value) { m_exportableLogTypes.push_back(value); return *this; }


    /**
     * <p>A value that indicates whether the engine version supports exporting the log
     * types specified by ExportableLogTypes to CloudWatch Logs.</p>
     */
    inline bool GetSupportsLogExportsToCloudwatchLogs() const{ return m_supportsLogExportsToCloudwatchLogs; }

    /**
     * <p>A value that indicates whether the engine version supports exporting the log
     * types specified by ExportableLogTypes to CloudWatch Logs.</p>
     */
    inline void SetSupportsLogExportsToCloudwatchLogs(bool value) { m_supportsLogExportsToCloudwatchLogs = value; }

    /**
     * <p>A value that indicates whether the engine version supports exporting the log
     * types specified by ExportableLogTypes to CloudWatch Logs.</p>
     */
    inline ModifyCustomDBEngineVersionResult& WithSupportsLogExportsToCloudwatchLogs(bool value) { SetSupportsLogExportsToCloudwatchLogs(value); return *this;}


    /**
     * <p>Indicates whether the database engine version supports read replicas.</p>
     */
    inline bool GetSupportsReadReplica() const{ return m_supportsReadReplica; }

    /**
     * <p>Indicates whether the database engine version supports read replicas.</p>
     */
    inline void SetSupportsReadReplica(bool value) { m_supportsReadReplica = value; }

    /**
     * <p>Indicates whether the database engine version supports read replicas.</p>
     */
    inline ModifyCustomDBEngineVersionResult& WithSupportsReadReplica(bool value) { SetSupportsReadReplica(value); return *this;}


    /**
     * <p>A list of the supported DB engine modes.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSupportedEngineModes() const{ return m_supportedEngineModes; }

    /**
     * <p>A list of the supported DB engine modes.</p>
     */
    inline void SetSupportedEngineModes(const Aws::Vector<Aws::String>& value) { m_supportedEngineModes = value; }

    /**
     * <p>A list of the supported DB engine modes.</p>
     */
    inline void SetSupportedEngineModes(Aws::Vector<Aws::String>&& value) { m_supportedEngineModes = std::move(value); }

    /**
     * <p>A list of the supported DB engine modes.</p>
     */
    inline ModifyCustomDBEngineVersionResult& WithSupportedEngineModes(const Aws::Vector<Aws::String>& value) { SetSupportedEngineModes(value); return *this;}

    /**
     * <p>A list of the supported DB engine modes.</p>
     */
    inline ModifyCustomDBEngineVersionResult& WithSupportedEngineModes(Aws::Vector<Aws::String>&& value) { SetSupportedEngineModes(std::move(value)); return *this;}

    /**
     * <p>A list of the supported DB engine modes.</p>
     */
    inline ModifyCustomDBEngineVersionResult& AddSupportedEngineModes(const Aws::String& value) { m_supportedEngineModes.push_back(value); return *this; }

    /**
     * <p>A list of the supported DB engine modes.</p>
     */
    inline ModifyCustomDBEngineVersionResult& AddSupportedEngineModes(Aws::String&& value) { m_supportedEngineModes.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of the supported DB engine modes.</p>
     */
    inline ModifyCustomDBEngineVersionResult& AddSupportedEngineModes(const char* value) { m_supportedEngineModes.push_back(value); return *this; }


    /**
     * <p>A list of features supported by the DB engine.</p> <p>The supported features
     * vary by DB engine and DB engine version.</p> <p>To determine the supported
     * features for a specific DB engine and DB engine version using the CLI, use the
     * following command:</p> <p> <code>aws rds describe-db-engine-versions --engine
     * &lt;engine_name&gt; --engine-version &lt;engine_version&gt;</code> </p> <p>For
     * example, to determine the supported features for RDS for PostgreSQL version 13.3
     * using the CLI, use the following command:</p> <p> <code>aws rds
     * describe-db-engine-versions --engine postgres --engine-version 13.3</code> </p>
     * <p>The supported features are listed under <code>SupportedFeatureNames</code> in
     * the output.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSupportedFeatureNames() const{ return m_supportedFeatureNames; }

    /**
     * <p>A list of features supported by the DB engine.</p> <p>The supported features
     * vary by DB engine and DB engine version.</p> <p>To determine the supported
     * features for a specific DB engine and DB engine version using the CLI, use the
     * following command:</p> <p> <code>aws rds describe-db-engine-versions --engine
     * &lt;engine_name&gt; --engine-version &lt;engine_version&gt;</code> </p> <p>For
     * example, to determine the supported features for RDS for PostgreSQL version 13.3
     * using the CLI, use the following command:</p> <p> <code>aws rds
     * describe-db-engine-versions --engine postgres --engine-version 13.3</code> </p>
     * <p>The supported features are listed under <code>SupportedFeatureNames</code> in
     * the output.</p>
     */
    inline void SetSupportedFeatureNames(const Aws::Vector<Aws::String>& value) { m_supportedFeatureNames = value; }

    /**
     * <p>A list of features supported by the DB engine.</p> <p>The supported features
     * vary by DB engine and DB engine version.</p> <p>To determine the supported
     * features for a specific DB engine and DB engine version using the CLI, use the
     * following command:</p> <p> <code>aws rds describe-db-engine-versions --engine
     * &lt;engine_name&gt; --engine-version &lt;engine_version&gt;</code> </p> <p>For
     * example, to determine the supported features for RDS for PostgreSQL version 13.3
     * using the CLI, use the following command:</p> <p> <code>aws rds
     * describe-db-engine-versions --engine postgres --engine-version 13.3</code> </p>
     * <p>The supported features are listed under <code>SupportedFeatureNames</code> in
     * the output.</p>
     */
    inline void SetSupportedFeatureNames(Aws::Vector<Aws::String>&& value) { m_supportedFeatureNames = std::move(value); }

    /**
     * <p>A list of features supported by the DB engine.</p> <p>The supported features
     * vary by DB engine and DB engine version.</p> <p>To determine the supported
     * features for a specific DB engine and DB engine version using the CLI, use the
     * following command:</p> <p> <code>aws rds describe-db-engine-versions --engine
     * &lt;engine_name&gt; --engine-version &lt;engine_version&gt;</code> </p> <p>For
     * example, to determine the supported features for RDS for PostgreSQL version 13.3
     * using the CLI, use the following command:</p> <p> <code>aws rds
     * describe-db-engine-versions --engine postgres --engine-version 13.3</code> </p>
     * <p>The supported features are listed under <code>SupportedFeatureNames</code> in
     * the output.</p>
     */
    inline ModifyCustomDBEngineVersionResult& WithSupportedFeatureNames(const Aws::Vector<Aws::String>& value) { SetSupportedFeatureNames(value); return *this;}

    /**
     * <p>A list of features supported by the DB engine.</p> <p>The supported features
     * vary by DB engine and DB engine version.</p> <p>To determine the supported
     * features for a specific DB engine and DB engine version using the CLI, use the
     * following command:</p> <p> <code>aws rds describe-db-engine-versions --engine
     * &lt;engine_name&gt; --engine-version &lt;engine_version&gt;</code> </p> <p>For
     * example, to determine the supported features for RDS for PostgreSQL version 13.3
     * using the CLI, use the following command:</p> <p> <code>aws rds
     * describe-db-engine-versions --engine postgres --engine-version 13.3</code> </p>
     * <p>The supported features are listed under <code>SupportedFeatureNames</code> in
     * the output.</p>
     */
    inline ModifyCustomDBEngineVersionResult& WithSupportedFeatureNames(Aws::Vector<Aws::String>&& value) { SetSupportedFeatureNames(std::move(value)); return *this;}

    /**
     * <p>A list of features supported by the DB engine.</p> <p>The supported features
     * vary by DB engine and DB engine version.</p> <p>To determine the supported
     * features for a specific DB engine and DB engine version using the CLI, use the
     * following command:</p> <p> <code>aws rds describe-db-engine-versions --engine
     * &lt;engine_name&gt; --engine-version &lt;engine_version&gt;</code> </p> <p>For
     * example, to determine the supported features for RDS for PostgreSQL version 13.3
     * using the CLI, use the following command:</p> <p> <code>aws rds
     * describe-db-engine-versions --engine postgres --engine-version 13.3</code> </p>
     * <p>The supported features are listed under <code>SupportedFeatureNames</code> in
     * the output.</p>
     */
    inline ModifyCustomDBEngineVersionResult& AddSupportedFeatureNames(const Aws::String& value) { m_supportedFeatureNames.push_back(value); return *this; }

    /**
     * <p>A list of features supported by the DB engine.</p> <p>The supported features
     * vary by DB engine and DB engine version.</p> <p>To determine the supported
     * features for a specific DB engine and DB engine version using the CLI, use the
     * following command:</p> <p> <code>aws rds describe-db-engine-versions --engine
     * &lt;engine_name&gt; --engine-version &lt;engine_version&gt;</code> </p> <p>For
     * example, to determine the supported features for RDS for PostgreSQL version 13.3
     * using the CLI, use the following command:</p> <p> <code>aws rds
     * describe-db-engine-versions --engine postgres --engine-version 13.3</code> </p>
     * <p>The supported features are listed under <code>SupportedFeatureNames</code> in
     * the output.</p>
     */
    inline ModifyCustomDBEngineVersionResult& AddSupportedFeatureNames(Aws::String&& value) { m_supportedFeatureNames.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of features supported by the DB engine.</p> <p>The supported features
     * vary by DB engine and DB engine version.</p> <p>To determine the supported
     * features for a specific DB engine and DB engine version using the CLI, use the
     * following command:</p> <p> <code>aws rds describe-db-engine-versions --engine
     * &lt;engine_name&gt; --engine-version &lt;engine_version&gt;</code> </p> <p>For
     * example, to determine the supported features for RDS for PostgreSQL version 13.3
     * using the CLI, use the following command:</p> <p> <code>aws rds
     * describe-db-engine-versions --engine postgres --engine-version 13.3</code> </p>
     * <p>The supported features are listed under <code>SupportedFeatureNames</code> in
     * the output.</p>
     */
    inline ModifyCustomDBEngineVersionResult& AddSupportedFeatureNames(const char* value) { m_supportedFeatureNames.push_back(value); return *this; }


    /**
     * <p>The status of the DB engine version, either <code>available</code> or
     * <code>deprecated</code>.</p>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the DB engine version, either <code>available</code> or
     * <code>deprecated</code>.</p>
     */
    inline void SetStatus(const Aws::String& value) { m_status = value; }

    /**
     * <p>The status of the DB engine version, either <code>available</code> or
     * <code>deprecated</code>.</p>
     */
    inline void SetStatus(Aws::String&& value) { m_status = std::move(value); }

    /**
     * <p>The status of the DB engine version, either <code>available</code> or
     * <code>deprecated</code>.</p>
     */
    inline void SetStatus(const char* value) { m_status.assign(value); }

    /**
     * <p>The status of the DB engine version, either <code>available</code> or
     * <code>deprecated</code>.</p>
     */
    inline ModifyCustomDBEngineVersionResult& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the DB engine version, either <code>available</code> or
     * <code>deprecated</code>.</p>
     */
    inline ModifyCustomDBEngineVersionResult& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}

    /**
     * <p>The status of the DB engine version, either <code>available</code> or
     * <code>deprecated</code>.</p>
     */
    inline ModifyCustomDBEngineVersionResult& WithStatus(const char* value) { SetStatus(value); return *this;}


    /**
     * <p>A value that indicates whether you can use Aurora parallel query with a
     * specific DB engine version.</p>
     */
    inline bool GetSupportsParallelQuery() const{ return m_supportsParallelQuery; }

    /**
     * <p>A value that indicates whether you can use Aurora parallel query with a
     * specific DB engine version.</p>
     */
    inline void SetSupportsParallelQuery(bool value) { m_supportsParallelQuery = value; }

    /**
     * <p>A value that indicates whether you can use Aurora parallel query with a
     * specific DB engine version.</p>
     */
    inline ModifyCustomDBEngineVersionResult& WithSupportsParallelQuery(bool value) { SetSupportsParallelQuery(value); return *this;}


    /**
     * <p>A value that indicates whether you can use Aurora global databases with a
     * specific DB engine version.</p>
     */
    inline bool GetSupportsGlobalDatabases() const{ return m_supportsGlobalDatabases; }

    /**
     * <p>A value that indicates whether you can use Aurora global databases with a
     * specific DB engine version.</p>
     */
    inline void SetSupportsGlobalDatabases(bool value) { m_supportsGlobalDatabases = value; }

    /**
     * <p>A value that indicates whether you can use Aurora global databases with a
     * specific DB engine version.</p>
     */
    inline ModifyCustomDBEngineVersionResult& WithSupportsGlobalDatabases(bool value) { SetSupportsGlobalDatabases(value); return *this;}


    /**
     * <p>The major engine version of the CEV.</p>
     */
    inline const Aws::String& GetMajorEngineVersion() const{ return m_majorEngineVersion; }

    /**
     * <p>The major engine version of the CEV.</p>
     */
    inline void SetMajorEngineVersion(const Aws::String& value) { m_majorEngineVersion = value; }

    /**
     * <p>The major engine version of the CEV.</p>
     */
    inline void SetMajorEngineVersion(Aws::String&& value) { m_majorEngineVersion = std::move(value); }

    /**
     * <p>The major engine version of the CEV.</p>
     */
    inline void SetMajorEngineVersion(const char* value) { m_majorEngineVersion.assign(value); }

    /**
     * <p>The major engine version of the CEV.</p>
     */
    inline ModifyCustomDBEngineVersionResult& WithMajorEngineVersion(const Aws::String& value) { SetMajorEngineVersion(value); return *this;}

    /**
     * <p>The major engine version of the CEV.</p>
     */
    inline ModifyCustomDBEngineVersionResult& WithMajorEngineVersion(Aws::String&& value) { SetMajorEngineVersion(std::move(value)); return *this;}

    /**
     * <p>The major engine version of the CEV.</p>
     */
    inline ModifyCustomDBEngineVersionResult& WithMajorEngineVersion(const char* value) { SetMajorEngineVersion(value); return *this;}


    /**
     * <p>The name of the Amazon S3 bucket that contains your database installation
     * files.</p>
     */
    inline const Aws::String& GetDatabaseInstallationFilesS3BucketName() const{ return m_databaseInstallationFilesS3BucketName; }

    /**
     * <p>The name of the Amazon S3 bucket that contains your database installation
     * files.</p>
     */
    inline void SetDatabaseInstallationFilesS3BucketName(const Aws::String& value) { m_databaseInstallationFilesS3BucketName = value; }

    /**
     * <p>The name of the Amazon S3 bucket that contains your database installation
     * files.</p>
     */
    inline void SetDatabaseInstallationFilesS3BucketName(Aws::String&& value) { m_databaseInstallationFilesS3BucketName = std::move(value); }

    /**
     * <p>The name of the Amazon S3 bucket that contains your database installation
     * files.</p>
     */
    inline void SetDatabaseInstallationFilesS3BucketName(const char* value) { m_databaseInstallationFilesS3BucketName.assign(value); }

    /**
     * <p>The name of the Amazon S3 bucket that contains your database installation
     * files.</p>
     */
    inline ModifyCustomDBEngineVersionResult& WithDatabaseInstallationFilesS3BucketName(const Aws::String& value) { SetDatabaseInstallationFilesS3BucketName(value); return *this;}

    /**
     * <p>The name of the Amazon S3 bucket that contains your database installation
     * files.</p>
     */
    inline ModifyCustomDBEngineVersionResult& WithDatabaseInstallationFilesS3BucketName(Aws::String&& value) { SetDatabaseInstallationFilesS3BucketName(std::move(value)); return *this;}

    /**
     * <p>The name of the Amazon S3 bucket that contains your database installation
     * files.</p>
     */
    inline ModifyCustomDBEngineVersionResult& WithDatabaseInstallationFilesS3BucketName(const char* value) { SetDatabaseInstallationFilesS3BucketName(value); return *this;}


    /**
     * <p>The Amazon S3 directory that contains the database installation files. If not
     * specified, then no prefix is assumed.</p>
     */
    inline const Aws::String& GetDatabaseInstallationFilesS3Prefix() const{ return m_databaseInstallationFilesS3Prefix; }

    /**
     * <p>The Amazon S3 directory that contains the database installation files. If not
     * specified, then no prefix is assumed.</p>
     */
    inline void SetDatabaseInstallationFilesS3Prefix(const Aws::String& value) { m_databaseInstallationFilesS3Prefix = value; }

    /**
     * <p>The Amazon S3 directory that contains the database installation files. If not
     * specified, then no prefix is assumed.</p>
     */
    inline void SetDatabaseInstallationFilesS3Prefix(Aws::String&& value) { m_databaseInstallationFilesS3Prefix = std::move(value); }

    /**
     * <p>The Amazon S3 directory that contains the database installation files. If not
     * specified, then no prefix is assumed.</p>
     */
    inline void SetDatabaseInstallationFilesS3Prefix(const char* value) { m_databaseInstallationFilesS3Prefix.assign(value); }

    /**
     * <p>The Amazon S3 directory that contains the database installation files. If not
     * specified, then no prefix is assumed.</p>
     */
    inline ModifyCustomDBEngineVersionResult& WithDatabaseInstallationFilesS3Prefix(const Aws::String& value) { SetDatabaseInstallationFilesS3Prefix(value); return *this;}

    /**
     * <p>The Amazon S3 directory that contains the database installation files. If not
     * specified, then no prefix is assumed.</p>
     */
    inline ModifyCustomDBEngineVersionResult& WithDatabaseInstallationFilesS3Prefix(Aws::String&& value) { SetDatabaseInstallationFilesS3Prefix(std::move(value)); return *this;}

    /**
     * <p>The Amazon S3 directory that contains the database installation files. If not
     * specified, then no prefix is assumed.</p>
     */
    inline ModifyCustomDBEngineVersionResult& WithDatabaseInstallationFilesS3Prefix(const char* value) { SetDatabaseInstallationFilesS3Prefix(value); return *this;}


    /**
     * <p>The ARN of the custom engine version.</p>
     */
    inline const Aws::String& GetDBEngineVersionArn() const{ return m_dBEngineVersionArn; }

    /**
     * <p>The ARN of the custom engine version.</p>
     */
    inline void SetDBEngineVersionArn(const Aws::String& value) { m_dBEngineVersionArn = value; }

    /**
     * <p>The ARN of the custom engine version.</p>
     */
    inline void SetDBEngineVersionArn(Aws::String&& value) { m_dBEngineVersionArn = std::move(value); }

    /**
     * <p>The ARN of the custom engine version.</p>
     */
    inline void SetDBEngineVersionArn(const char* value) { m_dBEngineVersionArn.assign(value); }

    /**
     * <p>The ARN of the custom engine version.</p>
     */
    inline ModifyCustomDBEngineVersionResult& WithDBEngineVersionArn(const Aws::String& value) { SetDBEngineVersionArn(value); return *this;}

    /**
     * <p>The ARN of the custom engine version.</p>
     */
    inline ModifyCustomDBEngineVersionResult& WithDBEngineVersionArn(Aws::String&& value) { SetDBEngineVersionArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the custom engine version.</p>
     */
    inline ModifyCustomDBEngineVersionResult& WithDBEngineVersionArn(const char* value) { SetDBEngineVersionArn(value); return *this;}


    /**
     * <p>The Amazon Web Services KMS key identifier for an encrypted CEV. This
     * parameter is required for RDS Custom, but optional for Amazon RDS.</p>
     */
    inline const Aws::String& GetKMSKeyId() const{ return m_kMSKeyId; }

    /**
     * <p>The Amazon Web Services KMS key identifier for an encrypted CEV. This
     * parameter is required for RDS Custom, but optional for Amazon RDS.</p>
     */
    inline void SetKMSKeyId(const Aws::String& value) { m_kMSKeyId = value; }

    /**
     * <p>The Amazon Web Services KMS key identifier for an encrypted CEV. This
     * parameter is required for RDS Custom, but optional for Amazon RDS.</p>
     */
    inline void SetKMSKeyId(Aws::String&& value) { m_kMSKeyId = std::move(value); }

    /**
     * <p>The Amazon Web Services KMS key identifier for an encrypted CEV. This
     * parameter is required for RDS Custom, but optional for Amazon RDS.</p>
     */
    inline void SetKMSKeyId(const char* value) { m_kMSKeyId.assign(value); }

    /**
     * <p>The Amazon Web Services KMS key identifier for an encrypted CEV. This
     * parameter is required for RDS Custom, but optional for Amazon RDS.</p>
     */
    inline ModifyCustomDBEngineVersionResult& WithKMSKeyId(const Aws::String& value) { SetKMSKeyId(value); return *this;}

    /**
     * <p>The Amazon Web Services KMS key identifier for an encrypted CEV. This
     * parameter is required for RDS Custom, but optional for Amazon RDS.</p>
     */
    inline ModifyCustomDBEngineVersionResult& WithKMSKeyId(Aws::String&& value) { SetKMSKeyId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services KMS key identifier for an encrypted CEV. This
     * parameter is required for RDS Custom, but optional for Amazon RDS.</p>
     */
    inline ModifyCustomDBEngineVersionResult& WithKMSKeyId(const char* value) { SetKMSKeyId(value); return *this;}


    /**
     * <p>The creation time of the DB engine version.</p>
     */
    inline const Aws::Utils::DateTime& GetCreateTime() const{ return m_createTime; }

    /**
     * <p>The creation time of the DB engine version.</p>
     */
    inline void SetCreateTime(const Aws::Utils::DateTime& value) { m_createTime = value; }

    /**
     * <p>The creation time of the DB engine version.</p>
     */
    inline void SetCreateTime(Aws::Utils::DateTime&& value) { m_createTime = std::move(value); }

    /**
     * <p>The creation time of the DB engine version.</p>
     */
    inline ModifyCustomDBEngineVersionResult& WithCreateTime(const Aws::Utils::DateTime& value) { SetCreateTime(value); return *this;}

    /**
     * <p>The creation time of the DB engine version.</p>
     */
    inline ModifyCustomDBEngineVersionResult& WithCreateTime(Aws::Utils::DateTime&& value) { SetCreateTime(std::move(value)); return *this;}


    
    inline const Aws::Vector<Tag>& GetTagList() const{ return m_tagList; }

    
    inline void SetTagList(const Aws::Vector<Tag>& value) { m_tagList = value; }

    
    inline void SetTagList(Aws::Vector<Tag>&& value) { m_tagList = std::move(value); }

    
    inline ModifyCustomDBEngineVersionResult& WithTagList(const Aws::Vector<Tag>& value) { SetTagList(value); return *this;}

    
    inline ModifyCustomDBEngineVersionResult& WithTagList(Aws::Vector<Tag>&& value) { SetTagList(std::move(value)); return *this;}

    
    inline ModifyCustomDBEngineVersionResult& AddTagList(const Tag& value) { m_tagList.push_back(value); return *this; }

    
    inline ModifyCustomDBEngineVersionResult& AddTagList(Tag&& value) { m_tagList.push_back(std::move(value)); return *this; }


    /**
     * <p>A value that indicates whether the engine version supports Babelfish for
     * Aurora PostgreSQL.</p>
     */
    inline bool GetSupportsBabelfish() const{ return m_supportsBabelfish; }

    /**
     * <p>A value that indicates whether the engine version supports Babelfish for
     * Aurora PostgreSQL.</p>
     */
    inline void SetSupportsBabelfish(bool value) { m_supportsBabelfish = value; }

    /**
     * <p>A value that indicates whether the engine version supports Babelfish for
     * Aurora PostgreSQL.</p>
     */
    inline ModifyCustomDBEngineVersionResult& WithSupportsBabelfish(bool value) { SetSupportsBabelfish(value); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline ModifyCustomDBEngineVersionResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline ModifyCustomDBEngineVersionResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::String m_engine;

    Aws::String m_engineVersion;

    Aws::String m_dBParameterGroupFamily;

    Aws::String m_dBEngineDescription;

    Aws::String m_dBEngineVersionDescription;

    CharacterSet m_defaultCharacterSet;

    Aws::Vector<CharacterSet> m_supportedCharacterSets;

    Aws::Vector<CharacterSet> m_supportedNcharCharacterSets;

    Aws::Vector<UpgradeTarget> m_validUpgradeTarget;

    Aws::Vector<Timezone> m_supportedTimezones;

    Aws::Vector<Aws::String> m_exportableLogTypes;

    bool m_supportsLogExportsToCloudwatchLogs;

    bool m_supportsReadReplica;

    Aws::Vector<Aws::String> m_supportedEngineModes;

    Aws::Vector<Aws::String> m_supportedFeatureNames;

    Aws::String m_status;

    bool m_supportsParallelQuery;

    bool m_supportsGlobalDatabases;

    Aws::String m_majorEngineVersion;

    Aws::String m_databaseInstallationFilesS3BucketName;

    Aws::String m_databaseInstallationFilesS3Prefix;

    Aws::String m_dBEngineVersionArn;

    Aws::String m_kMSKeyId;

    Aws::Utils::DateTime m_createTime;

    Aws::Vector<Tag> m_tagList;

    bool m_supportsBabelfish;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
