/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/ec2/model/InstanceStateName.h>
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
namespace EC2
{
namespace Model
{

  /**
   * <p>Describes the current state of an instance.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/InstanceState">AWS
   * API Reference</a></p>
   */
  class InstanceState
  {
  public:
    AWS_EC2_API InstanceState() = default;
    AWS_EC2_API InstanceState(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API InstanceState& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The state of the instance as a 16-bit unsigned integer. </p> <p>The high byte
     * is all of the bits between 2^8 and (2^16)-1, which equals decimal values between
     * 256 and 65,535. These numerical values are used for internal purposes and should
     * be ignored.</p> <p>The low byte is all of the bits between 2^0 and (2^8)-1,
     * which equals decimal values between 0 and 255. </p> <p>The valid values for
     * instance-state-code will all be in the range of the low byte and they are:</p>
     * <ul> <li> <p> <code>0</code> : <code>pending</code> </p> </li> <li> <p>
     * <code>16</code> : <code>running</code> </p> </li> <li> <p> <code>32</code> :
     * <code>shutting-down</code> </p> </li> <li> <p> <code>48</code> :
     * <code>terminated</code> </p> </li> <li> <p> <code>64</code> :
     * <code>stopping</code> </p> </li> <li> <p> <code>80</code> : <code>stopped</code>
     * </p> </li> </ul> <p>You can ignore the high byte value by zeroing out all of the
     * bits above 2^8 or 256 in decimal.</p>
     */
    inline int GetCode() const { return m_code; }
    inline bool CodeHasBeenSet() const { return m_codeHasBeenSet; }
    inline void SetCode(int value) { m_codeHasBeenSet = true; m_code = value; }
    inline InstanceState& WithCode(int value) { SetCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current state of the instance.</p>
     */
    inline InstanceStateName GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(InstanceStateName value) { m_nameHasBeenSet = true; m_name = value; }
    inline InstanceState& WithName(InstanceStateName value) { SetName(value); return *this;}
    ///@}
  private:

    int m_code{0};
    bool m_codeHasBeenSet = false;

    InstanceStateName m_name{InstanceStateName::NOT_SET};
    bool m_nameHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
