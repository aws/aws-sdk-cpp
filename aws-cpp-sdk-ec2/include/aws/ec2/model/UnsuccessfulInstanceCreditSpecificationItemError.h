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
#include <aws/ec2/model/UnsuccessfulInstanceCreditSpecificationErrorCode.h>
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
   * <p>Information about the error for the T2 instance whose credit option for CPU
   * usage was not modified.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/UnsuccessfulInstanceCreditSpecificationItemError">AWS
   * API Reference</a></p>
   */
  class AWS_EC2_API UnsuccessfulInstanceCreditSpecificationItemError
  {
  public:
    UnsuccessfulInstanceCreditSpecificationItemError();
    UnsuccessfulInstanceCreditSpecificationItemError(const Aws::Utils::Xml::XmlNode& xmlNode);
    UnsuccessfulInstanceCreditSpecificationItemError& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The error code.</p>
     */
    inline const UnsuccessfulInstanceCreditSpecificationErrorCode& GetCode() const{ return m_code; }

    /**
     * <p>The error code.</p>
     */
    inline void SetCode(const UnsuccessfulInstanceCreditSpecificationErrorCode& value) { m_codeHasBeenSet = true; m_code = value; }

    /**
     * <p>The error code.</p>
     */
    inline void SetCode(UnsuccessfulInstanceCreditSpecificationErrorCode&& value) { m_codeHasBeenSet = true; m_code = std::move(value); }

    /**
     * <p>The error code.</p>
     */
    inline UnsuccessfulInstanceCreditSpecificationItemError& WithCode(const UnsuccessfulInstanceCreditSpecificationErrorCode& value) { SetCode(value); return *this;}

    /**
     * <p>The error code.</p>
     */
    inline UnsuccessfulInstanceCreditSpecificationItemError& WithCode(UnsuccessfulInstanceCreditSpecificationErrorCode&& value) { SetCode(std::move(value)); return *this;}


    /**
     * <p>The applicable error message.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }

    /**
     * <p>The applicable error message.</p>
     */
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    /**
     * <p>The applicable error message.</p>
     */
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    /**
     * <p>The applicable error message.</p>
     */
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    /**
     * <p>The applicable error message.</p>
     */
    inline UnsuccessfulInstanceCreditSpecificationItemError& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    /**
     * <p>The applicable error message.</p>
     */
    inline UnsuccessfulInstanceCreditSpecificationItemError& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    /**
     * <p>The applicable error message.</p>
     */
    inline UnsuccessfulInstanceCreditSpecificationItemError& WithMessage(const char* value) { SetMessage(value); return *this;}

  private:

    UnsuccessfulInstanceCreditSpecificationErrorCode m_code;
    bool m_codeHasBeenSet;

    Aws::String m_message;
    bool m_messageHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
