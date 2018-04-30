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
#include <aws/dynamodb/DynamoDB_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/dynamodb/model/IndexStatus.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace DynamoDB
{
namespace Model
{

  /**
   * <p>Represents the properties of a global secondary index.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/ReplicaGlobalSecondaryIndexSettingsDescription">AWS
   * API Reference</a></p>
   */
  class AWS_DYNAMODB_API ReplicaGlobalSecondaryIndexSettingsDescription
  {
  public:
    ReplicaGlobalSecondaryIndexSettingsDescription();
    ReplicaGlobalSecondaryIndexSettingsDescription(const Aws::Utils::Json::JsonValue& jsonValue);
    ReplicaGlobalSecondaryIndexSettingsDescription& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the global secondary index. The name must be unique among all
     * other indexes on this table.</p>
     */
    inline const Aws::String& GetIndexName() const{ return m_indexName; }

    /**
     * <p>The name of the global secondary index. The name must be unique among all
     * other indexes on this table.</p>
     */
    inline void SetIndexName(const Aws::String& value) { m_indexNameHasBeenSet = true; m_indexName = value; }

    /**
     * <p>The name of the global secondary index. The name must be unique among all
     * other indexes on this table.</p>
     */
    inline void SetIndexName(Aws::String&& value) { m_indexNameHasBeenSet = true; m_indexName = std::move(value); }

    /**
     * <p>The name of the global secondary index. The name must be unique among all
     * other indexes on this table.</p>
     */
    inline void SetIndexName(const char* value) { m_indexNameHasBeenSet = true; m_indexName.assign(value); }

    /**
     * <p>The name of the global secondary index. The name must be unique among all
     * other indexes on this table.</p>
     */
    inline ReplicaGlobalSecondaryIndexSettingsDescription& WithIndexName(const Aws::String& value) { SetIndexName(value); return *this;}

    /**
     * <p>The name of the global secondary index. The name must be unique among all
     * other indexes on this table.</p>
     */
    inline ReplicaGlobalSecondaryIndexSettingsDescription& WithIndexName(Aws::String&& value) { SetIndexName(std::move(value)); return *this;}

    /**
     * <p>The name of the global secondary index. The name must be unique among all
     * other indexes on this table.</p>
     */
    inline ReplicaGlobalSecondaryIndexSettingsDescription& WithIndexName(const char* value) { SetIndexName(value); return *this;}


    /**
     * <p> The current status of the global secondary index:</p> <ul> <li> <p>
     * <code>CREATING</code> - The global secondary index is being created.</p> </li>
     * <li> <p> <code>UPDATING</code> - The global secondary index is being
     * updated.</p> </li> <li> <p> <code>DELETING</code> - The global secondary index
     * is being deleted.</p> </li> <li> <p> <code>ACTIVE</code> - The global secondary
     * index is ready for use.</p> </li> </ul>
     */
    inline const IndexStatus& GetIndexStatus() const{ return m_indexStatus; }

    /**
     * <p> The current status of the global secondary index:</p> <ul> <li> <p>
     * <code>CREATING</code> - The global secondary index is being created.</p> </li>
     * <li> <p> <code>UPDATING</code> - The global secondary index is being
     * updated.</p> </li> <li> <p> <code>DELETING</code> - The global secondary index
     * is being deleted.</p> </li> <li> <p> <code>ACTIVE</code> - The global secondary
     * index is ready for use.</p> </li> </ul>
     */
    inline void SetIndexStatus(const IndexStatus& value) { m_indexStatusHasBeenSet = true; m_indexStatus = value; }

    /**
     * <p> The current status of the global secondary index:</p> <ul> <li> <p>
     * <code>CREATING</code> - The global secondary index is being created.</p> </li>
     * <li> <p> <code>UPDATING</code> - The global secondary index is being
     * updated.</p> </li> <li> <p> <code>DELETING</code> - The global secondary index
     * is being deleted.</p> </li> <li> <p> <code>ACTIVE</code> - The global secondary
     * index is ready for use.</p> </li> </ul>
     */
    inline void SetIndexStatus(IndexStatus&& value) { m_indexStatusHasBeenSet = true; m_indexStatus = std::move(value); }

    /**
     * <p> The current status of the global secondary index:</p> <ul> <li> <p>
     * <code>CREATING</code> - The global secondary index is being created.</p> </li>
     * <li> <p> <code>UPDATING</code> - The global secondary index is being
     * updated.</p> </li> <li> <p> <code>DELETING</code> - The global secondary index
     * is being deleted.</p> </li> <li> <p> <code>ACTIVE</code> - The global secondary
     * index is ready for use.</p> </li> </ul>
     */
    inline ReplicaGlobalSecondaryIndexSettingsDescription& WithIndexStatus(const IndexStatus& value) { SetIndexStatus(value); return *this;}

    /**
     * <p> The current status of the global secondary index:</p> <ul> <li> <p>
     * <code>CREATING</code> - The global secondary index is being created.</p> </li>
     * <li> <p> <code>UPDATING</code> - The global secondary index is being
     * updated.</p> </li> <li> <p> <code>DELETING</code> - The global secondary index
     * is being deleted.</p> </li> <li> <p> <code>ACTIVE</code> - The global secondary
     * index is ready for use.</p> </li> </ul>
     */
    inline ReplicaGlobalSecondaryIndexSettingsDescription& WithIndexStatus(IndexStatus&& value) { SetIndexStatus(std::move(value)); return *this;}


    /**
     * <p>The maximum number of strongly consistent reads consumed per second before
     * DynamoDB returns a <code>ThrottlingException</code>.</p>
     */
    inline long long GetProvisionedReadCapacityUnits() const{ return m_provisionedReadCapacityUnits; }

    /**
     * <p>The maximum number of strongly consistent reads consumed per second before
     * DynamoDB returns a <code>ThrottlingException</code>.</p>
     */
    inline void SetProvisionedReadCapacityUnits(long long value) { m_provisionedReadCapacityUnitsHasBeenSet = true; m_provisionedReadCapacityUnits = value; }

    /**
     * <p>The maximum number of strongly consistent reads consumed per second before
     * DynamoDB returns a <code>ThrottlingException</code>.</p>
     */
    inline ReplicaGlobalSecondaryIndexSettingsDescription& WithProvisionedReadCapacityUnits(long long value) { SetProvisionedReadCapacityUnits(value); return *this;}


    /**
     * <p>The maximum number of writes consumed per second before DynamoDB returns a
     * <code>ThrottlingException</code>.</p>
     */
    inline long long GetProvisionedWriteCapacityUnits() const{ return m_provisionedWriteCapacityUnits; }

    /**
     * <p>The maximum number of writes consumed per second before DynamoDB returns a
     * <code>ThrottlingException</code>.</p>
     */
    inline void SetProvisionedWriteCapacityUnits(long long value) { m_provisionedWriteCapacityUnitsHasBeenSet = true; m_provisionedWriteCapacityUnits = value; }

    /**
     * <p>The maximum number of writes consumed per second before DynamoDB returns a
     * <code>ThrottlingException</code>.</p>
     */
    inline ReplicaGlobalSecondaryIndexSettingsDescription& WithProvisionedWriteCapacityUnits(long long value) { SetProvisionedWriteCapacityUnits(value); return *this;}

  private:

    Aws::String m_indexName;
    bool m_indexNameHasBeenSet;

    IndexStatus m_indexStatus;
    bool m_indexStatusHasBeenSet;

    long long m_provisionedReadCapacityUnits;
    bool m_provisionedReadCapacityUnitsHasBeenSet;

    long long m_provisionedWriteCapacityUnits;
    bool m_provisionedWriteCapacityUnitsHasBeenSet;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
