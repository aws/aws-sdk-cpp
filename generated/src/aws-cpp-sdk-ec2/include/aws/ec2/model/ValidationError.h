/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
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
namespace EC2
{
namespace Model
{

  /**
   * <p>The error code and error message that is returned for a parameter or
   * parameter combination that is not valid when a new launch template or new
   * version of a launch template is created.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ValidationError">AWS
   * API Reference</a></p>
   */
  class ValidationError
  {
  public:
    AWS_EC2_API ValidationError();
    AWS_EC2_API ValidationError(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API ValidationError& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The error code that indicates why the parameter or parameter combination is
     * not valid. For more information about error codes, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/errors-overview.html">Error
     * codes</a>.</p>
     */
    inline const Aws::String& GetCode() const{ return m_code; }

    /**
     * <p>The error code that indicates why the parameter or parameter combination is
     * not valid. For more information about error codes, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/errors-overview.html">Error
     * codes</a>.</p>
     */
    inline bool CodeHasBeenSet() const { return m_codeHasBeenSet; }

    /**
     * <p>The error code that indicates why the parameter or parameter combination is
     * not valid. For more information about error codes, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/errors-overview.html">Error
     * codes</a>.</p>
     */
    inline void SetCode(const Aws::String& value) { m_codeHasBeenSet = true; m_code = value; }

    /**
     * <p>The error code that indicates why the parameter or parameter combination is
     * not valid. For more information about error codes, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/errors-overview.html">Error
     * codes</a>.</p>
     */
    inline void SetCode(Aws::String&& value) { m_codeHasBeenSet = true; m_code = std::move(value); }

    /**
     * <p>The error code that indicates why the parameter or parameter combination is
     * not valid. For more information about error codes, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/errors-overview.html">Error
     * codes</a>.</p>
     */
    inline void SetCode(const char* value) { m_codeHasBeenSet = true; m_code.assign(value); }

    /**
     * <p>The error code that indicates why the parameter or parameter combination is
     * not valid. For more information about error codes, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/errors-overview.html">Error
     * codes</a>.</p>
     */
    inline ValidationError& WithCode(const Aws::String& value) { SetCode(value); return *this;}

    /**
     * <p>The error code that indicates why the parameter or parameter combination is
     * not valid. For more information about error codes, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/errors-overview.html">Error
     * codes</a>.</p>
     */
    inline ValidationError& WithCode(Aws::String&& value) { SetCode(std::move(value)); return *this;}

    /**
     * <p>The error code that indicates why the parameter or parameter combination is
     * not valid. For more information about error codes, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/errors-overview.html">Error
     * codes</a>.</p>
     */
    inline ValidationError& WithCode(const char* value) { SetCode(value); return *this;}


    /**
     * <p>The error message that describes why the parameter or parameter combination
     * is not valid. For more information about error messages, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/errors-overview.html">Error
     * codes</a>.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }

    /**
     * <p>The error message that describes why the parameter or parameter combination
     * is not valid. For more information about error messages, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/errors-overview.html">Error
     * codes</a>.</p>
     */
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    /**
     * <p>The error message that describes why the parameter or parameter combination
     * is not valid. For more information about error messages, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/errors-overview.html">Error
     * codes</a>.</p>
     */
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    /**
     * <p>The error message that describes why the parameter or parameter combination
     * is not valid. For more information about error messages, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/errors-overview.html">Error
     * codes</a>.</p>
     */
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    /**
     * <p>The error message that describes why the parameter or parameter combination
     * is not valid. For more information about error messages, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/errors-overview.html">Error
     * codes</a>.</p>
     */
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    /**
     * <p>The error message that describes why the parameter or parameter combination
     * is not valid. For more information about error messages, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/errors-overview.html">Error
     * codes</a>.</p>
     */
    inline ValidationError& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    /**
     * <p>The error message that describes why the parameter or parameter combination
     * is not valid. For more information about error messages, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/errors-overview.html">Error
     * codes</a>.</p>
     */
    inline ValidationError& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    /**
     * <p>The error message that describes why the parameter or parameter combination
     * is not valid. For more information about error messages, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/errors-overview.html">Error
     * codes</a>.</p>
     */
    inline ValidationError& WithMessage(const char* value) { SetMessage(value); return *this;}

  private:

    Aws::String m_code;
    bool m_codeHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
