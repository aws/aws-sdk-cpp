/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/AddPrefixListEntry.h>
#include <aws/ec2/model/TagSpecification.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   */
  class CreateManagedPrefixListRequest : public EC2Request
  {
  public:
    AWS_EC2_API CreateManagedPrefixListRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateManagedPrefixList"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool GetDryRun() const{ return m_dryRun; }
    inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }
    inline CreateManagedPrefixListRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A name for the prefix list.</p> <p>Constraints: Up to 255 characters in
     * length. The name cannot start with <code>com.amazonaws</code>.</p>
     */
    inline const Aws::String& GetPrefixListName() const{ return m_prefixListName; }
    inline bool PrefixListNameHasBeenSet() const { return m_prefixListNameHasBeenSet; }
    inline void SetPrefixListName(const Aws::String& value) { m_prefixListNameHasBeenSet = true; m_prefixListName = value; }
    inline void SetPrefixListName(Aws::String&& value) { m_prefixListNameHasBeenSet = true; m_prefixListName = std::move(value); }
    inline void SetPrefixListName(const char* value) { m_prefixListNameHasBeenSet = true; m_prefixListName.assign(value); }
    inline CreateManagedPrefixListRequest& WithPrefixListName(const Aws::String& value) { SetPrefixListName(value); return *this;}
    inline CreateManagedPrefixListRequest& WithPrefixListName(Aws::String&& value) { SetPrefixListName(std::move(value)); return *this;}
    inline CreateManagedPrefixListRequest& WithPrefixListName(const char* value) { SetPrefixListName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>One or more entries for the prefix list.</p>
     */
    inline const Aws::Vector<AddPrefixListEntry>& GetEntries() const{ return m_entries; }
    inline bool EntriesHasBeenSet() const { return m_entriesHasBeenSet; }
    inline void SetEntries(const Aws::Vector<AddPrefixListEntry>& value) { m_entriesHasBeenSet = true; m_entries = value; }
    inline void SetEntries(Aws::Vector<AddPrefixListEntry>&& value) { m_entriesHasBeenSet = true; m_entries = std::move(value); }
    inline CreateManagedPrefixListRequest& WithEntries(const Aws::Vector<AddPrefixListEntry>& value) { SetEntries(value); return *this;}
    inline CreateManagedPrefixListRequest& WithEntries(Aws::Vector<AddPrefixListEntry>&& value) { SetEntries(std::move(value)); return *this;}
    inline CreateManagedPrefixListRequest& AddEntries(const AddPrefixListEntry& value) { m_entriesHasBeenSet = true; m_entries.push_back(value); return *this; }
    inline CreateManagedPrefixListRequest& AddEntries(AddPrefixListEntry&& value) { m_entriesHasBeenSet = true; m_entries.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The maximum number of entries for the prefix list.</p>
     */
    inline int GetMaxEntries() const{ return m_maxEntries; }
    inline bool MaxEntriesHasBeenSet() const { return m_maxEntriesHasBeenSet; }
    inline void SetMaxEntries(int value) { m_maxEntriesHasBeenSet = true; m_maxEntries = value; }
    inline CreateManagedPrefixListRequest& WithMaxEntries(int value) { SetMaxEntries(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags to apply to the prefix list during creation.</p>
     */
    inline const Aws::Vector<TagSpecification>& GetTagSpecifications() const{ return m_tagSpecifications; }
    inline bool TagSpecificationsHasBeenSet() const { return m_tagSpecificationsHasBeenSet; }
    inline void SetTagSpecifications(const Aws::Vector<TagSpecification>& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications = value; }
    inline void SetTagSpecifications(Aws::Vector<TagSpecification>&& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications = std::move(value); }
    inline CreateManagedPrefixListRequest& WithTagSpecifications(const Aws::Vector<TagSpecification>& value) { SetTagSpecifications(value); return *this;}
    inline CreateManagedPrefixListRequest& WithTagSpecifications(Aws::Vector<TagSpecification>&& value) { SetTagSpecifications(std::move(value)); return *this;}
    inline CreateManagedPrefixListRequest& AddTagSpecifications(const TagSpecification& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications.push_back(value); return *this; }
    inline CreateManagedPrefixListRequest& AddTagSpecifications(TagSpecification&& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The IP address type.</p> <p>Valid Values: <code>IPv4</code> |
     * <code>IPv6</code> </p>
     */
    inline const Aws::String& GetAddressFamily() const{ return m_addressFamily; }
    inline bool AddressFamilyHasBeenSet() const { return m_addressFamilyHasBeenSet; }
    inline void SetAddressFamily(const Aws::String& value) { m_addressFamilyHasBeenSet = true; m_addressFamily = value; }
    inline void SetAddressFamily(Aws::String&& value) { m_addressFamilyHasBeenSet = true; m_addressFamily = std::move(value); }
    inline void SetAddressFamily(const char* value) { m_addressFamilyHasBeenSet = true; m_addressFamily.assign(value); }
    inline CreateManagedPrefixListRequest& WithAddressFamily(const Aws::String& value) { SetAddressFamily(value); return *this;}
    inline CreateManagedPrefixListRequest& WithAddressFamily(Aws::String&& value) { SetAddressFamily(std::move(value)); return *this;}
    inline CreateManagedPrefixListRequest& WithAddressFamily(const char* value) { SetAddressFamily(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Unique, case-sensitive identifier you provide to ensure the idempotency of
     * the request. For more information, see <a
     * href="https://docs.aws.amazon.com/ec2/latest/devguide/ec2-api-idempotency.html">Ensuring
     * idempotency</a>.</p> <p>Constraints: Up to 255 UTF-8 characters in length.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }
    inline CreateManagedPrefixListRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}
    inline CreateManagedPrefixListRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}
    inline CreateManagedPrefixListRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}
    ///@}
  private:

    bool m_dryRun;
    bool m_dryRunHasBeenSet = false;

    Aws::String m_prefixListName;
    bool m_prefixListNameHasBeenSet = false;

    Aws::Vector<AddPrefixListEntry> m_entries;
    bool m_entriesHasBeenSet = false;

    int m_maxEntries;
    bool m_maxEntriesHasBeenSet = false;

    Aws::Vector<TagSpecification> m_tagSpecifications;
    bool m_tagSpecificationsHasBeenSet = false;

    Aws::String m_addressFamily;
    bool m_addressFamilyHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
