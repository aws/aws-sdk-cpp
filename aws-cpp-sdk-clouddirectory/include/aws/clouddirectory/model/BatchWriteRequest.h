/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/clouddirectory/model/BatchWriteOperation.h>

namespace Aws
{
namespace CloudDirectory
{
namespace Model
{

  /**
   */
  class AWS_CLOUDDIRECTORY_API BatchWriteRequest : public CloudDirectoryRequest
  {
  public:
    BatchWriteRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>ARN associated with the <a>Directory</a>. For more information, see
     * <a>arns</a>.</p>
     */
    inline const Aws::String& GetDirectoryArn() const{ return m_directoryArn; }

    /**
     * <p>ARN associated with the <a>Directory</a>. For more information, see
     * <a>arns</a>.</p>
     */
    inline void SetDirectoryArn(const Aws::String& value) { m_directoryArnHasBeenSet = true; m_directoryArn = value; }

    /**
     * <p>ARN associated with the <a>Directory</a>. For more information, see
     * <a>arns</a>.</p>
     */
    inline void SetDirectoryArn(Aws::String&& value) { m_directoryArnHasBeenSet = true; m_directoryArn = value; }

    /**
     * <p>ARN associated with the <a>Directory</a>. For more information, see
     * <a>arns</a>.</p>
     */
    inline void SetDirectoryArn(const char* value) { m_directoryArnHasBeenSet = true; m_directoryArn.assign(value); }

    /**
     * <p>ARN associated with the <a>Directory</a>. For more information, see
     * <a>arns</a>.</p>
     */
    inline BatchWriteRequest& WithDirectoryArn(const Aws::String& value) { SetDirectoryArn(value); return *this;}

    /**
     * <p>ARN associated with the <a>Directory</a>. For more information, see
     * <a>arns</a>.</p>
     */
    inline BatchWriteRequest& WithDirectoryArn(Aws::String&& value) { SetDirectoryArn(value); return *this;}

    /**
     * <p>ARN associated with the <a>Directory</a>. For more information, see
     * <a>arns</a>.</p>
     */
    inline BatchWriteRequest& WithDirectoryArn(const char* value) { SetDirectoryArn(value); return *this;}

    /**
     * <p>List of operations that are part of the batch.</p>
     */
    inline const Aws::Vector<BatchWriteOperation>& GetOperations() const{ return m_operations; }

    /**
     * <p>List of operations that are part of the batch.</p>
     */
    inline void SetOperations(const Aws::Vector<BatchWriteOperation>& value) { m_operationsHasBeenSet = true; m_operations = value; }

    /**
     * <p>List of operations that are part of the batch.</p>
     */
    inline void SetOperations(Aws::Vector<BatchWriteOperation>&& value) { m_operationsHasBeenSet = true; m_operations = value; }

    /**
     * <p>List of operations that are part of the batch.</p>
     */
    inline BatchWriteRequest& WithOperations(const Aws::Vector<BatchWriteOperation>& value) { SetOperations(value); return *this;}

    /**
     * <p>List of operations that are part of the batch.</p>
     */
    inline BatchWriteRequest& WithOperations(Aws::Vector<BatchWriteOperation>&& value) { SetOperations(value); return *this;}

    /**
     * <p>List of operations that are part of the batch.</p>
     */
    inline BatchWriteRequest& AddOperations(const BatchWriteOperation& value) { m_operationsHasBeenSet = true; m_operations.push_back(value); return *this; }

    /**
     * <p>List of operations that are part of the batch.</p>
     */
    inline BatchWriteRequest& AddOperations(BatchWriteOperation&& value) { m_operationsHasBeenSet = true; m_operations.push_back(value); return *this; }

  private:
    Aws::String m_directoryArn;
    bool m_directoryArnHasBeenSet;
    Aws::Vector<BatchWriteOperation> m_operations;
    bool m_operationsHasBeenSet;
  };

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
