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
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
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
  class DescribeVaultResult
  {
  public:
    AWS_GLACIER_API DescribeVaultResult() = default;
    AWS_GLACIER_API DescribeVaultResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLACIER_API DescribeVaultResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the vault.</p>
     */
    inline const Aws::String& GetVaultARN() const { return m_vaultARN; }
    template<typename VaultARNT = Aws::String>
    void SetVaultARN(VaultARNT&& value) { m_vaultARNHasBeenSet = true; m_vaultARN = std::forward<VaultARNT>(value); }
    template<typename VaultARNT = Aws::String>
    DescribeVaultResult& WithVaultARN(VaultARNT&& value) { SetVaultARN(std::forward<VaultARNT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the vault.</p>
     */
    inline const Aws::String& GetVaultName() const { return m_vaultName; }
    template<typename VaultNameT = Aws::String>
    void SetVaultName(VaultNameT&& value) { m_vaultNameHasBeenSet = true; m_vaultName = std::forward<VaultNameT>(value); }
    template<typename VaultNameT = Aws::String>
    DescribeVaultResult& WithVaultName(VaultNameT&& value) { SetVaultName(std::forward<VaultNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Universal Coordinated Time (UTC) date when the vault was created. This
     * value should be a string in the ISO 8601 date format, for example
     * <code>2012-03-20T17:03:43.221Z</code>.</p>
     */
    inline const Aws::String& GetCreationDate() const { return m_creationDate; }
    template<typename CreationDateT = Aws::String>
    void SetCreationDate(CreationDateT&& value) { m_creationDateHasBeenSet = true; m_creationDate = std::forward<CreationDateT>(value); }
    template<typename CreationDateT = Aws::String>
    DescribeVaultResult& WithCreationDate(CreationDateT&& value) { SetCreationDate(std::forward<CreationDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Universal Coordinated Time (UTC) date when Amazon S3 Glacier completed
     * the last vault inventory. This value should be a string in the ISO 8601 date
     * format, for example <code>2012-03-20T17:03:43.221Z</code>.</p>
     */
    inline const Aws::String& GetLastInventoryDate() const { return m_lastInventoryDate; }
    template<typename LastInventoryDateT = Aws::String>
    void SetLastInventoryDate(LastInventoryDateT&& value) { m_lastInventoryDateHasBeenSet = true; m_lastInventoryDate = std::forward<LastInventoryDateT>(value); }
    template<typename LastInventoryDateT = Aws::String>
    DescribeVaultResult& WithLastInventoryDate(LastInventoryDateT&& value) { SetLastInventoryDate(std::forward<LastInventoryDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of archives in the vault as of the last inventory date. This field
     * will return <code>null</code> if an inventory has not yet run on the vault, for
     * example if you just created the vault.</p>
     */
    inline long long GetNumberOfArchives() const { return m_numberOfArchives; }
    inline void SetNumberOfArchives(long long value) { m_numberOfArchivesHasBeenSet = true; m_numberOfArchives = value; }
    inline DescribeVaultResult& WithNumberOfArchives(long long value) { SetNumberOfArchives(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Total size, in bytes, of the archives in the vault as of the last inventory
     * date. This field will return null if an inventory has not yet run on the vault,
     * for example if you just created the vault.</p>
     */
    inline long long GetSizeInBytes() const { return m_sizeInBytes; }
    inline void SetSizeInBytes(long long value) { m_sizeInBytesHasBeenSet = true; m_sizeInBytes = value; }
    inline DescribeVaultResult& WithSizeInBytes(long long value) { SetSizeInBytes(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeVaultResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
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
