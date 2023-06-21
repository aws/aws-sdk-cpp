/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/inspector2/Inspector2Request.h>
#include <aws/inspector2/model/ResourceType.h>
#include <aws/inspector2/model/ScanType.h>
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
    AWS_INSPECTOR2_API GetEncryptionKeyRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetEncryptionKey"; }

    AWS_INSPECTOR2_API Aws::String SerializePayload() const override;

    AWS_INSPECTOR2_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The resource type the key encrypts.</p>
     */
    inline const ResourceType& GetResourceType() const{ return m_resourceType; }

    /**
     * <p>The resource type the key encrypts.</p>
     */
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }

    /**
     * <p>The resource type the key encrypts.</p>
     */
    inline void SetResourceType(const ResourceType& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }

    /**
     * <p>The resource type the key encrypts.</p>
     */
    inline void SetResourceType(ResourceType&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }

    /**
     * <p>The resource type the key encrypts.</p>
     */
    inline GetEncryptionKeyRequest& WithResourceType(const ResourceType& value) { SetResourceType(value); return *this;}

    /**
     * <p>The resource type the key encrypts.</p>
     */
    inline GetEncryptionKeyRequest& WithResourceType(ResourceType&& value) { SetResourceType(std::move(value)); return *this;}


    /**
     * <p>The scan type the key encrypts.</p>
     */
    inline const ScanType& GetScanType() const{ return m_scanType; }

    /**
     * <p>The scan type the key encrypts.</p>
     */
    inline bool ScanTypeHasBeenSet() const { return m_scanTypeHasBeenSet; }

    /**
     * <p>The scan type the key encrypts.</p>
     */
    inline void SetScanType(const ScanType& value) { m_scanTypeHasBeenSet = true; m_scanType = value; }

    /**
     * <p>The scan type the key encrypts.</p>
     */
    inline void SetScanType(ScanType&& value) { m_scanTypeHasBeenSet = true; m_scanType = std::move(value); }

    /**
     * <p>The scan type the key encrypts.</p>
     */
    inline GetEncryptionKeyRequest& WithScanType(const ScanType& value) { SetScanType(value); return *this;}

    /**
     * <p>The scan type the key encrypts.</p>
     */
    inline GetEncryptionKeyRequest& WithScanType(ScanType&& value) { SetScanType(std::move(value)); return *this;}

  private:

    ResourceType m_resourceType;
    bool m_resourceTypeHasBeenSet = false;

    ScanType m_scanType;
    bool m_scanTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
