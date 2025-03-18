/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/ec2/model/FpgaImageStateCode.h>
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
namespace EC2
{
namespace Model
{

  /**
   * <p>Describes the state of the bitstream generation process for an Amazon FPGA
   * image (AFI).</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/FpgaImageState">AWS
   * API Reference</a></p>
   */
  class FpgaImageState
  {
  public:
    AWS_EC2_API FpgaImageState() = default;
    AWS_EC2_API FpgaImageState(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API FpgaImageState& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The state. The following are the possible values:</p> <ul> <li> <p>
     * <code>pending</code> - AFI bitstream generation is in progress.</p> </li> <li>
     * <p> <code>available</code> - The AFI is available for use.</p> </li> <li> <p>
     * <code>failed</code> - AFI bitstream generation failed.</p> </li> <li> <p>
     * <code>unavailable</code> - The AFI is no longer available for use.</p> </li>
     * </ul>
     */
    inline FpgaImageStateCode GetCode() const { return m_code; }
    inline bool CodeHasBeenSet() const { return m_codeHasBeenSet; }
    inline void SetCode(FpgaImageStateCode value) { m_codeHasBeenSet = true; m_code = value; }
    inline FpgaImageState& WithCode(FpgaImageStateCode value) { SetCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the state is <code>failed</code>, this is the error message.</p>
     */
    inline const Aws::String& GetMessage() const { return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    template<typename MessageT = Aws::String>
    void SetMessage(MessageT&& value) { m_messageHasBeenSet = true; m_message = std::forward<MessageT>(value); }
    template<typename MessageT = Aws::String>
    FpgaImageState& WithMessage(MessageT&& value) { SetMessage(std::forward<MessageT>(value)); return *this;}
    ///@}
  private:

    FpgaImageStateCode m_code{FpgaImageStateCode::NOT_SET};
    bool m_codeHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
