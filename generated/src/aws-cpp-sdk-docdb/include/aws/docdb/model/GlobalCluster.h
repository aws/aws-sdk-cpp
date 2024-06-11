/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/docdb/DocDB_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/docdb/model/GlobalClusterMember.h>
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
   * <p>A data type representing an Amazon DocumentDB global cluster.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/docdb-2014-10-31/GlobalCluster">AWS
   * API Reference</a></p>
   */
  class GlobalCluster
  {
  public:
    AWS_DOCDB_API GlobalCluster();
    AWS_DOCDB_API GlobalCluster(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_DOCDB_API GlobalCluster& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_DOCDB_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_DOCDB_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>Contains a user-supplied global cluster identifier. This identifier is the
     * unique key that identifies a global cluster. </p>
     */
    inline const Aws::String& GetGlobalClusterIdentifier() const{ return m_globalClusterIdentifier; }
    inline bool GlobalClusterIdentifierHasBeenSet() const { return m_globalClusterIdentifierHasBeenSet; }
    inline void SetGlobalClusterIdentifier(const Aws::String& value) { m_globalClusterIdentifierHasBeenSet = true; m_globalClusterIdentifier = value; }
    inline void SetGlobalClusterIdentifier(Aws::String&& value) { m_globalClusterIdentifierHasBeenSet = true; m_globalClusterIdentifier = std::move(value); }
    inline void SetGlobalClusterIdentifier(const char* value) { m_globalClusterIdentifierHasBeenSet = true; m_globalClusterIdentifier.assign(value); }
    inline GlobalCluster& WithGlobalClusterIdentifier(const Aws::String& value) { SetGlobalClusterIdentifier(value); return *this;}
    inline GlobalCluster& WithGlobalClusterIdentifier(Aws::String&& value) { SetGlobalClusterIdentifier(std::move(value)); return *this;}
    inline GlobalCluster& WithGlobalClusterIdentifier(const char* value) { SetGlobalClusterIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services Region-unique, immutable identifier for the global
     * database cluster. This identifier is found in CloudTrail log entries whenever
     * the KMS customer master key (CMK) for the cluster is accessed. </p>
     */
    inline const Aws::String& GetGlobalClusterResourceId() const{ return m_globalClusterResourceId; }
    inline bool GlobalClusterResourceIdHasBeenSet() const { return m_globalClusterResourceIdHasBeenSet; }
    inline void SetGlobalClusterResourceId(const Aws::String& value) { m_globalClusterResourceIdHasBeenSet = true; m_globalClusterResourceId = value; }
    inline void SetGlobalClusterResourceId(Aws::String&& value) { m_globalClusterResourceIdHasBeenSet = true; m_globalClusterResourceId = std::move(value); }
    inline void SetGlobalClusterResourceId(const char* value) { m_globalClusterResourceIdHasBeenSet = true; m_globalClusterResourceId.assign(value); }
    inline GlobalCluster& WithGlobalClusterResourceId(const Aws::String& value) { SetGlobalClusterResourceId(value); return *this;}
    inline GlobalCluster& WithGlobalClusterResourceId(Aws::String&& value) { SetGlobalClusterResourceId(std::move(value)); return *this;}
    inline GlobalCluster& WithGlobalClusterResourceId(const char* value) { SetGlobalClusterResourceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for the global cluster.</p>
     */
    inline const Aws::String& GetGlobalClusterArn() const{ return m_globalClusterArn; }
    inline bool GlobalClusterArnHasBeenSet() const { return m_globalClusterArnHasBeenSet; }
    inline void SetGlobalClusterArn(const Aws::String& value) { m_globalClusterArnHasBeenSet = true; m_globalClusterArn = value; }
    inline void SetGlobalClusterArn(Aws::String&& value) { m_globalClusterArnHasBeenSet = true; m_globalClusterArn = std::move(value); }
    inline void SetGlobalClusterArn(const char* value) { m_globalClusterArnHasBeenSet = true; m_globalClusterArn.assign(value); }
    inline GlobalCluster& WithGlobalClusterArn(const Aws::String& value) { SetGlobalClusterArn(value); return *this;}
    inline GlobalCluster& WithGlobalClusterArn(Aws::String&& value) { SetGlobalClusterArn(std::move(value)); return *this;}
    inline GlobalCluster& WithGlobalClusterArn(const char* value) { SetGlobalClusterArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the current state of this global cluster.</p>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }
    inline GlobalCluster& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}
    inline GlobalCluster& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}
    inline GlobalCluster& WithStatus(const char* value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon DocumentDB database engine used by the global cluster. </p>
     */
    inline const Aws::String& GetEngine() const{ return m_engine; }
    inline bool EngineHasBeenSet() const { return m_engineHasBeenSet; }
    inline void SetEngine(const Aws::String& value) { m_engineHasBeenSet = true; m_engine = value; }
    inline void SetEngine(Aws::String&& value) { m_engineHasBeenSet = true; m_engine = std::move(value); }
    inline void SetEngine(const char* value) { m_engineHasBeenSet = true; m_engine.assign(value); }
    inline GlobalCluster& WithEngine(const Aws::String& value) { SetEngine(value); return *this;}
    inline GlobalCluster& WithEngine(Aws::String&& value) { SetEngine(std::move(value)); return *this;}
    inline GlobalCluster& WithEngine(const char* value) { SetEngine(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the database engine version.</p>
     */
    inline const Aws::String& GetEngineVersion() const{ return m_engineVersion; }
    inline bool EngineVersionHasBeenSet() const { return m_engineVersionHasBeenSet; }
    inline void SetEngineVersion(const Aws::String& value) { m_engineVersionHasBeenSet = true; m_engineVersion = value; }
    inline void SetEngineVersion(Aws::String&& value) { m_engineVersionHasBeenSet = true; m_engineVersion = std::move(value); }
    inline void SetEngineVersion(const char* value) { m_engineVersionHasBeenSet = true; m_engineVersion.assign(value); }
    inline GlobalCluster& WithEngineVersion(const Aws::String& value) { SetEngineVersion(value); return *this;}
    inline GlobalCluster& WithEngineVersion(Aws::String&& value) { SetEngineVersion(std::move(value)); return *this;}
    inline GlobalCluster& WithEngineVersion(const char* value) { SetEngineVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The default database name within the new global cluster.</p>
     */
    inline const Aws::String& GetDatabaseName() const{ return m_databaseName; }
    inline bool DatabaseNameHasBeenSet() const { return m_databaseNameHasBeenSet; }
    inline void SetDatabaseName(const Aws::String& value) { m_databaseNameHasBeenSet = true; m_databaseName = value; }
    inline void SetDatabaseName(Aws::String&& value) { m_databaseNameHasBeenSet = true; m_databaseName = std::move(value); }
    inline void SetDatabaseName(const char* value) { m_databaseNameHasBeenSet = true; m_databaseName.assign(value); }
    inline GlobalCluster& WithDatabaseName(const Aws::String& value) { SetDatabaseName(value); return *this;}
    inline GlobalCluster& WithDatabaseName(Aws::String&& value) { SetDatabaseName(std::move(value)); return *this;}
    inline GlobalCluster& WithDatabaseName(const char* value) { SetDatabaseName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The storage encryption setting for the global cluster.</p>
     */
    inline bool GetStorageEncrypted() const{ return m_storageEncrypted; }
    inline bool StorageEncryptedHasBeenSet() const { return m_storageEncryptedHasBeenSet; }
    inline void SetStorageEncrypted(bool value) { m_storageEncryptedHasBeenSet = true; m_storageEncrypted = value; }
    inline GlobalCluster& WithStorageEncrypted(bool value) { SetStorageEncrypted(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The deletion protection setting for the new global cluster.</p>
     */
    inline bool GetDeletionProtection() const{ return m_deletionProtection; }
    inline bool DeletionProtectionHasBeenSet() const { return m_deletionProtectionHasBeenSet; }
    inline void SetDeletionProtection(bool value) { m_deletionProtectionHasBeenSet = true; m_deletionProtection = value; }
    inline GlobalCluster& WithDeletionProtection(bool value) { SetDeletionProtection(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of cluster IDs for secondary clusters within the global cluster.
     * Currently limited to one item. </p>
     */
    inline const Aws::Vector<GlobalClusterMember>& GetGlobalClusterMembers() const{ return m_globalClusterMembers; }
    inline bool GlobalClusterMembersHasBeenSet() const { return m_globalClusterMembersHasBeenSet; }
    inline void SetGlobalClusterMembers(const Aws::Vector<GlobalClusterMember>& value) { m_globalClusterMembersHasBeenSet = true; m_globalClusterMembers = value; }
    inline void SetGlobalClusterMembers(Aws::Vector<GlobalClusterMember>&& value) { m_globalClusterMembersHasBeenSet = true; m_globalClusterMembers = std::move(value); }
    inline GlobalCluster& WithGlobalClusterMembers(const Aws::Vector<GlobalClusterMember>& value) { SetGlobalClusterMembers(value); return *this;}
    inline GlobalCluster& WithGlobalClusterMembers(Aws::Vector<GlobalClusterMember>&& value) { SetGlobalClusterMembers(std::move(value)); return *this;}
    inline GlobalCluster& AddGlobalClusterMembers(const GlobalClusterMember& value) { m_globalClusterMembersHasBeenSet = true; m_globalClusterMembers.push_back(value); return *this; }
    inline GlobalCluster& AddGlobalClusterMembers(GlobalClusterMember&& value) { m_globalClusterMembersHasBeenSet = true; m_globalClusterMembers.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_globalClusterIdentifier;
    bool m_globalClusterIdentifierHasBeenSet = false;

    Aws::String m_globalClusterResourceId;
    bool m_globalClusterResourceIdHasBeenSet = false;

    Aws::String m_globalClusterArn;
    bool m_globalClusterArnHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_engine;
    bool m_engineHasBeenSet = false;

    Aws::String m_engineVersion;
    bool m_engineVersionHasBeenSet = false;

    Aws::String m_databaseName;
    bool m_databaseNameHasBeenSet = false;

    bool m_storageEncrypted;
    bool m_storageEncryptedHasBeenSet = false;

    bool m_deletionProtection;
    bool m_deletionProtectionHasBeenSet = false;

    Aws::Vector<GlobalClusterMember> m_globalClusterMembers;
    bool m_globalClusterMembersHasBeenSet = false;
  };

} // namespace Model
} // namespace DocDB
} // namespace Aws
