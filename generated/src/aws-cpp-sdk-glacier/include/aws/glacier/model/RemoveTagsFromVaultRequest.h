/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glacier/Glacier_EXPORTS.h>
#include <aws/glacier/GlacierRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace Glacier
{
namespace Model
{

  /**
   * <p>The input value for <code>RemoveTagsFromVaultInput</code>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glacier-2012-06-01/RemoveTagsFromVaultInput">AWS
   * API Reference</a></p>
   */
  class RemoveTagsFromVaultRequest : public GlacierRequest
  {
  public:
    AWS_GLACIER_API RemoveTagsFromVaultRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RemoveTagsFromVault"; }

    AWS_GLACIER_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The <code>AccountId</code> value is the AWS account ID of the account that
     * owns the vault. You can either specify an AWS account ID or optionally a single
     * '<code>-</code>' (hyphen), in which case Amazon S3 Glacier uses the AWS account
     * ID associated with the credentials used to sign the request. If you use an
     * account ID, do not include any hyphens ('-') in the ID.</p>
     */
    inline const Aws::String& GetAccountId() const { return m_accountId; }
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
    template<typename AccountIdT = Aws::String>
    void SetAccountId(AccountIdT&& value) { m_accountIdHasBeenSet = true; m_accountId = std::forward<AccountIdT>(value); }
    template<typename AccountIdT = Aws::String>
    RemoveTagsFromVaultRequest& WithAccountId(AccountIdT&& value) { SetAccountId(std::forward<AccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the vault.</p>
     */
    inline const Aws::String& GetVaultName() const { return m_vaultName; }
    inline bool VaultNameHasBeenSet() const { return m_vaultNameHasBeenSet; }
    template<typename VaultNameT = Aws::String>
    void SetVaultName(VaultNameT&& value) { m_vaultNameHasBeenSet = true; m_vaultName = std::forward<VaultNameT>(value); }
    template<typename VaultNameT = Aws::String>
    RemoveTagsFromVaultRequest& WithVaultName(VaultNameT&& value) { SetVaultName(std::forward<VaultNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of tag keys. Each corresponding tag is removed from the vault.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTagKeys() const { return m_tagKeys; }
    inline bool TagKeysHasBeenSet() const { return m_tagKeysHasBeenSet; }
    template<typename TagKeysT = Aws::Vector<Aws::String>>
    void SetTagKeys(TagKeysT&& value) { m_tagKeysHasBeenSet = true; m_tagKeys = std::forward<TagKeysT>(value); }
    template<typename TagKeysT = Aws::Vector<Aws::String>>
    RemoveTagsFromVaultRequest& WithTagKeys(TagKeysT&& value) { SetTagKeys(std::forward<TagKeysT>(value)); return *this;}
    template<typename TagKeysT = Aws::String>
    RemoveTagsFromVaultRequest& AddTagKeys(TagKeysT&& value) { m_tagKeysHasBeenSet = true; m_tagKeys.emplace_back(std::forward<TagKeysT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    Aws::String m_vaultName;
    bool m_vaultNameHasBeenSet = false;

    Aws::Vector<Aws::String> m_tagKeys;
    bool m_tagKeysHasBeenSet = false;
  };

} // namespace Model
} // namespace Glacier
} // namespace Aws
