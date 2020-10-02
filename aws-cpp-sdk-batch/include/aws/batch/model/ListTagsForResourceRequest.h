/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/batch/Batch_EXPORTS.h>
#include <aws/batch/BatchRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Batch
{
namespace Model
{

  /**
   */
  class AWS_BATCH_API ListTagsForResourceRequest : public BatchRequest
  {
  public:
    ListTagsForResourceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListTagsForResource"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The Amazon Resource Name (ARN) that identifies the resource for which to list
     * the tags. AWS Batch resources that support tags are compute environments, jobs,
     * job definitions, and job queues. ARNs for child jobs of array and multi-node
     * parallel (MNP) jobs are not supported.</p>
     */
    inline const Aws::String& GetResourceArn() const{ return m_resourceArn; }

    /**
     * <p>The Amazon Resource Name (ARN) that identifies the resource for which to list
     * the tags. AWS Batch resources that support tags are compute environments, jobs,
     * job definitions, and job queues. ARNs for child jobs of array and multi-node
     * parallel (MNP) jobs are not supported.</p>
     */
    inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) that identifies the resource for which to list
     * the tags. AWS Batch resources that support tags are compute environments, jobs,
     * job definitions, and job queues. ARNs for child jobs of array and multi-node
     * parallel (MNP) jobs are not supported.</p>
     */
    inline void SetResourceArn(const Aws::String& value) { m_resourceArnHasBeenSet = true; m_resourceArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) that identifies the resource for which to list
     * the tags. AWS Batch resources that support tags are compute environments, jobs,
     * job definitions, and job queues. ARNs for child jobs of array and multi-node
     * parallel (MNP) jobs are not supported.</p>
     */
    inline void SetResourceArn(Aws::String&& value) { m_resourceArnHasBeenSet = true; m_resourceArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) that identifies the resource for which to list
     * the tags. AWS Batch resources that support tags are compute environments, jobs,
     * job definitions, and job queues. ARNs for child jobs of array and multi-node
     * parallel (MNP) jobs are not supported.</p>
     */
    inline void SetResourceArn(const char* value) { m_resourceArnHasBeenSet = true; m_resourceArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) that identifies the resource for which to list
     * the tags. AWS Batch resources that support tags are compute environments, jobs,
     * job definitions, and job queues. ARNs for child jobs of array and multi-node
     * parallel (MNP) jobs are not supported.</p>
     */
    inline ListTagsForResourceRequest& WithResourceArn(const Aws::String& value) { SetResourceArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) that identifies the resource for which to list
     * the tags. AWS Batch resources that support tags are compute environments, jobs,
     * job definitions, and job queues. ARNs for child jobs of array and multi-node
     * parallel (MNP) jobs are not supported.</p>
     */
    inline ListTagsForResourceRequest& WithResourceArn(Aws::String&& value) { SetResourceArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) that identifies the resource for which to list
     * the tags. AWS Batch resources that support tags are compute environments, jobs,
     * job definitions, and job queues. ARNs for child jobs of array and multi-node
     * parallel (MNP) jobs are not supported.</p>
     */
    inline ListTagsForResourceRequest& WithResourceArn(const char* value) { SetResourceArn(value); return *this;}

  private:

    Aws::String m_resourceArn;
    bool m_resourceArnHasBeenSet;
  };

} // namespace Model
} // namespace Batch
} // namespace Aws
