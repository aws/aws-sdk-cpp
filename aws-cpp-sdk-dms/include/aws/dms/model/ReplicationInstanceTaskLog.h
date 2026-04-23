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
#include <aws/dms/DatabaseMigrationService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace DatabaseMigrationService
{
namespace Model
{

  /**
   * <p>Contains metadata for a replication instance task log.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/ReplicationInstanceTaskLog">AWS
   * API Reference</a></p>
   */
  class AWS_DATABASEMIGRATIONSERVICE_API ReplicationInstanceTaskLog
  {
  public:
    ReplicationInstanceTaskLog();
    ReplicationInstanceTaskLog(Aws::Utils::Json::JsonView jsonValue);
    ReplicationInstanceTaskLog& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the replication task.</p>
     */
    inline const Aws::String& GetReplicationTaskName() const{ return m_replicationTaskName; }

    /**
     * <p>The name of the replication task.</p>
     */
    inline bool ReplicationTaskNameHasBeenSet() const { return m_replicationTaskNameHasBeenSet; }

    /**
     * <p>The name of the replication task.</p>
     */
    inline void SetReplicationTaskName(const Aws::String& value) { m_replicationTaskNameHasBeenSet = true; m_replicationTaskName = value; }

    /**
     * <p>The name of the replication task.</p>
     */
    inline void SetReplicationTaskName(Aws::String&& value) { m_replicationTaskNameHasBeenSet = true; m_replicationTaskName = std::move(value); }

    /**
     * <p>The name of the replication task.</p>
     */
    inline void SetReplicationTaskName(const char* value) { m_replicationTaskNameHasBeenSet = true; m_replicationTaskName.assign(value); }

    /**
     * <p>The name of the replication task.</p>
     */
    inline ReplicationInstanceTaskLog& WithReplicationTaskName(const Aws::String& value) { SetReplicationTaskName(value); return *this;}

    /**
     * <p>The name of the replication task.</p>
     */
    inline ReplicationInstanceTaskLog& WithReplicationTaskName(Aws::String&& value) { SetReplicationTaskName(std::move(value)); return *this;}

    /**
     * <p>The name of the replication task.</p>
     */
    inline ReplicationInstanceTaskLog& WithReplicationTaskName(const char* value) { SetReplicationTaskName(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the replication task.</p>
     */
    inline const Aws::String& GetReplicationTaskArn() const{ return m_replicationTaskArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the replication task.</p>
     */
    inline bool ReplicationTaskArnHasBeenSet() const { return m_replicationTaskArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the replication task.</p>
     */
    inline void SetReplicationTaskArn(const Aws::String& value) { m_replicationTaskArnHasBeenSet = true; m_replicationTaskArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the replication task.</p>
     */
    inline void SetReplicationTaskArn(Aws::String&& value) { m_replicationTaskArnHasBeenSet = true; m_replicationTaskArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the replication task.</p>
     */
    inline void SetReplicationTaskArn(const char* value) { m_replicationTaskArnHasBeenSet = true; m_replicationTaskArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the replication task.</p>
     */
    inline ReplicationInstanceTaskLog& WithReplicationTaskArn(const Aws::String& value) { SetReplicationTaskArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the replication task.</p>
     */
    inline ReplicationInstanceTaskLog& WithReplicationTaskArn(Aws::String&& value) { SetReplicationTaskArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the replication task.</p>
     */
    inline ReplicationInstanceTaskLog& WithReplicationTaskArn(const char* value) { SetReplicationTaskArn(value); return *this;}


    /**
     * <p>The size, in bytes, of the replication task log.</p>
     */
    inline long long GetReplicationInstanceTaskLogSize() const{ return m_replicationInstanceTaskLogSize; }

    /**
     * <p>The size, in bytes, of the replication task log.</p>
     */
    inline bool ReplicationInstanceTaskLogSizeHasBeenSet() const { return m_replicationInstanceTaskLogSizeHasBeenSet; }

    /**
     * <p>The size, in bytes, of the replication task log.</p>
     */
    inline void SetReplicationInstanceTaskLogSize(long long value) { m_replicationInstanceTaskLogSizeHasBeenSet = true; m_replicationInstanceTaskLogSize = value; }

    /**
     * <p>The size, in bytes, of the replication task log.</p>
     */
    inline ReplicationInstanceTaskLog& WithReplicationInstanceTaskLogSize(long long value) { SetReplicationInstanceTaskLogSize(value); return *this;}

  private:

    Aws::String m_replicationTaskName;
    bool m_replicationTaskNameHasBeenSet;

    Aws::String m_replicationTaskArn;
    bool m_replicationTaskArnHasBeenSet;

    long long m_replicationInstanceTaskLogSize;
    bool m_replicationInstanceTaskLogSizeHasBeenSet;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
