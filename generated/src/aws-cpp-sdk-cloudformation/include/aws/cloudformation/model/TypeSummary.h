/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudformation/CloudFormation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/cloudformation/model/RegistryType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/cloudformation/model/IdentityProvider.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace CloudFormation
{
namespace Model
{

  /**
   * <p>Contains summary information about the specified CloudFormation
   * extension.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/TypeSummary">AWS
   * API Reference</a></p>
   */
  class TypeSummary
  {
  public:
    AWS_CLOUDFORMATION_API TypeSummary();
    AWS_CLOUDFORMATION_API TypeSummary(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDFORMATION_API TypeSummary& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDFORMATION_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_CLOUDFORMATION_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The kind of extension.</p>
     */
    inline const RegistryType& GetType() const{ return m_type; }

    /**
     * <p>The kind of extension.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The kind of extension.</p>
     */
    inline void SetType(const RegistryType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The kind of extension.</p>
     */
    inline void SetType(RegistryType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The kind of extension.</p>
     */
    inline TypeSummary& WithType(const RegistryType& value) { SetType(value); return *this;}

    /**
     * <p>The kind of extension.</p>
     */
    inline TypeSummary& WithType(RegistryType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>The name of the extension.</p> <p>If you specified a
     * <code>TypeNameAlias</code> when you <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/APIReference/API_ActivateType.html">activate
     * this extension</a> in your account and Region, CloudFormation considers that
     * alias as the type name.</p>
     */
    inline const Aws::String& GetTypeName() const{ return m_typeName; }

    /**
     * <p>The name of the extension.</p> <p>If you specified a
     * <code>TypeNameAlias</code> when you <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/APIReference/API_ActivateType.html">activate
     * this extension</a> in your account and Region, CloudFormation considers that
     * alias as the type name.</p>
     */
    inline bool TypeNameHasBeenSet() const { return m_typeNameHasBeenSet; }

    /**
     * <p>The name of the extension.</p> <p>If you specified a
     * <code>TypeNameAlias</code> when you <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/APIReference/API_ActivateType.html">activate
     * this extension</a> in your account and Region, CloudFormation considers that
     * alias as the type name.</p>
     */
    inline void SetTypeName(const Aws::String& value) { m_typeNameHasBeenSet = true; m_typeName = value; }

    /**
     * <p>The name of the extension.</p> <p>If you specified a
     * <code>TypeNameAlias</code> when you <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/APIReference/API_ActivateType.html">activate
     * this extension</a> in your account and Region, CloudFormation considers that
     * alias as the type name.</p>
     */
    inline void SetTypeName(Aws::String&& value) { m_typeNameHasBeenSet = true; m_typeName = std::move(value); }

    /**
     * <p>The name of the extension.</p> <p>If you specified a
     * <code>TypeNameAlias</code> when you <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/APIReference/API_ActivateType.html">activate
     * this extension</a> in your account and Region, CloudFormation considers that
     * alias as the type name.</p>
     */
    inline void SetTypeName(const char* value) { m_typeNameHasBeenSet = true; m_typeName.assign(value); }

    /**
     * <p>The name of the extension.</p> <p>If you specified a
     * <code>TypeNameAlias</code> when you <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/APIReference/API_ActivateType.html">activate
     * this extension</a> in your account and Region, CloudFormation considers that
     * alias as the type name.</p>
     */
    inline TypeSummary& WithTypeName(const Aws::String& value) { SetTypeName(value); return *this;}

    /**
     * <p>The name of the extension.</p> <p>If you specified a
     * <code>TypeNameAlias</code> when you <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/APIReference/API_ActivateType.html">activate
     * this extension</a> in your account and Region, CloudFormation considers that
     * alias as the type name.</p>
     */
    inline TypeSummary& WithTypeName(Aws::String&& value) { SetTypeName(std::move(value)); return *this;}

    /**
     * <p>The name of the extension.</p> <p>If you specified a
     * <code>TypeNameAlias</code> when you <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/APIReference/API_ActivateType.html">activate
     * this extension</a> in your account and Region, CloudFormation considers that
     * alias as the type name.</p>
     */
    inline TypeSummary& WithTypeName(const char* value) { SetTypeName(value); return *this;}


    /**
     * <p>The ID of the default version of the extension. The default version is used
     * when the extension version isn't specified.</p> <p>This applies only to private
     * extensions you have registered in your account. For public extensions, both
     * those provided by Amazon and published by third parties, CloudFormation returns
     * <code>null</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/APIReference/API_RegisterType.html">RegisterType</a>.</p>
     * <p>To set the default version of an extension, use
     * <a>SetTypeDefaultVersion</a>.</p>
     */
    inline const Aws::String& GetDefaultVersionId() const{ return m_defaultVersionId; }

    /**
     * <p>The ID of the default version of the extension. The default version is used
     * when the extension version isn't specified.</p> <p>This applies only to private
     * extensions you have registered in your account. For public extensions, both
     * those provided by Amazon and published by third parties, CloudFormation returns
     * <code>null</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/APIReference/API_RegisterType.html">RegisterType</a>.</p>
     * <p>To set the default version of an extension, use
     * <a>SetTypeDefaultVersion</a>.</p>
     */
    inline bool DefaultVersionIdHasBeenSet() const { return m_defaultVersionIdHasBeenSet; }

    /**
     * <p>The ID of the default version of the extension. The default version is used
     * when the extension version isn't specified.</p> <p>This applies only to private
     * extensions you have registered in your account. For public extensions, both
     * those provided by Amazon and published by third parties, CloudFormation returns
     * <code>null</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/APIReference/API_RegisterType.html">RegisterType</a>.</p>
     * <p>To set the default version of an extension, use
     * <a>SetTypeDefaultVersion</a>.</p>
     */
    inline void SetDefaultVersionId(const Aws::String& value) { m_defaultVersionIdHasBeenSet = true; m_defaultVersionId = value; }

    /**
     * <p>The ID of the default version of the extension. The default version is used
     * when the extension version isn't specified.</p> <p>This applies only to private
     * extensions you have registered in your account. For public extensions, both
     * those provided by Amazon and published by third parties, CloudFormation returns
     * <code>null</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/APIReference/API_RegisterType.html">RegisterType</a>.</p>
     * <p>To set the default version of an extension, use
     * <a>SetTypeDefaultVersion</a>.</p>
     */
    inline void SetDefaultVersionId(Aws::String&& value) { m_defaultVersionIdHasBeenSet = true; m_defaultVersionId = std::move(value); }

    /**
     * <p>The ID of the default version of the extension. The default version is used
     * when the extension version isn't specified.</p> <p>This applies only to private
     * extensions you have registered in your account. For public extensions, both
     * those provided by Amazon and published by third parties, CloudFormation returns
     * <code>null</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/APIReference/API_RegisterType.html">RegisterType</a>.</p>
     * <p>To set the default version of an extension, use
     * <a>SetTypeDefaultVersion</a>.</p>
     */
    inline void SetDefaultVersionId(const char* value) { m_defaultVersionIdHasBeenSet = true; m_defaultVersionId.assign(value); }

    /**
     * <p>The ID of the default version of the extension. The default version is used
     * when the extension version isn't specified.</p> <p>This applies only to private
     * extensions you have registered in your account. For public extensions, both
     * those provided by Amazon and published by third parties, CloudFormation returns
     * <code>null</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/APIReference/API_RegisterType.html">RegisterType</a>.</p>
     * <p>To set the default version of an extension, use
     * <a>SetTypeDefaultVersion</a>.</p>
     */
    inline TypeSummary& WithDefaultVersionId(const Aws::String& value) { SetDefaultVersionId(value); return *this;}

    /**
     * <p>The ID of the default version of the extension. The default version is used
     * when the extension version isn't specified.</p> <p>This applies only to private
     * extensions you have registered in your account. For public extensions, both
     * those provided by Amazon and published by third parties, CloudFormation returns
     * <code>null</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/APIReference/API_RegisterType.html">RegisterType</a>.</p>
     * <p>To set the default version of an extension, use
     * <a>SetTypeDefaultVersion</a>.</p>
     */
    inline TypeSummary& WithDefaultVersionId(Aws::String&& value) { SetDefaultVersionId(std::move(value)); return *this;}

    /**
     * <p>The ID of the default version of the extension. The default version is used
     * when the extension version isn't specified.</p> <p>This applies only to private
     * extensions you have registered in your account. For public extensions, both
     * those provided by Amazon and published by third parties, CloudFormation returns
     * <code>null</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/APIReference/API_RegisterType.html">RegisterType</a>.</p>
     * <p>To set the default version of an extension, use
     * <a>SetTypeDefaultVersion</a>.</p>
     */
    inline TypeSummary& WithDefaultVersionId(const char* value) { SetDefaultVersionId(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the extension.</p>
     */
    inline const Aws::String& GetTypeArn() const{ return m_typeArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the extension.</p>
     */
    inline bool TypeArnHasBeenSet() const { return m_typeArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the extension.</p>
     */
    inline void SetTypeArn(const Aws::String& value) { m_typeArnHasBeenSet = true; m_typeArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the extension.</p>
     */
    inline void SetTypeArn(Aws::String&& value) { m_typeArnHasBeenSet = true; m_typeArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the extension.</p>
     */
    inline void SetTypeArn(const char* value) { m_typeArnHasBeenSet = true; m_typeArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the extension.</p>
     */
    inline TypeSummary& WithTypeArn(const Aws::String& value) { SetTypeArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the extension.</p>
     */
    inline TypeSummary& WithTypeArn(Aws::String&& value) { SetTypeArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the extension.</p>
     */
    inline TypeSummary& WithTypeArn(const char* value) { SetTypeArn(value); return *this;}


    /**
     * <p>When the specified extension version was registered. This applies only
     * to:</p> <ul> <li> <p>Private extensions you have registered in your account. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/APIReference/API_RegisterType.html">RegisterType</a>.</p>
     * </li> <li> <p>Public extensions you have activated in your account with
     * auto-update specified. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/APIReference/API_ActivateType.html">ActivateType</a>.</p>
     * </li> </ul> <p>For all other extension types, CloudFormation returns
     * <code>null</code>.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdated() const{ return m_lastUpdated; }

    /**
     * <p>When the specified extension version was registered. This applies only
     * to:</p> <ul> <li> <p>Private extensions you have registered in your account. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/APIReference/API_RegisterType.html">RegisterType</a>.</p>
     * </li> <li> <p>Public extensions you have activated in your account with
     * auto-update specified. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/APIReference/API_ActivateType.html">ActivateType</a>.</p>
     * </li> </ul> <p>For all other extension types, CloudFormation returns
     * <code>null</code>.</p>
     */
    inline bool LastUpdatedHasBeenSet() const { return m_lastUpdatedHasBeenSet; }

    /**
     * <p>When the specified extension version was registered. This applies only
     * to:</p> <ul> <li> <p>Private extensions you have registered in your account. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/APIReference/API_RegisterType.html">RegisterType</a>.</p>
     * </li> <li> <p>Public extensions you have activated in your account with
     * auto-update specified. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/APIReference/API_ActivateType.html">ActivateType</a>.</p>
     * </li> </ul> <p>For all other extension types, CloudFormation returns
     * <code>null</code>.</p>
     */
    inline void SetLastUpdated(const Aws::Utils::DateTime& value) { m_lastUpdatedHasBeenSet = true; m_lastUpdated = value; }

    /**
     * <p>When the specified extension version was registered. This applies only
     * to:</p> <ul> <li> <p>Private extensions you have registered in your account. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/APIReference/API_RegisterType.html">RegisterType</a>.</p>
     * </li> <li> <p>Public extensions you have activated in your account with
     * auto-update specified. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/APIReference/API_ActivateType.html">ActivateType</a>.</p>
     * </li> </ul> <p>For all other extension types, CloudFormation returns
     * <code>null</code>.</p>
     */
    inline void SetLastUpdated(Aws::Utils::DateTime&& value) { m_lastUpdatedHasBeenSet = true; m_lastUpdated = std::move(value); }

    /**
     * <p>When the specified extension version was registered. This applies only
     * to:</p> <ul> <li> <p>Private extensions you have registered in your account. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/APIReference/API_RegisterType.html">RegisterType</a>.</p>
     * </li> <li> <p>Public extensions you have activated in your account with
     * auto-update specified. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/APIReference/API_ActivateType.html">ActivateType</a>.</p>
     * </li> </ul> <p>For all other extension types, CloudFormation returns
     * <code>null</code>.</p>
     */
    inline TypeSummary& WithLastUpdated(const Aws::Utils::DateTime& value) { SetLastUpdated(value); return *this;}

    /**
     * <p>When the specified extension version was registered. This applies only
     * to:</p> <ul> <li> <p>Private extensions you have registered in your account. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/APIReference/API_RegisterType.html">RegisterType</a>.</p>
     * </li> <li> <p>Public extensions you have activated in your account with
     * auto-update specified. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/APIReference/API_ActivateType.html">ActivateType</a>.</p>
     * </li> </ul> <p>For all other extension types, CloudFormation returns
     * <code>null</code>.</p>
     */
    inline TypeSummary& WithLastUpdated(Aws::Utils::DateTime&& value) { SetLastUpdated(std::move(value)); return *this;}


    /**
     * <p>The description of the extension.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the extension.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description of the extension.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the extension.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description of the extension.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of the extension.</p>
     */
    inline TypeSummary& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the extension.</p>
     */
    inline TypeSummary& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the extension.</p>
     */
    inline TypeSummary& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The ID of the extension publisher, if the extension is published by a third
     * party. Extensions published by Amazon don't return a publisher ID.</p>
     */
    inline const Aws::String& GetPublisherId() const{ return m_publisherId; }

    /**
     * <p>The ID of the extension publisher, if the extension is published by a third
     * party. Extensions published by Amazon don't return a publisher ID.</p>
     */
    inline bool PublisherIdHasBeenSet() const { return m_publisherIdHasBeenSet; }

    /**
     * <p>The ID of the extension publisher, if the extension is published by a third
     * party. Extensions published by Amazon don't return a publisher ID.</p>
     */
    inline void SetPublisherId(const Aws::String& value) { m_publisherIdHasBeenSet = true; m_publisherId = value; }

    /**
     * <p>The ID of the extension publisher, if the extension is published by a third
     * party. Extensions published by Amazon don't return a publisher ID.</p>
     */
    inline void SetPublisherId(Aws::String&& value) { m_publisherIdHasBeenSet = true; m_publisherId = std::move(value); }

    /**
     * <p>The ID of the extension publisher, if the extension is published by a third
     * party. Extensions published by Amazon don't return a publisher ID.</p>
     */
    inline void SetPublisherId(const char* value) { m_publisherIdHasBeenSet = true; m_publisherId.assign(value); }

    /**
     * <p>The ID of the extension publisher, if the extension is published by a third
     * party. Extensions published by Amazon don't return a publisher ID.</p>
     */
    inline TypeSummary& WithPublisherId(const Aws::String& value) { SetPublisherId(value); return *this;}

    /**
     * <p>The ID of the extension publisher, if the extension is published by a third
     * party. Extensions published by Amazon don't return a publisher ID.</p>
     */
    inline TypeSummary& WithPublisherId(Aws::String&& value) { SetPublisherId(std::move(value)); return *this;}

    /**
     * <p>The ID of the extension publisher, if the extension is published by a third
     * party. Extensions published by Amazon don't return a publisher ID.</p>
     */
    inline TypeSummary& WithPublisherId(const char* value) { SetPublisherId(value); return *this;}


    /**
     * <p>For public extensions that have been activated for this account and Region,
     * the type name of the public extension.</p> <p>If you specified a
     * <code>TypeNameAlias</code> when enabling the extension in this account and
     * Region, CloudFormation treats that alias as the extension's type name within the
     * account and Region, not the type name of the public extension. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/registry-public.html#registry-public-enable-alias">Specifying
     * aliases to refer to extensions</a> in the <i>CloudFormation User Guide</i>.</p>
     */
    inline const Aws::String& GetOriginalTypeName() const{ return m_originalTypeName; }

    /**
     * <p>For public extensions that have been activated for this account and Region,
     * the type name of the public extension.</p> <p>If you specified a
     * <code>TypeNameAlias</code> when enabling the extension in this account and
     * Region, CloudFormation treats that alias as the extension's type name within the
     * account and Region, not the type name of the public extension. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/registry-public.html#registry-public-enable-alias">Specifying
     * aliases to refer to extensions</a> in the <i>CloudFormation User Guide</i>.</p>
     */
    inline bool OriginalTypeNameHasBeenSet() const { return m_originalTypeNameHasBeenSet; }

    /**
     * <p>For public extensions that have been activated for this account and Region,
     * the type name of the public extension.</p> <p>If you specified a
     * <code>TypeNameAlias</code> when enabling the extension in this account and
     * Region, CloudFormation treats that alias as the extension's type name within the
     * account and Region, not the type name of the public extension. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/registry-public.html#registry-public-enable-alias">Specifying
     * aliases to refer to extensions</a> in the <i>CloudFormation User Guide</i>.</p>
     */
    inline void SetOriginalTypeName(const Aws::String& value) { m_originalTypeNameHasBeenSet = true; m_originalTypeName = value; }

    /**
     * <p>For public extensions that have been activated for this account and Region,
     * the type name of the public extension.</p> <p>If you specified a
     * <code>TypeNameAlias</code> when enabling the extension in this account and
     * Region, CloudFormation treats that alias as the extension's type name within the
     * account and Region, not the type name of the public extension. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/registry-public.html#registry-public-enable-alias">Specifying
     * aliases to refer to extensions</a> in the <i>CloudFormation User Guide</i>.</p>
     */
    inline void SetOriginalTypeName(Aws::String&& value) { m_originalTypeNameHasBeenSet = true; m_originalTypeName = std::move(value); }

    /**
     * <p>For public extensions that have been activated for this account and Region,
     * the type name of the public extension.</p> <p>If you specified a
     * <code>TypeNameAlias</code> when enabling the extension in this account and
     * Region, CloudFormation treats that alias as the extension's type name within the
     * account and Region, not the type name of the public extension. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/registry-public.html#registry-public-enable-alias">Specifying
     * aliases to refer to extensions</a> in the <i>CloudFormation User Guide</i>.</p>
     */
    inline void SetOriginalTypeName(const char* value) { m_originalTypeNameHasBeenSet = true; m_originalTypeName.assign(value); }

    /**
     * <p>For public extensions that have been activated for this account and Region,
     * the type name of the public extension.</p> <p>If you specified a
     * <code>TypeNameAlias</code> when enabling the extension in this account and
     * Region, CloudFormation treats that alias as the extension's type name within the
     * account and Region, not the type name of the public extension. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/registry-public.html#registry-public-enable-alias">Specifying
     * aliases to refer to extensions</a> in the <i>CloudFormation User Guide</i>.</p>
     */
    inline TypeSummary& WithOriginalTypeName(const Aws::String& value) { SetOriginalTypeName(value); return *this;}

    /**
     * <p>For public extensions that have been activated for this account and Region,
     * the type name of the public extension.</p> <p>If you specified a
     * <code>TypeNameAlias</code> when enabling the extension in this account and
     * Region, CloudFormation treats that alias as the extension's type name within the
     * account and Region, not the type name of the public extension. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/registry-public.html#registry-public-enable-alias">Specifying
     * aliases to refer to extensions</a> in the <i>CloudFormation User Guide</i>.</p>
     */
    inline TypeSummary& WithOriginalTypeName(Aws::String&& value) { SetOriginalTypeName(std::move(value)); return *this;}

    /**
     * <p>For public extensions that have been activated for this account and Region,
     * the type name of the public extension.</p> <p>If you specified a
     * <code>TypeNameAlias</code> when enabling the extension in this account and
     * Region, CloudFormation treats that alias as the extension's type name within the
     * account and Region, not the type name of the public extension. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/registry-public.html#registry-public-enable-alias">Specifying
     * aliases to refer to extensions</a> in the <i>CloudFormation User Guide</i>.</p>
     */
    inline TypeSummary& WithOriginalTypeName(const char* value) { SetOriginalTypeName(value); return *this;}


    /**
     * <p>For public extensions that have been activated for this account and Region,
     * the version of the public extension to be used for CloudFormation operations in
     * this account and Region.</p> <p>How you specified <code>AutoUpdate</code> when
     * enabling the extension affects whether CloudFormation automatically updates the
     * extension in this account and Region when a new version is released. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/registry-public.html#registry-public-enable-auto">Setting
     * CloudFormation to automatically use new versions of extensions</a> in the
     * <i>CloudFormation User Guide</i>.</p>
     */
    inline const Aws::String& GetPublicVersionNumber() const{ return m_publicVersionNumber; }

    /**
     * <p>For public extensions that have been activated for this account and Region,
     * the version of the public extension to be used for CloudFormation operations in
     * this account and Region.</p> <p>How you specified <code>AutoUpdate</code> when
     * enabling the extension affects whether CloudFormation automatically updates the
     * extension in this account and Region when a new version is released. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/registry-public.html#registry-public-enable-auto">Setting
     * CloudFormation to automatically use new versions of extensions</a> in the
     * <i>CloudFormation User Guide</i>.</p>
     */
    inline bool PublicVersionNumberHasBeenSet() const { return m_publicVersionNumberHasBeenSet; }

    /**
     * <p>For public extensions that have been activated for this account and Region,
     * the version of the public extension to be used for CloudFormation operations in
     * this account and Region.</p> <p>How you specified <code>AutoUpdate</code> when
     * enabling the extension affects whether CloudFormation automatically updates the
     * extension in this account and Region when a new version is released. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/registry-public.html#registry-public-enable-auto">Setting
     * CloudFormation to automatically use new versions of extensions</a> in the
     * <i>CloudFormation User Guide</i>.</p>
     */
    inline void SetPublicVersionNumber(const Aws::String& value) { m_publicVersionNumberHasBeenSet = true; m_publicVersionNumber = value; }

    /**
     * <p>For public extensions that have been activated for this account and Region,
     * the version of the public extension to be used for CloudFormation operations in
     * this account and Region.</p> <p>How you specified <code>AutoUpdate</code> when
     * enabling the extension affects whether CloudFormation automatically updates the
     * extension in this account and Region when a new version is released. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/registry-public.html#registry-public-enable-auto">Setting
     * CloudFormation to automatically use new versions of extensions</a> in the
     * <i>CloudFormation User Guide</i>.</p>
     */
    inline void SetPublicVersionNumber(Aws::String&& value) { m_publicVersionNumberHasBeenSet = true; m_publicVersionNumber = std::move(value); }

    /**
     * <p>For public extensions that have been activated for this account and Region,
     * the version of the public extension to be used for CloudFormation operations in
     * this account and Region.</p> <p>How you specified <code>AutoUpdate</code> when
     * enabling the extension affects whether CloudFormation automatically updates the
     * extension in this account and Region when a new version is released. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/registry-public.html#registry-public-enable-auto">Setting
     * CloudFormation to automatically use new versions of extensions</a> in the
     * <i>CloudFormation User Guide</i>.</p>
     */
    inline void SetPublicVersionNumber(const char* value) { m_publicVersionNumberHasBeenSet = true; m_publicVersionNumber.assign(value); }

    /**
     * <p>For public extensions that have been activated for this account and Region,
     * the version of the public extension to be used for CloudFormation operations in
     * this account and Region.</p> <p>How you specified <code>AutoUpdate</code> when
     * enabling the extension affects whether CloudFormation automatically updates the
     * extension in this account and Region when a new version is released. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/registry-public.html#registry-public-enable-auto">Setting
     * CloudFormation to automatically use new versions of extensions</a> in the
     * <i>CloudFormation User Guide</i>.</p>
     */
    inline TypeSummary& WithPublicVersionNumber(const Aws::String& value) { SetPublicVersionNumber(value); return *this;}

    /**
     * <p>For public extensions that have been activated for this account and Region,
     * the version of the public extension to be used for CloudFormation operations in
     * this account and Region.</p> <p>How you specified <code>AutoUpdate</code> when
     * enabling the extension affects whether CloudFormation automatically updates the
     * extension in this account and Region when a new version is released. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/registry-public.html#registry-public-enable-auto">Setting
     * CloudFormation to automatically use new versions of extensions</a> in the
     * <i>CloudFormation User Guide</i>.</p>
     */
    inline TypeSummary& WithPublicVersionNumber(Aws::String&& value) { SetPublicVersionNumber(std::move(value)); return *this;}

    /**
     * <p>For public extensions that have been activated for this account and Region,
     * the version of the public extension to be used for CloudFormation operations in
     * this account and Region.</p> <p>How you specified <code>AutoUpdate</code> when
     * enabling the extension affects whether CloudFormation automatically updates the
     * extension in this account and Region when a new version is released. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/registry-public.html#registry-public-enable-auto">Setting
     * CloudFormation to automatically use new versions of extensions</a> in the
     * <i>CloudFormation User Guide</i>.</p>
     */
    inline TypeSummary& WithPublicVersionNumber(const char* value) { SetPublicVersionNumber(value); return *this;}


    /**
     * <p>For public extensions that have been activated for this account and Region,
     * the latest version of the public extension <i>that is available</i>. For any
     * extensions other than activated third-arty extensions, CloudFormation returns
     * <code>null</code>.</p> <p>How you specified <code>AutoUpdate</code> when
     * enabling the extension affects whether CloudFormation automatically updates the
     * extension in this account and Region when a new version is released. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/registry-public.html#registry-public-enable-auto">Setting
     * CloudFormation to automatically use new versions of extensions</a> in the
     * <i>CloudFormation User Guide</i>.</p>
     */
    inline const Aws::String& GetLatestPublicVersion() const{ return m_latestPublicVersion; }

    /**
     * <p>For public extensions that have been activated for this account and Region,
     * the latest version of the public extension <i>that is available</i>. For any
     * extensions other than activated third-arty extensions, CloudFormation returns
     * <code>null</code>.</p> <p>How you specified <code>AutoUpdate</code> when
     * enabling the extension affects whether CloudFormation automatically updates the
     * extension in this account and Region when a new version is released. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/registry-public.html#registry-public-enable-auto">Setting
     * CloudFormation to automatically use new versions of extensions</a> in the
     * <i>CloudFormation User Guide</i>.</p>
     */
    inline bool LatestPublicVersionHasBeenSet() const { return m_latestPublicVersionHasBeenSet; }

    /**
     * <p>For public extensions that have been activated for this account and Region,
     * the latest version of the public extension <i>that is available</i>. For any
     * extensions other than activated third-arty extensions, CloudFormation returns
     * <code>null</code>.</p> <p>How you specified <code>AutoUpdate</code> when
     * enabling the extension affects whether CloudFormation automatically updates the
     * extension in this account and Region when a new version is released. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/registry-public.html#registry-public-enable-auto">Setting
     * CloudFormation to automatically use new versions of extensions</a> in the
     * <i>CloudFormation User Guide</i>.</p>
     */
    inline void SetLatestPublicVersion(const Aws::String& value) { m_latestPublicVersionHasBeenSet = true; m_latestPublicVersion = value; }

    /**
     * <p>For public extensions that have been activated for this account and Region,
     * the latest version of the public extension <i>that is available</i>. For any
     * extensions other than activated third-arty extensions, CloudFormation returns
     * <code>null</code>.</p> <p>How you specified <code>AutoUpdate</code> when
     * enabling the extension affects whether CloudFormation automatically updates the
     * extension in this account and Region when a new version is released. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/registry-public.html#registry-public-enable-auto">Setting
     * CloudFormation to automatically use new versions of extensions</a> in the
     * <i>CloudFormation User Guide</i>.</p>
     */
    inline void SetLatestPublicVersion(Aws::String&& value) { m_latestPublicVersionHasBeenSet = true; m_latestPublicVersion = std::move(value); }

    /**
     * <p>For public extensions that have been activated for this account and Region,
     * the latest version of the public extension <i>that is available</i>. For any
     * extensions other than activated third-arty extensions, CloudFormation returns
     * <code>null</code>.</p> <p>How you specified <code>AutoUpdate</code> when
     * enabling the extension affects whether CloudFormation automatically updates the
     * extension in this account and Region when a new version is released. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/registry-public.html#registry-public-enable-auto">Setting
     * CloudFormation to automatically use new versions of extensions</a> in the
     * <i>CloudFormation User Guide</i>.</p>
     */
    inline void SetLatestPublicVersion(const char* value) { m_latestPublicVersionHasBeenSet = true; m_latestPublicVersion.assign(value); }

    /**
     * <p>For public extensions that have been activated for this account and Region,
     * the latest version of the public extension <i>that is available</i>. For any
     * extensions other than activated third-arty extensions, CloudFormation returns
     * <code>null</code>.</p> <p>How you specified <code>AutoUpdate</code> when
     * enabling the extension affects whether CloudFormation automatically updates the
     * extension in this account and Region when a new version is released. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/registry-public.html#registry-public-enable-auto">Setting
     * CloudFormation to automatically use new versions of extensions</a> in the
     * <i>CloudFormation User Guide</i>.</p>
     */
    inline TypeSummary& WithLatestPublicVersion(const Aws::String& value) { SetLatestPublicVersion(value); return *this;}

    /**
     * <p>For public extensions that have been activated for this account and Region,
     * the latest version of the public extension <i>that is available</i>. For any
     * extensions other than activated third-arty extensions, CloudFormation returns
     * <code>null</code>.</p> <p>How you specified <code>AutoUpdate</code> when
     * enabling the extension affects whether CloudFormation automatically updates the
     * extension in this account and Region when a new version is released. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/registry-public.html#registry-public-enable-auto">Setting
     * CloudFormation to automatically use new versions of extensions</a> in the
     * <i>CloudFormation User Guide</i>.</p>
     */
    inline TypeSummary& WithLatestPublicVersion(Aws::String&& value) { SetLatestPublicVersion(std::move(value)); return *this;}

    /**
     * <p>For public extensions that have been activated for this account and Region,
     * the latest version of the public extension <i>that is available</i>. For any
     * extensions other than activated third-arty extensions, CloudFormation returns
     * <code>null</code>.</p> <p>How you specified <code>AutoUpdate</code> when
     * enabling the extension affects whether CloudFormation automatically updates the
     * extension in this account and Region when a new version is released. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/registry-public.html#registry-public-enable-auto">Setting
     * CloudFormation to automatically use new versions of extensions</a> in the
     * <i>CloudFormation User Guide</i>.</p>
     */
    inline TypeSummary& WithLatestPublicVersion(const char* value) { SetLatestPublicVersion(value); return *this;}


    /**
     * <p>The service used to verify the publisher identity.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/cloudformation-cli/latest/userguide/publish-extension.html">Registering
     * your account to publish CloudFormation extensions</a> in the <i> CFN-CLI User
     * Guide for Extension Development</i>.</p>
     */
    inline const IdentityProvider& GetPublisherIdentity() const{ return m_publisherIdentity; }

    /**
     * <p>The service used to verify the publisher identity.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/cloudformation-cli/latest/userguide/publish-extension.html">Registering
     * your account to publish CloudFormation extensions</a> in the <i> CFN-CLI User
     * Guide for Extension Development</i>.</p>
     */
    inline bool PublisherIdentityHasBeenSet() const { return m_publisherIdentityHasBeenSet; }

    /**
     * <p>The service used to verify the publisher identity.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/cloudformation-cli/latest/userguide/publish-extension.html">Registering
     * your account to publish CloudFormation extensions</a> in the <i> CFN-CLI User
     * Guide for Extension Development</i>.</p>
     */
    inline void SetPublisherIdentity(const IdentityProvider& value) { m_publisherIdentityHasBeenSet = true; m_publisherIdentity = value; }

    /**
     * <p>The service used to verify the publisher identity.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/cloudformation-cli/latest/userguide/publish-extension.html">Registering
     * your account to publish CloudFormation extensions</a> in the <i> CFN-CLI User
     * Guide for Extension Development</i>.</p>
     */
    inline void SetPublisherIdentity(IdentityProvider&& value) { m_publisherIdentityHasBeenSet = true; m_publisherIdentity = std::move(value); }

    /**
     * <p>The service used to verify the publisher identity.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/cloudformation-cli/latest/userguide/publish-extension.html">Registering
     * your account to publish CloudFormation extensions</a> in the <i> CFN-CLI User
     * Guide for Extension Development</i>.</p>
     */
    inline TypeSummary& WithPublisherIdentity(const IdentityProvider& value) { SetPublisherIdentity(value); return *this;}

    /**
     * <p>The service used to verify the publisher identity.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/cloudformation-cli/latest/userguide/publish-extension.html">Registering
     * your account to publish CloudFormation extensions</a> in the <i> CFN-CLI User
     * Guide for Extension Development</i>.</p>
     */
    inline TypeSummary& WithPublisherIdentity(IdentityProvider&& value) { SetPublisherIdentity(std::move(value)); return *this;}


    /**
     * <p>The publisher name, as defined in the public profile for that publisher in
     * the service used to verify the publisher identity.</p>
     */
    inline const Aws::String& GetPublisherName() const{ return m_publisherName; }

    /**
     * <p>The publisher name, as defined in the public profile for that publisher in
     * the service used to verify the publisher identity.</p>
     */
    inline bool PublisherNameHasBeenSet() const { return m_publisherNameHasBeenSet; }

    /**
     * <p>The publisher name, as defined in the public profile for that publisher in
     * the service used to verify the publisher identity.</p>
     */
    inline void SetPublisherName(const Aws::String& value) { m_publisherNameHasBeenSet = true; m_publisherName = value; }

    /**
     * <p>The publisher name, as defined in the public profile for that publisher in
     * the service used to verify the publisher identity.</p>
     */
    inline void SetPublisherName(Aws::String&& value) { m_publisherNameHasBeenSet = true; m_publisherName = std::move(value); }

    /**
     * <p>The publisher name, as defined in the public profile for that publisher in
     * the service used to verify the publisher identity.</p>
     */
    inline void SetPublisherName(const char* value) { m_publisherNameHasBeenSet = true; m_publisherName.assign(value); }

    /**
     * <p>The publisher name, as defined in the public profile for that publisher in
     * the service used to verify the publisher identity.</p>
     */
    inline TypeSummary& WithPublisherName(const Aws::String& value) { SetPublisherName(value); return *this;}

    /**
     * <p>The publisher name, as defined in the public profile for that publisher in
     * the service used to verify the publisher identity.</p>
     */
    inline TypeSummary& WithPublisherName(Aws::String&& value) { SetPublisherName(std::move(value)); return *this;}

    /**
     * <p>The publisher name, as defined in the public profile for that publisher in
     * the service used to verify the publisher identity.</p>
     */
    inline TypeSummary& WithPublisherName(const char* value) { SetPublisherName(value); return *this;}


    /**
     * <p>Whether the extension is activated for this account and Region.</p> <p>This
     * applies only to third-party public extensions. Extensions published by Amazon
     * are activated by default.</p>
     */
    inline bool GetIsActivated() const{ return m_isActivated; }

    /**
     * <p>Whether the extension is activated for this account and Region.</p> <p>This
     * applies only to third-party public extensions. Extensions published by Amazon
     * are activated by default.</p>
     */
    inline bool IsActivatedHasBeenSet() const { return m_isActivatedHasBeenSet; }

    /**
     * <p>Whether the extension is activated for this account and Region.</p> <p>This
     * applies only to third-party public extensions. Extensions published by Amazon
     * are activated by default.</p>
     */
    inline void SetIsActivated(bool value) { m_isActivatedHasBeenSet = true; m_isActivated = value; }

    /**
     * <p>Whether the extension is activated for this account and Region.</p> <p>This
     * applies only to third-party public extensions. Extensions published by Amazon
     * are activated by default.</p>
     */
    inline TypeSummary& WithIsActivated(bool value) { SetIsActivated(value); return *this;}

  private:

    RegistryType m_type;
    bool m_typeHasBeenSet = false;

    Aws::String m_typeName;
    bool m_typeNameHasBeenSet = false;

    Aws::String m_defaultVersionId;
    bool m_defaultVersionIdHasBeenSet = false;

    Aws::String m_typeArn;
    bool m_typeArnHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdated;
    bool m_lastUpdatedHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_publisherId;
    bool m_publisherIdHasBeenSet = false;

    Aws::String m_originalTypeName;
    bool m_originalTypeNameHasBeenSet = false;

    Aws::String m_publicVersionNumber;
    bool m_publicVersionNumberHasBeenSet = false;

    Aws::String m_latestPublicVersion;
    bool m_latestPublicVersionHasBeenSet = false;

    IdentityProvider m_publisherIdentity;
    bool m_publisherIdentityHasBeenSet = false;

    Aws::String m_publisherName;
    bool m_publisherNameHasBeenSet = false;

    bool m_isActivated;
    bool m_isActivatedHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
