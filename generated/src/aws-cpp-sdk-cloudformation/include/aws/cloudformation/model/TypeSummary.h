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
    AWS_CLOUDFORMATION_API TypeSummary() = default;
    AWS_CLOUDFORMATION_API TypeSummary(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDFORMATION_API TypeSummary& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDFORMATION_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_CLOUDFORMATION_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The kind of extension.</p>
     */
    inline RegistryType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(RegistryType value) { m_typeHasBeenSet = true; m_type = value; }
    inline TypeSummary& WithType(RegistryType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the extension.</p> <p>If you specified a
     * <code>TypeNameAlias</code> when you call the <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/APIReference/API_ActivateType.html">ActivateType</a>
     * API operation in your account and Region, CloudFormation considers that alias as
     * the type name.</p>
     */
    inline const Aws::String& GetTypeName() const { return m_typeName; }
    inline bool TypeNameHasBeenSet() const { return m_typeNameHasBeenSet; }
    template<typename TypeNameT = Aws::String>
    void SetTypeName(TypeNameT&& value) { m_typeNameHasBeenSet = true; m_typeName = std::forward<TypeNameT>(value); }
    template<typename TypeNameT = Aws::String>
    TypeSummary& WithTypeName(TypeNameT&& value) { SetTypeName(std::forward<TypeNameT>(value)); return *this;}
    ///@}

    ///@{
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
    inline const Aws::String& GetDefaultVersionId() const { return m_defaultVersionId; }
    inline bool DefaultVersionIdHasBeenSet() const { return m_defaultVersionIdHasBeenSet; }
    template<typename DefaultVersionIdT = Aws::String>
    void SetDefaultVersionId(DefaultVersionIdT&& value) { m_defaultVersionIdHasBeenSet = true; m_defaultVersionId = std::forward<DefaultVersionIdT>(value); }
    template<typename DefaultVersionIdT = Aws::String>
    TypeSummary& WithDefaultVersionId(DefaultVersionIdT&& value) { SetDefaultVersionId(std::forward<DefaultVersionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the extension.</p>
     */
    inline const Aws::String& GetTypeArn() const { return m_typeArn; }
    inline bool TypeArnHasBeenSet() const { return m_typeArnHasBeenSet; }
    template<typename TypeArnT = Aws::String>
    void SetTypeArn(TypeArnT&& value) { m_typeArnHasBeenSet = true; m_typeArn = std::forward<TypeArnT>(value); }
    template<typename TypeArnT = Aws::String>
    TypeSummary& WithTypeArn(TypeArnT&& value) { SetTypeArn(std::forward<TypeArnT>(value)); return *this;}
    ///@}

    ///@{
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
    inline const Aws::Utils::DateTime& GetLastUpdated() const { return m_lastUpdated; }
    inline bool LastUpdatedHasBeenSet() const { return m_lastUpdatedHasBeenSet; }
    template<typename LastUpdatedT = Aws::Utils::DateTime>
    void SetLastUpdated(LastUpdatedT&& value) { m_lastUpdatedHasBeenSet = true; m_lastUpdated = std::forward<LastUpdatedT>(value); }
    template<typename LastUpdatedT = Aws::Utils::DateTime>
    TypeSummary& WithLastUpdated(LastUpdatedT&& value) { SetLastUpdated(std::forward<LastUpdatedT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the extension.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    TypeSummary& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the extension publisher, if the extension is published by a third
     * party. Extensions published by Amazon don't return a publisher ID.</p>
     */
    inline const Aws::String& GetPublisherId() const { return m_publisherId; }
    inline bool PublisherIdHasBeenSet() const { return m_publisherIdHasBeenSet; }
    template<typename PublisherIdT = Aws::String>
    void SetPublisherId(PublisherIdT&& value) { m_publisherIdHasBeenSet = true; m_publisherId = std::forward<PublisherIdT>(value); }
    template<typename PublisherIdT = Aws::String>
    TypeSummary& WithPublisherId(PublisherIdT&& value) { SetPublisherId(std::forward<PublisherIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>For public extensions that have been activated for this account and Region,
     * the type name of the public extension.</p> <p>If you specified a
     * <code>TypeNameAlias</code> when enabling the extension in this account and
     * Region, CloudFormation treats that alias as the extension's type name within the
     * account and Region, not the type name of the public extension. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/registry-public.html#registry-public-enable-alias">Use
     * aliases to refer to extensions</a> in the <i>CloudFormation User Guide</i>.</p>
     */
    inline const Aws::String& GetOriginalTypeName() const { return m_originalTypeName; }
    inline bool OriginalTypeNameHasBeenSet() const { return m_originalTypeNameHasBeenSet; }
    template<typename OriginalTypeNameT = Aws::String>
    void SetOriginalTypeName(OriginalTypeNameT&& value) { m_originalTypeNameHasBeenSet = true; m_originalTypeName = std::forward<OriginalTypeNameT>(value); }
    template<typename OriginalTypeNameT = Aws::String>
    TypeSummary& WithOriginalTypeName(OriginalTypeNameT&& value) { SetOriginalTypeName(std::forward<OriginalTypeNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>For public extensions that have been activated for this account and Region,
     * the version of the public extension to be used for CloudFormation operations in
     * this account and Region.</p> <p>How you specified <code>AutoUpdate</code> when
     * enabling the extension affects whether CloudFormation automatically updates the
     * extension in this account and Region when a new version is released. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/registry-public.html#registry-public-enable-auto">Automatically
     * use new versions of extensions</a> in the <i>CloudFormation User Guide</i>.</p>
     */
    inline const Aws::String& GetPublicVersionNumber() const { return m_publicVersionNumber; }
    inline bool PublicVersionNumberHasBeenSet() const { return m_publicVersionNumberHasBeenSet; }
    template<typename PublicVersionNumberT = Aws::String>
    void SetPublicVersionNumber(PublicVersionNumberT&& value) { m_publicVersionNumberHasBeenSet = true; m_publicVersionNumber = std::forward<PublicVersionNumberT>(value); }
    template<typename PublicVersionNumberT = Aws::String>
    TypeSummary& WithPublicVersionNumber(PublicVersionNumberT&& value) { SetPublicVersionNumber(std::forward<PublicVersionNumberT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>For public extensions that have been activated for this account and Region,
     * the latest version of the public extension <i>that is available</i>. For any
     * extensions other than activated third-party extensions, CloudFormation returns
     * <code>null</code>.</p> <p>How you specified <code>AutoUpdate</code> when
     * enabling the extension affects whether CloudFormation automatically updates the
     * extension in this account and Region when a new version is released. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/registry-public.html#registry-public-enable-auto">Automatically
     * use new versions of extensions</a> in the <i>CloudFormation User Guide</i>.</p>
     */
    inline const Aws::String& GetLatestPublicVersion() const { return m_latestPublicVersion; }
    inline bool LatestPublicVersionHasBeenSet() const { return m_latestPublicVersionHasBeenSet; }
    template<typename LatestPublicVersionT = Aws::String>
    void SetLatestPublicVersion(LatestPublicVersionT&& value) { m_latestPublicVersionHasBeenSet = true; m_latestPublicVersion = std::forward<LatestPublicVersionT>(value); }
    template<typename LatestPublicVersionT = Aws::String>
    TypeSummary& WithLatestPublicVersion(LatestPublicVersionT&& value) { SetLatestPublicVersion(std::forward<LatestPublicVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The service used to verify the publisher identity.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/cloudformation-cli/latest/userguide/publish-extension.html">Publishing
     * extensions to make them available for public use</a> in the <i>CloudFormation
     * Command Line Interface (CLI) User Guide</i>.</p>
     */
    inline IdentityProvider GetPublisherIdentity() const { return m_publisherIdentity; }
    inline bool PublisherIdentityHasBeenSet() const { return m_publisherIdentityHasBeenSet; }
    inline void SetPublisherIdentity(IdentityProvider value) { m_publisherIdentityHasBeenSet = true; m_publisherIdentity = value; }
    inline TypeSummary& WithPublisherIdentity(IdentityProvider value) { SetPublisherIdentity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The publisher name, as defined in the public profile for that publisher in
     * the service used to verify the publisher identity.</p>
     */
    inline const Aws::String& GetPublisherName() const { return m_publisherName; }
    inline bool PublisherNameHasBeenSet() const { return m_publisherNameHasBeenSet; }
    template<typename PublisherNameT = Aws::String>
    void SetPublisherName(PublisherNameT&& value) { m_publisherNameHasBeenSet = true; m_publisherName = std::forward<PublisherNameT>(value); }
    template<typename PublisherNameT = Aws::String>
    TypeSummary& WithPublisherName(PublisherNameT&& value) { SetPublisherName(std::forward<PublisherNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether the extension is activated for this account and Region.</p> <p>This
     * applies only to third-party public extensions. Extensions published by Amazon
     * are activated by default.</p>
     */
    inline bool GetIsActivated() const { return m_isActivated; }
    inline bool IsActivatedHasBeenSet() const { return m_isActivatedHasBeenSet; }
    inline void SetIsActivated(bool value) { m_isActivatedHasBeenSet = true; m_isActivated = value; }
    inline TypeSummary& WithIsActivated(bool value) { SetIsActivated(value); return *this;}
    ///@}
  private:

    RegistryType m_type{RegistryType::NOT_SET};
    bool m_typeHasBeenSet = false;

    Aws::String m_typeName;
    bool m_typeNameHasBeenSet = false;

    Aws::String m_defaultVersionId;
    bool m_defaultVersionIdHasBeenSet = false;

    Aws::String m_typeArn;
    bool m_typeArnHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdated{};
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

    IdentityProvider m_publisherIdentity{IdentityProvider::NOT_SET};
    bool m_publisherIdentityHasBeenSet = false;

    Aws::String m_publisherName;
    bool m_publisherNameHasBeenSet = false;

    bool m_isActivated{false};
    bool m_isActivatedHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
