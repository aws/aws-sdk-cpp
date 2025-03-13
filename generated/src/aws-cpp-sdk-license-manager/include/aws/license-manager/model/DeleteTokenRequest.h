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
    AWS_LICENSEMANAGER_API DeleteTokenRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteToken"; }

    AWS_LICENSEMANAGER_API Aws::String SerializePayload() const override;

    AWS_LICENSEMANAGER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>Token ID.</p>
     */
    inline const Aws::String& GetTokenId() const { return m_tokenId; }
    inline bool TokenIdHasBeenSet() const { return m_tokenIdHasBeenSet; }
    template<typename TokenIdT = Aws::String>
    void SetTokenId(TokenIdT&& value) { m_tokenIdHasBeenSet = true; m_tokenId = std::forward<TokenIdT>(value); }
    template<typename TokenIdT = Aws::String>
    DeleteTokenRequest& WithTokenId(TokenIdT&& value) { SetTokenId(std::forward<TokenIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_tokenId;
    bool m_tokenIdHasBeenSet = false;
  };

} // namespace Model
} // namespace LicenseManager
} // namespace Aws
