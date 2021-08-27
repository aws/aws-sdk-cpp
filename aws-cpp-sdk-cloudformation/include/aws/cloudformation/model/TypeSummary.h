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
   * <p>Contains summary information about the specified CloudFormation
   * type.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/TypeSummary">AWS
   * API Reference</a></p>
   */
  class AWS_CLOUDFORMATION_API TypeSummary
  {
  public:
    TypeSummary();
    TypeSummary(const Aws::Utils::Xml::XmlNode& xmlNode);
    TypeSummary& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

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
    inline TypeSummary& WithType(const RegistryType& value) { SetType(value); return *this;}

    /**
     * <p>The kind of type.</p>
     */
    inline TypeSummary& WithType(RegistryType&& value) { SetType(std::move(value)); return *this;}


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
    inline TypeSummary& WithTypeName(const Aws::String& value) { SetTypeName(value); return *this;}

    /**
     * <p>The name of the type.</p>
     */
    inline TypeSummary& WithTypeName(Aws::String&& value) { SetTypeName(std::move(value)); return *this;}

    /**
     * <p>The name of the type.</p>
     */
    inline TypeSummary& WithTypeName(const char* value) { SetTypeName(value); return *this;}


    /**
     * <p>The ID of the default version of the type. The default version is used when
     * the type version is not specified.</p> <p>To set the default version of a type,
     * use <code> <a>SetTypeDefaultVersion</a> </code>. </p>
     */
    inline const Aws::String& GetDefaultVersionId() const{ return m_defaultVersionId; }

    /**
     * <p>The ID of the default version of the type. The default version is used when
     * the type version is not specified.</p> <p>To set the default version of a type,
     * use <code> <a>SetTypeDefaultVersion</a> </code>. </p>
     */
    inline bool DefaultVersionIdHasBeenSet() const { return m_defaultVersionIdHasBeenSet; }

    /**
     * <p>The ID of the default version of the type. The default version is used when
     * the type version is not specified.</p> <p>To set the default version of a type,
     * use <code> <a>SetTypeDefaultVersion</a> </code>. </p>
     */
    inline void SetDefaultVersionId(const Aws::String& value) { m_defaultVersionIdHasBeenSet = true; m_defaultVersionId = value; }

    /**
     * <p>The ID of the default version of the type. The default version is used when
     * the type version is not specified.</p> <p>To set the default version of a type,
     * use <code> <a>SetTypeDefaultVersion</a> </code>. </p>
     */
    inline void SetDefaultVersionId(Aws::String&& value) { m_defaultVersionIdHasBeenSet = true; m_defaultVersionId = std::move(value); }

    /**
     * <p>The ID of the default version of the type. The default version is used when
     * the type version is not specified.</p> <p>To set the default version of a type,
     * use <code> <a>SetTypeDefaultVersion</a> </code>. </p>
     */
    inline void SetDefaultVersionId(const char* value) { m_defaultVersionIdHasBeenSet = true; m_defaultVersionId.assign(value); }

    /**
     * <p>The ID of the default version of the type. The default version is used when
     * the type version is not specified.</p> <p>To set the default version of a type,
     * use <code> <a>SetTypeDefaultVersion</a> </code>. </p>
     */
    inline TypeSummary& WithDefaultVersionId(const Aws::String& value) { SetDefaultVersionId(value); return *this;}

    /**
     * <p>The ID of the default version of the type. The default version is used when
     * the type version is not specified.</p> <p>To set the default version of a type,
     * use <code> <a>SetTypeDefaultVersion</a> </code>. </p>
     */
    inline TypeSummary& WithDefaultVersionId(Aws::String&& value) { SetDefaultVersionId(std::move(value)); return *this;}

    /**
     * <p>The ID of the default version of the type. The default version is used when
     * the type version is not specified.</p> <p>To set the default version of a type,
     * use <code> <a>SetTypeDefaultVersion</a> </code>. </p>
     */
    inline TypeSummary& WithDefaultVersionId(const char* value) { SetDefaultVersionId(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the type.</p>
     */
    inline const Aws::String& GetTypeArn() const{ return m_typeArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the type.</p>
     */
    inline bool TypeArnHasBeenSet() const { return m_typeArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the type.</p>
     */
    inline void SetTypeArn(const Aws::String& value) { m_typeArnHasBeenSet = true; m_typeArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the type.</p>
     */
    inline void SetTypeArn(Aws::String&& value) { m_typeArnHasBeenSet = true; m_typeArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the type.</p>
     */
    inline void SetTypeArn(const char* value) { m_typeArnHasBeenSet = true; m_typeArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the type.</p>
     */
    inline TypeSummary& WithTypeArn(const Aws::String& value) { SetTypeArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the type.</p>
     */
    inline TypeSummary& WithTypeArn(Aws::String&& value) { SetTypeArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the type.</p>
     */
    inline TypeSummary& WithTypeArn(const char* value) { SetTypeArn(value); return *this;}


    /**
     * <p>When the current default version of the type was registered.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdated() const{ return m_lastUpdated; }

    /**
     * <p>When the current default version of the type was registered.</p>
     */
    inline bool LastUpdatedHasBeenSet() const { return m_lastUpdatedHasBeenSet; }

    /**
     * <p>When the current default version of the type was registered.</p>
     */
    inline void SetLastUpdated(const Aws::Utils::DateTime& value) { m_lastUpdatedHasBeenSet = true; m_lastUpdated = value; }

    /**
     * <p>When the current default version of the type was registered.</p>
     */
    inline void SetLastUpdated(Aws::Utils::DateTime&& value) { m_lastUpdatedHasBeenSet = true; m_lastUpdated = std::move(value); }

    /**
     * <p>When the current default version of the type was registered.</p>
     */
    inline TypeSummary& WithLastUpdated(const Aws::Utils::DateTime& value) { SetLastUpdated(value); return *this;}

    /**
     * <p>When the current default version of the type was registered.</p>
     */
    inline TypeSummary& WithLastUpdated(Aws::Utils::DateTime&& value) { SetLastUpdated(std::move(value)); return *this;}


    /**
     * <p>The description of the type.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the type.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description of the type.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the type.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description of the type.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of the type.</p>
     */
    inline TypeSummary& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the type.</p>
     */
    inline TypeSummary& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the type.</p>
     */
    inline TypeSummary& WithDescription(const char* value) { SetDescription(value); return *this;}

  private:

    RegistryType m_type;
    bool m_typeHasBeenSet;

    Aws::String m_typeName;
    bool m_typeNameHasBeenSet;

    Aws::String m_defaultVersionId;
    bool m_defaultVersionIdHasBeenSet;

    Aws::String m_typeArn;
    bool m_typeArnHasBeenSet;

    Aws::Utils::DateTime m_lastUpdated;
    bool m_lastUpdatedHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
