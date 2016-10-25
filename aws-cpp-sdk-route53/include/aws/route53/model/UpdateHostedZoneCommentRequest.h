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
#include <aws/route53/Route53_EXPORTS.h>
#include <aws/route53/Route53Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Route53
{
namespace Model
{

  /**
   * <p>A complex type that contains the hosted zone request information.</p>
   */
  class AWS_ROUTE53_API UpdateHostedZoneCommentRequest : public Route53Request
  {
  public:
    UpdateHostedZoneCommentRequest();
    Aws::String SerializePayload() const override;

    /**
     * <p>The ID for the hosted zone for which you want to update the comment.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The ID for the hosted zone for which you want to update the comment.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The ID for the hosted zone for which you want to update the comment.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The ID for the hosted zone for which you want to update the comment.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The ID for the hosted zone for which you want to update the comment.</p>
     */
    inline UpdateHostedZoneCommentRequest& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The ID for the hosted zone for which you want to update the comment.</p>
     */
    inline UpdateHostedZoneCommentRequest& WithId(Aws::String&& value) { SetId(value); return *this;}

    /**
     * <p>The ID for the hosted zone for which you want to update the comment.</p>
     */
    inline UpdateHostedZoneCommentRequest& WithId(const char* value) { SetId(value); return *this;}

    /**
     * <p>The new comment for the hosted zone. If you don't specify a value for
     * <code>Comment</code>, Amazon Route 53 deletes the existing value of the
     * <code>Comment</code> element, if any.</p>
     */
    inline const Aws::String& GetComment() const{ return m_comment; }

    /**
     * <p>The new comment for the hosted zone. If you don't specify a value for
     * <code>Comment</code>, Amazon Route 53 deletes the existing value of the
     * <code>Comment</code> element, if any.</p>
     */
    inline void SetComment(const Aws::String& value) { m_commentHasBeenSet = true; m_comment = value; }

    /**
     * <p>The new comment for the hosted zone. If you don't specify a value for
     * <code>Comment</code>, Amazon Route 53 deletes the existing value of the
     * <code>Comment</code> element, if any.</p>
     */
    inline void SetComment(Aws::String&& value) { m_commentHasBeenSet = true; m_comment = value; }

    /**
     * <p>The new comment for the hosted zone. If you don't specify a value for
     * <code>Comment</code>, Amazon Route 53 deletes the existing value of the
     * <code>Comment</code> element, if any.</p>
     */
    inline void SetComment(const char* value) { m_commentHasBeenSet = true; m_comment.assign(value); }

    /**
     * <p>The new comment for the hosted zone. If you don't specify a value for
     * <code>Comment</code>, Amazon Route 53 deletes the existing value of the
     * <code>Comment</code> element, if any.</p>
     */
    inline UpdateHostedZoneCommentRequest& WithComment(const Aws::String& value) { SetComment(value); return *this;}

    /**
     * <p>The new comment for the hosted zone. If you don't specify a value for
     * <code>Comment</code>, Amazon Route 53 deletes the existing value of the
     * <code>Comment</code> element, if any.</p>
     */
    inline UpdateHostedZoneCommentRequest& WithComment(Aws::String&& value) { SetComment(value); return *this;}

    /**
     * <p>The new comment for the hosted zone. If you don't specify a value for
     * <code>Comment</code>, Amazon Route 53 deletes the existing value of the
     * <code>Comment</code> element, if any.</p>
     */
    inline UpdateHostedZoneCommentRequest& WithComment(const char* value) { SetComment(value); return *this;}

  private:
    Aws::String m_id;
    bool m_idHasBeenSet;
    Aws::String m_comment;
    bool m_commentHasBeenSet;
  };

} // namespace Model
} // namespace Route53
} // namespace Aws
