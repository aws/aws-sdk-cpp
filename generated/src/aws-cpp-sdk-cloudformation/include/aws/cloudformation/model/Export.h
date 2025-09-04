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
   * <p>The <code>Export</code> structure describes the exported output values for a
   * stack.</p> <p>For more information, see <a
   * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/using-cfn-stack-exports.html">Get
   * exported outputs from a deployed CloudFormation stack</a>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/Export">AWS
   * API Reference</a></p>
   */
  class Export
  {
  public:
    AWS_CLOUDFORMATION_API Export() = default;
    AWS_CLOUDFORMATION_API Export(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDFORMATION_API Export& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDFORMATION_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_CLOUDFORMATION_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The stack that contains the exported output name and value.</p>
     */
    inline const Aws::String& GetExportingStackId() const { return m_exportingStackId; }
    inline bool ExportingStackIdHasBeenSet() const { return m_exportingStackIdHasBeenSet; }
    template<typename ExportingStackIdT = Aws::String>
    void SetExportingStackId(ExportingStackIdT&& value) { m_exportingStackIdHasBeenSet = true; m_exportingStackId = std::forward<ExportingStackIdT>(value); }
    template<typename ExportingStackIdT = Aws::String>
    Export& WithExportingStackId(ExportingStackIdT&& value) { SetExportingStackId(std::forward<ExportingStackIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of exported output value. Use this name and the
     * <code>Fn::ImportValue</code> function to import the associated value into other
     * stacks. The name is defined in the <code>Export</code> field in the associated
     * stack's <code>Outputs</code> section.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    Export& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value of the exported output, such as a resource physical ID. This value
     * is defined in the <code>Export</code> field in the associated stack's
     * <code>Outputs</code> section.</p>
     */
    inline const Aws::String& GetValue() const { return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    template<typename ValueT = Aws::String>
    void SetValue(ValueT&& value) { m_valueHasBeenSet = true; m_value = std::forward<ValueT>(value); }
    template<typename ValueT = Aws::String>
    Export& WithValue(ValueT&& value) { SetValue(std::forward<ValueT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_exportingStackId;
    bool m_exportingStackIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
