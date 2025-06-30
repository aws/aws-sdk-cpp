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
   * <p>Contains information about the module from which the resource was created, if
   * the resource was created from a module included in the stack template.</p>
   * <p>For more information about modules, see <a
   * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/modules.html">Create
   * reusable resource configurations that can be included across templates with
   * CloudFormation modules</a> in the <i>CloudFormation User
   * Guide</i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/ModuleInfo">AWS
   * API Reference</a></p>
   */
  class ModuleInfo
  {
  public:
    AWS_CLOUDFORMATION_API ModuleInfo() = default;
    AWS_CLOUDFORMATION_API ModuleInfo(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDFORMATION_API ModuleInfo& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDFORMATION_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_CLOUDFORMATION_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>A concatenated list of the module type or types that contains the resource.
     * Module types are listed starting with the inner-most nested module, and
     * separated by <code>/</code>.</p> <p>In the following example, the resource was
     * created from a module of type <code>AWS::First::Example::MODULE</code>, that's
     * nested inside a parent module of type
     * <code>AWS::Second::Example::MODULE</code>.</p> <p>
     * <code>AWS::First::Example::MODULE/AWS::Second::Example::MODULE</code> </p>
     */
    inline const Aws::String& GetTypeHierarchy() const { return m_typeHierarchy; }
    inline bool TypeHierarchyHasBeenSet() const { return m_typeHierarchyHasBeenSet; }
    template<typename TypeHierarchyT = Aws::String>
    void SetTypeHierarchy(TypeHierarchyT&& value) { m_typeHierarchyHasBeenSet = true; m_typeHierarchy = std::forward<TypeHierarchyT>(value); }
    template<typename TypeHierarchyT = Aws::String>
    ModuleInfo& WithTypeHierarchy(TypeHierarchyT&& value) { SetTypeHierarchy(std::forward<TypeHierarchyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A concatenated list of the logical IDs of the module or modules that contains
     * the resource. Modules are listed starting with the inner-most nested module, and
     * separated by <code>/</code>.</p> <p>In the following example, the resource was
     * created from a module, <code>moduleA</code>, that's nested inside a parent
     * module, <code>moduleB</code>.</p> <p> <code>moduleA/moduleB</code> </p> <p>For
     * more information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/module-ref-resources.html">Reference
     * module resources in CloudFormation templates</a> in the <i>CloudFormation User
     * Guide</i>.</p>
     */
    inline const Aws::String& GetLogicalIdHierarchy() const { return m_logicalIdHierarchy; }
    inline bool LogicalIdHierarchyHasBeenSet() const { return m_logicalIdHierarchyHasBeenSet; }
    template<typename LogicalIdHierarchyT = Aws::String>
    void SetLogicalIdHierarchy(LogicalIdHierarchyT&& value) { m_logicalIdHierarchyHasBeenSet = true; m_logicalIdHierarchy = std::forward<LogicalIdHierarchyT>(value); }
    template<typename LogicalIdHierarchyT = Aws::String>
    ModuleInfo& WithLogicalIdHierarchy(LogicalIdHierarchyT&& value) { SetLogicalIdHierarchy(std::forward<LogicalIdHierarchyT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_typeHierarchy;
    bool m_typeHierarchyHasBeenSet = false;

    Aws::String m_logicalIdHierarchy;
    bool m_logicalIdHierarchyHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
