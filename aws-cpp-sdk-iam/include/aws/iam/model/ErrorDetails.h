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
#include <aws/iam/IAM_EXPORTS.h>
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
namespace IAM
{
namespace Model
{

  /**
   * <p>Contains information about the reason that the operation failed.</p> <p>This
   * data type is used as a response element in the
   * <a>GetOrganizationsAccessReport</a>, <a>GetServiceLastAccessedDetails</a>, and
   * <a>GetServiceLastAccessedDetailsWithEntities</a> operations.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/ErrorDetails">AWS
   * API Reference</a></p>
   */
  class AWS_IAM_API ErrorDetails
  {
  public:
    ErrorDetails();
    ErrorDetails(const Aws::Utils::Xml::XmlNode& xmlNode);
    ErrorDetails& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>Detailed information about the reason that the operation failed.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }

    /**
     * <p>Detailed information about the reason that the operation failed.</p>
     */
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    /**
     * <p>Detailed information about the reason that the operation failed.</p>
     */
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    /**
     * <p>Detailed information about the reason that the operation failed.</p>
     */
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    /**
     * <p>Detailed information about the reason that the operation failed.</p>
     */
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    /**
     * <p>Detailed information about the reason that the operation failed.</p>
     */
    inline ErrorDetails& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    /**
     * <p>Detailed information about the reason that the operation failed.</p>
     */
    inline ErrorDetails& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    /**
     * <p>Detailed information about the reason that the operation failed.</p>
     */
    inline ErrorDetails& WithMessage(const char* value) { SetMessage(value); return *this;}


    /**
     * <p>The error code associated with the operation failure.</p>
     */
    inline const Aws::String& GetCode() const{ return m_code; }

    /**
     * <p>The error code associated with the operation failure.</p>
     */
    inline bool CodeHasBeenSet() const { return m_codeHasBeenSet; }

    /**
     * <p>The error code associated with the operation failure.</p>
     */
    inline void SetCode(const Aws::String& value) { m_codeHasBeenSet = true; m_code = value; }

    /**
     * <p>The error code associated with the operation failure.</p>
     */
    inline void SetCode(Aws::String&& value) { m_codeHasBeenSet = true; m_code = std::move(value); }

    /**
     * <p>The error code associated with the operation failure.</p>
     */
    inline void SetCode(const char* value) { m_codeHasBeenSet = true; m_code.assign(value); }

    /**
     * <p>The error code associated with the operation failure.</p>
     */
    inline ErrorDetails& WithCode(const Aws::String& value) { SetCode(value); return *this;}

    /**
     * <p>The error code associated with the operation failure.</p>
     */
    inline ErrorDetails& WithCode(Aws::String&& value) { SetCode(std::move(value)); return *this;}

    /**
     * <p>The error code associated with the operation failure.</p>
     */
    inline ErrorDetails& WithCode(const char* value) { SetCode(value); return *this;}

  private:

    Aws::String m_message;
    bool m_messageHasBeenSet;

    Aws::String m_code;
    bool m_codeHasBeenSet;
  };

} // namespace Model
} // namespace IAM
} // namespace Aws
