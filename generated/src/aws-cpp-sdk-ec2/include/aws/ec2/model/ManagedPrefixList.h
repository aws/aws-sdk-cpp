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
    AWS_EC2_API ManagedPrefixList() = default;
    AWS_EC2_API ManagedPrefixList(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API ManagedPrefixList& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The ID of the prefix list.</p>
     */
    inline const Aws::String& GetPrefixListId() const { return m_prefixListId; }
    inline bool PrefixListIdHasBeenSet() const { return m_prefixListIdHasBeenSet; }
    template<typename PrefixListIdT = Aws::String>
    void SetPrefixListId(PrefixListIdT&& value) { m_prefixListIdHasBeenSet = true; m_prefixListId = std::forward<PrefixListIdT>(value); }
    template<typename PrefixListIdT = Aws::String>
    ManagedPrefixList& WithPrefixListId(PrefixListIdT&& value) { SetPrefixListId(std::forward<PrefixListIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IP address version.</p>
     */
    inline const Aws::String& GetAddressFamily() const { return m_addressFamily; }
    inline bool AddressFamilyHasBeenSet() const { return m_addressFamilyHasBeenSet; }
    template<typename AddressFamilyT = Aws::String>
    void SetAddressFamily(AddressFamilyT&& value) { m_addressFamilyHasBeenSet = true; m_addressFamily = std::forward<AddressFamilyT>(value); }
    template<typename AddressFamilyT = Aws::String>
    ManagedPrefixList& WithAddressFamily(AddressFamilyT&& value) { SetAddressFamily(std::forward<AddressFamilyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current state of the prefix list.</p>
     */
    inline PrefixListState GetState() const { return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(PrefixListState value) { m_stateHasBeenSet = true; m_state = value; }
    inline ManagedPrefixList& WithState(PrefixListState value) { SetState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state message.</p>
     */
    inline const Aws::String& GetStateMessage() const { return m_stateMessage; }
    inline bool StateMessageHasBeenSet() const { return m_stateMessageHasBeenSet; }
    template<typename StateMessageT = Aws::String>
    void SetStateMessage(StateMessageT&& value) { m_stateMessageHasBeenSet = true; m_stateMessage = std::forward<StateMessageT>(value); }
    template<typename StateMessageT = Aws::String>
    ManagedPrefixList& WithStateMessage(StateMessageT&& value) { SetStateMessage(std::forward<StateMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for the prefix list.</p>
     */
    inline const Aws::String& GetPrefixListArn() const { return m_prefixListArn; }
    inline bool PrefixListArnHasBeenSet() const { return m_prefixListArnHasBeenSet; }
    template<typename PrefixListArnT = Aws::String>
    void SetPrefixListArn(PrefixListArnT&& value) { m_prefixListArnHasBeenSet = true; m_prefixListArn = std::forward<PrefixListArnT>(value); }
    template<typename PrefixListArnT = Aws::String>
    ManagedPrefixList& WithPrefixListArn(PrefixListArnT&& value) { SetPrefixListArn(std::forward<PrefixListArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the prefix list.</p>
     */
    inline const Aws::String& GetPrefixListName() const { return m_prefixListName; }
    inline bool PrefixListNameHasBeenSet() const { return m_prefixListNameHasBeenSet; }
    template<typename PrefixListNameT = Aws::String>
    void SetPrefixListName(PrefixListNameT&& value) { m_prefixListNameHasBeenSet = true; m_prefixListName = std::forward<PrefixListNameT>(value); }
    template<typename PrefixListNameT = Aws::String>
    ManagedPrefixList& WithPrefixListName(PrefixListNameT&& value) { SetPrefixListName(std::forward<PrefixListNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of entries for the prefix list.</p>
     */
    inline int GetMaxEntries() const { return m_maxEntries; }
    inline bool MaxEntriesHasBeenSet() const { return m_maxEntriesHasBeenSet; }
    inline void SetMaxEntries(int value) { m_maxEntriesHasBeenSet = true; m_maxEntries = value; }
    inline ManagedPrefixList& WithMaxEntries(int value) { SetMaxEntries(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the prefix list.</p>
     */
    inline long long GetVersion() const { return m_version; }
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }
    inline void SetVersion(long long value) { m_versionHasBeenSet = true; m_version = value; }
    inline ManagedPrefixList& WithVersion(long long value) { SetVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags for the prefix list.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    ManagedPrefixList& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    ManagedPrefixList& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The ID of the owner of the prefix list.</p>
     */
    inline const Aws::String& GetOwnerId() const { return m_ownerId; }
    inline bool OwnerIdHasBeenSet() const { return m_ownerIdHasBeenSet; }
    template<typename OwnerIdT = Aws::String>
    void SetOwnerId(OwnerIdT&& value) { m_ownerIdHasBeenSet = true; m_ownerId = std::forward<OwnerIdT>(value); }
    template<typename OwnerIdT = Aws::String>
    ManagedPrefixList& WithOwnerId(OwnerIdT&& value) { SetOwnerId(std::forward<OwnerIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_prefixListId;
    bool m_prefixListIdHasBeenSet = false;

    Aws::String m_addressFamily;
    bool m_addressFamilyHasBeenSet = false;

    PrefixListState m_state{PrefixListState::NOT_SET};
    bool m_stateHasBeenSet = false;

    Aws::String m_stateMessage;
    bool m_stateMessageHasBeenSet = false;

    Aws::String m_prefixListArn;
    bool m_prefixListArnHasBeenSet = false;

    Aws::String m_prefixListName;
    bool m_prefixListNameHasBeenSet = false;

    int m_maxEntries{0};
    bool m_maxEntriesHasBeenSet = false;

    long long m_version{0};
    bool m_versionHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_ownerId;
    bool m_ownerIdHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
