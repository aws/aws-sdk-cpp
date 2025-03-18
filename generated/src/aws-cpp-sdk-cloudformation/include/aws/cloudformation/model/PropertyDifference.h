/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudformation/CloudFormation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cloudformation/model/DifferenceType.h>
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
   * <p>Information about a resource property whose actual value differs from its
   * expected value, as defined in the stack template and any values specified as
   * template parameters. These will be present only for resources whose
   * <code>StackResourceDriftStatus</code> is <code>MODIFIED</code>. For more
   * information, see <a
   * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/using-cfn-stack-drift.html">Detect
   * unmanaged configuration changes to stacks and resources with drift
   * detection</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/PropertyDifference">AWS
   * API Reference</a></p>
   */
  class PropertyDifference
  {
  public:
    AWS_CLOUDFORMATION_API PropertyDifference() = default;
    AWS_CLOUDFORMATION_API PropertyDifference(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDFORMATION_API PropertyDifference& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDFORMATION_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_CLOUDFORMATION_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The fully-qualified path to the resource property.</p>
     */
    inline const Aws::String& GetPropertyPath() const { return m_propertyPath; }
    inline bool PropertyPathHasBeenSet() const { return m_propertyPathHasBeenSet; }
    template<typename PropertyPathT = Aws::String>
    void SetPropertyPath(PropertyPathT&& value) { m_propertyPathHasBeenSet = true; m_propertyPath = std::forward<PropertyPathT>(value); }
    template<typename PropertyPathT = Aws::String>
    PropertyDifference& WithPropertyPath(PropertyPathT&& value) { SetPropertyPath(std::forward<PropertyPathT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The expected property value of the resource property, as defined in the stack
     * template and any values specified as template parameters.</p>
     */
    inline const Aws::String& GetExpectedValue() const { return m_expectedValue; }
    inline bool ExpectedValueHasBeenSet() const { return m_expectedValueHasBeenSet; }
    template<typename ExpectedValueT = Aws::String>
    void SetExpectedValue(ExpectedValueT&& value) { m_expectedValueHasBeenSet = true; m_expectedValue = std::forward<ExpectedValueT>(value); }
    template<typename ExpectedValueT = Aws::String>
    PropertyDifference& WithExpectedValue(ExpectedValueT&& value) { SetExpectedValue(std::forward<ExpectedValueT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The actual property value of the resource property.</p>
     */
    inline const Aws::String& GetActualValue() const { return m_actualValue; }
    inline bool ActualValueHasBeenSet() const { return m_actualValueHasBeenSet; }
    template<typename ActualValueT = Aws::String>
    void SetActualValue(ActualValueT&& value) { m_actualValueHasBeenSet = true; m_actualValue = std::forward<ActualValueT>(value); }
    template<typename ActualValueT = Aws::String>
    PropertyDifference& WithActualValue(ActualValueT&& value) { SetActualValue(std::forward<ActualValueT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of property difference.</p> <ul> <li> <p> <code>ADD</code>: A value
     * has been added to a resource property that's an array or list data type.</p>
     * </li> <li> <p> <code>REMOVE</code>: The property has been removed from the
     * current resource configuration.</p> </li> <li> <p> <code>NOT_EQUAL</code>: The
     * current property value differs from its expected value (as defined in the stack
     * template and any values specified as template parameters).</p> </li> </ul>
     */
    inline DifferenceType GetDifferenceType() const { return m_differenceType; }
    inline bool DifferenceTypeHasBeenSet() const { return m_differenceTypeHasBeenSet; }
    inline void SetDifferenceType(DifferenceType value) { m_differenceTypeHasBeenSet = true; m_differenceType = value; }
    inline PropertyDifference& WithDifferenceType(DifferenceType value) { SetDifferenceType(value); return *this;}
    ///@}
  private:

    Aws::String m_propertyPath;
    bool m_propertyPathHasBeenSet = false;

    Aws::String m_expectedValue;
    bool m_expectedValueHasBeenSet = false;

    Aws::String m_actualValue;
    bool m_actualValueHasBeenSet = false;

    DifferenceType m_differenceType{DifferenceType::NOT_SET};
    bool m_differenceTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
