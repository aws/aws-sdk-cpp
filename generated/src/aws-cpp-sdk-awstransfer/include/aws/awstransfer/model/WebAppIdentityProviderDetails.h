/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/awstransfer/Transfer_EXPORTS.h>
#include <aws/awstransfer/model/IdentityCenterConfig.h>
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
namespace Transfer
{
namespace Model
{

  /**
   * <p>A union that contains the <code>IdentityCenterConfig</code>
   * object.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/transfer-2018-11-05/WebAppIdentityProviderDetails">AWS
   * API Reference</a></p>
   */
  class WebAppIdentityProviderDetails
  {
  public:
    AWS_TRANSFER_API WebAppIdentityProviderDetails() = default;
    AWS_TRANSFER_API WebAppIdentityProviderDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSFER_API WebAppIdentityProviderDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSFER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A structure that describes the values to use for the IAM Identity Center
     * settings when you create a web app.</p>
     */
    inline const IdentityCenterConfig& GetIdentityCenterConfig() const { return m_identityCenterConfig; }
    inline bool IdentityCenterConfigHasBeenSet() const { return m_identityCenterConfigHasBeenSet; }
    template<typename IdentityCenterConfigT = IdentityCenterConfig>
    void SetIdentityCenterConfig(IdentityCenterConfigT&& value) { m_identityCenterConfigHasBeenSet = true; m_identityCenterConfig = std::forward<IdentityCenterConfigT>(value); }
    template<typename IdentityCenterConfigT = IdentityCenterConfig>
    WebAppIdentityProviderDetails& WithIdentityCenterConfig(IdentityCenterConfigT&& value) { SetIdentityCenterConfig(std::forward<IdentityCenterConfigT>(value)); return *this;}
    ///@}
  private:

    IdentityCenterConfig m_identityCenterConfig;
    bool m_identityCenterConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace Transfer
} // namespace Aws
