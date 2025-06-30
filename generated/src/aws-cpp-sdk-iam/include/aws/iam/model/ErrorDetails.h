/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
   * data type is used as a response element in the <a
   * href="https://docs.aws.amazon.com/IAM/latest/APIReference/API_GetOrganizationsAccessReport.html">GetOrganizationsAccessReport</a>,
   * <a
   * href="https://docs.aws.amazon.com/IAM/latest/APIReference/API_GetServiceLastAccessedDetails.html">GetServiceLastAccessedDetails</a>,
   * and <a
   * href="https://docs.aws.amazon.com/IAM/latest/APIReference/API_GetServiceLastAccessedDetailsWithEntities.html">GetServiceLastAccessedDetailsWithEntities</a>
   * operations.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/ErrorDetails">AWS
   * API Reference</a></p>
   */
  class ErrorDetails
  {
  public:
    AWS_IAM_API ErrorDetails() = default;
    AWS_IAM_API ErrorDetails(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_IAM_API ErrorDetails& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_IAM_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_IAM_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>Detailed information about the reason that the operation failed.</p>
     */
    inline const Aws::String& GetMessage() const { return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    template<typename MessageT = Aws::String>
    void SetMessage(MessageT&& value) { m_messageHasBeenSet = true; m_message = std::forward<MessageT>(value); }
    template<typename MessageT = Aws::String>
    ErrorDetails& WithMessage(MessageT&& value) { SetMessage(std::forward<MessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The error code associated with the operation failure.</p>
     */
    inline const Aws::String& GetCode() const { return m_code; }
    inline bool CodeHasBeenSet() const { return m_codeHasBeenSet; }
    template<typename CodeT = Aws::String>
    void SetCode(CodeT&& value) { m_codeHasBeenSet = true; m_code = std::forward<CodeT>(value); }
    template<typename CodeT = Aws::String>
    ErrorDetails& WithCode(CodeT&& value) { SetCode(std::forward<CodeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    Aws::String m_code;
    bool m_codeHasBeenSet = false;
  };

} // namespace Model
} // namespace IAM
} // namespace Aws
