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
  class GetExtensionRequest : public AppConfigRequest
  {
  public:
    AWS_APPCONFIG_API GetExtensionRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetExtension"; }

    AWS_APPCONFIG_API Aws::String SerializePayload() const override;

    AWS_APPCONFIG_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The name, the ID, or the Amazon Resource Name (ARN) of the extension.</p>
     */
    inline const Aws::String& GetExtensionIdentifier() const { return m_extensionIdentifier; }
    inline bool ExtensionIdentifierHasBeenSet() const { return m_extensionIdentifierHasBeenSet; }
    template<typename ExtensionIdentifierT = Aws::String>
    void SetExtensionIdentifier(ExtensionIdentifierT&& value) { m_extensionIdentifierHasBeenSet = true; m_extensionIdentifier = std::forward<ExtensionIdentifierT>(value); }
    template<typename ExtensionIdentifierT = Aws::String>
    GetExtensionRequest& WithExtensionIdentifier(ExtensionIdentifierT&& value) { SetExtensionIdentifier(std::forward<ExtensionIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The extension version number. If no version number was defined, AppConfig
     * uses the highest version.</p>
     */
    inline int GetVersionNumber() const { return m_versionNumber; }
    inline bool VersionNumberHasBeenSet() const { return m_versionNumberHasBeenSet; }
    inline void SetVersionNumber(int value) { m_versionNumberHasBeenSet = true; m_versionNumber = value; }
    inline GetExtensionRequest& WithVersionNumber(int value) { SetVersionNumber(value); return *this;}
    ///@}
  private:

    Aws::String m_extensionIdentifier;
    bool m_extensionIdentifierHasBeenSet = false;

    int m_versionNumber{0};
    bool m_versionNumberHasBeenSet = false;
  };

} // namespace Model
} // namespace AppConfig
} // namespace Aws
