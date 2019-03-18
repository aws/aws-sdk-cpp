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
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rds/model/GlobalClusterMember.h>
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
   * <p>A data type representing an Aurora global database.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/GlobalCluster">AWS
   * API Reference</a></p>
   */
  class AWS_RDS_API GlobalCluster
  {
  public:
    GlobalCluster();
    GlobalCluster(const Aws::Utils::Xml::XmlNode& xmlNode);
    GlobalCluster& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p> Contains a user-supplied global database cluster identifier. This identifier
     * is the unique key that identifies a global database cluster. </p>
     */
    inline const Aws::String& GetGlobalClusterIdentifier() const{ return m_globalClusterIdentifier; }

    /**
     * <p> Contains a user-supplied global database cluster identifier. This identifier
     * is the unique key that identifies a global database cluster. </p>
     */
    inline bool GlobalClusterIdentifierHasBeenSet() const { return m_globalClusterIdentifierHasBeenSet; }

    /**
     * <p> Contains a user-supplied global database cluster identifier. This identifier
     * is the unique key that identifies a global database cluster. </p>
     */
    inline void SetGlobalClusterIdentifier(const Aws::String& value) { m_globalClusterIdentifierHasBeenSet = true; m_globalClusterIdentifier = value; }

    /**
     * <p> Contains a user-supplied global database cluster identifier. This identifier
     * is the unique key that identifies a global database cluster. </p>
     */
    inline void SetGlobalClusterIdentifier(Aws::String&& value) { m_globalClusterIdentifierHasBeenSet = true; m_globalClusterIdentifier = std::move(value); }

    /**
     * <p> Contains a user-supplied global database cluster identifier. This identifier
     * is the unique key that identifies a global database cluster. </p>
     */
    inline void SetGlobalClusterIdentifier(const char* value) { m_globalClusterIdentifierHasBeenSet = true; m_globalClusterIdentifier.assign(value); }

    /**
     * <p> Contains a user-supplied global database cluster identifier. This identifier
     * is the unique key that identifies a global database cluster. </p>
     */
    inline GlobalCluster& WithGlobalClusterIdentifier(const Aws::String& value) { SetGlobalClusterIdentifier(value); return *this;}

    /**
     * <p> Contains a user-supplied global database cluster identifier. This identifier
     * is the unique key that identifies a global database cluster. </p>
     */
    inline GlobalCluster& WithGlobalClusterIdentifier(Aws::String&& value) { SetGlobalClusterIdentifier(std::move(value)); return *this;}

    /**
     * <p> Contains a user-supplied global database cluster identifier. This identifier
     * is the unique key that identifies a global database cluster. </p>
     */
    inline GlobalCluster& WithGlobalClusterIdentifier(const char* value) { SetGlobalClusterIdentifier(value); return *this;}


    /**
     * <p> The AWS Region-unique, immutable identifier for the global database cluster.
     * This identifier is found in AWS CloudTrail log entries whenever the AWS KMS key
     * for the DB cluster is accessed. </p>
     */
    inline const Aws::String& GetGlobalClusterResourceId() const{ return m_globalClusterResourceId; }

    /**
     * <p> The AWS Region-unique, immutable identifier for the global database cluster.
     * This identifier is found in AWS CloudTrail log entries whenever the AWS KMS key
     * for the DB cluster is accessed. </p>
     */
    inline bool GlobalClusterResourceIdHasBeenSet() const { return m_globalClusterResourceIdHasBeenSet; }

    /**
     * <p> The AWS Region-unique, immutable identifier for the global database cluster.
     * This identifier is found in AWS CloudTrail log entries whenever the AWS KMS key
     * for the DB cluster is accessed. </p>
     */
    inline void SetGlobalClusterResourceId(const Aws::String& value) { m_globalClusterResourceIdHasBeenSet = true; m_globalClusterResourceId = value; }

    /**
     * <p> The AWS Region-unique, immutable identifier for the global database cluster.
     * This identifier is found in AWS CloudTrail log entries whenever the AWS KMS key
     * for the DB cluster is accessed. </p>
     */
    inline void SetGlobalClusterResourceId(Aws::String&& value) { m_globalClusterResourceIdHasBeenSet = true; m_globalClusterResourceId = std::move(value); }

    /**
     * <p> The AWS Region-unique, immutable identifier for the global database cluster.
     * This identifier is found in AWS CloudTrail log entries whenever the AWS KMS key
     * for the DB cluster is accessed. </p>
     */
    inline void SetGlobalClusterResourceId(const char* value) { m_globalClusterResourceIdHasBeenSet = true; m_globalClusterResourceId.assign(value); }

    /**
     * <p> The AWS Region-unique, immutable identifier for the global database cluster.
     * This identifier is found in AWS CloudTrail log entries whenever the AWS KMS key
     * for the DB cluster is accessed. </p>
     */
    inline GlobalCluster& WithGlobalClusterResourceId(const Aws::String& value) { SetGlobalClusterResourceId(value); return *this;}

    /**
     * <p> The AWS Region-unique, immutable identifier for the global database cluster.
     * This identifier is found in AWS CloudTrail log entries whenever the AWS KMS key
     * for the DB cluster is accessed. </p>
     */
    inline GlobalCluster& WithGlobalClusterResourceId(Aws::String&& value) { SetGlobalClusterResourceId(std::move(value)); return *this;}

    /**
     * <p> The AWS Region-unique, immutable identifier for the global database cluster.
     * This identifier is found in AWS CloudTrail log entries whenever the AWS KMS key
     * for the DB cluster is accessed. </p>
     */
    inline GlobalCluster& WithGlobalClusterResourceId(const char* value) { SetGlobalClusterResourceId(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) for the global database cluster.</p>
     */
    inline const Aws::String& GetGlobalClusterArn() const{ return m_globalClusterArn; }

    /**
     * <p>The Amazon Resource Name (ARN) for the global database cluster.</p>
     */
    inline bool GlobalClusterArnHasBeenSet() const { return m_globalClusterArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) for the global database cluster.</p>
     */
    inline void SetGlobalClusterArn(const Aws::String& value) { m_globalClusterArnHasBeenSet = true; m_globalClusterArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) for the global database cluster.</p>
     */
    inline void SetGlobalClusterArn(Aws::String&& value) { m_globalClusterArnHasBeenSet = true; m_globalClusterArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the global database cluster.</p>
     */
    inline void SetGlobalClusterArn(const char* value) { m_globalClusterArnHasBeenSet = true; m_globalClusterArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the global database cluster.</p>
     */
    inline GlobalCluster& WithGlobalClusterArn(const Aws::String& value) { SetGlobalClusterArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the global database cluster.</p>
     */
    inline GlobalCluster& WithGlobalClusterArn(Aws::String&& value) { SetGlobalClusterArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the global database cluster.</p>
     */
    inline GlobalCluster& WithGlobalClusterArn(const char* value) { SetGlobalClusterArn(value); return *this;}


    /**
     * <p>Specifies the current state of this global database cluster.</p>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }

    /**
     * <p>Specifies the current state of this global database cluster.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>Specifies the current state of this global database cluster.</p>
     */
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>Specifies the current state of this global database cluster.</p>
     */
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>Specifies the current state of this global database cluster.</p>
     */
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }

    /**
     * <p>Specifies the current state of this global database cluster.</p>
     */
    inline GlobalCluster& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}

    /**
     * <p>Specifies the current state of this global database cluster.</p>
     */
    inline GlobalCluster& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}

    /**
     * <p>Specifies the current state of this global database cluster.</p>
     */
    inline GlobalCluster& WithStatus(const char* value) { SetStatus(value); return *this;}


    /**
     * <p> The Aurora database engine used by the global database cluster. </p>
     */
    inline const Aws::String& GetEngine() const{ return m_engine; }

    /**
     * <p> The Aurora database engine used by the global database cluster. </p>
     */
    inline bool EngineHasBeenSet() const { return m_engineHasBeenSet; }

    /**
     * <p> The Aurora database engine used by the global database cluster. </p>
     */
    inline void SetEngine(const Aws::String& value) { m_engineHasBeenSet = true; m_engine = value; }

    /**
     * <p> The Aurora database engine used by the global database cluster. </p>
     */
    inline void SetEngine(Aws::String&& value) { m_engineHasBeenSet = true; m_engine = std::move(value); }

    /**
     * <p> The Aurora database engine used by the global database cluster. </p>
     */
    inline void SetEngine(const char* value) { m_engineHasBeenSet = true; m_engine.assign(value); }

    /**
     * <p> The Aurora database engine used by the global database cluster. </p>
     */
    inline GlobalCluster& WithEngine(const Aws::String& value) { SetEngine(value); return *this;}

    /**
     * <p> The Aurora database engine used by the global database cluster. </p>
     */
    inline GlobalCluster& WithEngine(Aws::String&& value) { SetEngine(std::move(value)); return *this;}

    /**
     * <p> The Aurora database engine used by the global database cluster. </p>
     */
    inline GlobalCluster& WithEngine(const char* value) { SetEngine(value); return *this;}


    /**
     * <p>Indicates the database engine version.</p>
     */
    inline const Aws::String& GetEngineVersion() const{ return m_engineVersion; }

    /**
     * <p>Indicates the database engine version.</p>
     */
    inline bool EngineVersionHasBeenSet() const { return m_engineVersionHasBeenSet; }

    /**
     * <p>Indicates the database engine version.</p>
     */
    inline void SetEngineVersion(const Aws::String& value) { m_engineVersionHasBeenSet = true; m_engineVersion = value; }

    /**
     * <p>Indicates the database engine version.</p>
     */
    inline void SetEngineVersion(Aws::String&& value) { m_engineVersionHasBeenSet = true; m_engineVersion = std::move(value); }

    /**
     * <p>Indicates the database engine version.</p>
     */
    inline void SetEngineVersion(const char* value) { m_engineVersionHasBeenSet = true; m_engineVersion.assign(value); }

    /**
     * <p>Indicates the database engine version.</p>
     */
    inline GlobalCluster& WithEngineVersion(const Aws::String& value) { SetEngineVersion(value); return *this;}

    /**
     * <p>Indicates the database engine version.</p>
     */
    inline GlobalCluster& WithEngineVersion(Aws::String&& value) { SetEngineVersion(std::move(value)); return *this;}

    /**
     * <p>Indicates the database engine version.</p>
     */
    inline GlobalCluster& WithEngineVersion(const char* value) { SetEngineVersion(value); return *this;}


    /**
     * <p> The default database name within the new global database cluster. </p>
     */
    inline const Aws::String& GetDatabaseName() const{ return m_databaseName; }

    /**
     * <p> The default database name within the new global database cluster. </p>
     */
    inline bool DatabaseNameHasBeenSet() const { return m_databaseNameHasBeenSet; }

    /**
     * <p> The default database name within the new global database cluster. </p>
     */
    inline void SetDatabaseName(const Aws::String& value) { m_databaseNameHasBeenSet = true; m_databaseName = value; }

    /**
     * <p> The default database name within the new global database cluster. </p>
     */
    inline void SetDatabaseName(Aws::String&& value) { m_databaseNameHasBeenSet = true; m_databaseName = std::move(value); }

    /**
     * <p> The default database name within the new global database cluster. </p>
     */
    inline void SetDatabaseName(const char* value) { m_databaseNameHasBeenSet = true; m_databaseName.assign(value); }

    /**
     * <p> The default database name within the new global database cluster. </p>
     */
    inline GlobalCluster& WithDatabaseName(const Aws::String& value) { SetDatabaseName(value); return *this;}

    /**
     * <p> The default database name within the new global database cluster. </p>
     */
    inline GlobalCluster& WithDatabaseName(Aws::String&& value) { SetDatabaseName(std::move(value)); return *this;}

    /**
     * <p> The default database name within the new global database cluster. </p>
     */
    inline GlobalCluster& WithDatabaseName(const char* value) { SetDatabaseName(value); return *this;}


    /**
     * <p> The storage encryption setting for the global database cluster. </p>
     */
    inline bool GetStorageEncrypted() const{ return m_storageEncrypted; }

    /**
     * <p> The storage encryption setting for the global database cluster. </p>
     */
    inline bool StorageEncryptedHasBeenSet() const { return m_storageEncryptedHasBeenSet; }

    /**
     * <p> The storage encryption setting for the global database cluster. </p>
     */
    inline void SetStorageEncrypted(bool value) { m_storageEncryptedHasBeenSet = true; m_storageEncrypted = value; }

    /**
     * <p> The storage encryption setting for the global database cluster. </p>
     */
    inline GlobalCluster& WithStorageEncrypted(bool value) { SetStorageEncrypted(value); return *this;}


    /**
     * <p> The deletion protection setting for the new global database cluster. </p>
     */
    inline bool GetDeletionProtection() const{ return m_deletionProtection; }

    /**
     * <p> The deletion protection setting for the new global database cluster. </p>
     */
    inline bool DeletionProtectionHasBeenSet() const { return m_deletionProtectionHasBeenSet; }

    /**
     * <p> The deletion protection setting for the new global database cluster. </p>
     */
    inline void SetDeletionProtection(bool value) { m_deletionProtectionHasBeenSet = true; m_deletionProtection = value; }

    /**
     * <p> The deletion protection setting for the new global database cluster. </p>
     */
    inline GlobalCluster& WithDeletionProtection(bool value) { SetDeletionProtection(value); return *this;}


    /**
     * <p> The list of cluster IDs for secondary clusters within the global database
     * cluster. Currently limited to 1 item. </p>
     */
    inline const Aws::Vector<GlobalClusterMember>& GetGlobalClusterMembers() const{ return m_globalClusterMembers; }

    /**
     * <p> The list of cluster IDs for secondary clusters within the global database
     * cluster. Currently limited to 1 item. </p>
     */
    inline bool GlobalClusterMembersHasBeenSet() const { return m_globalClusterMembersHasBeenSet; }

    /**
     * <p> The list of cluster IDs for secondary clusters within the global database
     * cluster. Currently limited to 1 item. </p>
     */
    inline void SetGlobalClusterMembers(const Aws::Vector<GlobalClusterMember>& value) { m_globalClusterMembersHasBeenSet = true; m_globalClusterMembers = value; }

    /**
     * <p> The list of cluster IDs for secondary clusters within the global database
     * cluster. Currently limited to 1 item. </p>
     */
    inline void SetGlobalClusterMembers(Aws::Vector<GlobalClusterMember>&& value) { m_globalClusterMembersHasBeenSet = true; m_globalClusterMembers = std::move(value); }

    /**
     * <p> The list of cluster IDs for secondary clusters within the global database
     * cluster. Currently limited to 1 item. </p>
     */
    inline GlobalCluster& WithGlobalClusterMembers(const Aws::Vector<GlobalClusterMember>& value) { SetGlobalClusterMembers(value); return *this;}

    /**
     * <p> The list of cluster IDs for secondary clusters within the global database
     * cluster. Currently limited to 1 item. </p>
     */
    inline GlobalCluster& WithGlobalClusterMembers(Aws::Vector<GlobalClusterMember>&& value) { SetGlobalClusterMembers(std::move(value)); return *this;}

    /**
     * <p> The list of cluster IDs for secondary clusters within the global database
     * cluster. Currently limited to 1 item. </p>
     */
    inline GlobalCluster& AddGlobalClusterMembers(const GlobalClusterMember& value) { m_globalClusterMembersHasBeenSet = true; m_globalClusterMembers.push_back(value); return *this; }

    /**
     * <p> The list of cluster IDs for secondary clusters within the global database
     * cluster. Currently limited to 1 item. </p>
     */
    inline GlobalCluster& AddGlobalClusterMembers(GlobalClusterMember&& value) { m_globalClusterMembersHasBeenSet = true; m_globalClusterMembers.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_globalClusterIdentifier;
    bool m_globalClusterIdentifierHasBeenSet;

    Aws::String m_globalClusterResourceId;
    bool m_globalClusterResourceIdHasBeenSet;

    Aws::String m_globalClusterArn;
    bool m_globalClusterArnHasBeenSet;

    Aws::String m_status;
    bool m_statusHasBeenSet;

    Aws::String m_engine;
    bool m_engineHasBeenSet;

    Aws::String m_engineVersion;
    bool m_engineVersionHasBeenSet;

    Aws::String m_databaseName;
    bool m_databaseNameHasBeenSet;

    bool m_storageEncrypted;
    bool m_storageEncryptedHasBeenSet;

    bool m_deletionProtection;
    bool m_deletionProtectionHasBeenSet;

    Aws::Vector<GlobalClusterMember> m_globalClusterMembers;
    bool m_globalClusterMembersHasBeenSet;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
