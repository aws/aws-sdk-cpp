/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime/Chime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/chime/model/PhoneNumberError.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Chime
{
namespace Model
{
  class BatchUpdatePhoneNumberResult
  {
  public:
    AWS_CHIME_API BatchUpdatePhoneNumberResult() = default;
    AWS_CHIME_API BatchUpdatePhoneNumberResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CHIME_API BatchUpdatePhoneNumberResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>If the action fails for one or more of the phone numbers in the request, a
     * list of the phone numbers is returned, along with error codes and error
     * messages.</p>
     */
    inline const Aws::Vector<PhoneNumberError>& GetPhoneNumberErrors() const { return m_phoneNumberErrors; }
    template<typename PhoneNumberErrorsT = Aws::Vector<PhoneNumberError>>
    void SetPhoneNumberErrors(PhoneNumberErrorsT&& value) { m_phoneNumberErrorsHasBeenSet = true; m_phoneNumberErrors = std::forward<PhoneNumberErrorsT>(value); }
    template<typename PhoneNumberErrorsT = Aws::Vector<PhoneNumberError>>
    BatchUpdatePhoneNumberResult& WithPhoneNumberErrors(PhoneNumberErrorsT&& value) { SetPhoneNumberErrors(std::forward<PhoneNumberErrorsT>(value)); return *this;}
    template<typename PhoneNumberErrorsT = PhoneNumberError>
    BatchUpdatePhoneNumberResult& AddPhoneNumberErrors(PhoneNumberErrorsT&& value) { m_phoneNumberErrorsHasBeenSet = true; m_phoneNumberErrors.emplace_back(std::forward<PhoneNumberErrorsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    BatchUpdatePhoneNumberResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<PhoneNumberError> m_phoneNumberErrors;
    bool m_phoneNumberErrorsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Chime
} // namespace Aws
