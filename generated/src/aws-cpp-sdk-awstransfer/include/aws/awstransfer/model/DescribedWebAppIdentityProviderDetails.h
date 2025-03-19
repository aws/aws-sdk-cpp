/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/awstransfer/Transfer_EXPORTS.h>
#include <aws/awstransfer/model/DescribedIdentityCenterConfig.h>
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
   * <p>Returns a structure that contains the identity provider details for your web
   * app.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/transfer-2018-11-05/DescribedWebAppIdentityProviderDetails">AWS
   * API Reference</a></p>
   */
  class DescribedWebAppIdentityProviderDetails
  {
  public:
    AWS_TRANSFER_API DescribedWebAppIdentityProviderDetails() = default;
    AWS_TRANSFER_API DescribedWebAppIdentityProviderDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSFER_API DescribedWebAppIdentityProviderDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSFER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Returns a structure for your identity provider details. This structure
     * contains the instance ARN and role being used for the web app.</p>
     */
    inline const DescribedIdentityCenterConfig& GetIdentityCenterConfig() const { return m_identityCenterConfig; }
    inline bool IdentityCenterConfigHasBeenSet() const { return m_identityCenterConfigHasBeenSet; }
    template<typename IdentityCenterConfigT = DescribedIdentityCenterConfig>
    void SetIdentityCenterConfig(IdentityCenterConfigT&& value) { m_identityCenterConfigHasBeenSet = true; m_identityCenterConfig = std::forward<IdentityCenterConfigT>(value); }
    template<typename IdentityCenterConfigT = DescribedIdentityCenterConfig>
    DescribedWebAppIdentityProviderDetails& WithIdentityCenterConfig(IdentityCenterConfigT&& value) { SetIdentityCenterConfig(std::forward<IdentityCenterConfigT>(value)); return *this;}
    ///@}
  private:

    DescribedIdentityCenterConfig m_identityCenterConfig;
    bool m_identityCenterConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace Transfer
} // namespace Aws
