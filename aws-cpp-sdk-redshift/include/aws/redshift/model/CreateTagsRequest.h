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
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/redshift/RedshiftRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/redshift/model/Tag.h>
#include <utility>

namespace Aws
{
namespace Redshift
{
namespace Model
{

  /**
   * <p>Contains the output from the <code>CreateTags</code> action. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/CreateTagsMessage">AWS
   * API Reference</a></p>
   */
  class AWS_REDSHIFT_API CreateTagsRequest : public RedshiftRequest
  {
  public:
    CreateTagsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateTags"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The Amazon Resource Name (ARN) to which you want to add the tag or tags. For
     * example, <code>arn:aws:redshift:us-east-1:123456789:cluster:t1</code>. </p>
     */
    inline const Aws::String& GetResourceName() const{ return m_resourceName; }

    /**
     * <p>The Amazon Resource Name (ARN) to which you want to add the tag or tags. For
     * example, <code>arn:aws:redshift:us-east-1:123456789:cluster:t1</code>. </p>
     */
    inline bool ResourceNameHasBeenSet() const { return m_resourceNameHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) to which you want to add the tag or tags. For
     * example, <code>arn:aws:redshift:us-east-1:123456789:cluster:t1</code>. </p>
     */
    inline void SetResourceName(const Aws::String& value) { m_resourceNameHasBeenSet = true; m_resourceName = value; }

    /**
     * <p>The Amazon Resource Name (ARN) to which you want to add the tag or tags. For
     * example, <code>arn:aws:redshift:us-east-1:123456789:cluster:t1</code>. </p>
     */
    inline void SetResourceName(Aws::String&& value) { m_resourceNameHasBeenSet = true; m_resourceName = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) to which you want to add the tag or tags. For
     * example, <code>arn:aws:redshift:us-east-1:123456789:cluster:t1</code>. </p>
     */
    inline void SetResourceName(const char* value) { m_resourceNameHasBeenSet = true; m_resourceName.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) to which you want to add the tag or tags. For
     * example, <code>arn:aws:redshift:us-east-1:123456789:cluster:t1</code>. </p>
     */
    inline CreateTagsRequest& WithResourceName(const Aws::String& value) { SetResourceName(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) to which you want to add the tag or tags. For
     * example, <code>arn:aws:redshift:us-east-1:123456789:cluster:t1</code>. </p>
     */
    inline CreateTagsRequest& WithResourceName(Aws::String&& value) { SetResourceName(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) to which you want to add the tag or tags. For
     * example, <code>arn:aws:redshift:us-east-1:123456789:cluster:t1</code>. </p>
     */
    inline CreateTagsRequest& WithResourceName(const char* value) { SetResourceName(value); return *this;}


    /**
     * <p>One or more name/value pairs to add as tags to the specified resource. Each
     * tag name is passed in with the parameter <code>Key</code> and the corresponding
     * value is passed in with the parameter <code>Value</code>. The <code>Key</code>
     * and <code>Value</code> parameters are separated by a comma (,). Separate
     * multiple tags with a space. For example, <code>--tags
     * "Key"="owner","Value"="admin" "Key"="environment","Value"="test"
     * "Key"="version","Value"="1.0"</code>. </p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>One or more name/value pairs to add as tags to the specified resource. Each
     * tag name is passed in with the parameter <code>Key</code> and the corresponding
     * value is passed in with the parameter <code>Value</code>. The <code>Key</code>
     * and <code>Value</code> parameters are separated by a comma (,). Separate
     * multiple tags with a space. For example, <code>--tags
     * "Key"="owner","Value"="admin" "Key"="environment","Value"="test"
     * "Key"="version","Value"="1.0"</code>. </p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>One or more name/value pairs to add as tags to the specified resource. Each
     * tag name is passed in with the parameter <code>Key</code> and the corresponding
     * value is passed in with the parameter <code>Value</code>. The <code>Key</code>
     * and <code>Value</code> parameters are separated by a comma (,). Separate
     * multiple tags with a space. For example, <code>--tags
     * "Key"="owner","Value"="admin" "Key"="environment","Value"="test"
     * "Key"="version","Value"="1.0"</code>. </p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>One or more name/value pairs to add as tags to the specified resource. Each
     * tag name is passed in with the parameter <code>Key</code> and the corresponding
     * value is passed in with the parameter <code>Value</code>. The <code>Key</code>
     * and <code>Value</code> parameters are separated by a comma (,). Separate
     * multiple tags with a space. For example, <code>--tags
     * "Key"="owner","Value"="admin" "Key"="environment","Value"="test"
     * "Key"="version","Value"="1.0"</code>. </p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>One or more name/value pairs to add as tags to the specified resource. Each
     * tag name is passed in with the parameter <code>Key</code> and the corresponding
     * value is passed in with the parameter <code>Value</code>. The <code>Key</code>
     * and <code>Value</code> parameters are separated by a comma (,). Separate
     * multiple tags with a space. For example, <code>--tags
     * "Key"="owner","Value"="admin" "Key"="environment","Value"="test"
     * "Key"="version","Value"="1.0"</code>. </p>
     */
    inline CreateTagsRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>One or more name/value pairs to add as tags to the specified resource. Each
     * tag name is passed in with the parameter <code>Key</code> and the corresponding
     * value is passed in with the parameter <code>Value</code>. The <code>Key</code>
     * and <code>Value</code> parameters are separated by a comma (,). Separate
     * multiple tags with a space. For example, <code>--tags
     * "Key"="owner","Value"="admin" "Key"="environment","Value"="test"
     * "Key"="version","Value"="1.0"</code>. </p>
     */
    inline CreateTagsRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>One or more name/value pairs to add as tags to the specified resource. Each
     * tag name is passed in with the parameter <code>Key</code> and the corresponding
     * value is passed in with the parameter <code>Value</code>. The <code>Key</code>
     * and <code>Value</code> parameters are separated by a comma (,). Separate
     * multiple tags with a space. For example, <code>--tags
     * "Key"="owner","Value"="admin" "Key"="environment","Value"="test"
     * "Key"="version","Value"="1.0"</code>. </p>
     */
    inline CreateTagsRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>One or more name/value pairs to add as tags to the specified resource. Each
     * tag name is passed in with the parameter <code>Key</code> and the corresponding
     * value is passed in with the parameter <code>Value</code>. The <code>Key</code>
     * and <code>Value</code> parameters are separated by a comma (,). Separate
     * multiple tags with a space. For example, <code>--tags
     * "Key"="owner","Value"="admin" "Key"="environment","Value"="test"
     * "Key"="version","Value"="1.0"</code>. </p>
     */
    inline CreateTagsRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_resourceName;
    bool m_resourceNameHasBeenSet;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
