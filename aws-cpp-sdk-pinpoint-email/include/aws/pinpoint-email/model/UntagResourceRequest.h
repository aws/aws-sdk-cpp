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
#include <aws/pinpoint-email/PinpointEmail_EXPORTS.h>
#include <aws/pinpoint-email/PinpointEmailRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace PinpointEmail
{
namespace Model
{

  /**
   */
  class AWS_PINPOINTEMAIL_API UntagResourceRequest : public PinpointEmailRequest
  {
  public:
    UntagResourceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UntagResource"; }

    Aws::String SerializePayload() const override;

    void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The Amazon Resource Name (ARN) of the resource that you want to remove one or
     * more tags from.</p>
     */
    inline const Aws::String& GetResourceArn() const{ return m_resourceArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the resource that you want to remove one or
     * more tags from.</p>
     */
    inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the resource that you want to remove one or
     * more tags from.</p>
     */
    inline void SetResourceArn(const Aws::String& value) { m_resourceArnHasBeenSet = true; m_resourceArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the resource that you want to remove one or
     * more tags from.</p>
     */
    inline void SetResourceArn(Aws::String&& value) { m_resourceArnHasBeenSet = true; m_resourceArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the resource that you want to remove one or
     * more tags from.</p>
     */
    inline void SetResourceArn(const char* value) { m_resourceArnHasBeenSet = true; m_resourceArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the resource that you want to remove one or
     * more tags from.</p>
     */
    inline UntagResourceRequest& WithResourceArn(const Aws::String& value) { SetResourceArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the resource that you want to remove one or
     * more tags from.</p>
     */
    inline UntagResourceRequest& WithResourceArn(Aws::String&& value) { SetResourceArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the resource that you want to remove one or
     * more tags from.</p>
     */
    inline UntagResourceRequest& WithResourceArn(const char* value) { SetResourceArn(value); return *this;}


    /**
     * <p>The tags (tag keys) that you want to remove from the resource. When you
     * specify a tag key, the action removes both that key and its associated tag
     * value.</p> <p>To remove more than one tag from the resource, append the
     * <code>TagKeys</code> parameter and argument for each additional tag to remove,
     * separated by an ampersand. For example:
     * <code>/v1/email/tags?ResourceArn=ResourceArn&amp;TagKeys=Key1&amp;TagKeys=Key2</code>
     * </p>
     */
    inline const Aws::Vector<Aws::String>& GetTagKeys() const{ return m_tagKeys; }

    /**
     * <p>The tags (tag keys) that you want to remove from the resource. When you
     * specify a tag key, the action removes both that key and its associated tag
     * value.</p> <p>To remove more than one tag from the resource, append the
     * <code>TagKeys</code> parameter and argument for each additional tag to remove,
     * separated by an ampersand. For example:
     * <code>/v1/email/tags?ResourceArn=ResourceArn&amp;TagKeys=Key1&amp;TagKeys=Key2</code>
     * </p>
     */
    inline bool TagKeysHasBeenSet() const { return m_tagKeysHasBeenSet; }

    /**
     * <p>The tags (tag keys) that you want to remove from the resource. When you
     * specify a tag key, the action removes both that key and its associated tag
     * value.</p> <p>To remove more than one tag from the resource, append the
     * <code>TagKeys</code> parameter and argument for each additional tag to remove,
     * separated by an ampersand. For example:
     * <code>/v1/email/tags?ResourceArn=ResourceArn&amp;TagKeys=Key1&amp;TagKeys=Key2</code>
     * </p>
     */
    inline void SetTagKeys(const Aws::Vector<Aws::String>& value) { m_tagKeysHasBeenSet = true; m_tagKeys = value; }

    /**
     * <p>The tags (tag keys) that you want to remove from the resource. When you
     * specify a tag key, the action removes both that key and its associated tag
     * value.</p> <p>To remove more than one tag from the resource, append the
     * <code>TagKeys</code> parameter and argument for each additional tag to remove,
     * separated by an ampersand. For example:
     * <code>/v1/email/tags?ResourceArn=ResourceArn&amp;TagKeys=Key1&amp;TagKeys=Key2</code>
     * </p>
     */
    inline void SetTagKeys(Aws::Vector<Aws::String>&& value) { m_tagKeysHasBeenSet = true; m_tagKeys = std::move(value); }

    /**
     * <p>The tags (tag keys) that you want to remove from the resource. When you
     * specify a tag key, the action removes both that key and its associated tag
     * value.</p> <p>To remove more than one tag from the resource, append the
     * <code>TagKeys</code> parameter and argument for each additional tag to remove,
     * separated by an ampersand. For example:
     * <code>/v1/email/tags?ResourceArn=ResourceArn&amp;TagKeys=Key1&amp;TagKeys=Key2</code>
     * </p>
     */
    inline UntagResourceRequest& WithTagKeys(const Aws::Vector<Aws::String>& value) { SetTagKeys(value); return *this;}

    /**
     * <p>The tags (tag keys) that you want to remove from the resource. When you
     * specify a tag key, the action removes both that key and its associated tag
     * value.</p> <p>To remove more than one tag from the resource, append the
     * <code>TagKeys</code> parameter and argument for each additional tag to remove,
     * separated by an ampersand. For example:
     * <code>/v1/email/tags?ResourceArn=ResourceArn&amp;TagKeys=Key1&amp;TagKeys=Key2</code>
     * </p>
     */
    inline UntagResourceRequest& WithTagKeys(Aws::Vector<Aws::String>&& value) { SetTagKeys(std::move(value)); return *this;}

    /**
     * <p>The tags (tag keys) that you want to remove from the resource. When you
     * specify a tag key, the action removes both that key and its associated tag
     * value.</p> <p>To remove more than one tag from the resource, append the
     * <code>TagKeys</code> parameter and argument for each additional tag to remove,
     * separated by an ampersand. For example:
     * <code>/v1/email/tags?ResourceArn=ResourceArn&amp;TagKeys=Key1&amp;TagKeys=Key2</code>
     * </p>
     */
    inline UntagResourceRequest& AddTagKeys(const Aws::String& value) { m_tagKeysHasBeenSet = true; m_tagKeys.push_back(value); return *this; }

    /**
     * <p>The tags (tag keys) that you want to remove from the resource. When you
     * specify a tag key, the action removes both that key and its associated tag
     * value.</p> <p>To remove more than one tag from the resource, append the
     * <code>TagKeys</code> parameter and argument for each additional tag to remove,
     * separated by an ampersand. For example:
     * <code>/v1/email/tags?ResourceArn=ResourceArn&amp;TagKeys=Key1&amp;TagKeys=Key2</code>
     * </p>
     */
    inline UntagResourceRequest& AddTagKeys(Aws::String&& value) { m_tagKeysHasBeenSet = true; m_tagKeys.push_back(std::move(value)); return *this; }

    /**
     * <p>The tags (tag keys) that you want to remove from the resource. When you
     * specify a tag key, the action removes both that key and its associated tag
     * value.</p> <p>To remove more than one tag from the resource, append the
     * <code>TagKeys</code> parameter and argument for each additional tag to remove,
     * separated by an ampersand. For example:
     * <code>/v1/email/tags?ResourceArn=ResourceArn&amp;TagKeys=Key1&amp;TagKeys=Key2</code>
     * </p>
     */
    inline UntagResourceRequest& AddTagKeys(const char* value) { m_tagKeysHasBeenSet = true; m_tagKeys.push_back(value); return *this; }

  private:

    Aws::String m_resourceArn;
    bool m_resourceArnHasBeenSet;

    Aws::Vector<Aws::String> m_tagKeys;
    bool m_tagKeysHasBeenSet;
  };

} // namespace Model
} // namespace PinpointEmail
} // namespace Aws
