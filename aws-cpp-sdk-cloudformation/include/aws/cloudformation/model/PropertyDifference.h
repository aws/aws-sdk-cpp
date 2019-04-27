/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
   * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/using-cfn-stack-drift.html">Detecting
   * Unregulated Configuration Changes to Stacks and Resources</a>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/PropertyDifference">AWS
   * API Reference</a></p>
   */
  class AWS_CLOUDFORMATION_API PropertyDifference
  {
  public:
    PropertyDifference();
    PropertyDifference(const Aws::Utils::Xml::XmlNode& xmlNode);
    PropertyDifference& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The fully-qualified path to the resource property.</p>
     */
    inline const Aws::String& GetPropertyPath() const{ return m_propertyPath; }

    /**
     * <p>The fully-qualified path to the resource property.</p>
     */
    inline bool PropertyPathHasBeenSet() const { return m_propertyPathHasBeenSet; }

    /**
     * <p>The fully-qualified path to the resource property.</p>
     */
    inline void SetPropertyPath(const Aws::String& value) { m_propertyPathHasBeenSet = true; m_propertyPath = value; }

    /**
     * <p>The fully-qualified path to the resource property.</p>
     */
    inline void SetPropertyPath(Aws::String&& value) { m_propertyPathHasBeenSet = true; m_propertyPath = std::move(value); }

    /**
     * <p>The fully-qualified path to the resource property.</p>
     */
    inline void SetPropertyPath(const char* value) { m_propertyPathHasBeenSet = true; m_propertyPath.assign(value); }

    /**
     * <p>The fully-qualified path to the resource property.</p>
     */
    inline PropertyDifference& WithPropertyPath(const Aws::String& value) { SetPropertyPath(value); return *this;}

    /**
     * <p>The fully-qualified path to the resource property.</p>
     */
    inline PropertyDifference& WithPropertyPath(Aws::String&& value) { SetPropertyPath(std::move(value)); return *this;}

    /**
     * <p>The fully-qualified path to the resource property.</p>
     */
    inline PropertyDifference& WithPropertyPath(const char* value) { SetPropertyPath(value); return *this;}


    /**
     * <p>The expected property value of the resource property, as defined in the stack
     * template and any values specified as template parameters.</p>
     */
    inline const Aws::String& GetExpectedValue() const{ return m_expectedValue; }

    /**
     * <p>The expected property value of the resource property, as defined in the stack
     * template and any values specified as template parameters.</p>
     */
    inline bool ExpectedValueHasBeenSet() const { return m_expectedValueHasBeenSet; }

    /**
     * <p>The expected property value of the resource property, as defined in the stack
     * template and any values specified as template parameters.</p>
     */
    inline void SetExpectedValue(const Aws::String& value) { m_expectedValueHasBeenSet = true; m_expectedValue = value; }

    /**
     * <p>The expected property value of the resource property, as defined in the stack
     * template and any values specified as template parameters.</p>
     */
    inline void SetExpectedValue(Aws::String&& value) { m_expectedValueHasBeenSet = true; m_expectedValue = std::move(value); }

    /**
     * <p>The expected property value of the resource property, as defined in the stack
     * template and any values specified as template parameters.</p>
     */
    inline void SetExpectedValue(const char* value) { m_expectedValueHasBeenSet = true; m_expectedValue.assign(value); }

    /**
     * <p>The expected property value of the resource property, as defined in the stack
     * template and any values specified as template parameters.</p>
     */
    inline PropertyDifference& WithExpectedValue(const Aws::String& value) { SetExpectedValue(value); return *this;}

    /**
     * <p>The expected property value of the resource property, as defined in the stack
     * template and any values specified as template parameters.</p>
     */
    inline PropertyDifference& WithExpectedValue(Aws::String&& value) { SetExpectedValue(std::move(value)); return *this;}

    /**
     * <p>The expected property value of the resource property, as defined in the stack
     * template and any values specified as template parameters.</p>
     */
    inline PropertyDifference& WithExpectedValue(const char* value) { SetExpectedValue(value); return *this;}


    /**
     * <p>The actual property value of the resource property.</p>
     */
    inline const Aws::String& GetActualValue() const{ return m_actualValue; }

    /**
     * <p>The actual property value of the resource property.</p>
     */
    inline bool ActualValueHasBeenSet() const { return m_actualValueHasBeenSet; }

    /**
     * <p>The actual property value of the resource property.</p>
     */
    inline void SetActualValue(const Aws::String& value) { m_actualValueHasBeenSet = true; m_actualValue = value; }

    /**
     * <p>The actual property value of the resource property.</p>
     */
    inline void SetActualValue(Aws::String&& value) { m_actualValueHasBeenSet = true; m_actualValue = std::move(value); }

    /**
     * <p>The actual property value of the resource property.</p>
     */
    inline void SetActualValue(const char* value) { m_actualValueHasBeenSet = true; m_actualValue.assign(value); }

    /**
     * <p>The actual property value of the resource property.</p>
     */
    inline PropertyDifference& WithActualValue(const Aws::String& value) { SetActualValue(value); return *this;}

    /**
     * <p>The actual property value of the resource property.</p>
     */
    inline PropertyDifference& WithActualValue(Aws::String&& value) { SetActualValue(std::move(value)); return *this;}

    /**
     * <p>The actual property value of the resource property.</p>
     */
    inline PropertyDifference& WithActualValue(const char* value) { SetActualValue(value); return *this;}


    /**
     * <p>The type of property difference.</p> <ul> <li> <p> <code>ADD</code>: A value
     * has been added to a resource property that is an array or list data type.</p>
     * </li> <li> <p> <code>REMOVE</code>: The property has been removed from the
     * current resource configuration.</p> </li> <li> <p> <code>NOT_EQUAL</code>: The
     * current property value differs from its expected value (as defined in the stack
     * template and any values specified as template parameters).</p> </li> </ul>
     */
    inline const DifferenceType& GetDifferenceType() const{ return m_differenceType; }

    /**
     * <p>The type of property difference.</p> <ul> <li> <p> <code>ADD</code>: A value
     * has been added to a resource property that is an array or list data type.</p>
     * </li> <li> <p> <code>REMOVE</code>: The property has been removed from the
     * current resource configuration.</p> </li> <li> <p> <code>NOT_EQUAL</code>: The
     * current property value differs from its expected value (as defined in the stack
     * template and any values specified as template parameters).</p> </li> </ul>
     */
    inline bool DifferenceTypeHasBeenSet() const { return m_differenceTypeHasBeenSet; }

    /**
     * <p>The type of property difference.</p> <ul> <li> <p> <code>ADD</code>: A value
     * has been added to a resource property that is an array or list data type.</p>
     * </li> <li> <p> <code>REMOVE</code>: The property has been removed from the
     * current resource configuration.</p> </li> <li> <p> <code>NOT_EQUAL</code>: The
     * current property value differs from its expected value (as defined in the stack
     * template and any values specified as template parameters).</p> </li> </ul>
     */
    inline void SetDifferenceType(const DifferenceType& value) { m_differenceTypeHasBeenSet = true; m_differenceType = value; }

    /**
     * <p>The type of property difference.</p> <ul> <li> <p> <code>ADD</code>: A value
     * has been added to a resource property that is an array or list data type.</p>
     * </li> <li> <p> <code>REMOVE</code>: The property has been removed from the
     * current resource configuration.</p> </li> <li> <p> <code>NOT_EQUAL</code>: The
     * current property value differs from its expected value (as defined in the stack
     * template and any values specified as template parameters).</p> </li> </ul>
     */
    inline void SetDifferenceType(DifferenceType&& value) { m_differenceTypeHasBeenSet = true; m_differenceType = std::move(value); }

    /**
     * <p>The type of property difference.</p> <ul> <li> <p> <code>ADD</code>: A value
     * has been added to a resource property that is an array or list data type.</p>
     * </li> <li> <p> <code>REMOVE</code>: The property has been removed from the
     * current resource configuration.</p> </li> <li> <p> <code>NOT_EQUAL</code>: The
     * current property value differs from its expected value (as defined in the stack
     * template and any values specified as template parameters).</p> </li> </ul>
     */
    inline PropertyDifference& WithDifferenceType(const DifferenceType& value) { SetDifferenceType(value); return *this;}

    /**
     * <p>The type of property difference.</p> <ul> <li> <p> <code>ADD</code>: A value
     * has been added to a resource property that is an array or list data type.</p>
     * </li> <li> <p> <code>REMOVE</code>: The property has been removed from the
     * current resource configuration.</p> </li> <li> <p> <code>NOT_EQUAL</code>: The
     * current property value differs from its expected value (as defined in the stack
     * template and any values specified as template parameters).</p> </li> </ul>
     */
    inline PropertyDifference& WithDifferenceType(DifferenceType&& value) { SetDifferenceType(std::move(value)); return *this;}

  private:

    Aws::String m_propertyPath;
    bool m_propertyPathHasBeenSet;

    Aws::String m_expectedValue;
    bool m_expectedValueHasBeenSet;

    Aws::String m_actualValue;
    bool m_actualValueHasBeenSet;

    DifferenceType m_differenceType;
    bool m_differenceTypeHasBeenSet;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
