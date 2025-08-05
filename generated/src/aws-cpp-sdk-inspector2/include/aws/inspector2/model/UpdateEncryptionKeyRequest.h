/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/inspector2/Inspector2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/inspector2/model/ScanType.h>
#include <aws/inspector2/model/ResourceType.h>
#include <utility>

namespace Aws
{
namespace Inspector2
{
namespace Model
{

  /**
   */
  class UpdateEncryptionKeyRequest : public Inspector2Request
  {
  public:
    AWS_INSPECTOR2_API UpdateEncryptionKeyRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateEncryptionKey"; }

    AWS_INSPECTOR2_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>A KMS key ID for the encryption key.</p>
     */
    inline const Aws::String& GetKmsKeyId() const { return m_kmsKeyId; }
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }
    template<typename KmsKeyIdT = Aws::String>
    void SetKmsKeyId(KmsKeyIdT&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::forward<KmsKeyIdT>(value); }
    template<typename KmsKeyIdT = Aws::String>
    UpdateEncryptionKeyRequest& WithKmsKeyId(KmsKeyIdT&& value) { SetKmsKeyId(std::forward<KmsKeyIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The scan type for the encryption key.</p>
     */
    inline ScanType GetScanType() const { return m_scanType; }
    inline bool ScanTypeHasBeenSet() const { return m_scanTypeHasBeenSet; }
    inline void SetScanType(ScanType value) { m_scanTypeHasBeenSet = true; m_scanType = value; }
    inline UpdateEncryptionKeyRequest& WithScanType(ScanType value) { SetScanType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The resource type for the encryption key.</p>
     */
    inline ResourceType GetResourceType() const { return m_resourceType; }
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
    inline void SetResourceType(ResourceType value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }
    inline UpdateEncryptionKeyRequest& WithResourceType(ResourceType value) { SetResourceType(value); return *this;}
    ///@}
  private:

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet = false;

    ScanType m_scanType{ScanType::NOT_SET};
    bool m_scanTypeHasBeenSet = false;

    ResourceType m_resourceType{ResourceType::NOT_SET};
    bool m_resourceTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
