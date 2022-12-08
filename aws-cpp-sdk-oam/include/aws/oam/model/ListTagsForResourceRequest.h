/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/oam/OAM_EXPORTS.h>
#include <aws/oam/OAMRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace OAM
{
namespace Model
{

  /**
   */
  class ListTagsForResourceRequest : public OAMRequest
  {
  public:
    AWS_OAM_API ListTagsForResourceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListTagsForResource"; }

    AWS_OAM_API Aws::String SerializePayload() const override;


    /**
     * <p>The ARN of the resource that you want to view tags for.</p> <p>The ARN format
     * of a sink is
     * <code>arn:aws:oam:<i>Region</i>:<i>account-id</i>:sink/<i>sink-id</i> </code>
     * </p> <p>The ARN format of a link is
     * <code>arn:aws:oam:<i>Region</i>:<i>account-id</i>:link/<i>link-id</i> </code>
     * </p> <p>For more information about ARN format, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/logs/iam-access-control-overview-cwl.html">CloudWatch
     * Logs resources and operations</a>.</p>  <p>Unlike tagging permissions
     * in other Amazon Web Services services, to retrieve the list of tags for links or
     * sinks you must have the <code>oam:RequestTag</code> permission. The
     * <code>aws:ReguestTag</code> permission does not allow you to tag and untag links
     * and sinks.</p> 
     */
    inline const Aws::String& GetResourceArn() const{ return m_resourceArn; }

    /**
     * <p>The ARN of the resource that you want to view tags for.</p> <p>The ARN format
     * of a sink is
     * <code>arn:aws:oam:<i>Region</i>:<i>account-id</i>:sink/<i>sink-id</i> </code>
     * </p> <p>The ARN format of a link is
     * <code>arn:aws:oam:<i>Region</i>:<i>account-id</i>:link/<i>link-id</i> </code>
     * </p> <p>For more information about ARN format, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/logs/iam-access-control-overview-cwl.html">CloudWatch
     * Logs resources and operations</a>.</p>  <p>Unlike tagging permissions
     * in other Amazon Web Services services, to retrieve the list of tags for links or
     * sinks you must have the <code>oam:RequestTag</code> permission. The
     * <code>aws:ReguestTag</code> permission does not allow you to tag and untag links
     * and sinks.</p> 
     */
    inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }

    /**
     * <p>The ARN of the resource that you want to view tags for.</p> <p>The ARN format
     * of a sink is
     * <code>arn:aws:oam:<i>Region</i>:<i>account-id</i>:sink/<i>sink-id</i> </code>
     * </p> <p>The ARN format of a link is
     * <code>arn:aws:oam:<i>Region</i>:<i>account-id</i>:link/<i>link-id</i> </code>
     * </p> <p>For more information about ARN format, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/logs/iam-access-control-overview-cwl.html">CloudWatch
     * Logs resources and operations</a>.</p>  <p>Unlike tagging permissions
     * in other Amazon Web Services services, to retrieve the list of tags for links or
     * sinks you must have the <code>oam:RequestTag</code> permission. The
     * <code>aws:ReguestTag</code> permission does not allow you to tag and untag links
     * and sinks.</p> 
     */
    inline void SetResourceArn(const Aws::String& value) { m_resourceArnHasBeenSet = true; m_resourceArn = value; }

    /**
     * <p>The ARN of the resource that you want to view tags for.</p> <p>The ARN format
     * of a sink is
     * <code>arn:aws:oam:<i>Region</i>:<i>account-id</i>:sink/<i>sink-id</i> </code>
     * </p> <p>The ARN format of a link is
     * <code>arn:aws:oam:<i>Region</i>:<i>account-id</i>:link/<i>link-id</i> </code>
     * </p> <p>For more information about ARN format, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/logs/iam-access-control-overview-cwl.html">CloudWatch
     * Logs resources and operations</a>.</p>  <p>Unlike tagging permissions
     * in other Amazon Web Services services, to retrieve the list of tags for links or
     * sinks you must have the <code>oam:RequestTag</code> permission. The
     * <code>aws:ReguestTag</code> permission does not allow you to tag and untag links
     * and sinks.</p> 
     */
    inline void SetResourceArn(Aws::String&& value) { m_resourceArnHasBeenSet = true; m_resourceArn = std::move(value); }

    /**
     * <p>The ARN of the resource that you want to view tags for.</p> <p>The ARN format
     * of a sink is
     * <code>arn:aws:oam:<i>Region</i>:<i>account-id</i>:sink/<i>sink-id</i> </code>
     * </p> <p>The ARN format of a link is
     * <code>arn:aws:oam:<i>Region</i>:<i>account-id</i>:link/<i>link-id</i> </code>
     * </p> <p>For more information about ARN format, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/logs/iam-access-control-overview-cwl.html">CloudWatch
     * Logs resources and operations</a>.</p>  <p>Unlike tagging permissions
     * in other Amazon Web Services services, to retrieve the list of tags for links or
     * sinks you must have the <code>oam:RequestTag</code> permission. The
     * <code>aws:ReguestTag</code> permission does not allow you to tag and untag links
     * and sinks.</p> 
     */
    inline void SetResourceArn(const char* value) { m_resourceArnHasBeenSet = true; m_resourceArn.assign(value); }

    /**
     * <p>The ARN of the resource that you want to view tags for.</p> <p>The ARN format
     * of a sink is
     * <code>arn:aws:oam:<i>Region</i>:<i>account-id</i>:sink/<i>sink-id</i> </code>
     * </p> <p>The ARN format of a link is
     * <code>arn:aws:oam:<i>Region</i>:<i>account-id</i>:link/<i>link-id</i> </code>
     * </p> <p>For more information about ARN format, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/logs/iam-access-control-overview-cwl.html">CloudWatch
     * Logs resources and operations</a>.</p>  <p>Unlike tagging permissions
     * in other Amazon Web Services services, to retrieve the list of tags for links or
     * sinks you must have the <code>oam:RequestTag</code> permission. The
     * <code>aws:ReguestTag</code> permission does not allow you to tag and untag links
     * and sinks.</p> 
     */
    inline ListTagsForResourceRequest& WithResourceArn(const Aws::String& value) { SetResourceArn(value); return *this;}

    /**
     * <p>The ARN of the resource that you want to view tags for.</p> <p>The ARN format
     * of a sink is
     * <code>arn:aws:oam:<i>Region</i>:<i>account-id</i>:sink/<i>sink-id</i> </code>
     * </p> <p>The ARN format of a link is
     * <code>arn:aws:oam:<i>Region</i>:<i>account-id</i>:link/<i>link-id</i> </code>
     * </p> <p>For more information about ARN format, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/logs/iam-access-control-overview-cwl.html">CloudWatch
     * Logs resources and operations</a>.</p>  <p>Unlike tagging permissions
     * in other Amazon Web Services services, to retrieve the list of tags for links or
     * sinks you must have the <code>oam:RequestTag</code> permission. The
     * <code>aws:ReguestTag</code> permission does not allow you to tag and untag links
     * and sinks.</p> 
     */
    inline ListTagsForResourceRequest& WithResourceArn(Aws::String&& value) { SetResourceArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the resource that you want to view tags for.</p> <p>The ARN format
     * of a sink is
     * <code>arn:aws:oam:<i>Region</i>:<i>account-id</i>:sink/<i>sink-id</i> </code>
     * </p> <p>The ARN format of a link is
     * <code>arn:aws:oam:<i>Region</i>:<i>account-id</i>:link/<i>link-id</i> </code>
     * </p> <p>For more information about ARN format, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/logs/iam-access-control-overview-cwl.html">CloudWatch
     * Logs resources and operations</a>.</p>  <p>Unlike tagging permissions
     * in other Amazon Web Services services, to retrieve the list of tags for links or
     * sinks you must have the <code>oam:RequestTag</code> permission. The
     * <code>aws:ReguestTag</code> permission does not allow you to tag and untag links
     * and sinks.</p> 
     */
    inline ListTagsForResourceRequest& WithResourceArn(const char* value) { SetResourceArn(value); return *this;}

  private:

    Aws::String m_resourceArn;
    bool m_resourceArnHasBeenSet = false;
  };

} // namespace Model
} // namespace OAM
} // namespace Aws
