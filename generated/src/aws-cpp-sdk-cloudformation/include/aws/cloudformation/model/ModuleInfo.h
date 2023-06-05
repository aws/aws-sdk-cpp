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
   * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/modules.html">Using
   * modules to encapsulate and reuse resource configurations</a> in the
   * <i>CloudFormation User Guide</i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/ModuleInfo">AWS
   * API Reference</a></p>
   */
  class ModuleInfo
  {
  public:
    AWS_CLOUDFORMATION_API ModuleInfo();
    AWS_CLOUDFORMATION_API ModuleInfo(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDFORMATION_API ModuleInfo& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDFORMATION_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_CLOUDFORMATION_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>A concatenated list of the module type or types containing the resource.
     * Module types are listed starting with the inner-most nested module, and
     * separated by <code>/</code>.</p> <p>In the following example, the resource was
     * created from a module of type <code>AWS::First::Example::MODULE</code>, that's
     * nested inside a parent module of type
     * <code>AWS::Second::Example::MODULE</code>.</p> <p>
     * <code>AWS::First::Example::MODULE/AWS::Second::Example::MODULE</code> </p>
     */
    inline const Aws::String& GetTypeHierarchy() const{ return m_typeHierarchy; }

    /**
     * <p>A concatenated list of the module type or types containing the resource.
     * Module types are listed starting with the inner-most nested module, and
     * separated by <code>/</code>.</p> <p>In the following example, the resource was
     * created from a module of type <code>AWS::First::Example::MODULE</code>, that's
     * nested inside a parent module of type
     * <code>AWS::Second::Example::MODULE</code>.</p> <p>
     * <code>AWS::First::Example::MODULE/AWS::Second::Example::MODULE</code> </p>
     */
    inline bool TypeHierarchyHasBeenSet() const { return m_typeHierarchyHasBeenSet; }

    /**
     * <p>A concatenated list of the module type or types containing the resource.
     * Module types are listed starting with the inner-most nested module, and
     * separated by <code>/</code>.</p> <p>In the following example, the resource was
     * created from a module of type <code>AWS::First::Example::MODULE</code>, that's
     * nested inside a parent module of type
     * <code>AWS::Second::Example::MODULE</code>.</p> <p>
     * <code>AWS::First::Example::MODULE/AWS::Second::Example::MODULE</code> </p>
     */
    inline void SetTypeHierarchy(const Aws::String& value) { m_typeHierarchyHasBeenSet = true; m_typeHierarchy = value; }

    /**
     * <p>A concatenated list of the module type or types containing the resource.
     * Module types are listed starting with the inner-most nested module, and
     * separated by <code>/</code>.</p> <p>In the following example, the resource was
     * created from a module of type <code>AWS::First::Example::MODULE</code>, that's
     * nested inside a parent module of type
     * <code>AWS::Second::Example::MODULE</code>.</p> <p>
     * <code>AWS::First::Example::MODULE/AWS::Second::Example::MODULE</code> </p>
     */
    inline void SetTypeHierarchy(Aws::String&& value) { m_typeHierarchyHasBeenSet = true; m_typeHierarchy = std::move(value); }

    /**
     * <p>A concatenated list of the module type or types containing the resource.
     * Module types are listed starting with the inner-most nested module, and
     * separated by <code>/</code>.</p> <p>In the following example, the resource was
     * created from a module of type <code>AWS::First::Example::MODULE</code>, that's
     * nested inside a parent module of type
     * <code>AWS::Second::Example::MODULE</code>.</p> <p>
     * <code>AWS::First::Example::MODULE/AWS::Second::Example::MODULE</code> </p>
     */
    inline void SetTypeHierarchy(const char* value) { m_typeHierarchyHasBeenSet = true; m_typeHierarchy.assign(value); }

    /**
     * <p>A concatenated list of the module type or types containing the resource.
     * Module types are listed starting with the inner-most nested module, and
     * separated by <code>/</code>.</p> <p>In the following example, the resource was
     * created from a module of type <code>AWS::First::Example::MODULE</code>, that's
     * nested inside a parent module of type
     * <code>AWS::Second::Example::MODULE</code>.</p> <p>
     * <code>AWS::First::Example::MODULE/AWS::Second::Example::MODULE</code> </p>
     */
    inline ModuleInfo& WithTypeHierarchy(const Aws::String& value) { SetTypeHierarchy(value); return *this;}

    /**
     * <p>A concatenated list of the module type or types containing the resource.
     * Module types are listed starting with the inner-most nested module, and
     * separated by <code>/</code>.</p> <p>In the following example, the resource was
     * created from a module of type <code>AWS::First::Example::MODULE</code>, that's
     * nested inside a parent module of type
     * <code>AWS::Second::Example::MODULE</code>.</p> <p>
     * <code>AWS::First::Example::MODULE/AWS::Second::Example::MODULE</code> </p>
     */
    inline ModuleInfo& WithTypeHierarchy(Aws::String&& value) { SetTypeHierarchy(std::move(value)); return *this;}

    /**
     * <p>A concatenated list of the module type or types containing the resource.
     * Module types are listed starting with the inner-most nested module, and
     * separated by <code>/</code>.</p> <p>In the following example, the resource was
     * created from a module of type <code>AWS::First::Example::MODULE</code>, that's
     * nested inside a parent module of type
     * <code>AWS::Second::Example::MODULE</code>.</p> <p>
     * <code>AWS::First::Example::MODULE/AWS::Second::Example::MODULE</code> </p>
     */
    inline ModuleInfo& WithTypeHierarchy(const char* value) { SetTypeHierarchy(value); return *this;}


    /**
     * <p>A concatenated list of the logical IDs of the module or modules containing
     * the resource. Modules are listed starting with the inner-most nested module, and
     * separated by <code>/</code>.</p> <p>In the following example, the resource was
     * created from a module, <code>moduleA</code>, that's nested inside a parent
     * module, <code>moduleB</code>.</p> <p> <code>moduleA/moduleB</code> </p> <p>For
     * more information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/modules.html#module-ref-resources">Referencing
     * resources in a module</a> in the <i>CloudFormation User Guide</i>.</p>
     */
    inline const Aws::String& GetLogicalIdHierarchy() const{ return m_logicalIdHierarchy; }

    /**
     * <p>A concatenated list of the logical IDs of the module or modules containing
     * the resource. Modules are listed starting with the inner-most nested module, and
     * separated by <code>/</code>.</p> <p>In the following example, the resource was
     * created from a module, <code>moduleA</code>, that's nested inside a parent
     * module, <code>moduleB</code>.</p> <p> <code>moduleA/moduleB</code> </p> <p>For
     * more information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/modules.html#module-ref-resources">Referencing
     * resources in a module</a> in the <i>CloudFormation User Guide</i>.</p>
     */
    inline bool LogicalIdHierarchyHasBeenSet() const { return m_logicalIdHierarchyHasBeenSet; }

    /**
     * <p>A concatenated list of the logical IDs of the module or modules containing
     * the resource. Modules are listed starting with the inner-most nested module, and
     * separated by <code>/</code>.</p> <p>In the following example, the resource was
     * created from a module, <code>moduleA</code>, that's nested inside a parent
     * module, <code>moduleB</code>.</p> <p> <code>moduleA/moduleB</code> </p> <p>For
     * more information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/modules.html#module-ref-resources">Referencing
     * resources in a module</a> in the <i>CloudFormation User Guide</i>.</p>
     */
    inline void SetLogicalIdHierarchy(const Aws::String& value) { m_logicalIdHierarchyHasBeenSet = true; m_logicalIdHierarchy = value; }

    /**
     * <p>A concatenated list of the logical IDs of the module or modules containing
     * the resource. Modules are listed starting with the inner-most nested module, and
     * separated by <code>/</code>.</p> <p>In the following example, the resource was
     * created from a module, <code>moduleA</code>, that's nested inside a parent
     * module, <code>moduleB</code>.</p> <p> <code>moduleA/moduleB</code> </p> <p>For
     * more information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/modules.html#module-ref-resources">Referencing
     * resources in a module</a> in the <i>CloudFormation User Guide</i>.</p>
     */
    inline void SetLogicalIdHierarchy(Aws::String&& value) { m_logicalIdHierarchyHasBeenSet = true; m_logicalIdHierarchy = std::move(value); }

    /**
     * <p>A concatenated list of the logical IDs of the module or modules containing
     * the resource. Modules are listed starting with the inner-most nested module, and
     * separated by <code>/</code>.</p> <p>In the following example, the resource was
     * created from a module, <code>moduleA</code>, that's nested inside a parent
     * module, <code>moduleB</code>.</p> <p> <code>moduleA/moduleB</code> </p> <p>For
     * more information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/modules.html#module-ref-resources">Referencing
     * resources in a module</a> in the <i>CloudFormation User Guide</i>.</p>
     */
    inline void SetLogicalIdHierarchy(const char* value) { m_logicalIdHierarchyHasBeenSet = true; m_logicalIdHierarchy.assign(value); }

    /**
     * <p>A concatenated list of the logical IDs of the module or modules containing
     * the resource. Modules are listed starting with the inner-most nested module, and
     * separated by <code>/</code>.</p> <p>In the following example, the resource was
     * created from a module, <code>moduleA</code>, that's nested inside a parent
     * module, <code>moduleB</code>.</p> <p> <code>moduleA/moduleB</code> </p> <p>For
     * more information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/modules.html#module-ref-resources">Referencing
     * resources in a module</a> in the <i>CloudFormation User Guide</i>.</p>
     */
    inline ModuleInfo& WithLogicalIdHierarchy(const Aws::String& value) { SetLogicalIdHierarchy(value); return *this;}

    /**
     * <p>A concatenated list of the logical IDs of the module or modules containing
     * the resource. Modules are listed starting with the inner-most nested module, and
     * separated by <code>/</code>.</p> <p>In the following example, the resource was
     * created from a module, <code>moduleA</code>, that's nested inside a parent
     * module, <code>moduleB</code>.</p> <p> <code>moduleA/moduleB</code> </p> <p>For
     * more information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/modules.html#module-ref-resources">Referencing
     * resources in a module</a> in the <i>CloudFormation User Guide</i>.</p>
     */
    inline ModuleInfo& WithLogicalIdHierarchy(Aws::String&& value) { SetLogicalIdHierarchy(std::move(value)); return *this;}

    /**
     * <p>A concatenated list of the logical IDs of the module or modules containing
     * the resource. Modules are listed starting with the inner-most nested module, and
     * separated by <code>/</code>.</p> <p>In the following example, the resource was
     * created from a module, <code>moduleA</code>, that's nested inside a parent
     * module, <code>moduleB</code>.</p> <p> <code>moduleA/moduleB</code> </p> <p>For
     * more information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/modules.html#module-ref-resources">Referencing
     * resources in a module</a> in the <i>CloudFormation User Guide</i>.</p>
     */
    inline ModuleInfo& WithLogicalIdHierarchy(const char* value) { SetLogicalIdHierarchy(value); return *this;}

  private:

    Aws::String m_typeHierarchy;
    bool m_typeHierarchyHasBeenSet = false;

    Aws::String m_logicalIdHierarchy;
    bool m_logicalIdHierarchyHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
