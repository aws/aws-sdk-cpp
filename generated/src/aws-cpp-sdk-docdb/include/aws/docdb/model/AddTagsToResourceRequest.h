/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/docdb/DocDB_EXPORTS.h>
#include <aws/docdb/DocDBRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/docdb/model/Tag.h>
#include <utility>

namespace Aws
{
namespace DocDB
{
namespace Model
{

  /**
   * <p>Represents the input to <a>AddTagsToResource</a>. </p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/docdb-2014-10-31/AddTagsToResourceMessage">AWS
   * API Reference</a></p>
   */
  class AddTagsToResourceRequest : public DocDBRequest
  {
  public:
    AWS_DOCDB_API AddTagsToResourceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AddTagsToResource"; }

    AWS_DOCDB_API Aws::String SerializePayload() const override;

  protected:
    AWS_DOCDB_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The Amazon DocumentDB resource that the tags are added to. This value is an
     * Amazon Resource Name .</p>
     */
    inline const Aws::String& GetResourceName() const{ return m_resourceName; }

    /**
     * <p>The Amazon DocumentDB resource that the tags are added to. This value is an
     * Amazon Resource Name .</p>
     */
    inline bool ResourceNameHasBeenSet() const { return m_resourceNameHasBeenSet; }

    /**
     * <p>The Amazon DocumentDB resource that the tags are added to. This value is an
     * Amazon Resource Name .</p>
     */
    inline void SetResourceName(const Aws::String& value) { m_resourceNameHasBeenSet = true; m_resourceName = value; }

    /**
     * <p>The Amazon DocumentDB resource that the tags are added to. This value is an
     * Amazon Resource Name .</p>
     */
    inline void SetResourceName(Aws::String&& value) { m_resourceNameHasBeenSet = true; m_resourceName = std::move(value); }

    /**
     * <p>The Amazon DocumentDB resource that the tags are added to. This value is an
     * Amazon Resource Name .</p>
     */
    inline void SetResourceName(const char* value) { m_resourceNameHasBeenSet = true; m_resourceName.assign(value); }

    /**
     * <p>The Amazon DocumentDB resource that the tags are added to. This value is an
     * Amazon Resource Name .</p>
     */
    inline AddTagsToResourceRequest& WithResourceName(const Aws::String& value) { SetResourceName(value); return *this;}

    /**
     * <p>The Amazon DocumentDB resource that the tags are added to. This value is an
     * Amazon Resource Name .</p>
     */
    inline AddTagsToResourceRequest& WithResourceName(Aws::String&& value) { SetResourceName(std::move(value)); return *this;}

    /**
     * <p>The Amazon DocumentDB resource that the tags are added to. This value is an
     * Amazon Resource Name .</p>
     */
    inline AddTagsToResourceRequest& WithResourceName(const char* value) { SetResourceName(value); return *this;}


    /**
     * <p>The tags to be assigned to the Amazon DocumentDB resource.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags to be assigned to the Amazon DocumentDB resource.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The tags to be assigned to the Amazon DocumentDB resource.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tags to be assigned to the Amazon DocumentDB resource.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The tags to be assigned to the Amazon DocumentDB resource.</p>
     */
    inline AddTagsToResourceRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags to be assigned to the Amazon DocumentDB resource.</p>
     */
    inline AddTagsToResourceRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags to be assigned to the Amazon DocumentDB resource.</p>
     */
    inline AddTagsToResourceRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>The tags to be assigned to the Amazon DocumentDB resource.</p>
     */
    inline AddTagsToResourceRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_resourceName;
    bool m_resourceNameHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace DocDB
} // namespace Aws
