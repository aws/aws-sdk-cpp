﻿/*
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
   * <p>The <code>Export</code> structure describes the exported output values for a
   * stack.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/Export">AWS
   * API Reference</a></p>
   */
  class AWS_CLOUDFORMATION_API Export
  {
  public:
    Export();
    Export(const Aws::Utils::Xml::XmlNode& xmlNode);
    Export& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;

    /**
     * <p>The stack that contains the exported output name and value.</p>
     */
    inline const Aws::String& GetExportingStackId() const{ return m_exportingStackId; }

    /**
     * <p>The stack that contains the exported output name and value.</p>
     */
    inline void SetExportingStackId(const Aws::String& value) { m_exportingStackIdHasBeenSet = true; m_exportingStackId = value; }

    /**
     * <p>The stack that contains the exported output name and value.</p>
     */
    inline void SetExportingStackId(Aws::String&& value) { m_exportingStackIdHasBeenSet = true; m_exportingStackId = value; }

    /**
     * <p>The stack that contains the exported output name and value.</p>
     */
    inline void SetExportingStackId(const char* value) { m_exportingStackIdHasBeenSet = true; m_exportingStackId.assign(value); }

    /**
     * <p>The stack that contains the exported output name and value.</p>
     */
    inline Export& WithExportingStackId(const Aws::String& value) { SetExportingStackId(value); return *this;}

    /**
     * <p>The stack that contains the exported output name and value.</p>
     */
    inline Export& WithExportingStackId(Aws::String&& value) { SetExportingStackId(value); return *this;}

    /**
     * <p>The stack that contains the exported output name and value.</p>
     */
    inline Export& WithExportingStackId(const char* value) { SetExportingStackId(value); return *this;}

    /**
     * <p>The name of exported output value. Use this name and the
     * <code>Fn::ImportValue</code> function to import the associated value into other
     * stacks. The name is defined in the <code>Export</code> field in the associated
     * stack's <code>Outputs</code> section.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of exported output value. Use this name and the
     * <code>Fn::ImportValue</code> function to import the associated value into other
     * stacks. The name is defined in the <code>Export</code> field in the associated
     * stack's <code>Outputs</code> section.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of exported output value. Use this name and the
     * <code>Fn::ImportValue</code> function to import the associated value into other
     * stacks. The name is defined in the <code>Export</code> field in the associated
     * stack's <code>Outputs</code> section.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of exported output value. Use this name and the
     * <code>Fn::ImportValue</code> function to import the associated value into other
     * stacks. The name is defined in the <code>Export</code> field in the associated
     * stack's <code>Outputs</code> section.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of exported output value. Use this name and the
     * <code>Fn::ImportValue</code> function to import the associated value into other
     * stacks. The name is defined in the <code>Export</code> field in the associated
     * stack's <code>Outputs</code> section.</p>
     */
    inline Export& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of exported output value. Use this name and the
     * <code>Fn::ImportValue</code> function to import the associated value into other
     * stacks. The name is defined in the <code>Export</code> field in the associated
     * stack's <code>Outputs</code> section.</p>
     */
    inline Export& WithName(Aws::String&& value) { SetName(value); return *this;}

    /**
     * <p>The name of exported output value. Use this name and the
     * <code>Fn::ImportValue</code> function to import the associated value into other
     * stacks. The name is defined in the <code>Export</code> field in the associated
     * stack's <code>Outputs</code> section.</p>
     */
    inline Export& WithName(const char* value) { SetName(value); return *this;}

    /**
     * <p>The value of the exported output, such as a resource physical ID. This value
     * is defined in the <code>Export</code> field in the associated stack's
     * <code>Outputs</code> section.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * <p>The value of the exported output, such as a resource physical ID. This value
     * is defined in the <code>Export</code> field in the associated stack's
     * <code>Outputs</code> section.</p>
     */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The value of the exported output, such as a resource physical ID. This value
     * is defined in the <code>Export</code> field in the associated stack's
     * <code>Outputs</code> section.</p>
     */
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The value of the exported output, such as a resource physical ID. This value
     * is defined in the <code>Export</code> field in the associated stack's
     * <code>Outputs</code> section.</p>
     */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /**
     * <p>The value of the exported output, such as a resource physical ID. This value
     * is defined in the <code>Export</code> field in the associated stack's
     * <code>Outputs</code> section.</p>
     */
    inline Export& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p>The value of the exported output, such as a resource physical ID. This value
     * is defined in the <code>Export</code> field in the associated stack's
     * <code>Outputs</code> section.</p>
     */
    inline Export& WithValue(Aws::String&& value) { SetValue(value); return *this;}

    /**
     * <p>The value of the exported output, such as a resource physical ID. This value
     * is defined in the <code>Export</code> field in the associated stack's
     * <code>Outputs</code> section.</p>
     */
    inline Export& WithValue(const char* value) { SetValue(value); return *this;}

  private:
    Aws::String m_exportingStackId;
    bool m_exportingStackIdHasBeenSet;
    Aws::String m_name;
    bool m_nameHasBeenSet;
    Aws::String m_value;
    bool m_valueHasBeenSet;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
