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
    AWS_CLOUDFORMATION_API WarningProperty() = default;
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
    inline const Aws::String& GetPropertyPath() const { return m_propertyPath; }
    inline bool PropertyPathHasBeenSet() const { return m_propertyPathHasBeenSet; }
    template<typename PropertyPathT = Aws::String>
    void SetPropertyPath(PropertyPathT&& value) { m_propertyPathHasBeenSet = true; m_propertyPath = std::forward<PropertyPathT>(value); }
    template<typename PropertyPathT = Aws::String>
    WarningProperty& WithPropertyPath(PropertyPathT&& value) { SetPropertyPath(std::forward<PropertyPathT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If <code>true</code>, the specified property is required.</p>
     */
    inline bool GetRequired() const { return m_required; }
    inline bool RequiredHasBeenSet() const { return m_requiredHasBeenSet; }
    inline void SetRequired(bool value) { m_requiredHasBeenSet = true; m_required = value; }
    inline WarningProperty& WithRequired(bool value) { SetRequired(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the property from the resource provider schema.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    WarningProperty& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_propertyPath;
    bool m_propertyPathHasBeenSet = false;

    bool m_required{false};
    bool m_requiredHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
