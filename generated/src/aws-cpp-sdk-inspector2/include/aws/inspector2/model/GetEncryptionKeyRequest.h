/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/inspector2/Inspector2Request.h>
#include <aws/inspector2/model/ScanType.h>
#include <aws/inspector2/model/ResourceType.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace Inspector2
{
namespace Model
{

  /**
   */
  class GetEncryptionKeyRequest : public Inspector2Request
  {
  public:
    AWS_INSPECTOR2_API GetEncryptionKeyRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetEncryptionKey"; }

    AWS_INSPECTOR2_API Aws::String SerializePayload() const override;

    AWS_INSPECTOR2_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The scan type the key encrypts.</p>
     */
    inline ScanType GetScanType() const { return m_scanType; }
    inline bool ScanTypeHasBeenSet() const { return m_scanTypeHasBeenSet; }
    inline void SetScanType(ScanType value) { m_scanTypeHasBeenSet = true; m_scanType = value; }
    inline GetEncryptionKeyRequest& WithScanType(ScanType value) { SetScanType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The resource type the key encrypts.</p>
     */
    inline ResourceType GetResourceType() const { return m_resourceType; }
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
    inline void SetResourceType(ResourceType value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }
    inline GetEncryptionKeyRequest& WithResourceType(ResourceType value) { SetResourceType(value); return *this;}
    ///@}
  private:

    ScanType m_scanType{ScanType::NOT_SET};
    bool m_scanTypeHasBeenSet = false;

    ResourceType m_resourceType{ResourceType::NOT_SET};
    bool m_resourceTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
