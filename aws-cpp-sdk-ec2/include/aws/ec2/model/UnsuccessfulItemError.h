﻿/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/core/utils/memory/stl/AWSString.h>

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
   * <p>Information about the error that occurred. For more information about errors,
   * see <a
   * href="http://docs.aws.amazon.com/AWSEC2/latest/APIReference/errors-overview.html">Error
   * Codes</a>.</p>
   */
  class AWS_EC2_API UnsuccessfulItemError
  {
  public:
    UnsuccessfulItemError();
    UnsuccessfulItemError(const Aws::Utils::Xml::XmlNode& xmlNode);
    UnsuccessfulItemError& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;

    /**
     * <p>The error code.</p>
     */
    inline const Aws::String& GetCode() const{ return m_code; }

    /**
     * <p>The error code.</p>
     */
    inline void SetCode(const Aws::String& value) { m_codeHasBeenSet = true; m_code = value; }

    /**
     * <p>The error code.</p>
     */
    inline void SetCode(Aws::String&& value) { m_codeHasBeenSet = true; m_code = value; }

    /**
     * <p>The error code.</p>
     */
    inline void SetCode(const char* value) { m_codeHasBeenSet = true; m_code.assign(value); }

    /**
     * <p>The error code.</p>
     */
    inline UnsuccessfulItemError& WithCode(const Aws::String& value) { SetCode(value); return *this;}

    /**
     * <p>The error code.</p>
     */
    inline UnsuccessfulItemError& WithCode(Aws::String&& value) { SetCode(value); return *this;}

    /**
     * <p>The error code.</p>
     */
    inline UnsuccessfulItemError& WithCode(const char* value) { SetCode(value); return *this;}

    /**
     * <p>The error message accompanying the error code.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }

    /**
     * <p>The error message accompanying the error code.</p>
     */
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    /**
     * <p>The error message accompanying the error code.</p>
     */
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = value; }

    /**
     * <p>The error message accompanying the error code.</p>
     */
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    /**
     * <p>The error message accompanying the error code.</p>
     */
    inline UnsuccessfulItemError& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    /**
     * <p>The error message accompanying the error code.</p>
     */
    inline UnsuccessfulItemError& WithMessage(Aws::String&& value) { SetMessage(value); return *this;}

    /**
     * <p>The error message accompanying the error code.</p>
     */
    inline UnsuccessfulItemError& WithMessage(const char* value) { SetMessage(value); return *this;}

  private:
    Aws::String m_code;
    bool m_codeHasBeenSet;
    Aws::String m_message;
    bool m_messageHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
