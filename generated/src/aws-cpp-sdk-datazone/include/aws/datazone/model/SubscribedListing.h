/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/datazone/model/SubscribedListingItem.h>
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
namespace DataZone
{
namespace Model
{

  /**
   * <p>The details of the published asset for which the subscription grant is
   * created.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/SubscribedListing">AWS
   * API Reference</a></p>
   */
  class SubscribedListing
  {
  public:
    AWS_DATAZONE_API SubscribedListing();
    AWS_DATAZONE_API SubscribedListing(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API SubscribedListing& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The description of the published asset for which the subscription grant is
     * created.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline SubscribedListing& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline SubscribedListing& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline SubscribedListing& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the published asset for which the subscription grant is
     * created.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline SubscribedListing& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline SubscribedListing& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline SubscribedListing& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The published asset for which the subscription grant is created.</p>
     */
    inline const SubscribedListingItem& GetItem() const{ return m_item; }
    inline bool ItemHasBeenSet() const { return m_itemHasBeenSet; }
    inline void SetItem(const SubscribedListingItem& value) { m_itemHasBeenSet = true; m_item = value; }
    inline void SetItem(SubscribedListingItem&& value) { m_itemHasBeenSet = true; m_item = std::move(value); }
    inline SubscribedListing& WithItem(const SubscribedListingItem& value) { SetItem(value); return *this;}
    inline SubscribedListing& WithItem(SubscribedListingItem&& value) { SetItem(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the published asset for which the subscription grant is
     * created.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline SubscribedListing& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline SubscribedListing& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline SubscribedListing& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the project of the published asset for which the
     * subscription grant is created.</p>
     */
    inline const Aws::String& GetOwnerProjectId() const{ return m_ownerProjectId; }
    inline bool OwnerProjectIdHasBeenSet() const { return m_ownerProjectIdHasBeenSet; }
    inline void SetOwnerProjectId(const Aws::String& value) { m_ownerProjectIdHasBeenSet = true; m_ownerProjectId = value; }
    inline void SetOwnerProjectId(Aws::String&& value) { m_ownerProjectIdHasBeenSet = true; m_ownerProjectId = std::move(value); }
    inline void SetOwnerProjectId(const char* value) { m_ownerProjectIdHasBeenSet = true; m_ownerProjectId.assign(value); }
    inline SubscribedListing& WithOwnerProjectId(const Aws::String& value) { SetOwnerProjectId(value); return *this;}
    inline SubscribedListing& WithOwnerProjectId(Aws::String&& value) { SetOwnerProjectId(std::move(value)); return *this;}
    inline SubscribedListing& WithOwnerProjectId(const char* value) { SetOwnerProjectId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the project that owns the published asset for which the
     * subscription grant is created.</p>
     */
    inline const Aws::String& GetOwnerProjectName() const{ return m_ownerProjectName; }
    inline bool OwnerProjectNameHasBeenSet() const { return m_ownerProjectNameHasBeenSet; }
    inline void SetOwnerProjectName(const Aws::String& value) { m_ownerProjectNameHasBeenSet = true; m_ownerProjectName = value; }
    inline void SetOwnerProjectName(Aws::String&& value) { m_ownerProjectNameHasBeenSet = true; m_ownerProjectName = std::move(value); }
    inline void SetOwnerProjectName(const char* value) { m_ownerProjectNameHasBeenSet = true; m_ownerProjectName.assign(value); }
    inline SubscribedListing& WithOwnerProjectName(const Aws::String& value) { SetOwnerProjectName(value); return *this;}
    inline SubscribedListing& WithOwnerProjectName(Aws::String&& value) { SetOwnerProjectName(std::move(value)); return *this;}
    inline SubscribedListing& WithOwnerProjectName(const char* value) { SetOwnerProjectName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The revision of the published asset for which the subscription grant is
     * created.</p>
     */
    inline const Aws::String& GetRevision() const{ return m_revision; }
    inline bool RevisionHasBeenSet() const { return m_revisionHasBeenSet; }
    inline void SetRevision(const Aws::String& value) { m_revisionHasBeenSet = true; m_revision = value; }
    inline void SetRevision(Aws::String&& value) { m_revisionHasBeenSet = true; m_revision = std::move(value); }
    inline void SetRevision(const char* value) { m_revisionHasBeenSet = true; m_revision.assign(value); }
    inline SubscribedListing& WithRevision(const Aws::String& value) { SetRevision(value); return *this;}
    inline SubscribedListing& WithRevision(Aws::String&& value) { SetRevision(std::move(value)); return *this;}
    inline SubscribedListing& WithRevision(const char* value) { SetRevision(value); return *this;}
    ///@}
  private:

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    SubscribedListingItem m_item;
    bool m_itemHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_ownerProjectId;
    bool m_ownerProjectIdHasBeenSet = false;

    Aws::String m_ownerProjectName;
    bool m_ownerProjectNameHasBeenSet = false;

    Aws::String m_revision;
    bool m_revisionHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
