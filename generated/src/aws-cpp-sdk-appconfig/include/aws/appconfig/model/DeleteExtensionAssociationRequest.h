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
  class DeleteExtensionAssociationRequest : public AppConfigRequest
  {
  public:
    AWS_APPCONFIG_API DeleteExtensionAssociationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteExtensionAssociation"; }

    AWS_APPCONFIG_API Aws::String SerializePayload() const override;


    /**
     * <p>The ID of the extension association to delete.</p>
     */
    inline const Aws::String& GetExtensionAssociationId() const{ return m_extensionAssociationId; }

    /**
     * <p>The ID of the extension association to delete.</p>
     */
    inline bool ExtensionAssociationIdHasBeenSet() const { return m_extensionAssociationIdHasBeenSet; }

    /**
     * <p>The ID of the extension association to delete.</p>
     */
    inline void SetExtensionAssociationId(const Aws::String& value) { m_extensionAssociationIdHasBeenSet = true; m_extensionAssociationId = value; }

    /**
     * <p>The ID of the extension association to delete.</p>
     */
    inline void SetExtensionAssociationId(Aws::String&& value) { m_extensionAssociationIdHasBeenSet = true; m_extensionAssociationId = std::move(value); }

    /**
     * <p>The ID of the extension association to delete.</p>
     */
    inline void SetExtensionAssociationId(const char* value) { m_extensionAssociationIdHasBeenSet = true; m_extensionAssociationId.assign(value); }

    /**
     * <p>The ID of the extension association to delete.</p>
     */
    inline DeleteExtensionAssociationRequest& WithExtensionAssociationId(const Aws::String& value) { SetExtensionAssociationId(value); return *this;}

    /**
     * <p>The ID of the extension association to delete.</p>
     */
    inline DeleteExtensionAssociationRequest& WithExtensionAssociationId(Aws::String&& value) { SetExtensionAssociationId(std::move(value)); return *this;}

    /**
     * <p>The ID of the extension association to delete.</p>
     */
    inline DeleteExtensionAssociationRequest& WithExtensionAssociationId(const char* value) { SetExtensionAssociationId(value); return *this;}

  private:

    Aws::String m_extensionAssociationId;
    bool m_extensionAssociationIdHasBeenSet = false;
  };

} // namespace Model
} // namespace AppConfig
} // namespace Aws
