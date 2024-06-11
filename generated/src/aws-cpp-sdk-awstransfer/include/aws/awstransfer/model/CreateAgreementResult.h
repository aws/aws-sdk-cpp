﻿/**
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
    AWS_TRANSFER_API CreateAgreementResult();
    AWS_TRANSFER_API CreateAgreementResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_TRANSFER_API CreateAgreementResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The unique identifier for the agreement. Use this ID for deleting, or
     * updating an agreement, as well as in any other API calls that require that you
     * specify the agreement ID.</p>
     */
    inline const Aws::String& GetAgreementId() const{ return m_agreementId; }
    inline void SetAgreementId(const Aws::String& value) { m_agreementId = value; }
    inline void SetAgreementId(Aws::String&& value) { m_agreementId = std::move(value); }
    inline void SetAgreementId(const char* value) { m_agreementId.assign(value); }
    inline CreateAgreementResult& WithAgreementId(const Aws::String& value) { SetAgreementId(value); return *this;}
    inline CreateAgreementResult& WithAgreementId(Aws::String&& value) { SetAgreementId(std::move(value)); return *this;}
    inline CreateAgreementResult& WithAgreementId(const char* value) { SetAgreementId(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateAgreementResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateAgreementResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateAgreementResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_agreementId;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Transfer
} // namespace Aws
