/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dynamodb/DynamoDB_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/dynamodb/model/AutoScalingSettingsUpdate.h>
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
namespace DynamoDB
{
namespace Model
{

  /**
   * <p>Represents the auto scaling settings of a global secondary index for a global
   * table that will be modified.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/GlobalSecondaryIndexAutoScalingUpdate">AWS
   * API Reference</a></p>
   */
  class GlobalSecondaryIndexAutoScalingUpdate
  {
  public:
    AWS_DYNAMODB_API GlobalSecondaryIndexAutoScalingUpdate();
    AWS_DYNAMODB_API GlobalSecondaryIndexAutoScalingUpdate(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODB_API GlobalSecondaryIndexAutoScalingUpdate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the global secondary index.</p>
     */
    inline const Aws::String& GetIndexName() const{ return m_indexName; }

    /**
     * <p>The name of the global secondary index.</p>
     */
    inline bool IndexNameHasBeenSet() const { return m_indexNameHasBeenSet; }

    /**
     * <p>The name of the global secondary index.</p>
     */
    inline void SetIndexName(const Aws::String& value) { m_indexNameHasBeenSet = true; m_indexName = value; }

    /**
     * <p>The name of the global secondary index.</p>
     */
    inline void SetIndexName(Aws::String&& value) { m_indexNameHasBeenSet = true; m_indexName = std::move(value); }

    /**
     * <p>The name of the global secondary index.</p>
     */
    inline void SetIndexName(const char* value) { m_indexNameHasBeenSet = true; m_indexName.assign(value); }

    /**
     * <p>The name of the global secondary index.</p>
     */
    inline GlobalSecondaryIndexAutoScalingUpdate& WithIndexName(const Aws::String& value) { SetIndexName(value); return *this;}

    /**
     * <p>The name of the global secondary index.</p>
     */
    inline GlobalSecondaryIndexAutoScalingUpdate& WithIndexName(Aws::String&& value) { SetIndexName(std::move(value)); return *this;}

    /**
     * <p>The name of the global secondary index.</p>
     */
    inline GlobalSecondaryIndexAutoScalingUpdate& WithIndexName(const char* value) { SetIndexName(value); return *this;}


    
    inline const AutoScalingSettingsUpdate& GetProvisionedWriteCapacityAutoScalingUpdate() const{ return m_provisionedWriteCapacityAutoScalingUpdate; }

    
    inline bool ProvisionedWriteCapacityAutoScalingUpdateHasBeenSet() const { return m_provisionedWriteCapacityAutoScalingUpdateHasBeenSet; }

    
    inline void SetProvisionedWriteCapacityAutoScalingUpdate(const AutoScalingSettingsUpdate& value) { m_provisionedWriteCapacityAutoScalingUpdateHasBeenSet = true; m_provisionedWriteCapacityAutoScalingUpdate = value; }

    
    inline void SetProvisionedWriteCapacityAutoScalingUpdate(AutoScalingSettingsUpdate&& value) { m_provisionedWriteCapacityAutoScalingUpdateHasBeenSet = true; m_provisionedWriteCapacityAutoScalingUpdate = std::move(value); }

    
    inline GlobalSecondaryIndexAutoScalingUpdate& WithProvisionedWriteCapacityAutoScalingUpdate(const AutoScalingSettingsUpdate& value) { SetProvisionedWriteCapacityAutoScalingUpdate(value); return *this;}

    
    inline GlobalSecondaryIndexAutoScalingUpdate& WithProvisionedWriteCapacityAutoScalingUpdate(AutoScalingSettingsUpdate&& value) { SetProvisionedWriteCapacityAutoScalingUpdate(std::move(value)); return *this;}

  private:

    Aws::String m_indexName;
    bool m_indexNameHasBeenSet = false;

    AutoScalingSettingsUpdate m_provisionedWriteCapacityAutoScalingUpdate;
    bool m_provisionedWriteCapacityAutoScalingUpdateHasBeenSet = false;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
