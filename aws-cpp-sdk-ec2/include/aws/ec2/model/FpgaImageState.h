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
  class AWS_EC2_API FpgaImageState
  {
  public:
    FpgaImageState();
    FpgaImageState(const Aws::Utils::Xml::XmlNode& xmlNode);
    FpgaImageState& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The state. The following are the possible values:</p> <ul> <li> <p>
     * <code>pending</code> - AFI bitstream generation is in progress.</p> </li> <li>
     * <p> <code>available</code> - The AFI is available for use.</p> </li> <li> <p>
     * <code>failed</code> - AFI bitstream generation failed.</p> </li> <li> <p>
     * <code>unavailable</code> - The AFI is no longer available for use.</p> </li>
     * </ul>
     */
    inline const FpgaImageStateCode& GetCode() const{ return m_code; }

    /**
     * <p>The state. The following are the possible values:</p> <ul> <li> <p>
     * <code>pending</code> - AFI bitstream generation is in progress.</p> </li> <li>
     * <p> <code>available</code> - The AFI is available for use.</p> </li> <li> <p>
     * <code>failed</code> - AFI bitstream generation failed.</p> </li> <li> <p>
     * <code>unavailable</code> - The AFI is no longer available for use.</p> </li>
     * </ul>
     */
    inline void SetCode(const FpgaImageStateCode& value) { m_codeHasBeenSet = true; m_code = value; }

    /**
     * <p>The state. The following are the possible values:</p> <ul> <li> <p>
     * <code>pending</code> - AFI bitstream generation is in progress.</p> </li> <li>
     * <p> <code>available</code> - The AFI is available for use.</p> </li> <li> <p>
     * <code>failed</code> - AFI bitstream generation failed.</p> </li> <li> <p>
     * <code>unavailable</code> - The AFI is no longer available for use.</p> </li>
     * </ul>
     */
    inline void SetCode(FpgaImageStateCode&& value) { m_codeHasBeenSet = true; m_code = std::move(value); }

    /**
     * <p>The state. The following are the possible values:</p> <ul> <li> <p>
     * <code>pending</code> - AFI bitstream generation is in progress.</p> </li> <li>
     * <p> <code>available</code> - The AFI is available for use.</p> </li> <li> <p>
     * <code>failed</code> - AFI bitstream generation failed.</p> </li> <li> <p>
     * <code>unavailable</code> - The AFI is no longer available for use.</p> </li>
     * </ul>
     */
    inline FpgaImageState& WithCode(const FpgaImageStateCode& value) { SetCode(value); return *this;}

    /**
     * <p>The state. The following are the possible values:</p> <ul> <li> <p>
     * <code>pending</code> - AFI bitstream generation is in progress.</p> </li> <li>
     * <p> <code>available</code> - The AFI is available for use.</p> </li> <li> <p>
     * <code>failed</code> - AFI bitstream generation failed.</p> </li> <li> <p>
     * <code>unavailable</code> - The AFI is no longer available for use.</p> </li>
     * </ul>
     */
    inline FpgaImageState& WithCode(FpgaImageStateCode&& value) { SetCode(std::move(value)); return *this;}


    /**
     * <p>If the state is <code>failed</code>, this is the error message.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }

    /**
     * <p>If the state is <code>failed</code>, this is the error message.</p>
     */
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    /**
     * <p>If the state is <code>failed</code>, this is the error message.</p>
     */
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    /**
     * <p>If the state is <code>failed</code>, this is the error message.</p>
     */
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    /**
     * <p>If the state is <code>failed</code>, this is the error message.</p>
     */
    inline FpgaImageState& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    /**
     * <p>If the state is <code>failed</code>, this is the error message.</p>
     */
    inline FpgaImageState& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    /**
     * <p>If the state is <code>failed</code>, this is the error message.</p>
     */
    inline FpgaImageState& WithMessage(const char* value) { SetMessage(value); return *this;}

  private:

    FpgaImageStateCode m_code;
    bool m_codeHasBeenSet;

    Aws::String m_message;
    bool m_messageHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
