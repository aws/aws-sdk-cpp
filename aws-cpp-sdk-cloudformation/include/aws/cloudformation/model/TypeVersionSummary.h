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
   * type.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/TypeVersionSummary">AWS
   * API Reference</a></p>
   */
  class AWS_CLOUDFORMATION_API TypeVersionSummary
  {
  public:
    TypeVersionSummary();
    TypeVersionSummary(const Aws::Utils::Xml::XmlNode& xmlNode);
    TypeVersionSummary& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The kind of type.</p>
     */
    inline const RegistryType& GetType() const{ return m_type; }

    /**
     * <p>The kind of type.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The kind of type.</p>
     */
    inline void SetType(const RegistryType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The kind of type.</p>
     */
    inline void SetType(RegistryType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The kind of type.</p>
     */
    inline TypeVersionSummary& WithType(const RegistryType& value) { SetType(value); return *this;}

    /**
     * <p>The kind of type.</p>
     */
    inline TypeVersionSummary& WithType(RegistryType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>The name of the type.</p>
     */
    inline const Aws::String& GetTypeName() const{ return m_typeName; }

    /**
     * <p>The name of the type.</p>
     */
    inline bool TypeNameHasBeenSet() const { return m_typeNameHasBeenSet; }

    /**
     * <p>The name of the type.</p>
     */
    inline void SetTypeName(const Aws::String& value) { m_typeNameHasBeenSet = true; m_typeName = value; }

    /**
     * <p>The name of the type.</p>
     */
    inline void SetTypeName(Aws::String&& value) { m_typeNameHasBeenSet = true; m_typeName = std::move(value); }

    /**
     * <p>The name of the type.</p>
     */
    inline void SetTypeName(const char* value) { m_typeNameHasBeenSet = true; m_typeName.assign(value); }

    /**
     * <p>The name of the type.</p>
     */
    inline TypeVersionSummary& WithTypeName(const Aws::String& value) { SetTypeName(value); return *this;}

    /**
     * <p>The name of the type.</p>
     */
    inline TypeVersionSummary& WithTypeName(Aws::String&& value) { SetTypeName(std::move(value)); return *this;}

    /**
     * <p>The name of the type.</p>
     */
    inline TypeVersionSummary& WithTypeName(const char* value) { SetTypeName(value); return *this;}


    /**
     * <p>The ID of a specific version of the type. The version ID is the value at the
     * end of the Amazon Resource Name (ARN) assigned to the type version when it is
     * registered.</p>
     */
    inline const Aws::String& GetVersionId() const{ return m_versionId; }

    /**
     * <p>The ID of a specific version of the type. The version ID is the value at the
     * end of the Amazon Resource Name (ARN) assigned to the type version when it is
     * registered.</p>
     */
    inline bool VersionIdHasBeenSet() const { return m_versionIdHasBeenSet; }

    /**
     * <p>The ID of a specific version of the type. The version ID is the value at the
     * end of the Amazon Resource Name (ARN) assigned to the type version when it is
     * registered.</p>
     */
    inline void SetVersionId(const Aws::String& value) { m_versionIdHasBeenSet = true; m_versionId = value; }

    /**
     * <p>The ID of a specific version of the type. The version ID is the value at the
     * end of the Amazon Resource Name (ARN) assigned to the type version when it is
     * registered.</p>
     */
    inline void SetVersionId(Aws::String&& value) { m_versionIdHasBeenSet = true; m_versionId = std::move(value); }

    /**
     * <p>The ID of a specific version of the type. The version ID is the value at the
     * end of the Amazon Resource Name (ARN) assigned to the type version when it is
     * registered.</p>
     */
    inline void SetVersionId(const char* value) { m_versionIdHasBeenSet = true; m_versionId.assign(value); }

    /**
     * <p>The ID of a specific version of the type. The version ID is the value at the
     * end of the Amazon Resource Name (ARN) assigned to the type version when it is
     * registered.</p>
     */
    inline TypeVersionSummary& WithVersionId(const Aws::String& value) { SetVersionId(value); return *this;}

    /**
     * <p>The ID of a specific version of the type. The version ID is the value at the
     * end of the Amazon Resource Name (ARN) assigned to the type version when it is
     * registered.</p>
     */
    inline TypeVersionSummary& WithVersionId(Aws::String&& value) { SetVersionId(std::move(value)); return *this;}

    /**
     * <p>The ID of a specific version of the type. The version ID is the value at the
     * end of the Amazon Resource Name (ARN) assigned to the type version when it is
     * registered.</p>
     */
    inline TypeVersionSummary& WithVersionId(const char* value) { SetVersionId(value); return *this;}


    /**
     * <p>Whether the specified type version is set as the default version.</p>
     */
    inline bool GetIsDefaultVersion() const{ return m_isDefaultVersion; }

    /**
     * <p>Whether the specified type version is set as the default version.</p>
     */
    inline bool IsDefaultVersionHasBeenSet() const { return m_isDefaultVersionHasBeenSet; }

    /**
     * <p>Whether the specified type version is set as the default version.</p>
     */
    inline void SetIsDefaultVersion(bool value) { m_isDefaultVersionHasBeenSet = true; m_isDefaultVersion = value; }

    /**
     * <p>Whether the specified type version is set as the default version.</p>
     */
    inline TypeVersionSummary& WithIsDefaultVersion(bool value) { SetIsDefaultVersion(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the type version.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the type version.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the type version.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the type version.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the type version.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the type version.</p>
     */
    inline TypeVersionSummary& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the type version.</p>
     */
    inline TypeVersionSummary& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the type version.</p>
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
     * <p>The description of the type version.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the type version.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description of the type version.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the type version.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description of the type version.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of the type version.</p>
     */
    inline TypeVersionSummary& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the type version.</p>
     */
    inline TypeVersionSummary& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the type version.</p>
     */
    inline TypeVersionSummary& WithDescription(const char* value) { SetDescription(value); return *this;}

  private:

    RegistryType m_type;
    bool m_typeHasBeenSet;

    Aws::String m_typeName;
    bool m_typeNameHasBeenSet;

    Aws::String m_versionId;
    bool m_versionIdHasBeenSet;

    bool m_isDefaultVersion;
    bool m_isDefaultVersionHasBeenSet;

    Aws::String m_arn;
    bool m_arnHasBeenSet;

    Aws::Utils::DateTime m_timeCreated;
    bool m_timeCreatedHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
