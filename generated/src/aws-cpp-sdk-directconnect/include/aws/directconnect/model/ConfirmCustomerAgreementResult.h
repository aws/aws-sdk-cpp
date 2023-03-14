/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/directconnect/DirectConnect_EXPORTS.h>
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
namespace DirectConnect
{
namespace Model
{
  class ConfirmCustomerAgreementResult
  {
  public:
    AWS_DIRECTCONNECT_API ConfirmCustomerAgreementResult();
    AWS_DIRECTCONNECT_API ConfirmCustomerAgreementResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DIRECTCONNECT_API ConfirmCustomerAgreementResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> The status of the customer agreement when the connection was created. This
     * will be either <code>signed</code> or <code>unsigned</code>. </p>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }

    /**
     * <p> The status of the customer agreement when the connection was created. This
     * will be either <code>signed</code> or <code>unsigned</code>. </p>
     */
    inline void SetStatus(const Aws::String& value) { m_status = value; }

    /**
     * <p> The status of the customer agreement when the connection was created. This
     * will be either <code>signed</code> or <code>unsigned</code>. </p>
     */
    inline void SetStatus(Aws::String&& value) { m_status = std::move(value); }

    /**
     * <p> The status of the customer agreement when the connection was created. This
     * will be either <code>signed</code> or <code>unsigned</code>. </p>
     */
    inline void SetStatus(const char* value) { m_status.assign(value); }

    /**
     * <p> The status of the customer agreement when the connection was created. This
     * will be either <code>signed</code> or <code>unsigned</code>. </p>
     */
    inline ConfirmCustomerAgreementResult& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}

    /**
     * <p> The status of the customer agreement when the connection was created. This
     * will be either <code>signed</code> or <code>unsigned</code>. </p>
     */
    inline ConfirmCustomerAgreementResult& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}

    /**
     * <p> The status of the customer agreement when the connection was created. This
     * will be either <code>signed</code> or <code>unsigned</code>. </p>
     */
    inline ConfirmCustomerAgreementResult& WithStatus(const char* value) { SetStatus(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ConfirmCustomerAgreementResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ConfirmCustomerAgreementResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ConfirmCustomerAgreementResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_status;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace DirectConnect
} // namespace Aws
