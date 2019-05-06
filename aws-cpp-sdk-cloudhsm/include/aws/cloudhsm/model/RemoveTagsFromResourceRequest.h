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
#include <aws/cloudhsm/CloudHSM_EXPORTS.h>
#include <aws/cloudhsm/CloudHSMRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace CloudHSM
{
namespace Model
{

  /**
   */
  class AWS_CLOUDHSM_API RemoveTagsFromResourceRequest : public CloudHSMRequest
  {
  public:
    RemoveTagsFromResourceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RemoveTagsFromResource"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The Amazon Resource Name (ARN) of the AWS CloudHSM resource.</p>
     */
    inline const Aws::String& GetResourceArn() const{ return m_resourceArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS CloudHSM resource.</p>
     */
    inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS CloudHSM resource.</p>
     */
    inline void SetResourceArn(const Aws::String& value) { m_resourceArnHasBeenSet = true; m_resourceArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS CloudHSM resource.</p>
     */
    inline void SetResourceArn(Aws::String&& value) { m_resourceArnHasBeenSet = true; m_resourceArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS CloudHSM resource.</p>
     */
    inline void SetResourceArn(const char* value) { m_resourceArnHasBeenSet = true; m_resourceArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS CloudHSM resource.</p>
     */
    inline RemoveTagsFromResourceRequest& WithResourceArn(const Aws::String& value) { SetResourceArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS CloudHSM resource.</p>
     */
    inline RemoveTagsFromResourceRequest& WithResourceArn(Aws::String&& value) { SetResourceArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS CloudHSM resource.</p>
     */
    inline RemoveTagsFromResourceRequest& WithResourceArn(const char* value) { SetResourceArn(value); return *this;}


    /**
     * <p>The tag key or keys to remove.</p> <p>Specify only the tag key to remove (not
     * the value). To overwrite the value for an existing tag, use
     * <a>AddTagsToResource</a>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTagKeyList() const{ return m_tagKeyList; }

    /**
     * <p>The tag key or keys to remove.</p> <p>Specify only the tag key to remove (not
     * the value). To overwrite the value for an existing tag, use
     * <a>AddTagsToResource</a>.</p>
     */
    inline bool TagKeyListHasBeenSet() const { return m_tagKeyListHasBeenSet; }

    /**
     * <p>The tag key or keys to remove.</p> <p>Specify only the tag key to remove (not
     * the value). To overwrite the value for an existing tag, use
     * <a>AddTagsToResource</a>.</p>
     */
    inline void SetTagKeyList(const Aws::Vector<Aws::String>& value) { m_tagKeyListHasBeenSet = true; m_tagKeyList = value; }

    /**
     * <p>The tag key or keys to remove.</p> <p>Specify only the tag key to remove (not
     * the value). To overwrite the value for an existing tag, use
     * <a>AddTagsToResource</a>.</p>
     */
    inline void SetTagKeyList(Aws::Vector<Aws::String>&& value) { m_tagKeyListHasBeenSet = true; m_tagKeyList = std::move(value); }

    /**
     * <p>The tag key or keys to remove.</p> <p>Specify only the tag key to remove (not
     * the value). To overwrite the value for an existing tag, use
     * <a>AddTagsToResource</a>.</p>
     */
    inline RemoveTagsFromResourceRequest& WithTagKeyList(const Aws::Vector<Aws::String>& value) { SetTagKeyList(value); return *this;}

    /**
     * <p>The tag key or keys to remove.</p> <p>Specify only the tag key to remove (not
     * the value). To overwrite the value for an existing tag, use
     * <a>AddTagsToResource</a>.</p>
     */
    inline RemoveTagsFromResourceRequest& WithTagKeyList(Aws::Vector<Aws::String>&& value) { SetTagKeyList(std::move(value)); return *this;}

    /**
     * <p>The tag key or keys to remove.</p> <p>Specify only the tag key to remove (not
     * the value). To overwrite the value for an existing tag, use
     * <a>AddTagsToResource</a>.</p>
     */
    inline RemoveTagsFromResourceRequest& AddTagKeyList(const Aws::String& value) { m_tagKeyListHasBeenSet = true; m_tagKeyList.push_back(value); return *this; }

    /**
     * <p>The tag key or keys to remove.</p> <p>Specify only the tag key to remove (not
     * the value). To overwrite the value for an existing tag, use
     * <a>AddTagsToResource</a>.</p>
     */
    inline RemoveTagsFromResourceRequest& AddTagKeyList(Aws::String&& value) { m_tagKeyListHasBeenSet = true; m_tagKeyList.push_back(std::move(value)); return *this; }

    /**
     * <p>The tag key or keys to remove.</p> <p>Specify only the tag key to remove (not
     * the value). To overwrite the value for an existing tag, use
     * <a>AddTagsToResource</a>.</p>
     */
    inline RemoveTagsFromResourceRequest& AddTagKeyList(const char* value) { m_tagKeyListHasBeenSet = true; m_tagKeyList.push_back(value); return *this; }

  private:

    Aws::String m_resourceArn;
    bool m_resourceArnHasBeenSet;

    Aws::Vector<Aws::String> m_tagKeyList;
    bool m_tagKeyListHasBeenSet;
  };

} // namespace Model
} // namespace CloudHSM
} // namespace Aws
