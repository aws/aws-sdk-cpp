/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/identitystore/IdentityStore_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/identitystore/model/ExternalId.h>
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
namespace IdentityStore
{
namespace Model
{

  /**
   * <p>A group object that contains the metadata and attributes for a specified
   * group.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/identitystore-2020-06-15/Group">AWS
   * API Reference</a></p>
   */
  class Group
  {
  public:
    AWS_IDENTITYSTORE_API Group() = default;
    AWS_IDENTITYSTORE_API Group(Aws::Utils::Json::JsonView jsonValue);
    AWS_IDENTITYSTORE_API Group& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IDENTITYSTORE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifier for a group in the identity store.</p>
     */
    inline const Aws::String& GetGroupId() const { return m_groupId; }
    inline bool GroupIdHasBeenSet() const { return m_groupIdHasBeenSet; }
    template<typename GroupIdT = Aws::String>
    void SetGroupId(GroupIdT&& value) { m_groupIdHasBeenSet = true; m_groupId = std::forward<GroupIdT>(value); }
    template<typename GroupIdT = Aws::String>
    Group& WithGroupId(GroupIdT&& value) { SetGroupId(std::forward<GroupIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The display name value for the group. The length limit is 1,024 characters.
     * This value can consist of letters, accented characters, symbols, numbers,
     * punctuation, tab, new line, carriage return, space, and nonbreaking space in
     * this attribute. This value is specified at the time the group is created and
     * stored as an attribute of the group object in the identity store.</p>
     */
    inline const Aws::String& GetDisplayName() const { return m_displayName; }
    inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }
    template<typename DisplayNameT = Aws::String>
    void SetDisplayName(DisplayNameT&& value) { m_displayNameHasBeenSet = true; m_displayName = std::forward<DisplayNameT>(value); }
    template<typename DisplayNameT = Aws::String>
    Group& WithDisplayName(DisplayNameT&& value) { SetDisplayName(std::forward<DisplayNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of <code>ExternalId</code> objects that contains the identifiers
     * issued to this resource by an external identity provider.</p>
     */
    inline const Aws::Vector<ExternalId>& GetExternalIds() const { return m_externalIds; }
    inline bool ExternalIdsHasBeenSet() const { return m_externalIdsHasBeenSet; }
    template<typename ExternalIdsT = Aws::Vector<ExternalId>>
    void SetExternalIds(ExternalIdsT&& value) { m_externalIdsHasBeenSet = true; m_externalIds = std::forward<ExternalIdsT>(value); }
    template<typename ExternalIdsT = Aws::Vector<ExternalId>>
    Group& WithExternalIds(ExternalIdsT&& value) { SetExternalIds(std::forward<ExternalIdsT>(value)); return *this;}
    template<typename ExternalIdsT = ExternalId>
    Group& AddExternalIds(ExternalIdsT&& value) { m_externalIdsHasBeenSet = true; m_externalIds.emplace_back(std::forward<ExternalIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A string containing a description of the specified group.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    Group& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The globally unique identifier for the identity store.</p>
     */
    inline const Aws::String& GetIdentityStoreId() const { return m_identityStoreId; }
    inline bool IdentityStoreIdHasBeenSet() const { return m_identityStoreIdHasBeenSet; }
    template<typename IdentityStoreIdT = Aws::String>
    void SetIdentityStoreId(IdentityStoreIdT&& value) { m_identityStoreIdHasBeenSet = true; m_identityStoreId = std::forward<IdentityStoreIdT>(value); }
    template<typename IdentityStoreIdT = Aws::String>
    Group& WithIdentityStoreId(IdentityStoreIdT&& value) { SetIdentityStoreId(std::forward<IdentityStoreIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_groupId;
    bool m_groupIdHasBeenSet = false;

    Aws::String m_displayName;
    bool m_displayNameHasBeenSet = false;

    Aws::Vector<ExternalId> m_externalIds;
    bool m_externalIdsHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_identityStoreId;
    bool m_identityStoreIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IdentityStore
} // namespace Aws
