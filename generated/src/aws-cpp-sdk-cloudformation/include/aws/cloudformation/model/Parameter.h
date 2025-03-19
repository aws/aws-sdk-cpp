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
    AWS_CLOUDFORMATION_API Parameter() = default;
    AWS_CLOUDFORMATION_API Parameter(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDFORMATION_API Parameter& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDFORMATION_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_CLOUDFORMATION_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The key associated with the parameter. If you don't specify a key and value
     * for a particular parameter, CloudFormation uses the default value that's
     * specified in your template.</p>
     */
    inline const Aws::String& GetParameterKey() const { return m_parameterKey; }
    inline bool ParameterKeyHasBeenSet() const { return m_parameterKeyHasBeenSet; }
    template<typename ParameterKeyT = Aws::String>
    void SetParameterKey(ParameterKeyT&& value) { m_parameterKeyHasBeenSet = true; m_parameterKey = std::forward<ParameterKeyT>(value); }
    template<typename ParameterKeyT = Aws::String>
    Parameter& WithParameterKey(ParameterKeyT&& value) { SetParameterKey(std::forward<ParameterKeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The input value associated with the parameter.</p>
     */
    inline const Aws::String& GetParameterValue() const { return m_parameterValue; }
    inline bool ParameterValueHasBeenSet() const { return m_parameterValueHasBeenSet; }
    template<typename ParameterValueT = Aws::String>
    void SetParameterValue(ParameterValueT&& value) { m_parameterValueHasBeenSet = true; m_parameterValue = std::forward<ParameterValueT>(value); }
    template<typename ParameterValueT = Aws::String>
    Parameter& WithParameterValue(ParameterValueT&& value) { SetParameterValue(std::forward<ParameterValueT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>During a stack update, use the existing parameter value that the stack is
     * using for a given parameter key. If you specify <code>true</code>, do not
     * specify a parameter value.</p>
     */
    inline bool GetUsePreviousValue() const { return m_usePreviousValue; }
    inline bool UsePreviousValueHasBeenSet() const { return m_usePreviousValueHasBeenSet; }
    inline void SetUsePreviousValue(bool value) { m_usePreviousValueHasBeenSet = true; m_usePreviousValue = value; }
    inline Parameter& WithUsePreviousValue(bool value) { SetUsePreviousValue(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Read-only. The value that corresponds to a Systems Manager parameter key.
     * This field is returned only for Systems Manager parameter types in the template.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/cloudformation-supplied-parameter-types.html">Specify
     * existing resources at runtime with CloudFormation-supplied parameter types</a>
     * in the <i>CloudFormation User Guide</i>.</p>
     */
    inline const Aws::String& GetResolvedValue() const { return m_resolvedValue; }
    inline bool ResolvedValueHasBeenSet() const { return m_resolvedValueHasBeenSet; }
    template<typename ResolvedValueT = Aws::String>
    void SetResolvedValue(ResolvedValueT&& value) { m_resolvedValueHasBeenSet = true; m_resolvedValue = std::forward<ResolvedValueT>(value); }
    template<typename ResolvedValueT = Aws::String>
    Parameter& WithResolvedValue(ResolvedValueT&& value) { SetResolvedValue(std::forward<ResolvedValueT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_parameterKey;
    bool m_parameterKeyHasBeenSet = false;

    Aws::String m_parameterValue;
    bool m_parameterValueHasBeenSet = false;

    bool m_usePreviousValue{false};
    bool m_usePreviousValueHasBeenSet = false;

    Aws::String m_resolvedValue;
    bool m_resolvedValueHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
