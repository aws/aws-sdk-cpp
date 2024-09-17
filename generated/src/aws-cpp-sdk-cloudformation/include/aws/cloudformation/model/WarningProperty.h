/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudformation/CloudFormation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>A specific property that is impacted by a warning.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/WarningProperty">AWS
   * API Reference</a></p>
   */
  class WarningProperty
  {
  public:
    AWS_CLOUDFORMATION_API WarningProperty();
    AWS_CLOUDFORMATION_API WarningProperty(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDFORMATION_API WarningProperty& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDFORMATION_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_CLOUDFORMATION_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The path of the property. For example, if this is for the
     * <code>S3Bucket</code> member of the <code>Code</code> property, the property
     * path would be <code>Code/S3Bucket</code>.</p>
     */
    inline const Aws::String& GetPropertyPath() const{ return m_propertyPath; }
    inline bool PropertyPathHasBeenSet() const { return m_propertyPathHasBeenSet; }
    inline void SetPropertyPath(const Aws::String& value) { m_propertyPathHasBeenSet = true; m_propertyPath = value; }
    inline void SetPropertyPath(Aws::String&& value) { m_propertyPathHasBeenSet = true; m_propertyPath = std::move(value); }
    inline void SetPropertyPath(const char* value) { m_propertyPathHasBeenSet = true; m_propertyPath.assign(value); }
    inline WarningProperty& WithPropertyPath(const Aws::String& value) { SetPropertyPath(value); return *this;}
    inline WarningProperty& WithPropertyPath(Aws::String&& value) { SetPropertyPath(std::move(value)); return *this;}
    inline WarningProperty& WithPropertyPath(const char* value) { SetPropertyPath(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If <code>true</code>, the specified property is required.</p>
     */
    inline bool GetRequired() const{ return m_required; }
    inline bool RequiredHasBeenSet() const { return m_requiredHasBeenSet; }
    inline void SetRequired(bool value) { m_requiredHasBeenSet = true; m_required = value; }
    inline WarningProperty& WithRequired(bool value) { SetRequired(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the property from the resource provider schema.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline WarningProperty& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline WarningProperty& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline WarningProperty& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}
  private:

    Aws::String m_propertyPath;
    bool m_propertyPathHasBeenSet = false;

    bool m_required;
    bool m_requiredHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
