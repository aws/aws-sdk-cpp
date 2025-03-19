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
    AWS_DATAZONE_API SubscribedListing() = default;
    AWS_DATAZONE_API SubscribedListing(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API SubscribedListing& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The description of the published asset for which the subscription grant is
     * created.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    SubscribedListing& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the published asset for which the subscription grant is
     * created.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    SubscribedListing& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The published asset for which the subscription grant is created.</p>
     */
    inline const SubscribedListingItem& GetItem() const { return m_item; }
    inline bool ItemHasBeenSet() const { return m_itemHasBeenSet; }
    template<typename ItemT = SubscribedListingItem>
    void SetItem(ItemT&& value) { m_itemHasBeenSet = true; m_item = std::forward<ItemT>(value); }
    template<typename ItemT = SubscribedListingItem>
    SubscribedListing& WithItem(ItemT&& value) { SetItem(std::forward<ItemT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the published asset for which the subscription grant is
     * created.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    SubscribedListing& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the project of the published asset for which the
     * subscription grant is created.</p>
     */
    inline const Aws::String& GetOwnerProjectId() const { return m_ownerProjectId; }
    inline bool OwnerProjectIdHasBeenSet() const { return m_ownerProjectIdHasBeenSet; }
    template<typename OwnerProjectIdT = Aws::String>
    void SetOwnerProjectId(OwnerProjectIdT&& value) { m_ownerProjectIdHasBeenSet = true; m_ownerProjectId = std::forward<OwnerProjectIdT>(value); }
    template<typename OwnerProjectIdT = Aws::String>
    SubscribedListing& WithOwnerProjectId(OwnerProjectIdT&& value) { SetOwnerProjectId(std::forward<OwnerProjectIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the project that owns the published asset for which the
     * subscription grant is created.</p>
     */
    inline const Aws::String& GetOwnerProjectName() const { return m_ownerProjectName; }
    inline bool OwnerProjectNameHasBeenSet() const { return m_ownerProjectNameHasBeenSet; }
    template<typename OwnerProjectNameT = Aws::String>
    void SetOwnerProjectName(OwnerProjectNameT&& value) { m_ownerProjectNameHasBeenSet = true; m_ownerProjectName = std::forward<OwnerProjectNameT>(value); }
    template<typename OwnerProjectNameT = Aws::String>
    SubscribedListing& WithOwnerProjectName(OwnerProjectNameT&& value) { SetOwnerProjectName(std::forward<OwnerProjectNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The revision of the published asset for which the subscription grant is
     * created.</p>
     */
    inline const Aws::String& GetRevision() const { return m_revision; }
    inline bool RevisionHasBeenSet() const { return m_revisionHasBeenSet; }
    template<typename RevisionT = Aws::String>
    void SetRevision(RevisionT&& value) { m_revisionHasBeenSet = true; m_revision = std::forward<RevisionT>(value); }
    template<typename RevisionT = Aws::String>
    SubscribedListing& WithRevision(RevisionT&& value) { SetRevision(std::forward<RevisionT>(value)); return *this;}
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
