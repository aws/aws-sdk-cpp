/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/neptune/Neptune_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/neptune/model/GlobalClusterMember.h>
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
namespace Neptune
{
namespace Model
{

  /**
   * <p>Contains the details of an Amazon Neptune global database.</p> <p>This data
   * type is used as a response element for the <a>CreateGlobalCluster</a>,
   * <a>DescribeGlobalClusters</a>, <a>ModifyGlobalCluster</a>,
   * <a>DeleteGlobalCluster</a>, <a>FailoverGlobalCluster</a>, and
   * <a>RemoveFromGlobalCluster</a> actions.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-2014-10-31/GlobalCluster">AWS
   * API Reference</a></p>
   */
  class GlobalCluster
  {
  public:
    AWS_NEPTUNE_API GlobalCluster();
    AWS_NEPTUNE_API GlobalCluster(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_NEPTUNE_API GlobalCluster& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_NEPTUNE_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_NEPTUNE_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>Contains a user-supplied global database cluster identifier. This identifier
     * is the unique key that identifies a global database.</p>
     */
    inline const Aws::String& GetGlobalClusterIdentifier() const{ return m_globalClusterIdentifier; }

    /**
     * <p>Contains a user-supplied global database cluster identifier. This identifier
     * is the unique key that identifies a global database.</p>
     */
    inline bool GlobalClusterIdentifierHasBeenSet() const { return m_globalClusterIdentifierHasBeenSet; }

    /**
     * <p>Contains a user-supplied global database cluster identifier. This identifier
     * is the unique key that identifies a global database.</p>
     */
    inline void SetGlobalClusterIdentifier(const Aws::String& value) { m_globalClusterIdentifierHasBeenSet = true; m_globalClusterIdentifier = value; }

    /**
     * <p>Contains a user-supplied global database cluster identifier. This identifier
     * is the unique key that identifies a global database.</p>
     */
    inline void SetGlobalClusterIdentifier(Aws::String&& value) { m_globalClusterIdentifierHasBeenSet = true; m_globalClusterIdentifier = std::move(value); }

    /**
     * <p>Contains a user-supplied global database cluster identifier. This identifier
     * is the unique key that identifies a global database.</p>
     */
    inline void SetGlobalClusterIdentifier(const char* value) { m_globalClusterIdentifierHasBeenSet = true; m_globalClusterIdentifier.assign(value); }

    /**
     * <p>Contains a user-supplied global database cluster identifier. This identifier
     * is the unique key that identifies a global database.</p>
     */
    inline GlobalCluster& WithGlobalClusterIdentifier(const Aws::String& value) { SetGlobalClusterIdentifier(value); return *this;}

    /**
     * <p>Contains a user-supplied global database cluster identifier. This identifier
     * is the unique key that identifies a global database.</p>
     */
    inline GlobalCluster& WithGlobalClusterIdentifier(Aws::String&& value) { SetGlobalClusterIdentifier(std::move(value)); return *this;}

    /**
     * <p>Contains a user-supplied global database cluster identifier. This identifier
     * is the unique key that identifies a global database.</p>
     */
    inline GlobalCluster& WithGlobalClusterIdentifier(const char* value) { SetGlobalClusterIdentifier(value); return *this;}


    /**
     * <p>An immutable identifier for the global database that is unique within in all
     * regions. This identifier is found in CloudTrail log entries whenever the KMS key
     * for the DB cluster is accessed.</p>
     */
    inline const Aws::String& GetGlobalClusterResourceId() const{ return m_globalClusterResourceId; }

    /**
     * <p>An immutable identifier for the global database that is unique within in all
     * regions. This identifier is found in CloudTrail log entries whenever the KMS key
     * for the DB cluster is accessed.</p>
     */
    inline bool GlobalClusterResourceIdHasBeenSet() const { return m_globalClusterResourceIdHasBeenSet; }

    /**
     * <p>An immutable identifier for the global database that is unique within in all
     * regions. This identifier is found in CloudTrail log entries whenever the KMS key
     * for the DB cluster is accessed.</p>
     */
    inline void SetGlobalClusterResourceId(const Aws::String& value) { m_globalClusterResourceIdHasBeenSet = true; m_globalClusterResourceId = value; }

    /**
     * <p>An immutable identifier for the global database that is unique within in all
     * regions. This identifier is found in CloudTrail log entries whenever the KMS key
     * for the DB cluster is accessed.</p>
     */
    inline void SetGlobalClusterResourceId(Aws::String&& value) { m_globalClusterResourceIdHasBeenSet = true; m_globalClusterResourceId = std::move(value); }

    /**
     * <p>An immutable identifier for the global database that is unique within in all
     * regions. This identifier is found in CloudTrail log entries whenever the KMS key
     * for the DB cluster is accessed.</p>
     */
    inline void SetGlobalClusterResourceId(const char* value) { m_globalClusterResourceIdHasBeenSet = true; m_globalClusterResourceId.assign(value); }

    /**
     * <p>An immutable identifier for the global database that is unique within in all
     * regions. This identifier is found in CloudTrail log entries whenever the KMS key
     * for the DB cluster is accessed.</p>
     */
    inline GlobalCluster& WithGlobalClusterResourceId(const Aws::String& value) { SetGlobalClusterResourceId(value); return *this;}

    /**
     * <p>An immutable identifier for the global database that is unique within in all
     * regions. This identifier is found in CloudTrail log entries whenever the KMS key
     * for the DB cluster is accessed.</p>
     */
    inline GlobalCluster& WithGlobalClusterResourceId(Aws::String&& value) { SetGlobalClusterResourceId(std::move(value)); return *this;}

    /**
     * <p>An immutable identifier for the global database that is unique within in all
     * regions. This identifier is found in CloudTrail log entries whenever the KMS key
     * for the DB cluster is accessed.</p>
     */
    inline GlobalCluster& WithGlobalClusterResourceId(const char* value) { SetGlobalClusterResourceId(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) for the global database.</p>
     */
    inline const Aws::String& GetGlobalClusterArn() const{ return m_globalClusterArn; }

    /**
     * <p>The Amazon Resource Name (ARN) for the global database.</p>
     */
    inline bool GlobalClusterArnHasBeenSet() const { return m_globalClusterArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) for the global database.</p>
     */
    inline void SetGlobalClusterArn(const Aws::String& value) { m_globalClusterArnHasBeenSet = true; m_globalClusterArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) for the global database.</p>
     */
    inline void SetGlobalClusterArn(Aws::String&& value) { m_globalClusterArnHasBeenSet = true; m_globalClusterArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the global database.</p>
     */
    inline void SetGlobalClusterArn(const char* value) { m_globalClusterArnHasBeenSet = true; m_globalClusterArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the global database.</p>
     */
    inline GlobalCluster& WithGlobalClusterArn(const Aws::String& value) { SetGlobalClusterArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the global database.</p>
     */
    inline GlobalCluster& WithGlobalClusterArn(Aws::String&& value) { SetGlobalClusterArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the global database.</p>
     */
    inline GlobalCluster& WithGlobalClusterArn(const char* value) { SetGlobalClusterArn(value); return *this;}


    /**
     * <p>Specifies the current state of this global database.</p>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }

    /**
     * <p>Specifies the current state of this global database.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>Specifies the current state of this global database.</p>
     */
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>Specifies the current state of this global database.</p>
     */
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>Specifies the current state of this global database.</p>
     */
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }

    /**
     * <p>Specifies the current state of this global database.</p>
     */
    inline GlobalCluster& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}

    /**
     * <p>Specifies the current state of this global database.</p>
     */
    inline GlobalCluster& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}

    /**
     * <p>Specifies the current state of this global database.</p>
     */
    inline GlobalCluster& WithStatus(const char* value) { SetStatus(value); return *this;}


    /**
     * <p>The Neptune database engine used by the global database
     * (<code>"neptune"</code>).</p>
     */
    inline const Aws::String& GetEngine() const{ return m_engine; }

    /**
     * <p>The Neptune database engine used by the global database
     * (<code>"neptune"</code>).</p>
     */
    inline bool EngineHasBeenSet() const { return m_engineHasBeenSet; }

    /**
     * <p>The Neptune database engine used by the global database
     * (<code>"neptune"</code>).</p>
     */
    inline void SetEngine(const Aws::String& value) { m_engineHasBeenSet = true; m_engine = value; }

    /**
     * <p>The Neptune database engine used by the global database
     * (<code>"neptune"</code>).</p>
     */
    inline void SetEngine(Aws::String&& value) { m_engineHasBeenSet = true; m_engine = std::move(value); }

    /**
     * <p>The Neptune database engine used by the global database
     * (<code>"neptune"</code>).</p>
     */
    inline void SetEngine(const char* value) { m_engineHasBeenSet = true; m_engine.assign(value); }

    /**
     * <p>The Neptune database engine used by the global database
     * (<code>"neptune"</code>).</p>
     */
    inline GlobalCluster& WithEngine(const Aws::String& value) { SetEngine(value); return *this;}

    /**
     * <p>The Neptune database engine used by the global database
     * (<code>"neptune"</code>).</p>
     */
    inline GlobalCluster& WithEngine(Aws::String&& value) { SetEngine(std::move(value)); return *this;}

    /**
     * <p>The Neptune database engine used by the global database
     * (<code>"neptune"</code>).</p>
     */
    inline GlobalCluster& WithEngine(const char* value) { SetEngine(value); return *this;}


    /**
     * <p>The Neptune engine version used by the global database.</p>
     */
    inline const Aws::String& GetEngineVersion() const{ return m_engineVersion; }

    /**
     * <p>The Neptune engine version used by the global database.</p>
     */
    inline bool EngineVersionHasBeenSet() const { return m_engineVersionHasBeenSet; }

    /**
     * <p>The Neptune engine version used by the global database.</p>
     */
    inline void SetEngineVersion(const Aws::String& value) { m_engineVersionHasBeenSet = true; m_engineVersion = value; }

    /**
     * <p>The Neptune engine version used by the global database.</p>
     */
    inline void SetEngineVersion(Aws::String&& value) { m_engineVersionHasBeenSet = true; m_engineVersion = std::move(value); }

    /**
     * <p>The Neptune engine version used by the global database.</p>
     */
    inline void SetEngineVersion(const char* value) { m_engineVersionHasBeenSet = true; m_engineVersion.assign(value); }

    /**
     * <p>The Neptune engine version used by the global database.</p>
     */
    inline GlobalCluster& WithEngineVersion(const Aws::String& value) { SetEngineVersion(value); return *this;}

    /**
     * <p>The Neptune engine version used by the global database.</p>
     */
    inline GlobalCluster& WithEngineVersion(Aws::String&& value) { SetEngineVersion(std::move(value)); return *this;}

    /**
     * <p>The Neptune engine version used by the global database.</p>
     */
    inline GlobalCluster& WithEngineVersion(const char* value) { SetEngineVersion(value); return *this;}


    /**
     * <p>The storage encryption setting for the global database.</p>
     */
    inline bool GetStorageEncrypted() const{ return m_storageEncrypted; }

    /**
     * <p>The storage encryption setting for the global database.</p>
     */
    inline bool StorageEncryptedHasBeenSet() const { return m_storageEncryptedHasBeenSet; }

    /**
     * <p>The storage encryption setting for the global database.</p>
     */
    inline void SetStorageEncrypted(bool value) { m_storageEncryptedHasBeenSet = true; m_storageEncrypted = value; }

    /**
     * <p>The storage encryption setting for the global database.</p>
     */
    inline GlobalCluster& WithStorageEncrypted(bool value) { SetStorageEncrypted(value); return *this;}


    /**
     * <p>The deletion protection setting for the global database.</p>
     */
    inline bool GetDeletionProtection() const{ return m_deletionProtection; }

    /**
     * <p>The deletion protection setting for the global database.</p>
     */
    inline bool DeletionProtectionHasBeenSet() const { return m_deletionProtectionHasBeenSet; }

    /**
     * <p>The deletion protection setting for the global database.</p>
     */
    inline void SetDeletionProtection(bool value) { m_deletionProtectionHasBeenSet = true; m_deletionProtection = value; }

    /**
     * <p>The deletion protection setting for the global database.</p>
     */
    inline GlobalCluster& WithDeletionProtection(bool value) { SetDeletionProtection(value); return *this;}


    /**
     * <p>A list of cluster ARNs and instance ARNs for all the DB clusters that are
     * part of the global database.</p>
     */
    inline const Aws::Vector<GlobalClusterMember>& GetGlobalClusterMembers() const{ return m_globalClusterMembers; }

    /**
     * <p>A list of cluster ARNs and instance ARNs for all the DB clusters that are
     * part of the global database.</p>
     */
    inline bool GlobalClusterMembersHasBeenSet() const { return m_globalClusterMembersHasBeenSet; }

    /**
     * <p>A list of cluster ARNs and instance ARNs for all the DB clusters that are
     * part of the global database.</p>
     */
    inline void SetGlobalClusterMembers(const Aws::Vector<GlobalClusterMember>& value) { m_globalClusterMembersHasBeenSet = true; m_globalClusterMembers = value; }

    /**
     * <p>A list of cluster ARNs and instance ARNs for all the DB clusters that are
     * part of the global database.</p>
     */
    inline void SetGlobalClusterMembers(Aws::Vector<GlobalClusterMember>&& value) { m_globalClusterMembersHasBeenSet = true; m_globalClusterMembers = std::move(value); }

    /**
     * <p>A list of cluster ARNs and instance ARNs for all the DB clusters that are
     * part of the global database.</p>
     */
    inline GlobalCluster& WithGlobalClusterMembers(const Aws::Vector<GlobalClusterMember>& value) { SetGlobalClusterMembers(value); return *this;}

    /**
     * <p>A list of cluster ARNs and instance ARNs for all the DB clusters that are
     * part of the global database.</p>
     */
    inline GlobalCluster& WithGlobalClusterMembers(Aws::Vector<GlobalClusterMember>&& value) { SetGlobalClusterMembers(std::move(value)); return *this;}

    /**
     * <p>A list of cluster ARNs and instance ARNs for all the DB clusters that are
     * part of the global database.</p>
     */
    inline GlobalCluster& AddGlobalClusterMembers(const GlobalClusterMember& value) { m_globalClusterMembersHasBeenSet = true; m_globalClusterMembers.push_back(value); return *this; }

    /**
     * <p>A list of cluster ARNs and instance ARNs for all the DB clusters that are
     * part of the global database.</p>
     */
    inline GlobalCluster& AddGlobalClusterMembers(GlobalClusterMember&& value) { m_globalClusterMembersHasBeenSet = true; m_globalClusterMembers.push_back(std::move(value)); return *this; }

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

    bool m_storageEncrypted;
    bool m_storageEncryptedHasBeenSet = false;

    bool m_deletionProtection;
    bool m_deletionProtectionHasBeenSet = false;

    Aws::Vector<GlobalClusterMember> m_globalClusterMembers;
    bool m_globalClusterMembersHasBeenSet = false;
  };

} // namespace Model
} // namespace Neptune
} // namespace Aws
