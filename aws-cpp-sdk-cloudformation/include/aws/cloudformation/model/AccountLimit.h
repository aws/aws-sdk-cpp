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
   * <p>The AccountLimit data type. </p> <p>CloudFormation has the following limits
   * per account:</p> <ul> <li> <p>Number of concurrent resources</p> </li> <li>
   * <p>Number of stacks</p> </li> <li> <p>Number of stack outputs</p> </li> </ul>
   * <p>For more information about these account limits, and other CloudFormation
   * limits, see <a
   * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/cloudformation-limits.html">AWS
   * CloudFormation Limits</a> in the <i>AWS CloudFormation User
   * Guide</i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/AccountLimit">AWS
   * API Reference</a></p>
   */
  class AWS_CLOUDFORMATION_API AccountLimit
  {
  public:
    AccountLimit();
    AccountLimit(const Aws::Utils::Xml::XmlNode& xmlNode);
    AccountLimit& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The name of the account limit.</p> <p>Values:
     * <code>ConcurrentResourcesLimit</code> | <code>StackLimit</code> |
     * <code>StackOutputsLimit</code> </p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the account limit.</p> <p>Values:
     * <code>ConcurrentResourcesLimit</code> | <code>StackLimit</code> |
     * <code>StackOutputsLimit</code> </p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the account limit.</p> <p>Values:
     * <code>ConcurrentResourcesLimit</code> | <code>StackLimit</code> |
     * <code>StackOutputsLimit</code> </p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the account limit.</p> <p>Values:
     * <code>ConcurrentResourcesLimit</code> | <code>StackLimit</code> |
     * <code>StackOutputsLimit</code> </p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the account limit.</p> <p>Values:
     * <code>ConcurrentResourcesLimit</code> | <code>StackLimit</code> |
     * <code>StackOutputsLimit</code> </p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the account limit.</p> <p>Values:
     * <code>ConcurrentResourcesLimit</code> | <code>StackLimit</code> |
     * <code>StackOutputsLimit</code> </p>
     */
    inline AccountLimit& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the account limit.</p> <p>Values:
     * <code>ConcurrentResourcesLimit</code> | <code>StackLimit</code> |
     * <code>StackOutputsLimit</code> </p>
     */
    inline AccountLimit& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the account limit.</p> <p>Values:
     * <code>ConcurrentResourcesLimit</code> | <code>StackLimit</code> |
     * <code>StackOutputsLimit</code> </p>
     */
    inline AccountLimit& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The value that is associated with the account limit name.</p>
     */
    inline int GetValue() const{ return m_value; }

    /**
     * <p>The value that is associated with the account limit name.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>The value that is associated with the account limit name.</p>
     */
    inline void SetValue(int value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The value that is associated with the account limit name.</p>
     */
    inline AccountLimit& WithValue(int value) { SetValue(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;

    int m_value;
    bool m_valueHasBeenSet;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
