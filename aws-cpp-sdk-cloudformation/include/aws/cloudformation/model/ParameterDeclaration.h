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
    AWS_CLOUDFORMATION_API ParameterDeclaration();
    AWS_CLOUDFORMATION_API ParameterDeclaration(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDFORMATION_API ParameterDeclaration& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDFORMATION_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_CLOUDFORMATION_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The name that's associated with the parameter.</p>
     */
    inline const Aws::String& GetParameterKey() const{ return m_parameterKey; }

    /**
     * <p>The name that's associated with the parameter.</p>
     */
    inline bool ParameterKeyHasBeenSet() const { return m_parameterKeyHasBeenSet; }

    /**
     * <p>The name that's associated with the parameter.</p>
     */
    inline void SetParameterKey(const Aws::String& value) { m_parameterKeyHasBeenSet = true; m_parameterKey = value; }

    /**
     * <p>The name that's associated with the parameter.</p>
     */
    inline void SetParameterKey(Aws::String&& value) { m_parameterKeyHasBeenSet = true; m_parameterKey = std::move(value); }

    /**
     * <p>The name that's associated with the parameter.</p>
     */
    inline void SetParameterKey(const char* value) { m_parameterKeyHasBeenSet = true; m_parameterKey.assign(value); }

    /**
     * <p>The name that's associated with the parameter.</p>
     */
    inline ParameterDeclaration& WithParameterKey(const Aws::String& value) { SetParameterKey(value); return *this;}

    /**
     * <p>The name that's associated with the parameter.</p>
     */
    inline ParameterDeclaration& WithParameterKey(Aws::String&& value) { SetParameterKey(std::move(value)); return *this;}

    /**
     * <p>The name that's associated with the parameter.</p>
     */
    inline ParameterDeclaration& WithParameterKey(const char* value) { SetParameterKey(value); return *this;}


    /**
     * <p>The default value of the parameter.</p>
     */
    inline const Aws::String& GetDefaultValue() const{ return m_defaultValue; }

    /**
     * <p>The default value of the parameter.</p>
     */
    inline bool DefaultValueHasBeenSet() const { return m_defaultValueHasBeenSet; }

    /**
     * <p>The default value of the parameter.</p>
     */
    inline void SetDefaultValue(const Aws::String& value) { m_defaultValueHasBeenSet = true; m_defaultValue = value; }

    /**
     * <p>The default value of the parameter.</p>
     */
    inline void SetDefaultValue(Aws::String&& value) { m_defaultValueHasBeenSet = true; m_defaultValue = std::move(value); }

    /**
     * <p>The default value of the parameter.</p>
     */
    inline void SetDefaultValue(const char* value) { m_defaultValueHasBeenSet = true; m_defaultValue.assign(value); }

    /**
     * <p>The default value of the parameter.</p>
     */
    inline ParameterDeclaration& WithDefaultValue(const Aws::String& value) { SetDefaultValue(value); return *this;}

    /**
     * <p>The default value of the parameter.</p>
     */
    inline ParameterDeclaration& WithDefaultValue(Aws::String&& value) { SetDefaultValue(std::move(value)); return *this;}

    /**
     * <p>The default value of the parameter.</p>
     */
    inline ParameterDeclaration& WithDefaultValue(const char* value) { SetDefaultValue(value); return *this;}


    /**
     * <p>The type of parameter.</p>
     */
    inline const Aws::String& GetParameterType() const{ return m_parameterType; }

    /**
     * <p>The type of parameter.</p>
     */
    inline bool ParameterTypeHasBeenSet() const { return m_parameterTypeHasBeenSet; }

    /**
     * <p>The type of parameter.</p>
     */
    inline void SetParameterType(const Aws::String& value) { m_parameterTypeHasBeenSet = true; m_parameterType = value; }

    /**
     * <p>The type of parameter.</p>
     */
    inline void SetParameterType(Aws::String&& value) { m_parameterTypeHasBeenSet = true; m_parameterType = std::move(value); }

    /**
     * <p>The type of parameter.</p>
     */
    inline void SetParameterType(const char* value) { m_parameterTypeHasBeenSet = true; m_parameterType.assign(value); }

    /**
     * <p>The type of parameter.</p>
     */
    inline ParameterDeclaration& WithParameterType(const Aws::String& value) { SetParameterType(value); return *this;}

    /**
     * <p>The type of parameter.</p>
     */
    inline ParameterDeclaration& WithParameterType(Aws::String&& value) { SetParameterType(std::move(value)); return *this;}

    /**
     * <p>The type of parameter.</p>
     */
    inline ParameterDeclaration& WithParameterType(const char* value) { SetParameterType(value); return *this;}


    /**
     * <p>Flag that indicates whether the parameter value is shown as plain text in
     * logs and in the Amazon Web Services Management Console.</p>
     */
    inline bool GetNoEcho() const{ return m_noEcho; }

    /**
     * <p>Flag that indicates whether the parameter value is shown as plain text in
     * logs and in the Amazon Web Services Management Console.</p>
     */
    inline bool NoEchoHasBeenSet() const { return m_noEchoHasBeenSet; }

    /**
     * <p>Flag that indicates whether the parameter value is shown as plain text in
     * logs and in the Amazon Web Services Management Console.</p>
     */
    inline void SetNoEcho(bool value) { m_noEchoHasBeenSet = true; m_noEcho = value; }

    /**
     * <p>Flag that indicates whether the parameter value is shown as plain text in
     * logs and in the Amazon Web Services Management Console.</p>
     */
    inline ParameterDeclaration& WithNoEcho(bool value) { SetNoEcho(value); return *this;}


    /**
     * <p>The description that's associate with the parameter.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description that's associate with the parameter.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description that's associate with the parameter.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description that's associate with the parameter.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description that's associate with the parameter.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description that's associate with the parameter.</p>
     */
    inline ParameterDeclaration& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description that's associate with the parameter.</p>
     */
    inline ParameterDeclaration& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description that's associate with the parameter.</p>
     */
    inline ParameterDeclaration& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The criteria that CloudFormation uses to validate parameter values.</p>
     */
    inline const ParameterConstraints& GetParameterConstraints() const{ return m_parameterConstraints; }

    /**
     * <p>The criteria that CloudFormation uses to validate parameter values.</p>
     */
    inline bool ParameterConstraintsHasBeenSet() const { return m_parameterConstraintsHasBeenSet; }

    /**
     * <p>The criteria that CloudFormation uses to validate parameter values.</p>
     */
    inline void SetParameterConstraints(const ParameterConstraints& value) { m_parameterConstraintsHasBeenSet = true; m_parameterConstraints = value; }

    /**
     * <p>The criteria that CloudFormation uses to validate parameter values.</p>
     */
    inline void SetParameterConstraints(ParameterConstraints&& value) { m_parameterConstraintsHasBeenSet = true; m_parameterConstraints = std::move(value); }

    /**
     * <p>The criteria that CloudFormation uses to validate parameter values.</p>
     */
    inline ParameterDeclaration& WithParameterConstraints(const ParameterConstraints& value) { SetParameterConstraints(value); return *this;}

    /**
     * <p>The criteria that CloudFormation uses to validate parameter values.</p>
     */
    inline ParameterDeclaration& WithParameterConstraints(ParameterConstraints&& value) { SetParameterConstraints(std::move(value)); return *this;}

  private:

    Aws::String m_parameterKey;
    bool m_parameterKeyHasBeenSet = false;

    Aws::String m_defaultValue;
    bool m_defaultValueHasBeenSet = false;

    Aws::String m_parameterType;
    bool m_parameterTypeHasBeenSet = false;

    bool m_noEcho;
    bool m_noEchoHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    ParameterConstraints m_parameterConstraints;
    bool m_parameterConstraintsHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
