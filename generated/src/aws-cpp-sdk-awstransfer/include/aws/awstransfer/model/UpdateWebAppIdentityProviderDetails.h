/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/awstransfer/Transfer_EXPORTS.h>
#include <aws/awstransfer/model/UpdateWebAppIdentityCenterConfig.h>
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
   * <p>A union that contains the <code>UpdateWebAppIdentityCenterConfig</code>
   * object.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/transfer-2018-11-05/UpdateWebAppIdentityProviderDetails">AWS
   * API Reference</a></p>
   */
  class UpdateWebAppIdentityProviderDetails
  {
  public:
    AWS_TRANSFER_API UpdateWebAppIdentityProviderDetails() = default;
    AWS_TRANSFER_API UpdateWebAppIdentityProviderDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSFER_API UpdateWebAppIdentityProviderDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSFER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A structure that describes the values to use for the IAM Identity Center
     * settings when you update a web app.</p>
     */
    inline const UpdateWebAppIdentityCenterConfig& GetIdentityCenterConfig() const { return m_identityCenterConfig; }
    inline bool IdentityCenterConfigHasBeenSet() const { return m_identityCenterConfigHasBeenSet; }
    template<typename IdentityCenterConfigT = UpdateWebAppIdentityCenterConfig>
    void SetIdentityCenterConfig(IdentityCenterConfigT&& value) { m_identityCenterConfigHasBeenSet = true; m_identityCenterConfig = std::forward<IdentityCenterConfigT>(value); }
    template<typename IdentityCenterConfigT = UpdateWebAppIdentityCenterConfig>
    UpdateWebAppIdentityProviderDetails& WithIdentityCenterConfig(IdentityCenterConfigT&& value) { SetIdentityCenterConfig(std::forward<IdentityCenterConfigT>(value)); return *this;}
    ///@}
  private:

    UpdateWebAppIdentityCenterConfig m_identityCenterConfig;
    bool m_identityCenterConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace Transfer
} // namespace Aws
