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
#include <aws/dynamodb/model/ProvisionedThroughput.h>
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
   * <p>Represents the new provisioned throughput settings to be applied to a global
   * secondary index.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/UpdateGlobalSecondaryIndexAction">AWS
   * API Reference</a></p>
   */
  class AWS_DYNAMODB_API UpdateGlobalSecondaryIndexAction
  {
  public:
    UpdateGlobalSecondaryIndexAction();
    UpdateGlobalSecondaryIndexAction(Aws::Utils::Json::JsonView jsonValue);
    UpdateGlobalSecondaryIndexAction& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the global secondary index to be updated.</p>
     */
    inline const Aws::String& GetIndexName() const{ return m_indexName; }

    /**
     * <p>The name of the global secondary index to be updated.</p>
     */
    inline bool IndexNameHasBeenSet() const { return m_indexNameHasBeenSet; }

    /**
     * <p>The name of the global secondary index to be updated.</p>
     */
    inline void SetIndexName(const Aws::String& value) { m_indexNameHasBeenSet = true; m_indexName = value; }

    /**
     * <p>The name of the global secondary index to be updated.</p>
     */
    inline void SetIndexName(Aws::String&& value) { m_indexNameHasBeenSet = true; m_indexName = std::move(value); }

    /**
     * <p>The name of the global secondary index to be updated.</p>
     */
    inline void SetIndexName(const char* value) { m_indexNameHasBeenSet = true; m_indexName.assign(value); }

    /**
     * <p>The name of the global secondary index to be updated.</p>
     */
    inline UpdateGlobalSecondaryIndexAction& WithIndexName(const Aws::String& value) { SetIndexName(value); return *this;}

    /**
     * <p>The name of the global secondary index to be updated.</p>
     */
    inline UpdateGlobalSecondaryIndexAction& WithIndexName(Aws::String&& value) { SetIndexName(std::move(value)); return *this;}

    /**
     * <p>The name of the global secondary index to be updated.</p>
     */
    inline UpdateGlobalSecondaryIndexAction& WithIndexName(const char* value) { SetIndexName(value); return *this;}


    /**
     * <p>Represents the provisioned throughput settings for the specified global
     * secondary index.</p> <p>For current minimum and maximum provisioned throughput
     * values, see <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/Limits.html">Limits</a>
     * in the <i>Amazon DynamoDB Developer Guide</i>.</p>
     */
    inline const ProvisionedThroughput& GetProvisionedThroughput() const{ return m_provisionedThroughput; }

    /**
     * <p>Represents the provisioned throughput settings for the specified global
     * secondary index.</p> <p>For current minimum and maximum provisioned throughput
     * values, see <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/Limits.html">Limits</a>
     * in the <i>Amazon DynamoDB Developer Guide</i>.</p>
     */
    inline bool ProvisionedThroughputHasBeenSet() const { return m_provisionedThroughputHasBeenSet; }

    /**
     * <p>Represents the provisioned throughput settings for the specified global
     * secondary index.</p> <p>For current minimum and maximum provisioned throughput
     * values, see <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/Limits.html">Limits</a>
     * in the <i>Amazon DynamoDB Developer Guide</i>.</p>
     */
    inline void SetProvisionedThroughput(const ProvisionedThroughput& value) { m_provisionedThroughputHasBeenSet = true; m_provisionedThroughput = value; }

    /**
     * <p>Represents the provisioned throughput settings for the specified global
     * secondary index.</p> <p>For current minimum and maximum provisioned throughput
     * values, see <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/Limits.html">Limits</a>
     * in the <i>Amazon DynamoDB Developer Guide</i>.</p>
     */
    inline void SetProvisionedThroughput(ProvisionedThroughput&& value) { m_provisionedThroughputHasBeenSet = true; m_provisionedThroughput = std::move(value); }

    /**
     * <p>Represents the provisioned throughput settings for the specified global
     * secondary index.</p> <p>For current minimum and maximum provisioned throughput
     * values, see <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/Limits.html">Limits</a>
     * in the <i>Amazon DynamoDB Developer Guide</i>.</p>
     */
    inline UpdateGlobalSecondaryIndexAction& WithProvisionedThroughput(const ProvisionedThroughput& value) { SetProvisionedThroughput(value); return *this;}

    /**
     * <p>Represents the provisioned throughput settings for the specified global
     * secondary index.</p> <p>For current minimum and maximum provisioned throughput
     * values, see <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/Limits.html">Limits</a>
     * in the <i>Amazon DynamoDB Developer Guide</i>.</p>
     */
    inline UpdateGlobalSecondaryIndexAction& WithProvisionedThroughput(ProvisionedThroughput&& value) { SetProvisionedThroughput(std::move(value)); return *this;}

  private:

    Aws::String m_indexName;
    bool m_indexNameHasBeenSet;

    ProvisionedThroughput m_provisionedThroughput;
    bool m_provisionedThroughputHasBeenSet;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
