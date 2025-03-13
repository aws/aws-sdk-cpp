/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appconfig/AppConfig_EXPORTS.h>
#include <aws/appconfig/AppConfigRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace AppConfig
{
namespace Model
{

  /**
   */
  class GetExtensionAssociationRequest : public AppConfigRequest
  {
  public:
    AWS_APPCONFIG_API GetExtensionAssociationRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetExtensionAssociation"; }

    AWS_APPCONFIG_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The extension association ID to get.</p>
     */
    inline const Aws::String& GetExtensionAssociationId() const { return m_extensionAssociationId; }
    inline bool ExtensionAssociationIdHasBeenSet() const { return m_extensionAssociationIdHasBeenSet; }
    template<typename ExtensionAssociationIdT = Aws::String>
    void SetExtensionAssociationId(ExtensionAssociationIdT&& value) { m_extensionAssociationIdHasBeenSet = true; m_extensionAssociationId = std::forward<ExtensionAssociationIdT>(value); }
    template<typename ExtensionAssociationIdT = Aws::String>
    GetExtensionAssociationRequest& WithExtensionAssociationId(ExtensionAssociationIdT&& value) { SetExtensionAssociationId(std::forward<ExtensionAssociationIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_extensionAssociationId;
    bool m_extensionAssociationIdHasBeenSet = false;
  };

} // namespace Model
} // namespace AppConfig
} // namespace Aws
