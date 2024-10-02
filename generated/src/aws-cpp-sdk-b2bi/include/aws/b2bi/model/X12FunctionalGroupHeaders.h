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
    AWS_B2BI_API X12FunctionalGroupHeaders();
    AWS_B2BI_API X12FunctionalGroupHeaders(Aws::Utils::Json::JsonView jsonValue);
    AWS_B2BI_API X12FunctionalGroupHeaders& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_B2BI_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A value representing the code used to identify the party transmitting a
     * message, at position GS-02.</p>
     */
    inline const Aws::String& GetApplicationSenderCode() const{ return m_applicationSenderCode; }
    inline bool ApplicationSenderCodeHasBeenSet() const { return m_applicationSenderCodeHasBeenSet; }
    inline void SetApplicationSenderCode(const Aws::String& value) { m_applicationSenderCodeHasBeenSet = true; m_applicationSenderCode = value; }
    inline void SetApplicationSenderCode(Aws::String&& value) { m_applicationSenderCodeHasBeenSet = true; m_applicationSenderCode = std::move(value); }
    inline void SetApplicationSenderCode(const char* value) { m_applicationSenderCodeHasBeenSet = true; m_applicationSenderCode.assign(value); }
    inline X12FunctionalGroupHeaders& WithApplicationSenderCode(const Aws::String& value) { SetApplicationSenderCode(value); return *this;}
    inline X12FunctionalGroupHeaders& WithApplicationSenderCode(Aws::String&& value) { SetApplicationSenderCode(std::move(value)); return *this;}
    inline X12FunctionalGroupHeaders& WithApplicationSenderCode(const char* value) { SetApplicationSenderCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A value representing the code used to identify the party receiving a message,
     * at position GS-03.</p>
     */
    inline const Aws::String& GetApplicationReceiverCode() const{ return m_applicationReceiverCode; }
    inline bool ApplicationReceiverCodeHasBeenSet() const { return m_applicationReceiverCodeHasBeenSet; }
    inline void SetApplicationReceiverCode(const Aws::String& value) { m_applicationReceiverCodeHasBeenSet = true; m_applicationReceiverCode = value; }
    inline void SetApplicationReceiverCode(Aws::String&& value) { m_applicationReceiverCodeHasBeenSet = true; m_applicationReceiverCode = std::move(value); }
    inline void SetApplicationReceiverCode(const char* value) { m_applicationReceiverCodeHasBeenSet = true; m_applicationReceiverCode.assign(value); }
    inline X12FunctionalGroupHeaders& WithApplicationReceiverCode(const Aws::String& value) { SetApplicationReceiverCode(value); return *this;}
    inline X12FunctionalGroupHeaders& WithApplicationReceiverCode(Aws::String&& value) { SetApplicationReceiverCode(std::move(value)); return *this;}
    inline X12FunctionalGroupHeaders& WithApplicationReceiverCode(const char* value) { SetApplicationReceiverCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A code that identifies the issuer of the standard, at position GS-07.</p>
     */
    inline const Aws::String& GetResponsibleAgencyCode() const{ return m_responsibleAgencyCode; }
    inline bool ResponsibleAgencyCodeHasBeenSet() const { return m_responsibleAgencyCodeHasBeenSet; }
    inline void SetResponsibleAgencyCode(const Aws::String& value) { m_responsibleAgencyCodeHasBeenSet = true; m_responsibleAgencyCode = value; }
    inline void SetResponsibleAgencyCode(Aws::String&& value) { m_responsibleAgencyCodeHasBeenSet = true; m_responsibleAgencyCode = std::move(value); }
    inline void SetResponsibleAgencyCode(const char* value) { m_responsibleAgencyCodeHasBeenSet = true; m_responsibleAgencyCode.assign(value); }
    inline X12FunctionalGroupHeaders& WithResponsibleAgencyCode(const Aws::String& value) { SetResponsibleAgencyCode(value); return *this;}
    inline X12FunctionalGroupHeaders& WithResponsibleAgencyCode(Aws::String&& value) { SetResponsibleAgencyCode(std::move(value)); return *this;}
    inline X12FunctionalGroupHeaders& WithResponsibleAgencyCode(const char* value) { SetResponsibleAgencyCode(value); return *this;}
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
