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
#include <aws/rds/RDSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace RDS
{
namespace Model
{

  /**
   */
  class AWS_RDS_API CreateGlobalClusterRequest : public RDSRequest
  {
  public:
    CreateGlobalClusterRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateGlobalCluster"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The cluster identifier of the new global database cluster.</p>
     */
    inline const Aws::String& GetGlobalClusterIdentifier() const{ return m_globalClusterIdentifier; }

    /**
     * <p>The cluster identifier of the new global database cluster.</p>
     */
    inline bool GlobalClusterIdentifierHasBeenSet() const { return m_globalClusterIdentifierHasBeenSet; }

    /**
     * <p>The cluster identifier of the new global database cluster.</p>
     */
    inline void SetGlobalClusterIdentifier(const Aws::String& value) { m_globalClusterIdentifierHasBeenSet = true; m_globalClusterIdentifier = value; }

    /**
     * <p>The cluster identifier of the new global database cluster.</p>
     */
    inline void SetGlobalClusterIdentifier(Aws::String&& value) { m_globalClusterIdentifierHasBeenSet = true; m_globalClusterIdentifier = std::move(value); }

    /**
     * <p>The cluster identifier of the new global database cluster.</p>
     */
    inline void SetGlobalClusterIdentifier(const char* value) { m_globalClusterIdentifierHasBeenSet = true; m_globalClusterIdentifier.assign(value); }

    /**
     * <p>The cluster identifier of the new global database cluster.</p>
     */
    inline CreateGlobalClusterRequest& WithGlobalClusterIdentifier(const Aws::String& value) { SetGlobalClusterIdentifier(value); return *this;}

    /**
     * <p>The cluster identifier of the new global database cluster.</p>
     */
    inline CreateGlobalClusterRequest& WithGlobalClusterIdentifier(Aws::String&& value) { SetGlobalClusterIdentifier(std::move(value)); return *this;}

    /**
     * <p>The cluster identifier of the new global database cluster.</p>
     */
    inline CreateGlobalClusterRequest& WithGlobalClusterIdentifier(const char* value) { SetGlobalClusterIdentifier(value); return *this;}


    /**
     * <p> The Amazon Resource Name (ARN) to use as the primary cluster of the global
     * database. This parameter is optional. </p>
     */
    inline const Aws::String& GetSourceDBClusterIdentifier() const{ return m_sourceDBClusterIdentifier; }

    /**
     * <p> The Amazon Resource Name (ARN) to use as the primary cluster of the global
     * database. This parameter is optional. </p>
     */
    inline bool SourceDBClusterIdentifierHasBeenSet() const { return m_sourceDBClusterIdentifierHasBeenSet; }

    /**
     * <p> The Amazon Resource Name (ARN) to use as the primary cluster of the global
     * database. This parameter is optional. </p>
     */
    inline void SetSourceDBClusterIdentifier(const Aws::String& value) { m_sourceDBClusterIdentifierHasBeenSet = true; m_sourceDBClusterIdentifier = value; }

    /**
     * <p> The Amazon Resource Name (ARN) to use as the primary cluster of the global
     * database. This parameter is optional. </p>
     */
    inline void SetSourceDBClusterIdentifier(Aws::String&& value) { m_sourceDBClusterIdentifierHasBeenSet = true; m_sourceDBClusterIdentifier = std::move(value); }

    /**
     * <p> The Amazon Resource Name (ARN) to use as the primary cluster of the global
     * database. This parameter is optional. </p>
     */
    inline void SetSourceDBClusterIdentifier(const char* value) { m_sourceDBClusterIdentifierHasBeenSet = true; m_sourceDBClusterIdentifier.assign(value); }

    /**
     * <p> The Amazon Resource Name (ARN) to use as the primary cluster of the global
     * database. This parameter is optional. </p>
     */
    inline CreateGlobalClusterRequest& WithSourceDBClusterIdentifier(const Aws::String& value) { SetSourceDBClusterIdentifier(value); return *this;}

    /**
     * <p> The Amazon Resource Name (ARN) to use as the primary cluster of the global
     * database. This parameter is optional. </p>
     */
    inline CreateGlobalClusterRequest& WithSourceDBClusterIdentifier(Aws::String&& value) { SetSourceDBClusterIdentifier(std::move(value)); return *this;}

    /**
     * <p> The Amazon Resource Name (ARN) to use as the primary cluster of the global
     * database. This parameter is optional. </p>
     */
    inline CreateGlobalClusterRequest& WithSourceDBClusterIdentifier(const char* value) { SetSourceDBClusterIdentifier(value); return *this;}


    /**
     * <p>Provides the name of the database engine to be used for this DB cluster.</p>
     */
    inline const Aws::String& GetEngine() const{ return m_engine; }

    /**
     * <p>Provides the name of the database engine to be used for this DB cluster.</p>
     */
    inline bool EngineHasBeenSet() const { return m_engineHasBeenSet; }

    /**
     * <p>Provides the name of the database engine to be used for this DB cluster.</p>
     */
    inline void SetEngine(const Aws::String& value) { m_engineHasBeenSet = true; m_engine = value; }

    /**
     * <p>Provides the name of the database engine to be used for this DB cluster.</p>
     */
    inline void SetEngine(Aws::String&& value) { m_engineHasBeenSet = true; m_engine = std::move(value); }

    /**
     * <p>Provides the name of the database engine to be used for this DB cluster.</p>
     */
    inline void SetEngine(const char* value) { m_engineHasBeenSet = true; m_engine.assign(value); }

    /**
     * <p>Provides the name of the database engine to be used for this DB cluster.</p>
     */
    inline CreateGlobalClusterRequest& WithEngine(const Aws::String& value) { SetEngine(value); return *this;}

    /**
     * <p>Provides the name of the database engine to be used for this DB cluster.</p>
     */
    inline CreateGlobalClusterRequest& WithEngine(Aws::String&& value) { SetEngine(std::move(value)); return *this;}

    /**
     * <p>Provides the name of the database engine to be used for this DB cluster.</p>
     */
    inline CreateGlobalClusterRequest& WithEngine(const char* value) { SetEngine(value); return *this;}


    /**
     * <p>The engine version of the Aurora global database.</p>
     */
    inline const Aws::String& GetEngineVersion() const{ return m_engineVersion; }

    /**
     * <p>The engine version of the Aurora global database.</p>
     */
    inline bool EngineVersionHasBeenSet() const { return m_engineVersionHasBeenSet; }

    /**
     * <p>The engine version of the Aurora global database.</p>
     */
    inline void SetEngineVersion(const Aws::String& value) { m_engineVersionHasBeenSet = true; m_engineVersion = value; }

    /**
     * <p>The engine version of the Aurora global database.</p>
     */
    inline void SetEngineVersion(Aws::String&& value) { m_engineVersionHasBeenSet = true; m_engineVersion = std::move(value); }

    /**
     * <p>The engine version of the Aurora global database.</p>
     */
    inline void SetEngineVersion(const char* value) { m_engineVersionHasBeenSet = true; m_engineVersion.assign(value); }

    /**
     * <p>The engine version of the Aurora global database.</p>
     */
    inline CreateGlobalClusterRequest& WithEngineVersion(const Aws::String& value) { SetEngineVersion(value); return *this;}

    /**
     * <p>The engine version of the Aurora global database.</p>
     */
    inline CreateGlobalClusterRequest& WithEngineVersion(Aws::String&& value) { SetEngineVersion(std::move(value)); return *this;}

    /**
     * <p>The engine version of the Aurora global database.</p>
     */
    inline CreateGlobalClusterRequest& WithEngineVersion(const char* value) { SetEngineVersion(value); return *this;}


    /**
     * <p> The deletion protection setting for the new global database. The global
     * database can't be deleted when deletion protection is enabled. </p>
     */
    inline bool GetDeletionProtection() const{ return m_deletionProtection; }

    /**
     * <p> The deletion protection setting for the new global database. The global
     * database can't be deleted when deletion protection is enabled. </p>
     */
    inline bool DeletionProtectionHasBeenSet() const { return m_deletionProtectionHasBeenSet; }

    /**
     * <p> The deletion protection setting for the new global database. The global
     * database can't be deleted when deletion protection is enabled. </p>
     */
    inline void SetDeletionProtection(bool value) { m_deletionProtectionHasBeenSet = true; m_deletionProtection = value; }

    /**
     * <p> The deletion protection setting for the new global database. The global
     * database can't be deleted when deletion protection is enabled. </p>
     */
    inline CreateGlobalClusterRequest& WithDeletionProtection(bool value) { SetDeletionProtection(value); return *this;}


    /**
     * <p> The name for your database of up to 64 alpha-numeric characters. If you do
     * not provide a name, Amazon Aurora will not create a database in the global
     * database cluster you are creating. </p>
     */
    inline const Aws::String& GetDatabaseName() const{ return m_databaseName; }

    /**
     * <p> The name for your database of up to 64 alpha-numeric characters. If you do
     * not provide a name, Amazon Aurora will not create a database in the global
     * database cluster you are creating. </p>
     */
    inline bool DatabaseNameHasBeenSet() const { return m_databaseNameHasBeenSet; }

    /**
     * <p> The name for your database of up to 64 alpha-numeric characters. If you do
     * not provide a name, Amazon Aurora will not create a database in the global
     * database cluster you are creating. </p>
     */
    inline void SetDatabaseName(const Aws::String& value) { m_databaseNameHasBeenSet = true; m_databaseName = value; }

    /**
     * <p> The name for your database of up to 64 alpha-numeric characters. If you do
     * not provide a name, Amazon Aurora will not create a database in the global
     * database cluster you are creating. </p>
     */
    inline void SetDatabaseName(Aws::String&& value) { m_databaseNameHasBeenSet = true; m_databaseName = std::move(value); }

    /**
     * <p> The name for your database of up to 64 alpha-numeric characters. If you do
     * not provide a name, Amazon Aurora will not create a database in the global
     * database cluster you are creating. </p>
     */
    inline void SetDatabaseName(const char* value) { m_databaseNameHasBeenSet = true; m_databaseName.assign(value); }

    /**
     * <p> The name for your database of up to 64 alpha-numeric characters. If you do
     * not provide a name, Amazon Aurora will not create a database in the global
     * database cluster you are creating. </p>
     */
    inline CreateGlobalClusterRequest& WithDatabaseName(const Aws::String& value) { SetDatabaseName(value); return *this;}

    /**
     * <p> The name for your database of up to 64 alpha-numeric characters. If you do
     * not provide a name, Amazon Aurora will not create a database in the global
     * database cluster you are creating. </p>
     */
    inline CreateGlobalClusterRequest& WithDatabaseName(Aws::String&& value) { SetDatabaseName(std::move(value)); return *this;}

    /**
     * <p> The name for your database of up to 64 alpha-numeric characters. If you do
     * not provide a name, Amazon Aurora will not create a database in the global
     * database cluster you are creating. </p>
     */
    inline CreateGlobalClusterRequest& WithDatabaseName(const char* value) { SetDatabaseName(value); return *this;}


    /**
     * <p> The storage encryption setting for the new global database cluster. </p>
     */
    inline bool GetStorageEncrypted() const{ return m_storageEncrypted; }

    /**
     * <p> The storage encryption setting for the new global database cluster. </p>
     */
    inline bool StorageEncryptedHasBeenSet() const { return m_storageEncryptedHasBeenSet; }

    /**
     * <p> The storage encryption setting for the new global database cluster. </p>
     */
    inline void SetStorageEncrypted(bool value) { m_storageEncryptedHasBeenSet = true; m_storageEncrypted = value; }

    /**
     * <p> The storage encryption setting for the new global database cluster. </p>
     */
    inline CreateGlobalClusterRequest& WithStorageEncrypted(bool value) { SetStorageEncrypted(value); return *this;}

  private:

    Aws::String m_globalClusterIdentifier;
    bool m_globalClusterIdentifierHasBeenSet;

    Aws::String m_sourceDBClusterIdentifier;
    bool m_sourceDBClusterIdentifierHasBeenSet;

    Aws::String m_engine;
    bool m_engineHasBeenSet;

    Aws::String m_engineVersion;
    bool m_engineVersionHasBeenSet;

    bool m_deletionProtection;
    bool m_deletionProtectionHasBeenSet;

    Aws::String m_databaseName;
    bool m_databaseNameHasBeenSet;

    bool m_storageEncrypted;
    bool m_storageEncryptedHasBeenSet;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
