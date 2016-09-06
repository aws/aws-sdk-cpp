/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#pragma once
#include <aws/cloudformation/CloudFormation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>

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
   * <p>The Parameter data type.</p>
   */
  class AWS_CLOUDFORMATION_API Parameter
  {
  public:
    Parameter();
    Parameter(const Aws::Utils::Xml::XmlNode& xmlNode);
    Parameter& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;

    /**
     * <p>The key associated with the parameter. If you don't specify a key and value
     * for a particular parameter, AWS CloudFormation uses the default value that is
     * specified in your template.</p>
     */
    inline const Aws::String& GetParameterKey() const{ return m_parameterKey; }

    /**
     * <p>The key associated with the parameter. If you don't specify a key and value
     * for a particular parameter, AWS CloudFormation uses the default value that is
     * specified in your template.</p>
     */
    inline void SetParameterKey(const Aws::String& value) { m_parameterKeyHasBeenSet = true; m_parameterKey = value; }

    /**
     * <p>The key associated with the parameter. If you don't specify a key and value
     * for a particular parameter, AWS CloudFormation uses the default value that is
     * specified in your template.</p>
     */
    inline void SetParameterKey(Aws::String&& value) { m_parameterKeyHasBeenSet = true; m_parameterKey = value; }

    /**
     * <p>The key associated with the parameter. If you don't specify a key and value
     * for a particular parameter, AWS CloudFormation uses the default value that is
     * specified in your template.</p>
     */
    inline void SetParameterKey(const char* value) { m_parameterKeyHasBeenSet = true; m_parameterKey.assign(value); }

    /**
     * <p>The key associated with the parameter. If you don't specify a key and value
     * for a particular parameter, AWS CloudFormation uses the default value that is
     * specified in your template.</p>
     */
    inline Parameter& WithParameterKey(const Aws::String& value) { SetParameterKey(value); return *this;}

    /**
     * <p>The key associated with the parameter. If you don't specify a key and value
     * for a particular parameter, AWS CloudFormation uses the default value that is
     * specified in your template.</p>
     */
    inline Parameter& WithParameterKey(Aws::String&& value) { SetParameterKey(value); return *this;}

    /**
     * <p>The key associated with the parameter. If you don't specify a key and value
     * for a particular parameter, AWS CloudFormation uses the default value that is
     * specified in your template.</p>
     */
    inline Parameter& WithParameterKey(const char* value) { SetParameterKey(value); return *this;}

    /**
     * <p>The value associated with the parameter.</p>
     */
    inline const Aws::String& GetParameterValue() const{ return m_parameterValue; }

    /**
     * <p>The value associated with the parameter.</p>
     */
    inline void SetParameterValue(const Aws::String& value) { m_parameterValueHasBeenSet = true; m_parameterValue = value; }

    /**
     * <p>The value associated with the parameter.</p>
     */
    inline void SetParameterValue(Aws::String&& value) { m_parameterValueHasBeenSet = true; m_parameterValue = value; }

    /**
     * <p>The value associated with the parameter.</p>
     */
    inline void SetParameterValue(const char* value) { m_parameterValueHasBeenSet = true; m_parameterValue.assign(value); }

    /**
     * <p>The value associated with the parameter.</p>
     */
    inline Parameter& WithParameterValue(const Aws::String& value) { SetParameterValue(value); return *this;}

    /**
     * <p>The value associated with the parameter.</p>
     */
    inline Parameter& WithParameterValue(Aws::String&& value) { SetParameterValue(value); return *this;}

    /**
     * <p>The value associated with the parameter.</p>
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
    inline void SetUsePreviousValue(bool value) { m_usePreviousValueHasBeenSet = true; m_usePreviousValue = value; }

    /**
     * <p>During a stack update, use the existing parameter value that the stack is
     * using for a given parameter key. If you specify <code>true</code>, do not
     * specify a parameter value.</p>
     */
    inline Parameter& WithUsePreviousValue(bool value) { SetUsePreviousValue(value); return *this;}

  private:
    Aws::String m_parameterKey;
    bool m_parameterKeyHasBeenSet;
    Aws::String m_parameterValue;
    bool m_parameterValueHasBeenSet;
    bool m_usePreviousValue;
    bool m_usePreviousValueHasBeenSet;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
