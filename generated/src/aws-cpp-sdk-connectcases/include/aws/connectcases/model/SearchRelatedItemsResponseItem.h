/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectcases/ConnectCases_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/connectcases/model/RelatedItemContent.h>
#include <aws/connectcases/model/UserUnion.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/connectcases/model/RelatedItemType.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace ConnectCases
{
namespace Model
{

  /**
   * <p>A list of items that represent RelatedItems.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connectcases-2022-10-03/SearchRelatedItemsResponseItem">AWS
   * API Reference</a></p>
   */
  class SearchRelatedItemsResponseItem
  {
  public:
    AWS_CONNECTCASES_API SearchRelatedItemsResponseItem();
    AWS_CONNECTCASES_API SearchRelatedItemsResponseItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCASES_API SearchRelatedItemsResponseItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCASES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Time at which a related item was associated with a case.</p>
     */
    inline const Aws::Utils::DateTime& GetAssociationTime() const{ return m_associationTime; }
    inline bool AssociationTimeHasBeenSet() const { return m_associationTimeHasBeenSet; }
    inline void SetAssociationTime(const Aws::Utils::DateTime& value) { m_associationTimeHasBeenSet = true; m_associationTime = value; }
    inline void SetAssociationTime(Aws::Utils::DateTime&& value) { m_associationTimeHasBeenSet = true; m_associationTime = std::move(value); }
    inline SearchRelatedItemsResponseItem& WithAssociationTime(const Aws::Utils::DateTime& value) { SetAssociationTime(value); return *this;}
    inline SearchRelatedItemsResponseItem& WithAssociationTime(Aws::Utils::DateTime&& value) { SetAssociationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Represents the content of a particular type of related item.</p>
     */
    inline const RelatedItemContent& GetContent() const{ return m_content; }
    inline bool ContentHasBeenSet() const { return m_contentHasBeenSet; }
    inline void SetContent(const RelatedItemContent& value) { m_contentHasBeenSet = true; m_content = value; }
    inline void SetContent(RelatedItemContent&& value) { m_contentHasBeenSet = true; m_content = std::move(value); }
    inline SearchRelatedItemsResponseItem& WithContent(const RelatedItemContent& value) { SetContent(value); return *this;}
    inline SearchRelatedItemsResponseItem& WithContent(RelatedItemContent&& value) { SetContent(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Represents the creator of the related item.</p>
     */
    inline const UserUnion& GetPerformedBy() const{ return m_performedBy; }
    inline bool PerformedByHasBeenSet() const { return m_performedByHasBeenSet; }
    inline void SetPerformedBy(const UserUnion& value) { m_performedByHasBeenSet = true; m_performedBy = value; }
    inline void SetPerformedBy(UserUnion&& value) { m_performedByHasBeenSet = true; m_performedBy = std::move(value); }
    inline SearchRelatedItemsResponseItem& WithPerformedBy(const UserUnion& value) { SetPerformedBy(value); return *this;}
    inline SearchRelatedItemsResponseItem& WithPerformedBy(UserUnion&& value) { SetPerformedBy(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Unique identifier of a related item.</p>
     */
    inline const Aws::String& GetRelatedItemId() const{ return m_relatedItemId; }
    inline bool RelatedItemIdHasBeenSet() const { return m_relatedItemIdHasBeenSet; }
    inline void SetRelatedItemId(const Aws::String& value) { m_relatedItemIdHasBeenSet = true; m_relatedItemId = value; }
    inline void SetRelatedItemId(Aws::String&& value) { m_relatedItemIdHasBeenSet = true; m_relatedItemId = std::move(value); }
    inline void SetRelatedItemId(const char* value) { m_relatedItemIdHasBeenSet = true; m_relatedItemId.assign(value); }
    inline SearchRelatedItemsResponseItem& WithRelatedItemId(const Aws::String& value) { SetRelatedItemId(value); return *this;}
    inline SearchRelatedItemsResponseItem& WithRelatedItemId(Aws::String&& value) { SetRelatedItemId(std::move(value)); return *this;}
    inline SearchRelatedItemsResponseItem& WithRelatedItemId(const char* value) { SetRelatedItemId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A map of of key-value pairs that represent tags on a resource. Tags are used
     * to organize, track, or control access for this resource.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline SearchRelatedItemsResponseItem& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline SearchRelatedItemsResponseItem& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline SearchRelatedItemsResponseItem& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    inline SearchRelatedItemsResponseItem& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline SearchRelatedItemsResponseItem& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline SearchRelatedItemsResponseItem& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline SearchRelatedItemsResponseItem& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline SearchRelatedItemsResponseItem& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline SearchRelatedItemsResponseItem& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Type of a related item.</p>
     */
    inline const RelatedItemType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const RelatedItemType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(RelatedItemType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline SearchRelatedItemsResponseItem& WithType(const RelatedItemType& value) { SetType(value); return *this;}
    inline SearchRelatedItemsResponseItem& WithType(RelatedItemType&& value) { SetType(std::move(value)); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_associationTime;
    bool m_associationTimeHasBeenSet = false;

    RelatedItemContent m_content;
    bool m_contentHasBeenSet = false;

    UserUnion m_performedBy;
    bool m_performedByHasBeenSet = false;

    Aws::String m_relatedItemId;
    bool m_relatedItemIdHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    RelatedItemType m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace ConnectCases
} // namespace Aws
