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
namespace Http
{
    class URI;
} //namespace Http
namespace AppConfig
{
namespace Model
{

  /**
   */
  class DeleteExtensionRequest : public AppConfigRequest
  {
  public:
    AWS_APPCONFIG_API DeleteExtensionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteExtension"; }

    AWS_APPCONFIG_API Aws::String SerializePayload() const override;

    AWS_APPCONFIG_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The name, ID, or Amazon Resource Name (ARN) of the extension you want to
     * delete.</p>
     */
    inline const Aws::String& GetExtensionIdentifier() const{ return m_extensionIdentifier; }

    /**
     * <p>The name, ID, or Amazon Resource Name (ARN) of the extension you want to
     * delete.</p>
     */
    inline bool ExtensionIdentifierHasBeenSet() const { return m_extensionIdentifierHasBeenSet; }

    /**
     * <p>The name, ID, or Amazon Resource Name (ARN) of the extension you want to
     * delete.</p>
     */
    inline void SetExtensionIdentifier(const Aws::String& value) { m_extensionIdentifierHasBeenSet = true; m_extensionIdentifier = value; }

    /**
     * <p>The name, ID, or Amazon Resource Name (ARN) of the extension you want to
     * delete.</p>
     */
    inline void SetExtensionIdentifier(Aws::String&& value) { m_extensionIdentifierHasBeenSet = true; m_extensionIdentifier = std::move(value); }

    /**
     * <p>The name, ID, or Amazon Resource Name (ARN) of the extension you want to
     * delete.</p>
     */
    inline void SetExtensionIdentifier(const char* value) { m_extensionIdentifierHasBeenSet = true; m_extensionIdentifier.assign(value); }

    /**
     * <p>The name, ID, or Amazon Resource Name (ARN) of the extension you want to
     * delete.</p>
     */
    inline DeleteExtensionRequest& WithExtensionIdentifier(const Aws::String& value) { SetExtensionIdentifier(value); return *this;}

    /**
     * <p>The name, ID, or Amazon Resource Name (ARN) of the extension you want to
     * delete.</p>
     */
    inline DeleteExtensionRequest& WithExtensionIdentifier(Aws::String&& value) { SetExtensionIdentifier(std::move(value)); return *this;}

    /**
     * <p>The name, ID, or Amazon Resource Name (ARN) of the extension you want to
     * delete.</p>
     */
    inline DeleteExtensionRequest& WithExtensionIdentifier(const char* value) { SetExtensionIdentifier(value); return *this;}


    /**
     * <p>A specific version of an extension to delete. If omitted, the highest version
     * is deleted.</p>
     */
    inline int GetVersionNumber() const{ return m_versionNumber; }

    /**
     * <p>A specific version of an extension to delete. If omitted, the highest version
     * is deleted.</p>
     */
    inline bool VersionNumberHasBeenSet() const { return m_versionNumberHasBeenSet; }

    /**
     * <p>A specific version of an extension to delete. If omitted, the highest version
     * is deleted.</p>
     */
    inline void SetVersionNumber(int value) { m_versionNumberHasBeenSet = true; m_versionNumber = value; }

    /**
     * <p>A specific version of an extension to delete. If omitted, the highest version
     * is deleted.</p>
     */
    inline DeleteExtensionRequest& WithVersionNumber(int value) { SetVersionNumber(value); return *this;}

  private:

    Aws::String m_extensionIdentifier;
    bool m_extensionIdentifierHasBeenSet = false;

    int m_versionNumber;
    bool m_versionNumberHasBeenSet = false;
  };

} // namespace Model
} // namespace AppConfig
} // namespace Aws
