/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/memorydb/MemoryDB_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/memorydb/model/ACLPendingChanges.h>
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
namespace MemoryDB
{
namespace Model
{

  /**
   * <p>An Access Control List. You can authenticate users with Access Contol Lists.
   * ACLs enable you to control cluster access by grouping users. These Access
   * control lists are designed as a way to organize access to
   * clusters.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/memorydb-2021-01-01/ACL">AWS API
   * Reference</a></p>
   */
  class ACL
  {
  public:
    AWS_MEMORYDB_API ACL();
    AWS_MEMORYDB_API ACL(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEMORYDB_API ACL& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEMORYDB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the Access Control List</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the Access Control List</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the Access Control List</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the Access Control List</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the Access Control List</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the Access Control List</p>
     */
    inline ACL& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the Access Control List</p>
     */
    inline ACL& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the Access Control List</p>
     */
    inline ACL& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>Indicates ACL status. Can be "creating", "active", "modifying",
     * "deleting".</p>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }

    /**
     * <p>Indicates ACL status. Can be "creating", "active", "modifying",
     * "deleting".</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>Indicates ACL status. Can be "creating", "active", "modifying",
     * "deleting".</p>
     */
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>Indicates ACL status. Can be "creating", "active", "modifying",
     * "deleting".</p>
     */
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>Indicates ACL status. Can be "creating", "active", "modifying",
     * "deleting".</p>
     */
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }

    /**
     * <p>Indicates ACL status. Can be "creating", "active", "modifying",
     * "deleting".</p>
     */
    inline ACL& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}

    /**
     * <p>Indicates ACL status. Can be "creating", "active", "modifying",
     * "deleting".</p>
     */
    inline ACL& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}

    /**
     * <p>Indicates ACL status. Can be "creating", "active", "modifying",
     * "deleting".</p>
     */
    inline ACL& WithStatus(const char* value) { SetStatus(value); return *this;}


    /**
     * <p>The list of user names that belong to the ACL.</p>
     */
    inline const Aws::Vector<Aws::String>& GetUserNames() const{ return m_userNames; }

    /**
     * <p>The list of user names that belong to the ACL.</p>
     */
    inline bool UserNamesHasBeenSet() const { return m_userNamesHasBeenSet; }

    /**
     * <p>The list of user names that belong to the ACL.</p>
     */
    inline void SetUserNames(const Aws::Vector<Aws::String>& value) { m_userNamesHasBeenSet = true; m_userNames = value; }

    /**
     * <p>The list of user names that belong to the ACL.</p>
     */
    inline void SetUserNames(Aws::Vector<Aws::String>&& value) { m_userNamesHasBeenSet = true; m_userNames = std::move(value); }

    /**
     * <p>The list of user names that belong to the ACL.</p>
     */
    inline ACL& WithUserNames(const Aws::Vector<Aws::String>& value) { SetUserNames(value); return *this;}

    /**
     * <p>The list of user names that belong to the ACL.</p>
     */
    inline ACL& WithUserNames(Aws::Vector<Aws::String>&& value) { SetUserNames(std::move(value)); return *this;}

    /**
     * <p>The list of user names that belong to the ACL.</p>
     */
    inline ACL& AddUserNames(const Aws::String& value) { m_userNamesHasBeenSet = true; m_userNames.push_back(value); return *this; }

    /**
     * <p>The list of user names that belong to the ACL.</p>
     */
    inline ACL& AddUserNames(Aws::String&& value) { m_userNamesHasBeenSet = true; m_userNames.push_back(std::move(value)); return *this; }

    /**
     * <p>The list of user names that belong to the ACL.</p>
     */
    inline ACL& AddUserNames(const char* value) { m_userNamesHasBeenSet = true; m_userNames.push_back(value); return *this; }


    /**
     * <p>The minimum engine version supported for the ACL</p>
     */
    inline const Aws::String& GetMinimumEngineVersion() const{ return m_minimumEngineVersion; }

    /**
     * <p>The minimum engine version supported for the ACL</p>
     */
    inline bool MinimumEngineVersionHasBeenSet() const { return m_minimumEngineVersionHasBeenSet; }

    /**
     * <p>The minimum engine version supported for the ACL</p>
     */
    inline void SetMinimumEngineVersion(const Aws::String& value) { m_minimumEngineVersionHasBeenSet = true; m_minimumEngineVersion = value; }

    /**
     * <p>The minimum engine version supported for the ACL</p>
     */
    inline void SetMinimumEngineVersion(Aws::String&& value) { m_minimumEngineVersionHasBeenSet = true; m_minimumEngineVersion = std::move(value); }

    /**
     * <p>The minimum engine version supported for the ACL</p>
     */
    inline void SetMinimumEngineVersion(const char* value) { m_minimumEngineVersionHasBeenSet = true; m_minimumEngineVersion.assign(value); }

    /**
     * <p>The minimum engine version supported for the ACL</p>
     */
    inline ACL& WithMinimumEngineVersion(const Aws::String& value) { SetMinimumEngineVersion(value); return *this;}

    /**
     * <p>The minimum engine version supported for the ACL</p>
     */
    inline ACL& WithMinimumEngineVersion(Aws::String&& value) { SetMinimumEngineVersion(std::move(value)); return *this;}

    /**
     * <p>The minimum engine version supported for the ACL</p>
     */
    inline ACL& WithMinimumEngineVersion(const char* value) { SetMinimumEngineVersion(value); return *this;}


    /**
     * <p>A list of updates being applied to the ACL.</p>
     */
    inline const ACLPendingChanges& GetPendingChanges() const{ return m_pendingChanges; }

    /**
     * <p>A list of updates being applied to the ACL.</p>
     */
    inline bool PendingChangesHasBeenSet() const { return m_pendingChangesHasBeenSet; }

    /**
     * <p>A list of updates being applied to the ACL.</p>
     */
    inline void SetPendingChanges(const ACLPendingChanges& value) { m_pendingChangesHasBeenSet = true; m_pendingChanges = value; }

    /**
     * <p>A list of updates being applied to the ACL.</p>
     */
    inline void SetPendingChanges(ACLPendingChanges&& value) { m_pendingChangesHasBeenSet = true; m_pendingChanges = std::move(value); }

    /**
     * <p>A list of updates being applied to the ACL.</p>
     */
    inline ACL& WithPendingChanges(const ACLPendingChanges& value) { SetPendingChanges(value); return *this;}

    /**
     * <p>A list of updates being applied to the ACL.</p>
     */
    inline ACL& WithPendingChanges(ACLPendingChanges&& value) { SetPendingChanges(std::move(value)); return *this;}


    /**
     * <p>A list of clusters associated with the ACL.</p>
     */
    inline const Aws::Vector<Aws::String>& GetClusters() const{ return m_clusters; }

    /**
     * <p>A list of clusters associated with the ACL.</p>
     */
    inline bool ClustersHasBeenSet() const { return m_clustersHasBeenSet; }

    /**
     * <p>A list of clusters associated with the ACL.</p>
     */
    inline void SetClusters(const Aws::Vector<Aws::String>& value) { m_clustersHasBeenSet = true; m_clusters = value; }

    /**
     * <p>A list of clusters associated with the ACL.</p>
     */
    inline void SetClusters(Aws::Vector<Aws::String>&& value) { m_clustersHasBeenSet = true; m_clusters = std::move(value); }

    /**
     * <p>A list of clusters associated with the ACL.</p>
     */
    inline ACL& WithClusters(const Aws::Vector<Aws::String>& value) { SetClusters(value); return *this;}

    /**
     * <p>A list of clusters associated with the ACL.</p>
     */
    inline ACL& WithClusters(Aws::Vector<Aws::String>&& value) { SetClusters(std::move(value)); return *this;}

    /**
     * <p>A list of clusters associated with the ACL.</p>
     */
    inline ACL& AddClusters(const Aws::String& value) { m_clustersHasBeenSet = true; m_clusters.push_back(value); return *this; }

    /**
     * <p>A list of clusters associated with the ACL.</p>
     */
    inline ACL& AddClusters(Aws::String&& value) { m_clustersHasBeenSet = true; m_clusters.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of clusters associated with the ACL.</p>
     */
    inline ACL& AddClusters(const char* value) { m_clustersHasBeenSet = true; m_clusters.push_back(value); return *this; }


    /**
     * <p>The Amazon Resource Name (ARN) of the ACL</p>
     */
    inline const Aws::String& GetARN() const{ return m_aRN; }

    /**
     * <p>The Amazon Resource Name (ARN) of the ACL</p>
     */
    inline bool ARNHasBeenSet() const { return m_aRNHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the ACL</p>
     */
    inline void SetARN(const Aws::String& value) { m_aRNHasBeenSet = true; m_aRN = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the ACL</p>
     */
    inline void SetARN(Aws::String&& value) { m_aRNHasBeenSet = true; m_aRN = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the ACL</p>
     */
    inline void SetARN(const char* value) { m_aRNHasBeenSet = true; m_aRN.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the ACL</p>
     */
    inline ACL& WithARN(const Aws::String& value) { SetARN(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the ACL</p>
     */
    inline ACL& WithARN(Aws::String&& value) { SetARN(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the ACL</p>
     */
    inline ACL& WithARN(const char* value) { SetARN(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;

    Aws::Vector<Aws::String> m_userNames;
    bool m_userNamesHasBeenSet = false;

    Aws::String m_minimumEngineVersion;
    bool m_minimumEngineVersionHasBeenSet = false;

    ACLPendingChanges m_pendingChanges;
    bool m_pendingChangesHasBeenSet = false;

    Aws::Vector<Aws::String> m_clusters;
    bool m_clustersHasBeenSet = false;

    Aws::String m_aRN;
    bool m_aRNHasBeenSet = false;
  };

} // namespace Model
} // namespace MemoryDB
} // namespace Aws
