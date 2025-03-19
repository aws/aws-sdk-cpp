/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appconfig/AppConfig_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace AppConfig
{
namespace Model
{

  /**
   * <p>Information about an association between an extension and an AppConfig
   * resource such as an application, environment, or configuration profile. Call
   * <code>GetExtensionAssociation</code> to get more information about an
   * association.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appconfig-2019-10-09/ExtensionAssociationSummary">AWS
   * API Reference</a></p>
   */
  class ExtensionAssociationSummary
  {
  public:
    AWS_APPCONFIG_API ExtensionAssociationSummary() = default;
    AWS_APPCONFIG_API ExtensionAssociationSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPCONFIG_API ExtensionAssociationSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPCONFIG_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The extension association ID. This ID is used to call other
     * <code>ExtensionAssociation</code> API actions such as
     * <code>GetExtensionAssociation</code> or
     * <code>DeleteExtensionAssociation</code>.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    ExtensionAssociationSummary& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The system-generated Amazon Resource Name (ARN) for the extension.</p>
     */
    inline const Aws::String& GetExtensionArn() const { return m_extensionArn; }
    inline bool ExtensionArnHasBeenSet() const { return m_extensionArnHasBeenSet; }
    template<typename ExtensionArnT = Aws::String>
    void SetExtensionArn(ExtensionArnT&& value) { m_extensionArnHasBeenSet = true; m_extensionArn = std::forward<ExtensionArnT>(value); }
    template<typename ExtensionArnT = Aws::String>
    ExtensionAssociationSummary& WithExtensionArn(ExtensionArnT&& value) { SetExtensionArn(std::forward<ExtensionArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARNs of applications, configuration profiles, or environments defined in
     * the association.</p>
     */
    inline const Aws::String& GetResourceArn() const { return m_resourceArn; }
    inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }
    template<typename ResourceArnT = Aws::String>
    void SetResourceArn(ResourceArnT&& value) { m_resourceArnHasBeenSet = true; m_resourceArn = std::forward<ResourceArnT>(value); }
    template<typename ResourceArnT = Aws::String>
    ExtensionAssociationSummary& WithResourceArn(ResourceArnT&& value) { SetResourceArn(std::forward<ResourceArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_extensionArn;
    bool m_extensionArnHasBeenSet = false;

    Aws::String m_resourceArn;
    bool m_resourceArnHasBeenSet = false;
  };

} // namespace Model
} // namespace AppConfig
} // namespace Aws
