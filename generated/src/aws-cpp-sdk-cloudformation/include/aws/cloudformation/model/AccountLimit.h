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
   * <p>Describes the current CloudFormation limits for your account.</p>
   * <p>CloudFormation has the following limits per account:</p> <ul> <li> <p>Number
   * of concurrent resources</p> </li> <li> <p>Number of stacks</p> </li> <li>
   * <p>Number of stack outputs</p> </li> </ul> <p>For more information, see <a
   * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/cloudformation-limits.html">Understand
   * CloudFormation quotas</a> in the <i>CloudFormation User Guide</i>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/AccountLimit">AWS
   * API Reference</a></p>
   */
  class AccountLimit
  {
  public:
    AWS_CLOUDFORMATION_API AccountLimit() = default;
    AWS_CLOUDFORMATION_API AccountLimit(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDFORMATION_API AccountLimit& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDFORMATION_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_CLOUDFORMATION_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The name of the account limit.</p> <p>Values:
     * <code>ConcurrentResourcesLimit</code> | <code>StackLimit</code> |
     * <code>StackOutputsLimit</code> </p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    AccountLimit& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value that's associated with the account limit name.</p>
     */
    inline int GetValue() const { return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    inline void SetValue(int value) { m_valueHasBeenSet = true; m_value = value; }
    inline AccountLimit& WithValue(int value) { SetValue(value); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    int m_value{0};
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
