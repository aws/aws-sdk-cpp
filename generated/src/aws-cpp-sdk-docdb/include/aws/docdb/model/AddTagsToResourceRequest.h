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
    AWS_DOCDB_API AddTagsToResourceRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AddTagsToResource"; }

    AWS_DOCDB_API Aws::String SerializePayload() const override;

  protected:
    AWS_DOCDB_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The Amazon DocumentDB resource that the tags are added to. This value is an
     * Amazon Resource Name .</p>
     */
    inline const Aws::String& GetResourceName() const { return m_resourceName; }
    inline bool ResourceNameHasBeenSet() const { return m_resourceNameHasBeenSet; }
    template<typename ResourceNameT = Aws::String>
    void SetResourceName(ResourceNameT&& value) { m_resourceNameHasBeenSet = true; m_resourceName = std::forward<ResourceNameT>(value); }
    template<typename ResourceNameT = Aws::String>
    AddTagsToResourceRequest& WithResourceName(ResourceNameT&& value) { SetResourceName(std::forward<ResourceNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags to be assigned to the Amazon DocumentDB resource.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    AddTagsToResourceRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    AddTagsToResourceRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_resourceName;
    bool m_resourceNameHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace DocDB
} // namespace Aws
