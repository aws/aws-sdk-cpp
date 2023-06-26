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
   * <p>Contains summary information about a specific version of a CloudFormation
   * extension.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/TypeVersionSummary">AWS
   * API Reference</a></p>
   */
  class TypeVersionSummary
  {
  public:
    AWS_CLOUDFORMATION_API TypeVersionSummary();
    AWS_CLOUDFORMATION_API TypeVersionSummary(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDFORMATION_API TypeVersionSummary& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

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
    inline TypeVersionSummary& WithType(const RegistryType& value) { SetType(value); return *this;}

    /**
     * <p>The kind of extension.</p>
     */
    inline TypeVersionSummary& WithType(RegistryType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>The name of the extension.</p>
     */
    inline const Aws::String& GetTypeName() const{ return m_typeName; }

    /**
     * <p>The name of the extension.</p>
     */
    inline bool TypeNameHasBeenSet() const { return m_typeNameHasBeenSet; }

    /**
     * <p>The name of the extension.</p>
     */
    inline void SetTypeName(const Aws::String& value) { m_typeNameHasBeenSet = true; m_typeName = value; }

    /**
     * <p>The name of the extension.</p>
     */
    inline void SetTypeName(Aws::String&& value) { m_typeNameHasBeenSet = true; m_typeName = std::move(value); }

    /**
     * <p>The name of the extension.</p>
     */
    inline void SetTypeName(const char* value) { m_typeNameHasBeenSet = true; m_typeName.assign(value); }

    /**
     * <p>The name of the extension.</p>
     */
    inline TypeVersionSummary& WithTypeName(const Aws::String& value) { SetTypeName(value); return *this;}

    /**
     * <p>The name of the extension.</p>
     */
    inline TypeVersionSummary& WithTypeName(Aws::String&& value) { SetTypeName(std::move(value)); return *this;}

    /**
     * <p>The name of the extension.</p>
     */
    inline TypeVersionSummary& WithTypeName(const char* value) { SetTypeName(value); return *this;}


    /**
     * <p>The ID of a specific version of the extension. The version ID is the value at
     * the end of the Amazon Resource Name (ARN) assigned to the extension version when
     * it's registered.</p>
     */
    inline const Aws::String& GetVersionId() const{ return m_versionId; }

    /**
     * <p>The ID of a specific version of the extension. The version ID is the value at
     * the end of the Amazon Resource Name (ARN) assigned to the extension version when
     * it's registered.</p>
     */
    inline bool VersionIdHasBeenSet() const { return m_versionIdHasBeenSet; }

    /**
     * <p>The ID of a specific version of the extension. The version ID is the value at
     * the end of the Amazon Resource Name (ARN) assigned to the extension version when
     * it's registered.</p>
     */
    inline void SetVersionId(const Aws::String& value) { m_versionIdHasBeenSet = true; m_versionId = value; }

    /**
     * <p>The ID of a specific version of the extension. The version ID is the value at
     * the end of the Amazon Resource Name (ARN) assigned to the extension version when
     * it's registered.</p>
     */
    inline void SetVersionId(Aws::String&& value) { m_versionIdHasBeenSet = true; m_versionId = std::move(value); }

    /**
     * <p>The ID of a specific version of the extension. The version ID is the value at
     * the end of the Amazon Resource Name (ARN) assigned to the extension version when
     * it's registered.</p>
     */
    inline void SetVersionId(const char* value) { m_versionIdHasBeenSet = true; m_versionId.assign(value); }

    /**
     * <p>The ID of a specific version of the extension. The version ID is the value at
     * the end of the Amazon Resource Name (ARN) assigned to the extension version when
     * it's registered.</p>
     */
    inline TypeVersionSummary& WithVersionId(const Aws::String& value) { SetVersionId(value); return *this;}

    /**
     * <p>The ID of a specific version of the extension. The version ID is the value at
     * the end of the Amazon Resource Name (ARN) assigned to the extension version when
     * it's registered.</p>
     */
    inline TypeVersionSummary& WithVersionId(Aws::String&& value) { SetVersionId(std::move(value)); return *this;}

    /**
     * <p>The ID of a specific version of the extension. The version ID is the value at
     * the end of the Amazon Resource Name (ARN) assigned to the extension version when
     * it's registered.</p>
     */
    inline TypeVersionSummary& WithVersionId(const char* value) { SetVersionId(value); return *this;}


    /**
     * <p>Whether the specified extension version is set as the default version.</p>
     * <p>This applies only to private extensions you have registered in your account,
     * and extensions published by Amazon. For public third-party extensions,
     * CloudFormation returns <code>null</code>.</p>
     */
    inline bool GetIsDefaultVersion() const{ return m_isDefaultVersion; }

    /**
     * <p>Whether the specified extension version is set as the default version.</p>
     * <p>This applies only to private extensions you have registered in your account,
     * and extensions published by Amazon. For public third-party extensions,
     * CloudFormation returns <code>null</code>.</p>
     */
    inline bool IsDefaultVersionHasBeenSet() const { return m_isDefaultVersionHasBeenSet; }

    /**
     * <p>Whether the specified extension version is set as the default version.</p>
     * <p>This applies only to private extensions you have registered in your account,
     * and extensions published by Amazon. For public third-party extensions,
     * CloudFormation returns <code>null</code>.</p>
     */
    inline void SetIsDefaultVersion(bool value) { m_isDefaultVersionHasBeenSet = true; m_isDefaultVersion = value; }

    /**
     * <p>Whether the specified extension version is set as the default version.</p>
     * <p>This applies only to private extensions you have registered in your account,
     * and extensions published by Amazon. For public third-party extensions,
     * CloudFormation returns <code>null</code>.</p>
     */
    inline TypeVersionSummary& WithIsDefaultVersion(bool value) { SetIsDefaultVersion(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the extension version.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the extension version.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the extension version.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the extension version.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the extension version.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the extension version.</p>
     */
    inline TypeVersionSummary& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the extension version.</p>
     */
    inline TypeVersionSummary& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the extension version.</p>
     */
    inline TypeVersionSummary& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>When the version was registered.</p>
     */
    inline const Aws::Utils::DateTime& GetTimeCreated() const{ return m_timeCreated; }

    /**
     * <p>When the version was registered.</p>
     */
    inline bool TimeCreatedHasBeenSet() const { return m_timeCreatedHasBeenSet; }

    /**
     * <p>When the version was registered.</p>
     */
    inline void SetTimeCreated(const Aws::Utils::DateTime& value) { m_timeCreatedHasBeenSet = true; m_timeCreated = value; }

    /**
     * <p>When the version was registered.</p>
     */
    inline void SetTimeCreated(Aws::Utils::DateTime&& value) { m_timeCreatedHasBeenSet = true; m_timeCreated = std::move(value); }

    /**
     * <p>When the version was registered.</p>
     */
    inline TypeVersionSummary& WithTimeCreated(const Aws::Utils::DateTime& value) { SetTimeCreated(value); return *this;}

    /**
     * <p>When the version was registered.</p>
     */
    inline TypeVersionSummary& WithTimeCreated(Aws::Utils::DateTime&& value) { SetTimeCreated(std::move(value)); return *this;}


    /**
     * <p>The description of the extension version.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the extension version.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description of the extension version.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the extension version.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description of the extension version.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of the extension version.</p>
     */
    inline TypeVersionSummary& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the extension version.</p>
     */
    inline TypeVersionSummary& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the extension version.</p>
     */
    inline TypeVersionSummary& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>For public extensions that have been activated for this account and Region,
     * the version of the public extension to be used for CloudFormation operations in
     * this account and Region. For any extensions other than activated third-arty
     * extensions, CloudFormation returns <code>null</code>.</p> <p>How you specified
     * <code>AutoUpdate</code> when enabling the extension affects whether
     * CloudFormation automatically updates the extension in this account and Region
     * when a new version is released. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/registry-public.html#registry-public-enable-auto">Setting
     * CloudFormation to automatically use new versions of extensions</a> in the
     * <i>CloudFormation User Guide</i>.</p>
     */
    inline const Aws::String& GetPublicVersionNumber() const{ return m_publicVersionNumber; }

    /**
     * <p>For public extensions that have been activated for this account and Region,
     * the version of the public extension to be used for CloudFormation operations in
     * this account and Region. For any extensions other than activated third-arty
     * extensions, CloudFormation returns <code>null</code>.</p> <p>How you specified
     * <code>AutoUpdate</code> when enabling the extension affects whether
     * CloudFormation automatically updates the extension in this account and Region
     * when a new version is released. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/registry-public.html#registry-public-enable-auto">Setting
     * CloudFormation to automatically use new versions of extensions</a> in the
     * <i>CloudFormation User Guide</i>.</p>
     */
    inline bool PublicVersionNumberHasBeenSet() const { return m_publicVersionNumberHasBeenSet; }

    /**
     * <p>For public extensions that have been activated for this account and Region,
     * the version of the public extension to be used for CloudFormation operations in
     * this account and Region. For any extensions other than activated third-arty
     * extensions, CloudFormation returns <code>null</code>.</p> <p>How you specified
     * <code>AutoUpdate</code> when enabling the extension affects whether
     * CloudFormation automatically updates the extension in this account and Region
     * when a new version is released. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/registry-public.html#registry-public-enable-auto">Setting
     * CloudFormation to automatically use new versions of extensions</a> in the
     * <i>CloudFormation User Guide</i>.</p>
     */
    inline void SetPublicVersionNumber(const Aws::String& value) { m_publicVersionNumberHasBeenSet = true; m_publicVersionNumber = value; }

    /**
     * <p>For public extensions that have been activated for this account and Region,
     * the version of the public extension to be used for CloudFormation operations in
     * this account and Region. For any extensions other than activated third-arty
     * extensions, CloudFormation returns <code>null</code>.</p> <p>How you specified
     * <code>AutoUpdate</code> when enabling the extension affects whether
     * CloudFormation automatically updates the extension in this account and Region
     * when a new version is released. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/registry-public.html#registry-public-enable-auto">Setting
     * CloudFormation to automatically use new versions of extensions</a> in the
     * <i>CloudFormation User Guide</i>.</p>
     */
    inline void SetPublicVersionNumber(Aws::String&& value) { m_publicVersionNumberHasBeenSet = true; m_publicVersionNumber = std::move(value); }

    /**
     * <p>For public extensions that have been activated for this account and Region,
     * the version of the public extension to be used for CloudFormation operations in
     * this account and Region. For any extensions other than activated third-arty
     * extensions, CloudFormation returns <code>null</code>.</p> <p>How you specified
     * <code>AutoUpdate</code> when enabling the extension affects whether
     * CloudFormation automatically updates the extension in this account and Region
     * when a new version is released. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/registry-public.html#registry-public-enable-auto">Setting
     * CloudFormation to automatically use new versions of extensions</a> in the
     * <i>CloudFormation User Guide</i>.</p>
     */
    inline void SetPublicVersionNumber(const char* value) { m_publicVersionNumberHasBeenSet = true; m_publicVersionNumber.assign(value); }

    /**
     * <p>For public extensions that have been activated for this account and Region,
     * the version of the public extension to be used for CloudFormation operations in
     * this account and Region. For any extensions other than activated third-arty
     * extensions, CloudFormation returns <code>null</code>.</p> <p>How you specified
     * <code>AutoUpdate</code> when enabling the extension affects whether
     * CloudFormation automatically updates the extension in this account and Region
     * when a new version is released. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/registry-public.html#registry-public-enable-auto">Setting
     * CloudFormation to automatically use new versions of extensions</a> in the
     * <i>CloudFormation User Guide</i>.</p>
     */
    inline TypeVersionSummary& WithPublicVersionNumber(const Aws::String& value) { SetPublicVersionNumber(value); return *this;}

    /**
     * <p>For public extensions that have been activated for this account and Region,
     * the version of the public extension to be used for CloudFormation operations in
     * this account and Region. For any extensions other than activated third-arty
     * extensions, CloudFormation returns <code>null</code>.</p> <p>How you specified
     * <code>AutoUpdate</code> when enabling the extension affects whether
     * CloudFormation automatically updates the extension in this account and Region
     * when a new version is released. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/registry-public.html#registry-public-enable-auto">Setting
     * CloudFormation to automatically use new versions of extensions</a> in the
     * <i>CloudFormation User Guide</i>.</p>
     */
    inline TypeVersionSummary& WithPublicVersionNumber(Aws::String&& value) { SetPublicVersionNumber(std::move(value)); return *this;}

    /**
     * <p>For public extensions that have been activated for this account and Region,
     * the version of the public extension to be used for CloudFormation operations in
     * this account and Region. For any extensions other than activated third-arty
     * extensions, CloudFormation returns <code>null</code>.</p> <p>How you specified
     * <code>AutoUpdate</code> when enabling the extension affects whether
     * CloudFormation automatically updates the extension in this account and Region
     * when a new version is released. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/registry-public.html#registry-public-enable-auto">Setting
     * CloudFormation to automatically use new versions of extensions</a> in the
     * <i>CloudFormation User Guide</i>.</p>
     */
    inline TypeVersionSummary& WithPublicVersionNumber(const char* value) { SetPublicVersionNumber(value); return *this;}

  private:

    RegistryType m_type;
    bool m_typeHasBeenSet = false;

    Aws::String m_typeName;
    bool m_typeNameHasBeenSet = false;

    Aws::String m_versionId;
    bool m_versionIdHasBeenSet = false;

    bool m_isDefaultVersion;
    bool m_isDefaultVersionHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::Utils::DateTime m_timeCreated;
    bool m_timeCreatedHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_publicVersionNumber;
    bool m_publicVersionNumberHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
