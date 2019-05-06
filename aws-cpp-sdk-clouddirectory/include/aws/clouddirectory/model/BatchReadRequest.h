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
#include <aws/clouddirectory/CloudDirectory_EXPORTS.h>
#include <aws/clouddirectory/CloudDirectoryRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/clouddirectory/model/ConsistencyLevel.h>
#include <aws/clouddirectory/model/BatchReadOperation.h>
#include <utility>

namespace Aws
{
namespace CloudDirectory
{
namespace Model
{

  /**
   */
  class AWS_CLOUDDIRECTORY_API BatchReadRequest : public CloudDirectoryRequest
  {
  public:
    BatchReadRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchRead"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The Amazon Resource Name (ARN) that is associated with the <a>Directory</a>.
     * For more information, see <a>arns</a>.</p>
     */
    inline const Aws::String& GetDirectoryArn() const{ return m_directoryArn; }

    /**
     * <p>The Amazon Resource Name (ARN) that is associated with the <a>Directory</a>.
     * For more information, see <a>arns</a>.</p>
     */
    inline bool DirectoryArnHasBeenSet() const { return m_directoryArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) that is associated with the <a>Directory</a>.
     * For more information, see <a>arns</a>.</p>
     */
    inline void SetDirectoryArn(const Aws::String& value) { m_directoryArnHasBeenSet = true; m_directoryArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) that is associated with the <a>Directory</a>.
     * For more information, see <a>arns</a>.</p>
     */
    inline void SetDirectoryArn(Aws::String&& value) { m_directoryArnHasBeenSet = true; m_directoryArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) that is associated with the <a>Directory</a>.
     * For more information, see <a>arns</a>.</p>
     */
    inline void SetDirectoryArn(const char* value) { m_directoryArnHasBeenSet = true; m_directoryArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) that is associated with the <a>Directory</a>.
     * For more information, see <a>arns</a>.</p>
     */
    inline BatchReadRequest& WithDirectoryArn(const Aws::String& value) { SetDirectoryArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) that is associated with the <a>Directory</a>.
     * For more information, see <a>arns</a>.</p>
     */
    inline BatchReadRequest& WithDirectoryArn(Aws::String&& value) { SetDirectoryArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) that is associated with the <a>Directory</a>.
     * For more information, see <a>arns</a>.</p>
     */
    inline BatchReadRequest& WithDirectoryArn(const char* value) { SetDirectoryArn(value); return *this;}


    /**
     * <p>A list of operations that are part of the batch.</p>
     */
    inline const Aws::Vector<BatchReadOperation>& GetOperations() const{ return m_operations; }

    /**
     * <p>A list of operations that are part of the batch.</p>
     */
    inline bool OperationsHasBeenSet() const { return m_operationsHasBeenSet; }

    /**
     * <p>A list of operations that are part of the batch.</p>
     */
    inline void SetOperations(const Aws::Vector<BatchReadOperation>& value) { m_operationsHasBeenSet = true; m_operations = value; }

    /**
     * <p>A list of operations that are part of the batch.</p>
     */
    inline void SetOperations(Aws::Vector<BatchReadOperation>&& value) { m_operationsHasBeenSet = true; m_operations = std::move(value); }

    /**
     * <p>A list of operations that are part of the batch.</p>
     */
    inline BatchReadRequest& WithOperations(const Aws::Vector<BatchReadOperation>& value) { SetOperations(value); return *this;}

    /**
     * <p>A list of operations that are part of the batch.</p>
     */
    inline BatchReadRequest& WithOperations(Aws::Vector<BatchReadOperation>&& value) { SetOperations(std::move(value)); return *this;}

    /**
     * <p>A list of operations that are part of the batch.</p>
     */
    inline BatchReadRequest& AddOperations(const BatchReadOperation& value) { m_operationsHasBeenSet = true; m_operations.push_back(value); return *this; }

    /**
     * <p>A list of operations that are part of the batch.</p>
     */
    inline BatchReadRequest& AddOperations(BatchReadOperation&& value) { m_operationsHasBeenSet = true; m_operations.push_back(std::move(value)); return *this; }


    /**
     * <p>Represents the manner and timing in which the successful write or update of
     * an object is reflected in a subsequent read operation of that same object.</p>
     */
    inline const ConsistencyLevel& GetConsistencyLevel() const{ return m_consistencyLevel; }

    /**
     * <p>Represents the manner and timing in which the successful write or update of
     * an object is reflected in a subsequent read operation of that same object.</p>
     */
    inline bool ConsistencyLevelHasBeenSet() const { return m_consistencyLevelHasBeenSet; }

    /**
     * <p>Represents the manner and timing in which the successful write or update of
     * an object is reflected in a subsequent read operation of that same object.</p>
     */
    inline void SetConsistencyLevel(const ConsistencyLevel& value) { m_consistencyLevelHasBeenSet = true; m_consistencyLevel = value; }

    /**
     * <p>Represents the manner and timing in which the successful write or update of
     * an object is reflected in a subsequent read operation of that same object.</p>
     */
    inline void SetConsistencyLevel(ConsistencyLevel&& value) { m_consistencyLevelHasBeenSet = true; m_consistencyLevel = std::move(value); }

    /**
     * <p>Represents the manner and timing in which the successful write or update of
     * an object is reflected in a subsequent read operation of that same object.</p>
     */
    inline BatchReadRequest& WithConsistencyLevel(const ConsistencyLevel& value) { SetConsistencyLevel(value); return *this;}

    /**
     * <p>Represents the manner and timing in which the successful write or update of
     * an object is reflected in a subsequent read operation of that same object.</p>
     */
    inline BatchReadRequest& WithConsistencyLevel(ConsistencyLevel&& value) { SetConsistencyLevel(std::move(value)); return *this;}

  private:

    Aws::String m_directoryArn;
    bool m_directoryArnHasBeenSet;

    Aws::Vector<BatchReadOperation> m_operations;
    bool m_operationsHasBeenSet;

    ConsistencyLevel m_consistencyLevel;
    bool m_consistencyLevelHasBeenSet;
  };

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
