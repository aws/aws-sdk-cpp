/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/PrefixListState.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/Tag.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace EC2
{
namespace Model
{

  /**
   * <p>Describes a managed prefix list.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ManagedPrefixList">AWS
   * API Reference</a></p>
   */
  class ManagedPrefixList
  {
  public:
    AWS_EC2_API ManagedPrefixList();
    AWS_EC2_API ManagedPrefixList(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API ManagedPrefixList& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The ID of the prefix list.</p>
     */
    inline const Aws::String& GetPrefixListId() const{ return m_prefixListId; }

    /**
     * <p>The ID of the prefix list.</p>
     */
    inline bool PrefixListIdHasBeenSet() const { return m_prefixListIdHasBeenSet; }

    /**
     * <p>The ID of the prefix list.</p>
     */
    inline void SetPrefixListId(const Aws::String& value) { m_prefixListIdHasBeenSet = true; m_prefixListId = value; }

    /**
     * <p>The ID of the prefix list.</p>
     */
    inline void SetPrefixListId(Aws::String&& value) { m_prefixListIdHasBeenSet = true; m_prefixListId = std::move(value); }

    /**
     * <p>The ID of the prefix list.</p>
     */
    inline void SetPrefixListId(const char* value) { m_prefixListIdHasBeenSet = true; m_prefixListId.assign(value); }

    /**
     * <p>The ID of the prefix list.</p>
     */
    inline ManagedPrefixList& WithPrefixListId(const Aws::String& value) { SetPrefixListId(value); return *this;}

    /**
     * <p>The ID of the prefix list.</p>
     */
    inline ManagedPrefixList& WithPrefixListId(Aws::String&& value) { SetPrefixListId(std::move(value)); return *this;}

    /**
     * <p>The ID of the prefix list.</p>
     */
    inline ManagedPrefixList& WithPrefixListId(const char* value) { SetPrefixListId(value); return *this;}


    /**
     * <p>The IP address version.</p>
     */
    inline const Aws::String& GetAddressFamily() const{ return m_addressFamily; }

    /**
     * <p>The IP address version.</p>
     */
    inline bool AddressFamilyHasBeenSet() const { return m_addressFamilyHasBeenSet; }

    /**
     * <p>The IP address version.</p>
     */
    inline void SetAddressFamily(const Aws::String& value) { m_addressFamilyHasBeenSet = true; m_addressFamily = value; }

    /**
     * <p>The IP address version.</p>
     */
    inline void SetAddressFamily(Aws::String&& value) { m_addressFamilyHasBeenSet = true; m_addressFamily = std::move(value); }

    /**
     * <p>The IP address version.</p>
     */
    inline void SetAddressFamily(const char* value) { m_addressFamilyHasBeenSet = true; m_addressFamily.assign(value); }

    /**
     * <p>The IP address version.</p>
     */
    inline ManagedPrefixList& WithAddressFamily(const Aws::String& value) { SetAddressFamily(value); return *this;}

    /**
     * <p>The IP address version.</p>
     */
    inline ManagedPrefixList& WithAddressFamily(Aws::String&& value) { SetAddressFamily(std::move(value)); return *this;}

    /**
     * <p>The IP address version.</p>
     */
    inline ManagedPrefixList& WithAddressFamily(const char* value) { SetAddressFamily(value); return *this;}


    /**
     * <p>The current state of the prefix list.</p>
     */
    inline const PrefixListState& GetState() const{ return m_state; }

    /**
     * <p>The current state of the prefix list.</p>
     */
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    /**
     * <p>The current state of the prefix list.</p>
     */
    inline void SetState(const PrefixListState& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>The current state of the prefix list.</p>
     */
    inline void SetState(PrefixListState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>The current state of the prefix list.</p>
     */
    inline ManagedPrefixList& WithState(const PrefixListState& value) { SetState(value); return *this;}

    /**
     * <p>The current state of the prefix list.</p>
     */
    inline ManagedPrefixList& WithState(PrefixListState&& value) { SetState(std::move(value)); return *this;}


    /**
     * <p>The state message.</p>
     */
    inline const Aws::String& GetStateMessage() const{ return m_stateMessage; }

    /**
     * <p>The state message.</p>
     */
    inline bool StateMessageHasBeenSet() const { return m_stateMessageHasBeenSet; }

    /**
     * <p>The state message.</p>
     */
    inline void SetStateMessage(const Aws::String& value) { m_stateMessageHasBeenSet = true; m_stateMessage = value; }

    /**
     * <p>The state message.</p>
     */
    inline void SetStateMessage(Aws::String&& value) { m_stateMessageHasBeenSet = true; m_stateMessage = std::move(value); }

    /**
     * <p>The state message.</p>
     */
    inline void SetStateMessage(const char* value) { m_stateMessageHasBeenSet = true; m_stateMessage.assign(value); }

    /**
     * <p>The state message.</p>
     */
    inline ManagedPrefixList& WithStateMessage(const Aws::String& value) { SetStateMessage(value); return *this;}

    /**
     * <p>The state message.</p>
     */
    inline ManagedPrefixList& WithStateMessage(Aws::String&& value) { SetStateMessage(std::move(value)); return *this;}

    /**
     * <p>The state message.</p>
     */
    inline ManagedPrefixList& WithStateMessage(const char* value) { SetStateMessage(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) for the prefix list.</p>
     */
    inline const Aws::String& GetPrefixListArn() const{ return m_prefixListArn; }

    /**
     * <p>The Amazon Resource Name (ARN) for the prefix list.</p>
     */
    inline bool PrefixListArnHasBeenSet() const { return m_prefixListArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) for the prefix list.</p>
     */
    inline void SetPrefixListArn(const Aws::String& value) { m_prefixListArnHasBeenSet = true; m_prefixListArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) for the prefix list.</p>
     */
    inline void SetPrefixListArn(Aws::String&& value) { m_prefixListArnHasBeenSet = true; m_prefixListArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the prefix list.</p>
     */
    inline void SetPrefixListArn(const char* value) { m_prefixListArnHasBeenSet = true; m_prefixListArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the prefix list.</p>
     */
    inline ManagedPrefixList& WithPrefixListArn(const Aws::String& value) { SetPrefixListArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the prefix list.</p>
     */
    inline ManagedPrefixList& WithPrefixListArn(Aws::String&& value) { SetPrefixListArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the prefix list.</p>
     */
    inline ManagedPrefixList& WithPrefixListArn(const char* value) { SetPrefixListArn(value); return *this;}


    /**
     * <p>The name of the prefix list.</p>
     */
    inline const Aws::String& GetPrefixListName() const{ return m_prefixListName; }

    /**
     * <p>The name of the prefix list.</p>
     */
    inline bool PrefixListNameHasBeenSet() const { return m_prefixListNameHasBeenSet; }

    /**
     * <p>The name of the prefix list.</p>
     */
    inline void SetPrefixListName(const Aws::String& value) { m_prefixListNameHasBeenSet = true; m_prefixListName = value; }

    /**
     * <p>The name of the prefix list.</p>
     */
    inline void SetPrefixListName(Aws::String&& value) { m_prefixListNameHasBeenSet = true; m_prefixListName = std::move(value); }

    /**
     * <p>The name of the prefix list.</p>
     */
    inline void SetPrefixListName(const char* value) { m_prefixListNameHasBeenSet = true; m_prefixListName.assign(value); }

    /**
     * <p>The name of the prefix list.</p>
     */
    inline ManagedPrefixList& WithPrefixListName(const Aws::String& value) { SetPrefixListName(value); return *this;}

    /**
     * <p>The name of the prefix list.</p>
     */
    inline ManagedPrefixList& WithPrefixListName(Aws::String&& value) { SetPrefixListName(std::move(value)); return *this;}

    /**
     * <p>The name of the prefix list.</p>
     */
    inline ManagedPrefixList& WithPrefixListName(const char* value) { SetPrefixListName(value); return *this;}


    /**
     * <p>The maximum number of entries for the prefix list.</p>
     */
    inline int GetMaxEntries() const{ return m_maxEntries; }

    /**
     * <p>The maximum number of entries for the prefix list.</p>
     */
    inline bool MaxEntriesHasBeenSet() const { return m_maxEntriesHasBeenSet; }

    /**
     * <p>The maximum number of entries for the prefix list.</p>
     */
    inline void SetMaxEntries(int value) { m_maxEntriesHasBeenSet = true; m_maxEntries = value; }

    /**
     * <p>The maximum number of entries for the prefix list.</p>
     */
    inline ManagedPrefixList& WithMaxEntries(int value) { SetMaxEntries(value); return *this;}


    /**
     * <p>The version of the prefix list.</p>
     */
    inline long long GetVersion() const{ return m_version; }

    /**
     * <p>The version of the prefix list.</p>
     */
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }

    /**
     * <p>The version of the prefix list.</p>
     */
    inline void SetVersion(long long value) { m_versionHasBeenSet = true; m_version = value; }

    /**
     * <p>The version of the prefix list.</p>
     */
    inline ManagedPrefixList& WithVersion(long long value) { SetVersion(value); return *this;}


    /**
     * <p>The tags for the prefix list.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags for the prefix list.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The tags for the prefix list.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tags for the prefix list.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The tags for the prefix list.</p>
     */
    inline ManagedPrefixList& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags for the prefix list.</p>
     */
    inline ManagedPrefixList& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags for the prefix list.</p>
     */
    inline ManagedPrefixList& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>The tags for the prefix list.</p>
     */
    inline ManagedPrefixList& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }


    /**
     * <p>The ID of the owner of the prefix list.</p>
     */
    inline const Aws::String& GetOwnerId() const{ return m_ownerId; }

    /**
     * <p>The ID of the owner of the prefix list.</p>
     */
    inline bool OwnerIdHasBeenSet() const { return m_ownerIdHasBeenSet; }

    /**
     * <p>The ID of the owner of the prefix list.</p>
     */
    inline void SetOwnerId(const Aws::String& value) { m_ownerIdHasBeenSet = true; m_ownerId = value; }

    /**
     * <p>The ID of the owner of the prefix list.</p>
     */
    inline void SetOwnerId(Aws::String&& value) { m_ownerIdHasBeenSet = true; m_ownerId = std::move(value); }

    /**
     * <p>The ID of the owner of the prefix list.</p>
     */
    inline void SetOwnerId(const char* value) { m_ownerIdHasBeenSet = true; m_ownerId.assign(value); }

    /**
     * <p>The ID of the owner of the prefix list.</p>
     */
    inline ManagedPrefixList& WithOwnerId(const Aws::String& value) { SetOwnerId(value); return *this;}

    /**
     * <p>The ID of the owner of the prefix list.</p>
     */
    inline ManagedPrefixList& WithOwnerId(Aws::String&& value) { SetOwnerId(std::move(value)); return *this;}

    /**
     * <p>The ID of the owner of the prefix list.</p>
     */
    inline ManagedPrefixList& WithOwnerId(const char* value) { SetOwnerId(value); return *this;}

  private:

    Aws::String m_prefixListId;
    bool m_prefixListIdHasBeenSet = false;

    Aws::String m_addressFamily;
    bool m_addressFamilyHasBeenSet = false;

    PrefixListState m_state;
    bool m_stateHasBeenSet = false;

    Aws::String m_stateMessage;
    bool m_stateMessageHasBeenSet = false;

    Aws::String m_prefixListArn;
    bool m_prefixListArnHasBeenSet = false;

    Aws::String m_prefixListName;
    bool m_prefixListNameHasBeenSet = false;

    int m_maxEntries;
    bool m_maxEntriesHasBeenSet = false;

    long long m_version;
    bool m_versionHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_ownerId;
    bool m_ownerIdHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
