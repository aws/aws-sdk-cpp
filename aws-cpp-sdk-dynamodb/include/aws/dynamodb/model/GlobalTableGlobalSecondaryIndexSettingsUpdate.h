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
   * <p>Represents the settings of a global secondary index for a global table that
   * will be modified.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/GlobalTableGlobalSecondaryIndexSettingsUpdate">AWS
   * API Reference</a></p>
   */
  class AWS_DYNAMODB_API GlobalTableGlobalSecondaryIndexSettingsUpdate
  {
  public:
    GlobalTableGlobalSecondaryIndexSettingsUpdate();
    GlobalTableGlobalSecondaryIndexSettingsUpdate(const Aws::Utils::Json::JsonValue& jsonValue);
    GlobalTableGlobalSecondaryIndexSettingsUpdate& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
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
    inline GlobalTableGlobalSecondaryIndexSettingsUpdate& WithIndexName(const Aws::String& value) { SetIndexName(value); return *this;}

    /**
     * <p>The name of the global secondary index. The name must be unique among all
     * other indexes on this table.</p>
     */
    inline GlobalTableGlobalSecondaryIndexSettingsUpdate& WithIndexName(Aws::String&& value) { SetIndexName(std::move(value)); return *this;}

    /**
     * <p>The name of the global secondary index. The name must be unique among all
     * other indexes on this table.</p>
     */
    inline GlobalTableGlobalSecondaryIndexSettingsUpdate& WithIndexName(const char* value) { SetIndexName(value); return *this;}


    /**
     * <p>The maximum number of writes consumed per second before DynamoDB returns a
     * <code>ThrottlingException.</code> </p>
     */
    inline long long GetProvisionedWriteCapacityUnits() const{ return m_provisionedWriteCapacityUnits; }

    /**
     * <p>The maximum number of writes consumed per second before DynamoDB returns a
     * <code>ThrottlingException.</code> </p>
     */
    inline void SetProvisionedWriteCapacityUnits(long long value) { m_provisionedWriteCapacityUnitsHasBeenSet = true; m_provisionedWriteCapacityUnits = value; }

    /**
     * <p>The maximum number of writes consumed per second before DynamoDB returns a
     * <code>ThrottlingException.</code> </p>
     */
    inline GlobalTableGlobalSecondaryIndexSettingsUpdate& WithProvisionedWriteCapacityUnits(long long value) { SetProvisionedWriteCapacityUnits(value); return *this;}

  private:

    Aws::String m_indexName;
    bool m_indexNameHasBeenSet;

    long long m_provisionedWriteCapacityUnits;
    bool m_provisionedWriteCapacityUnitsHasBeenSet;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
