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
   * <p>The Parameter data type.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/Parameter">AWS
   * API Reference</a></p>
   */
  class Parameter
  {
  public:
    AWS_CLOUDFORMATION_API Parameter();
    AWS_CLOUDFORMATION_API Parameter(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDFORMATION_API Parameter& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDFORMATION_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_CLOUDFORMATION_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The key associated with the parameter. If you don't specify a key and value
     * for a particular parameter, CloudFormation uses the default value that's
     * specified in your template.</p>
     */
    inline const Aws::String& GetParameterKey() const{ return m_parameterKey; }

    /**
     * <p>The key associated with the parameter. If you don't specify a key and value
     * for a particular parameter, CloudFormation uses the default value that's
     * specified in your template.</p>
     */
    inline bool ParameterKeyHasBeenSet() const { return m_parameterKeyHasBeenSet; }

    /**
     * <p>The key associated with the parameter. If you don't specify a key and value
     * for a particular parameter, CloudFormation uses the default value that's
     * specified in your template.</p>
     */
    inline void SetParameterKey(const Aws::String& value) { m_parameterKeyHasBeenSet = true; m_parameterKey = value; }

    /**
     * <p>The key associated with the parameter. If you don't specify a key and value
     * for a particular parameter, CloudFormation uses the default value that's
     * specified in your template.</p>
     */
    inline void SetParameterKey(Aws::String&& value) { m_parameterKeyHasBeenSet = true; m_parameterKey = std::move(value); }

    /**
     * <p>The key associated with the parameter. If you don't specify a key and value
     * for a particular parameter, CloudFormation uses the default value that's
     * specified in your template.</p>
     */
    inline void SetParameterKey(const char* value) { m_parameterKeyHasBeenSet = true; m_parameterKey.assign(value); }

    /**
     * <p>The key associated with the parameter. If you don't specify a key and value
     * for a particular parameter, CloudFormation uses the default value that's
     * specified in your template.</p>
     */
    inline Parameter& WithParameterKey(const Aws::String& value) { SetParameterKey(value); return *this;}

    /**
     * <p>The key associated with the parameter. If you don't specify a key and value
     * for a particular parameter, CloudFormation uses the default value that's
     * specified in your template.</p>
     */
    inline Parameter& WithParameterKey(Aws::String&& value) { SetParameterKey(std::move(value)); return *this;}

    /**
     * <p>The key associated with the parameter. If you don't specify a key and value
     * for a particular parameter, CloudFormation uses the default value that's
     * specified in your template.</p>
     */
    inline Parameter& WithParameterKey(const char* value) { SetParameterKey(value); return *this;}


    /**
     * <p>The input value associated with the parameter.</p>
     */
    inline const Aws::String& GetParameterValue() const{ return m_parameterValue; }

    /**
     * <p>The input value associated with the parameter.</p>
     */
    inline bool ParameterValueHasBeenSet() const { return m_parameterValueHasBeenSet; }

    /**
     * <p>The input value associated with the parameter.</p>
     */
    inline void SetParameterValue(const Aws::String& value) { m_parameterValueHasBeenSet = true; m_parameterValue = value; }

    /**
     * <p>The input value associated with the parameter.</p>
     */
    inline void SetParameterValue(Aws::String&& value) { m_parameterValueHasBeenSet = true; m_parameterValue = std::move(value); }

    /**
     * <p>The input value associated with the parameter.</p>
     */
    inline void SetParameterValue(const char* value) { m_parameterValueHasBeenSet = true; m_parameterValue.assign(value); }

    /**
     * <p>The input value associated with the parameter.</p>
     */
    inline Parameter& WithParameterValue(const Aws::String& value) { SetParameterValue(value); return *this;}

    /**
     * <p>The input value associated with the parameter.</p>
     */
    inline Parameter& WithParameterValue(Aws::String&& value) { SetParameterValue(std::move(value)); return *this;}

    /**
     * <p>The input value associated with the parameter.</p>
     */
    inline Parameter& WithParameterValue(const char* value) { SetParameterValue(value); return *this;}


    /**
     * <p>During a stack update, use the existing parameter value that the stack is
     * using for a given parameter key. If you specify <code>true</code>, do not
     * specify a parameter value.</p>
     */
    inline bool GetUsePreviousValue() const{ return m_usePreviousValue; }

    /**
     * <p>During a stack update, use the existing parameter value that the stack is
     * using for a given parameter key. If you specify <code>true</code>, do not
     * specify a parameter value.</p>
     */
    inline bool UsePreviousValueHasBeenSet() const { return m_usePreviousValueHasBeenSet; }

    /**
     * <p>During a stack update, use the existing parameter value that the stack is
     * using for a given parameter key. If you specify <code>true</code>, do not
     * specify a parameter value.</p>
     */
    inline void SetUsePreviousValue(bool value) { m_usePreviousValueHasBeenSet = true; m_usePreviousValue = value; }

    /**
     * <p>During a stack update, use the existing parameter value that the stack is
     * using for a given parameter key. If you specify <code>true</code>, do not
     * specify a parameter value.</p>
     */
    inline Parameter& WithUsePreviousValue(bool value) { SetUsePreviousValue(value); return *this;}


    /**
     * <p>Read-only. The value that corresponds to a SSM parameter key. This field is
     * returned only for <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/parameters-section-structure.html#aws-ssm-parameter-types">
     * SSM</a> parameter types in the template.</p>
     */
    inline const Aws::String& GetResolvedValue() const{ return m_resolvedValue; }

    /**
     * <p>Read-only. The value that corresponds to a SSM parameter key. This field is
     * returned only for <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/parameters-section-structure.html#aws-ssm-parameter-types">
     * SSM</a> parameter types in the template.</p>
     */
    inline bool ResolvedValueHasBeenSet() const { return m_resolvedValueHasBeenSet; }

    /**
     * <p>Read-only. The value that corresponds to a SSM parameter key. This field is
     * returned only for <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/parameters-section-structure.html#aws-ssm-parameter-types">
     * SSM</a> parameter types in the template.</p>
     */
    inline void SetResolvedValue(const Aws::String& value) { m_resolvedValueHasBeenSet = true; m_resolvedValue = value; }

    /**
     * <p>Read-only. The value that corresponds to a SSM parameter key. This field is
     * returned only for <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/parameters-section-structure.html#aws-ssm-parameter-types">
     * SSM</a> parameter types in the template.</p>
     */
    inline void SetResolvedValue(Aws::String&& value) { m_resolvedValueHasBeenSet = true; m_resolvedValue = std::move(value); }

    /**
     * <p>Read-only. The value that corresponds to a SSM parameter key. This field is
     * returned only for <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/parameters-section-structure.html#aws-ssm-parameter-types">
     * SSM</a> parameter types in the template.</p>
     */
    inline void SetResolvedValue(const char* value) { m_resolvedValueHasBeenSet = true; m_resolvedValue.assign(value); }

    /**
     * <p>Read-only. The value that corresponds to a SSM parameter key. This field is
     * returned only for <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/parameters-section-structure.html#aws-ssm-parameter-types">
     * SSM</a> parameter types in the template.</p>
     */
    inline Parameter& WithResolvedValue(const Aws::String& value) { SetResolvedValue(value); return *this;}

    /**
     * <p>Read-only. The value that corresponds to a SSM parameter key. This field is
     * returned only for <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/parameters-section-structure.html#aws-ssm-parameter-types">
     * SSM</a> parameter types in the template.</p>
     */
    inline Parameter& WithResolvedValue(Aws::String&& value) { SetResolvedValue(std::move(value)); return *this;}

    /**
     * <p>Read-only. The value that corresponds to a SSM parameter key. This field is
     * returned only for <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/parameters-section-structure.html#aws-ssm-parameter-types">
     * SSM</a> parameter types in the template.</p>
     */
    inline Parameter& WithResolvedValue(const char* value) { SetResolvedValue(value); return *this;}

  private:

    Aws::String m_parameterKey;
    bool m_parameterKeyHasBeenSet = false;

    Aws::String m_parameterValue;
    bool m_parameterValueHasBeenSet = false;

    bool m_usePreviousValue;
    bool m_usePreviousValueHasBeenSet = false;

    Aws::String m_resolvedValue;
    bool m_resolvedValueHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
