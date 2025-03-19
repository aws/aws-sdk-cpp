/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/b2bi/B2BI_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace B2BI
{
namespace Model
{

  /**
   * <p>Part of the X12 message structure. These are the functional group headers for
   * the X12 EDI object.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/b2bi-2022-06-23/X12FunctionalGroupHeaders">AWS
   * API Reference</a></p>
   */
  class X12FunctionalGroupHeaders
  {
  public:
    AWS_B2BI_API X12FunctionalGroupHeaders() = default;
    AWS_B2BI_API X12FunctionalGroupHeaders(Aws::Utils::Json::JsonView jsonValue);
    AWS_B2BI_API X12FunctionalGroupHeaders& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_B2BI_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A value representing the code used to identify the party transmitting a
     * message, at position GS-02.</p>
     */
    inline const Aws::String& GetApplicationSenderCode() const { return m_applicationSenderCode; }
    inline bool ApplicationSenderCodeHasBeenSet() const { return m_applicationSenderCodeHasBeenSet; }
    template<typename ApplicationSenderCodeT = Aws::String>
    void SetApplicationSenderCode(ApplicationSenderCodeT&& value) { m_applicationSenderCodeHasBeenSet = true; m_applicationSenderCode = std::forward<ApplicationSenderCodeT>(value); }
    template<typename ApplicationSenderCodeT = Aws::String>
    X12FunctionalGroupHeaders& WithApplicationSenderCode(ApplicationSenderCodeT&& value) { SetApplicationSenderCode(std::forward<ApplicationSenderCodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A value representing the code used to identify the party receiving a message,
     * at position GS-03.</p>
     */
    inline const Aws::String& GetApplicationReceiverCode() const { return m_applicationReceiverCode; }
    inline bool ApplicationReceiverCodeHasBeenSet() const { return m_applicationReceiverCodeHasBeenSet; }
    template<typename ApplicationReceiverCodeT = Aws::String>
    void SetApplicationReceiverCode(ApplicationReceiverCodeT&& value) { m_applicationReceiverCodeHasBeenSet = true; m_applicationReceiverCode = std::forward<ApplicationReceiverCodeT>(value); }
    template<typename ApplicationReceiverCodeT = Aws::String>
    X12FunctionalGroupHeaders& WithApplicationReceiverCode(ApplicationReceiverCodeT&& value) { SetApplicationReceiverCode(std::forward<ApplicationReceiverCodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A code that identifies the issuer of the standard, at position GS-07.</p>
     */
    inline const Aws::String& GetResponsibleAgencyCode() const { return m_responsibleAgencyCode; }
    inline bool ResponsibleAgencyCodeHasBeenSet() const { return m_responsibleAgencyCodeHasBeenSet; }
    template<typename ResponsibleAgencyCodeT = Aws::String>
    void SetResponsibleAgencyCode(ResponsibleAgencyCodeT&& value) { m_responsibleAgencyCodeHasBeenSet = true; m_responsibleAgencyCode = std::forward<ResponsibleAgencyCodeT>(value); }
    template<typename ResponsibleAgencyCodeT = Aws::String>
    X12FunctionalGroupHeaders& WithResponsibleAgencyCode(ResponsibleAgencyCodeT&& value) { SetResponsibleAgencyCode(std::forward<ResponsibleAgencyCodeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_applicationSenderCode;
    bool m_applicationSenderCodeHasBeenSet = false;

    Aws::String m_applicationReceiverCode;
    bool m_applicationReceiverCodeHasBeenSet = false;

    Aws::String m_responsibleAgencyCode;
    bool m_responsibleAgencyCodeHasBeenSet = false;
  };

} // namespace Model
} // namespace B2BI
} // namespace Aws
