/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/license-manager/LicenseManager_EXPORTS.h>
#include <aws/license-manager/LicenseManagerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace LicenseManager
{
namespace Model
{

  /**
   */
  class DeleteTokenRequest : public LicenseManagerRequest
  {
  public:
    AWS_LICENSEMANAGER_API DeleteTokenRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteToken"; }

    AWS_LICENSEMANAGER_API Aws::String SerializePayload() const override;

    AWS_LICENSEMANAGER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Token ID.</p>
     */
    inline const Aws::String& GetTokenId() const{ return m_tokenId; }

    /**
     * <p>Token ID.</p>
     */
    inline bool TokenIdHasBeenSet() const { return m_tokenIdHasBeenSet; }

    /**
     * <p>Token ID.</p>
     */
    inline void SetTokenId(const Aws::String& value) { m_tokenIdHasBeenSet = true; m_tokenId = value; }

    /**
     * <p>Token ID.</p>
     */
    inline void SetTokenId(Aws::String&& value) { m_tokenIdHasBeenSet = true; m_tokenId = std::move(value); }

    /**
     * <p>Token ID.</p>
     */
    inline void SetTokenId(const char* value) { m_tokenIdHasBeenSet = true; m_tokenId.assign(value); }

    /**
     * <p>Token ID.</p>
     */
    inline DeleteTokenRequest& WithTokenId(const Aws::String& value) { SetTokenId(value); return *this;}

    /**
     * <p>Token ID.</p>
     */
    inline DeleteTokenRequest& WithTokenId(Aws::String&& value) { SetTokenId(std::move(value)); return *this;}

    /**
     * <p>Token ID.</p>
     */
    inline DeleteTokenRequest& WithTokenId(const char* value) { SetTokenId(value); return *this;}

  private:

    Aws::String m_tokenId;
    bool m_tokenIdHasBeenSet = false;
  };

} // namespace Model
} // namespace LicenseManager
} // namespace Aws
