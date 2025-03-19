/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glacier/Glacier_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace Glacier
{
namespace Model
{

  /**
   * <p>Contains the Amazon S3 Glacier response to your request.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glacier-2012-06-01/DescribeVaultOutput">AWS
   * API Reference</a></p>
   */
  class DescribeVaultOutput
  {
  public:
    AWS_GLACIER_API DescribeVaultOutput() = default;
    AWS_GLACIER_API DescribeVaultOutput(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLACIER_API DescribeVaultOutput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLACIER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the vault.</p>
     */
    inline const Aws::String& GetVaultARN() const { return m_vaultARN; }
    inline bool VaultARNHasBeenSet() const { return m_vaultARNHasBeenSet; }
    template<typename VaultARNT = Aws::String>
    void SetVaultARN(VaultARNT&& value) { m_vaultARNHasBeenSet = true; m_vaultARN = std::forward<VaultARNT>(value); }
    template<typename VaultARNT = Aws::String>
    DescribeVaultOutput& WithVaultARN(VaultARNT&& value) { SetVaultARN(std::forward<VaultARNT>(value)); return *this;}
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
    DescribeVaultOutput& WithVaultName(VaultNameT&& value) { SetVaultName(std::forward<VaultNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Universal Coordinated Time (UTC) date when the vault was created. This
     * value should be a string in the ISO 8601 date format, for example
     * <code>2012-03-20T17:03:43.221Z</code>.</p>
     */
    inline const Aws::String& GetCreationDate() const { return m_creationDate; }
    inline bool CreationDateHasBeenSet() const { return m_creationDateHasBeenSet; }
    template<typename CreationDateT = Aws::String>
    void SetCreationDate(CreationDateT&& value) { m_creationDateHasBeenSet = true; m_creationDate = std::forward<CreationDateT>(value); }
    template<typename CreationDateT = Aws::String>
    DescribeVaultOutput& WithCreationDate(CreationDateT&& value) { SetCreationDate(std::forward<CreationDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Universal Coordinated Time (UTC) date when Amazon S3 Glacier completed
     * the last vault inventory. This value should be a string in the ISO 8601 date
     * format, for example <code>2012-03-20T17:03:43.221Z</code>.</p>
     */
    inline const Aws::String& GetLastInventoryDate() const { return m_lastInventoryDate; }
    inline bool LastInventoryDateHasBeenSet() const { return m_lastInventoryDateHasBeenSet; }
    template<typename LastInventoryDateT = Aws::String>
    void SetLastInventoryDate(LastInventoryDateT&& value) { m_lastInventoryDateHasBeenSet = true; m_lastInventoryDate = std::forward<LastInventoryDateT>(value); }
    template<typename LastInventoryDateT = Aws::String>
    DescribeVaultOutput& WithLastInventoryDate(LastInventoryDateT&& value) { SetLastInventoryDate(std::forward<LastInventoryDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of archives in the vault as of the last inventory date. This field
     * will return <code>null</code> if an inventory has not yet run on the vault, for
     * example if you just created the vault.</p>
     */
    inline long long GetNumberOfArchives() const { return m_numberOfArchives; }
    inline bool NumberOfArchivesHasBeenSet() const { return m_numberOfArchivesHasBeenSet; }
    inline void SetNumberOfArchives(long long value) { m_numberOfArchivesHasBeenSet = true; m_numberOfArchives = value; }
    inline DescribeVaultOutput& WithNumberOfArchives(long long value) { SetNumberOfArchives(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Total size, in bytes, of the archives in the vault as of the last inventory
     * date. This field will return null if an inventory has not yet run on the vault,
     * for example if you just created the vault.</p>
     */
    inline long long GetSizeInBytes() const { return m_sizeInBytes; }
    inline bool SizeInBytesHasBeenSet() const { return m_sizeInBytesHasBeenSet; }
    inline void SetSizeInBytes(long long value) { m_sizeInBytesHasBeenSet = true; m_sizeInBytes = value; }
    inline DescribeVaultOutput& WithSizeInBytes(long long value) { SetSizeInBytes(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    inline bool RequestIdHasBeenSet() const { return m_requestIdHasBeenSet; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeVaultOutput& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_vaultARN;
    bool m_vaultARNHasBeenSet = false;

    Aws::String m_vaultName;
    bool m_vaultNameHasBeenSet = false;

    Aws::String m_creationDate;
    bool m_creationDateHasBeenSet = false;

    Aws::String m_lastInventoryDate;
    bool m_lastInventoryDateHasBeenSet = false;

    long long m_numberOfArchives{0};
    bool m_numberOfArchivesHasBeenSet = false;

    long long m_sizeInBytes{0};
    bool m_sizeInBytesHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Glacier
} // namespace Aws
