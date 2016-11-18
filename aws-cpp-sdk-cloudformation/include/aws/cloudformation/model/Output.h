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
   * <p>The Output data type.</p>
   */
  class AWS_CLOUDFORMATION_API Output
  {
  public:
    Output();
    Output(const Aws::Utils::Xml::XmlNode& xmlNode);
    Output& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;

    /**
     * <p>The key associated with the output.</p>
     */
    inline const Aws::String& GetOutputKey() const{ return m_outputKey; }

    /**
     * <p>The key associated with the output.</p>
     */
    inline void SetOutputKey(const Aws::String& value) { m_outputKeyHasBeenSet = true; m_outputKey = value; }

    /**
     * <p>The key associated with the output.</p>
     */
    inline void SetOutputKey(Aws::String&& value) { m_outputKeyHasBeenSet = true; m_outputKey = value; }

    /**
     * <p>The key associated with the output.</p>
     */
    inline void SetOutputKey(const char* value) { m_outputKeyHasBeenSet = true; m_outputKey.assign(value); }

    /**
     * <p>The key associated with the output.</p>
     */
    inline Output& WithOutputKey(const Aws::String& value) { SetOutputKey(value); return *this;}

    /**
     * <p>The key associated with the output.</p>
     */
    inline Output& WithOutputKey(Aws::String&& value) { SetOutputKey(value); return *this;}

    /**
     * <p>The key associated with the output.</p>
     */
    inline Output& WithOutputKey(const char* value) { SetOutputKey(value); return *this;}

    /**
     * <p>The value associated with the output.</p>
     */
    inline const Aws::String& GetOutputValue() const{ return m_outputValue; }

    /**
     * <p>The value associated with the output.</p>
     */
    inline void SetOutputValue(const Aws::String& value) { m_outputValueHasBeenSet = true; m_outputValue = value; }

    /**
     * <p>The value associated with the output.</p>
     */
    inline void SetOutputValue(Aws::String&& value) { m_outputValueHasBeenSet = true; m_outputValue = value; }

    /**
     * <p>The value associated with the output.</p>
     */
    inline void SetOutputValue(const char* value) { m_outputValueHasBeenSet = true; m_outputValue.assign(value); }

    /**
     * <p>The value associated with the output.</p>
     */
    inline Output& WithOutputValue(const Aws::String& value) { SetOutputValue(value); return *this;}

    /**
     * <p>The value associated with the output.</p>
     */
    inline Output& WithOutputValue(Aws::String&& value) { SetOutputValue(value); return *this;}

    /**
     * <p>The value associated with the output.</p>
     */
    inline Output& WithOutputValue(const char* value) { SetOutputValue(value); return *this;}

    /**
     * <p>User defined description associated with the output.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>User defined description associated with the output.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>User defined description associated with the output.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>User defined description associated with the output.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>User defined description associated with the output.</p>
     */
    inline Output& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>User defined description associated with the output.</p>
     */
    inline Output& WithDescription(Aws::String&& value) { SetDescription(value); return *this;}

    /**
     * <p>User defined description associated with the output.</p>
     */
    inline Output& WithDescription(const char* value) { SetDescription(value); return *this;}

  private:
    Aws::String m_outputKey;
    bool m_outputKeyHasBeenSet;
    Aws::String m_outputValue;
    bool m_outputValueHasBeenSet;
    Aws::String m_description;
    bool m_descriptionHasBeenSet;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
