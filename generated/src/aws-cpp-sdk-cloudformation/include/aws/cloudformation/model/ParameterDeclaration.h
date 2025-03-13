/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudformation/CloudFormation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cloudformation/model/ParameterConstraints.h>
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
   * <p>The ParameterDeclaration data type.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/ParameterDeclaration">AWS
   * API Reference</a></p>
   */
  class ParameterDeclaration
  {
  public:
    AWS_CLOUDFORMATION_API ParameterDeclaration() = default;
    AWS_CLOUDFORMATION_API ParameterDeclaration(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDFORMATION_API ParameterDeclaration& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDFORMATION_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_CLOUDFORMATION_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The name that's associated with the parameter.</p>
     */
    inline const Aws::String& GetParameterKey() const { return m_parameterKey; }
    inline bool ParameterKeyHasBeenSet() const { return m_parameterKeyHasBeenSet; }
    template<typename ParameterKeyT = Aws::String>
    void SetParameterKey(ParameterKeyT&& value) { m_parameterKeyHasBeenSet = true; m_parameterKey = std::forward<ParameterKeyT>(value); }
    template<typename ParameterKeyT = Aws::String>
    ParameterDeclaration& WithParameterKey(ParameterKeyT&& value) { SetParameterKey(std::forward<ParameterKeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The default value of the parameter.</p>
     */
    inline const Aws::String& GetDefaultValue() const { return m_defaultValue; }
    inline bool DefaultValueHasBeenSet() const { return m_defaultValueHasBeenSet; }
    template<typename DefaultValueT = Aws::String>
    void SetDefaultValue(DefaultValueT&& value) { m_defaultValueHasBeenSet = true; m_defaultValue = std::forward<DefaultValueT>(value); }
    template<typename DefaultValueT = Aws::String>
    ParameterDeclaration& WithDefaultValue(DefaultValueT&& value) { SetDefaultValue(std::forward<DefaultValueT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of parameter.</p>
     */
    inline const Aws::String& GetParameterType() const { return m_parameterType; }
    inline bool ParameterTypeHasBeenSet() const { return m_parameterTypeHasBeenSet; }
    template<typename ParameterTypeT = Aws::String>
    void SetParameterType(ParameterTypeT&& value) { m_parameterTypeHasBeenSet = true; m_parameterType = std::forward<ParameterTypeT>(value); }
    template<typename ParameterTypeT = Aws::String>
    ParameterDeclaration& WithParameterType(ParameterTypeT&& value) { SetParameterType(std::forward<ParameterTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Flag that indicates whether the parameter value is shown as plain text in
     * logs and in the Amazon Web Services Management Console.</p>
     */
    inline bool GetNoEcho() const { return m_noEcho; }
    inline bool NoEchoHasBeenSet() const { return m_noEchoHasBeenSet; }
    inline void SetNoEcho(bool value) { m_noEchoHasBeenSet = true; m_noEcho = value; }
    inline ParameterDeclaration& WithNoEcho(bool value) { SetNoEcho(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description that's associate with the parameter.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    ParameterDeclaration& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The criteria that CloudFormation uses to validate parameter values.</p>
     */
    inline const ParameterConstraints& GetParameterConstraints() const { return m_parameterConstraints; }
    inline bool ParameterConstraintsHasBeenSet() const { return m_parameterConstraintsHasBeenSet; }
    template<typename ParameterConstraintsT = ParameterConstraints>
    void SetParameterConstraints(ParameterConstraintsT&& value) { m_parameterConstraintsHasBeenSet = true; m_parameterConstraints = std::forward<ParameterConstraintsT>(value); }
    template<typename ParameterConstraintsT = ParameterConstraints>
    ParameterDeclaration& WithParameterConstraints(ParameterConstraintsT&& value) { SetParameterConstraints(std::forward<ParameterConstraintsT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_parameterKey;
    bool m_parameterKeyHasBeenSet = false;

    Aws::String m_defaultValue;
    bool m_defaultValueHasBeenSet = false;

    Aws::String m_parameterType;
    bool m_parameterTypeHasBeenSet = false;

    bool m_noEcho{false};
    bool m_noEchoHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    ParameterConstraints m_parameterConstraints;
    bool m_parameterConstraintsHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
