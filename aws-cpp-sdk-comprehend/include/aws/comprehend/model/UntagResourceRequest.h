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
#include <aws/comprehend/Comprehend_EXPORTS.h>
#include <aws/comprehend/ComprehendRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace Comprehend
{
namespace Model
{

  /**
   */
  class AWS_COMPREHEND_API UntagResourceRequest : public ComprehendRequest
  {
  public:
    UntagResourceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UntagResource"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p> The Amazon Resource Name (ARN) of the given Amazon Comprehend resource from
     * which you want to remove the tags. </p>
     */
    inline const Aws::String& GetResourceArn() const{ return m_resourceArn; }

    /**
     * <p> The Amazon Resource Name (ARN) of the given Amazon Comprehend resource from
     * which you want to remove the tags. </p>
     */
    inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }

    /**
     * <p> The Amazon Resource Name (ARN) of the given Amazon Comprehend resource from
     * which you want to remove the tags. </p>
     */
    inline void SetResourceArn(const Aws::String& value) { m_resourceArnHasBeenSet = true; m_resourceArn = value; }

    /**
     * <p> The Amazon Resource Name (ARN) of the given Amazon Comprehend resource from
     * which you want to remove the tags. </p>
     */
    inline void SetResourceArn(Aws::String&& value) { m_resourceArnHasBeenSet = true; m_resourceArn = std::move(value); }

    /**
     * <p> The Amazon Resource Name (ARN) of the given Amazon Comprehend resource from
     * which you want to remove the tags. </p>
     */
    inline void SetResourceArn(const char* value) { m_resourceArnHasBeenSet = true; m_resourceArn.assign(value); }

    /**
     * <p> The Amazon Resource Name (ARN) of the given Amazon Comprehend resource from
     * which you want to remove the tags. </p>
     */
    inline UntagResourceRequest& WithResourceArn(const Aws::String& value) { SetResourceArn(value); return *this;}

    /**
     * <p> The Amazon Resource Name (ARN) of the given Amazon Comprehend resource from
     * which you want to remove the tags. </p>
     */
    inline UntagResourceRequest& WithResourceArn(Aws::String&& value) { SetResourceArn(std::move(value)); return *this;}

    /**
     * <p> The Amazon Resource Name (ARN) of the given Amazon Comprehend resource from
     * which you want to remove the tags. </p>
     */
    inline UntagResourceRequest& WithResourceArn(const char* value) { SetResourceArn(value); return *this;}


    /**
     * <p>The initial part of a key-value pair that forms a tag being removed from a
     * given resource. For example, a tag with "Sales" as the key might be added to a
     * resource to indicate its use by the sales department. Keys must be unique and
     * cannot be duplicated for a particular resource. </p>
     */
    inline const Aws::Vector<Aws::String>& GetTagKeys() const{ return m_tagKeys; }

    /**
     * <p>The initial part of a key-value pair that forms a tag being removed from a
     * given resource. For example, a tag with "Sales" as the key might be added to a
     * resource to indicate its use by the sales department. Keys must be unique and
     * cannot be duplicated for a particular resource. </p>
     */
    inline bool TagKeysHasBeenSet() const { return m_tagKeysHasBeenSet; }

    /**
     * <p>The initial part of a key-value pair that forms a tag being removed from a
     * given resource. For example, a tag with "Sales" as the key might be added to a
     * resource to indicate its use by the sales department. Keys must be unique and
     * cannot be duplicated for a particular resource. </p>
     */
    inline void SetTagKeys(const Aws::Vector<Aws::String>& value) { m_tagKeysHasBeenSet = true; m_tagKeys = value; }

    /**
     * <p>The initial part of a key-value pair that forms a tag being removed from a
     * given resource. For example, a tag with "Sales" as the key might be added to a
     * resource to indicate its use by the sales department. Keys must be unique and
     * cannot be duplicated for a particular resource. </p>
     */
    inline void SetTagKeys(Aws::Vector<Aws::String>&& value) { m_tagKeysHasBeenSet = true; m_tagKeys = std::move(value); }

    /**
     * <p>The initial part of a key-value pair that forms a tag being removed from a
     * given resource. For example, a tag with "Sales" as the key might be added to a
     * resource to indicate its use by the sales department. Keys must be unique and
     * cannot be duplicated for a particular resource. </p>
     */
    inline UntagResourceRequest& WithTagKeys(const Aws::Vector<Aws::String>& value) { SetTagKeys(value); return *this;}

    /**
     * <p>The initial part of a key-value pair that forms a tag being removed from a
     * given resource. For example, a tag with "Sales" as the key might be added to a
     * resource to indicate its use by the sales department. Keys must be unique and
     * cannot be duplicated for a particular resource. </p>
     */
    inline UntagResourceRequest& WithTagKeys(Aws::Vector<Aws::String>&& value) { SetTagKeys(std::move(value)); return *this;}

    /**
     * <p>The initial part of a key-value pair that forms a tag being removed from a
     * given resource. For example, a tag with "Sales" as the key might be added to a
     * resource to indicate its use by the sales department. Keys must be unique and
     * cannot be duplicated for a particular resource. </p>
     */
    inline UntagResourceRequest& AddTagKeys(const Aws::String& value) { m_tagKeysHasBeenSet = true; m_tagKeys.push_back(value); return *this; }

    /**
     * <p>The initial part of a key-value pair that forms a tag being removed from a
     * given resource. For example, a tag with "Sales" as the key might be added to a
     * resource to indicate its use by the sales department. Keys must be unique and
     * cannot be duplicated for a particular resource. </p>
     */
    inline UntagResourceRequest& AddTagKeys(Aws::String&& value) { m_tagKeysHasBeenSet = true; m_tagKeys.push_back(std::move(value)); return *this; }

    /**
     * <p>The initial part of a key-value pair that forms a tag being removed from a
     * given resource. For example, a tag with "Sales" as the key might be added to a
     * resource to indicate its use by the sales department. Keys must be unique and
     * cannot be duplicated for a particular resource. </p>
     */
    inline UntagResourceRequest& AddTagKeys(const char* value) { m_tagKeysHasBeenSet = true; m_tagKeys.push_back(value); return *this; }

  private:

    Aws::String m_resourceArn;
    bool m_resourceArnHasBeenSet;

    Aws::Vector<Aws::String> m_tagKeys;
    bool m_tagKeysHasBeenSet;
  };

} // namespace Model
} // namespace Comprehend
} // namespace Aws
