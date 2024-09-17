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
    AWS_APPCONFIG_API ExtensionAssociationSummary();
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
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline ExtensionAssociationSummary& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline ExtensionAssociationSummary& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline ExtensionAssociationSummary& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The system-generated Amazon Resource Name (ARN) for the extension.</p>
     */
    inline const Aws::String& GetExtensionArn() const{ return m_extensionArn; }
    inline bool ExtensionArnHasBeenSet() const { return m_extensionArnHasBeenSet; }
    inline void SetExtensionArn(const Aws::String& value) { m_extensionArnHasBeenSet = true; m_extensionArn = value; }
    inline void SetExtensionArn(Aws::String&& value) { m_extensionArnHasBeenSet = true; m_extensionArn = std::move(value); }
    inline void SetExtensionArn(const char* value) { m_extensionArnHasBeenSet = true; m_extensionArn.assign(value); }
    inline ExtensionAssociationSummary& WithExtensionArn(const Aws::String& value) { SetExtensionArn(value); return *this;}
    inline ExtensionAssociationSummary& WithExtensionArn(Aws::String&& value) { SetExtensionArn(std::move(value)); return *this;}
    inline ExtensionAssociationSummary& WithExtensionArn(const char* value) { SetExtensionArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARNs of applications, configuration profiles, or environments defined in
     * the association.</p>
     */
    inline const Aws::String& GetResourceArn() const{ return m_resourceArn; }
    inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }
    inline void SetResourceArn(const Aws::String& value) { m_resourceArnHasBeenSet = true; m_resourceArn = value; }
    inline void SetResourceArn(Aws::String&& value) { m_resourceArnHasBeenSet = true; m_resourceArn = std::move(value); }
    inline void SetResourceArn(const char* value) { m_resourceArnHasBeenSet = true; m_resourceArn.assign(value); }
    inline ExtensionAssociationSummary& WithResourceArn(const Aws::String& value) { SetResourceArn(value); return *this;}
    inline ExtensionAssociationSummary& WithResourceArn(Aws::String&& value) { SetResourceArn(std::move(value)); return *this;}
    inline ExtensionAssociationSummary& WithResourceArn(const char* value) { SetResourceArn(value); return *this;}
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
