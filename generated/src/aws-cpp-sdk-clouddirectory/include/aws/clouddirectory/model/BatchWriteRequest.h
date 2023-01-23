/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/clouddirectory/CloudDirectory_EXPORTS.h>
#include <aws/clouddirectory/CloudDirectoryRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/clouddirectory/model/BatchWriteOperation.h>
#include <utility>

namespace Aws
{
namespace CloudDirectory
{
namespace Model
{

  /**
   */
  class BatchWriteRequest : public CloudDirectoryRequest
  {
  public:
    AWS_CLOUDDIRECTORY_API BatchWriteRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchWrite"; }

    AWS_CLOUDDIRECTORY_API Aws::String SerializePayload() const override;

    AWS_CLOUDDIRECTORY_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


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
    inline BatchWriteRequest& WithDirectoryArn(const Aws::String& value) { SetDirectoryArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) that is associated with the <a>Directory</a>.
     * For more information, see <a>arns</a>.</p>
     */
    inline BatchWriteRequest& WithDirectoryArn(Aws::String&& value) { SetDirectoryArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) that is associated with the <a>Directory</a>.
     * For more information, see <a>arns</a>.</p>
     */
    inline BatchWriteRequest& WithDirectoryArn(const char* value) { SetDirectoryArn(value); return *this;}


    /**
     * <p>A list of operations that are part of the batch.</p>
     */
    inline const Aws::Vector<BatchWriteOperation>& GetOperations() const{ return m_operations; }

    /**
     * <p>A list of operations that are part of the batch.</p>
     */
    inline bool OperationsHasBeenSet() const { return m_operationsHasBeenSet; }

    /**
     * <p>A list of operations that are part of the batch.</p>
     */
    inline void SetOperations(const Aws::Vector<BatchWriteOperation>& value) { m_operationsHasBeenSet = true; m_operations = value; }

    /**
     * <p>A list of operations that are part of the batch.</p>
     */
    inline void SetOperations(Aws::Vector<BatchWriteOperation>&& value) { m_operationsHasBeenSet = true; m_operations = std::move(value); }

    /**
     * <p>A list of operations that are part of the batch.</p>
     */
    inline BatchWriteRequest& WithOperations(const Aws::Vector<BatchWriteOperation>& value) { SetOperations(value); return *this;}

    /**
     * <p>A list of operations that are part of the batch.</p>
     */
    inline BatchWriteRequest& WithOperations(Aws::Vector<BatchWriteOperation>&& value) { SetOperations(std::move(value)); return *this;}

    /**
     * <p>A list of operations that are part of the batch.</p>
     */
    inline BatchWriteRequest& AddOperations(const BatchWriteOperation& value) { m_operationsHasBeenSet = true; m_operations.push_back(value); return *this; }

    /**
     * <p>A list of operations that are part of the batch.</p>
     */
    inline BatchWriteRequest& AddOperations(BatchWriteOperation&& value) { m_operationsHasBeenSet = true; m_operations.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_directoryArn;
    bool m_directoryArnHasBeenSet = false;

    Aws::Vector<BatchWriteOperation> m_operations;
    bool m_operationsHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
