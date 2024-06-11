/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/ec2/model/LaunchTemplateErrorCode.h>
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
   * <p>Describes the error that's returned when you cannot delete a launch template
   * version.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ResponseError">AWS
   * API Reference</a></p>
   */
  class ResponseError
  {
  public:
    AWS_EC2_API ResponseError();
    AWS_EC2_API ResponseError(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API ResponseError& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The error code.</p>
     */
    inline const LaunchTemplateErrorCode& GetCode() const{ return m_code; }
    inline bool CodeHasBeenSet() const { return m_codeHasBeenSet; }
    inline void SetCode(const LaunchTemplateErrorCode& value) { m_codeHasBeenSet = true; m_code = value; }
    inline void SetCode(LaunchTemplateErrorCode&& value) { m_codeHasBeenSet = true; m_code = std::move(value); }
    inline ResponseError& WithCode(const LaunchTemplateErrorCode& value) { SetCode(value); return *this;}
    inline ResponseError& WithCode(LaunchTemplateErrorCode&& value) { SetCode(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The error message, if applicable.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }
    inline ResponseError& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}
    inline ResponseError& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}
    inline ResponseError& WithMessage(const char* value) { SetMessage(value); return *this;}
    ///@}
  private:

    LaunchTemplateErrorCode m_code;
    bool m_codeHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
