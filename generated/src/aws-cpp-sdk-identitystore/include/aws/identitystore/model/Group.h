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
   * <p>A group object that contains a specified group’s metadata and
   * attributes.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/identitystore-2020-06-15/Group">AWS
   * API Reference</a></p>
   */
  class Group
  {
  public:
    AWS_IDENTITYSTORE_API Group();
    AWS_IDENTITYSTORE_API Group(Aws::Utils::Json::JsonView jsonValue);
    AWS_IDENTITYSTORE_API Group& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IDENTITYSTORE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The identifier for a group in the identity store.</p>
     */
    inline const Aws::String& GetGroupId() const{ return m_groupId; }

    /**
     * <p>The identifier for a group in the identity store.</p>
     */
    inline bool GroupIdHasBeenSet() const { return m_groupIdHasBeenSet; }

    /**
     * <p>The identifier for a group in the identity store.</p>
     */
    inline void SetGroupId(const Aws::String& value) { m_groupIdHasBeenSet = true; m_groupId = value; }

    /**
     * <p>The identifier for a group in the identity store.</p>
     */
    inline void SetGroupId(Aws::String&& value) { m_groupIdHasBeenSet = true; m_groupId = std::move(value); }

    /**
     * <p>The identifier for a group in the identity store.</p>
     */
    inline void SetGroupId(const char* value) { m_groupIdHasBeenSet = true; m_groupId.assign(value); }

    /**
     * <p>The identifier for a group in the identity store.</p>
     */
    inline Group& WithGroupId(const Aws::String& value) { SetGroupId(value); return *this;}

    /**
     * <p>The identifier for a group in the identity store.</p>
     */
    inline Group& WithGroupId(Aws::String&& value) { SetGroupId(std::move(value)); return *this;}

    /**
     * <p>The identifier for a group in the identity store.</p>
     */
    inline Group& WithGroupId(const char* value) { SetGroupId(value); return *this;}


    /**
     * <p>The group’s display name value. The length limit is 1,024 characters. This
     * value can consist of letters, accented characters, symbols, numbers,
     * punctuation, tab, new line, carriage return, space, and nonbreaking space in
     * this attribute. This value is specified at the time the group is created and
     * stored as an attribute of the group object in the identity store.</p>
     */
    inline const Aws::String& GetDisplayName() const{ return m_displayName; }

    /**
     * <p>The group’s display name value. The length limit is 1,024 characters. This
     * value can consist of letters, accented characters, symbols, numbers,
     * punctuation, tab, new line, carriage return, space, and nonbreaking space in
     * this attribute. This value is specified at the time the group is created and
     * stored as an attribute of the group object in the identity store.</p>
     */
    inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }

    /**
     * <p>The group’s display name value. The length limit is 1,024 characters. This
     * value can consist of letters, accented characters, symbols, numbers,
     * punctuation, tab, new line, carriage return, space, and nonbreaking space in
     * this attribute. This value is specified at the time the group is created and
     * stored as an attribute of the group object in the identity store.</p>
     */
    inline void SetDisplayName(const Aws::String& value) { m_displayNameHasBeenSet = true; m_displayName = value; }

    /**
     * <p>The group’s display name value. The length limit is 1,024 characters. This
     * value can consist of letters, accented characters, symbols, numbers,
     * punctuation, tab, new line, carriage return, space, and nonbreaking space in
     * this attribute. This value is specified at the time the group is created and
     * stored as an attribute of the group object in the identity store.</p>
     */
    inline void SetDisplayName(Aws::String&& value) { m_displayNameHasBeenSet = true; m_displayName = std::move(value); }

    /**
     * <p>The group’s display name value. The length limit is 1,024 characters. This
     * value can consist of letters, accented characters, symbols, numbers,
     * punctuation, tab, new line, carriage return, space, and nonbreaking space in
     * this attribute. This value is specified at the time the group is created and
     * stored as an attribute of the group object in the identity store.</p>
     */
    inline void SetDisplayName(const char* value) { m_displayNameHasBeenSet = true; m_displayName.assign(value); }

    /**
     * <p>The group’s display name value. The length limit is 1,024 characters. This
     * value can consist of letters, accented characters, symbols, numbers,
     * punctuation, tab, new line, carriage return, space, and nonbreaking space in
     * this attribute. This value is specified at the time the group is created and
     * stored as an attribute of the group object in the identity store.</p>
     */
    inline Group& WithDisplayName(const Aws::String& value) { SetDisplayName(value); return *this;}

    /**
     * <p>The group’s display name value. The length limit is 1,024 characters. This
     * value can consist of letters, accented characters, symbols, numbers,
     * punctuation, tab, new line, carriage return, space, and nonbreaking space in
     * this attribute. This value is specified at the time the group is created and
     * stored as an attribute of the group object in the identity store.</p>
     */
    inline Group& WithDisplayName(Aws::String&& value) { SetDisplayName(std::move(value)); return *this;}

    /**
     * <p>The group’s display name value. The length limit is 1,024 characters. This
     * value can consist of letters, accented characters, symbols, numbers,
     * punctuation, tab, new line, carriage return, space, and nonbreaking space in
     * this attribute. This value is specified at the time the group is created and
     * stored as an attribute of the group object in the identity store.</p>
     */
    inline Group& WithDisplayName(const char* value) { SetDisplayName(value); return *this;}


    /**
     * <p>A list of <code>ExternalId</code> objects that contains the identifiers
     * issued to this resource by an external identity provider.</p>
     */
    inline const Aws::Vector<ExternalId>& GetExternalIds() const{ return m_externalIds; }

    /**
     * <p>A list of <code>ExternalId</code> objects that contains the identifiers
     * issued to this resource by an external identity provider.</p>
     */
    inline bool ExternalIdsHasBeenSet() const { return m_externalIdsHasBeenSet; }

    /**
     * <p>A list of <code>ExternalId</code> objects that contains the identifiers
     * issued to this resource by an external identity provider.</p>
     */
    inline void SetExternalIds(const Aws::Vector<ExternalId>& value) { m_externalIdsHasBeenSet = true; m_externalIds = value; }

    /**
     * <p>A list of <code>ExternalId</code> objects that contains the identifiers
     * issued to this resource by an external identity provider.</p>
     */
    inline void SetExternalIds(Aws::Vector<ExternalId>&& value) { m_externalIdsHasBeenSet = true; m_externalIds = std::move(value); }

    /**
     * <p>A list of <code>ExternalId</code> objects that contains the identifiers
     * issued to this resource by an external identity provider.</p>
     */
    inline Group& WithExternalIds(const Aws::Vector<ExternalId>& value) { SetExternalIds(value); return *this;}

    /**
     * <p>A list of <code>ExternalId</code> objects that contains the identifiers
     * issued to this resource by an external identity provider.</p>
     */
    inline Group& WithExternalIds(Aws::Vector<ExternalId>&& value) { SetExternalIds(std::move(value)); return *this;}

    /**
     * <p>A list of <code>ExternalId</code> objects that contains the identifiers
     * issued to this resource by an external identity provider.</p>
     */
    inline Group& AddExternalIds(const ExternalId& value) { m_externalIdsHasBeenSet = true; m_externalIds.push_back(value); return *this; }

    /**
     * <p>A list of <code>ExternalId</code> objects that contains the identifiers
     * issued to this resource by an external identity provider.</p>
     */
    inline Group& AddExternalIds(ExternalId&& value) { m_externalIdsHasBeenSet = true; m_externalIds.push_back(std::move(value)); return *this; }


    /**
     * <p>A string containing a description of the specified group.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A string containing a description of the specified group.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A string containing a description of the specified group.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A string containing a description of the specified group.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A string containing a description of the specified group.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A string containing a description of the specified group.</p>
     */
    inline Group& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A string containing a description of the specified group.</p>
     */
    inline Group& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A string containing a description of the specified group.</p>
     */
    inline Group& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The globally unique identifier for the identity store.</p>
     */
    inline const Aws::String& GetIdentityStoreId() const{ return m_identityStoreId; }

    /**
     * <p>The globally unique identifier for the identity store.</p>
     */
    inline bool IdentityStoreIdHasBeenSet() const { return m_identityStoreIdHasBeenSet; }

    /**
     * <p>The globally unique identifier for the identity store.</p>
     */
    inline void SetIdentityStoreId(const Aws::String& value) { m_identityStoreIdHasBeenSet = true; m_identityStoreId = value; }

    /**
     * <p>The globally unique identifier for the identity store.</p>
     */
    inline void SetIdentityStoreId(Aws::String&& value) { m_identityStoreIdHasBeenSet = true; m_identityStoreId = std::move(value); }

    /**
     * <p>The globally unique identifier for the identity store.</p>
     */
    inline void SetIdentityStoreId(const char* value) { m_identityStoreIdHasBeenSet = true; m_identityStoreId.assign(value); }

    /**
     * <p>The globally unique identifier for the identity store.</p>
     */
    inline Group& WithIdentityStoreId(const Aws::String& value) { SetIdentityStoreId(value); return *this;}

    /**
     * <p>The globally unique identifier for the identity store.</p>
     */
    inline Group& WithIdentityStoreId(Aws::String&& value) { SetIdentityStoreId(std::move(value)); return *this;}

    /**
     * <p>The globally unique identifier for the identity store.</p>
     */
    inline Group& WithIdentityStoreId(const char* value) { SetIdentityStoreId(value); return *this;}

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
