/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/awstransfer/Transfer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace Transfer
{
namespace Model
{
  class CreateAgreementResult
  {
  public:
    AWS_TRANSFER_API CreateAgreementResult() = default;
    AWS_TRANSFER_API CreateAgreementResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_TRANSFER_API CreateAgreementResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The unique identifier for the agreement. Use this ID for deleting, or
     * updating an agreement, as well as in any other API calls that require that you
     * specify the agreement ID.</p>
     */
    inline const Aws::String& GetAgreementId() const { return m_agreementId; }
    template<typename AgreementIdT = Aws::String>
    void SetAgreementId(AgreementIdT&& value) { m_agreementIdHasBeenSet = true; m_agreementId = std::forward<AgreementIdT>(value); }
    template<typename AgreementIdT = Aws::String>
    CreateAgreementResult& WithAgreementId(AgreementIdT&& value) { SetAgreementId(std::forward<AgreementIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateAgreementResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_agreementId;
    bool m_agreementIdHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Transfer
} // namespace Aws
