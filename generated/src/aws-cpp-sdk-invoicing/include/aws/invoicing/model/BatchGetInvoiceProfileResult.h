/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/invoicing/Invoicing_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/invoicing/model/InvoiceProfile.h>
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
namespace Invoicing
{
namespace Model
{
  class BatchGetInvoiceProfileResult
  {
  public:
    AWS_INVOICING_API BatchGetInvoiceProfileResult();
    AWS_INVOICING_API BatchGetInvoiceProfileResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_INVOICING_API BatchGetInvoiceProfileResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> A list of invoice profiles corresponding to the requested accounts. </p>
     */
    inline const Aws::Vector<InvoiceProfile>& GetProfiles() const{ return m_profiles; }
    inline void SetProfiles(const Aws::Vector<InvoiceProfile>& value) { m_profiles = value; }
    inline void SetProfiles(Aws::Vector<InvoiceProfile>&& value) { m_profiles = std::move(value); }
    inline BatchGetInvoiceProfileResult& WithProfiles(const Aws::Vector<InvoiceProfile>& value) { SetProfiles(value); return *this;}
    inline BatchGetInvoiceProfileResult& WithProfiles(Aws::Vector<InvoiceProfile>&& value) { SetProfiles(std::move(value)); return *this;}
    inline BatchGetInvoiceProfileResult& AddProfiles(const InvoiceProfile& value) { m_profiles.push_back(value); return *this; }
    inline BatchGetInvoiceProfileResult& AddProfiles(InvoiceProfile&& value) { m_profiles.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline BatchGetInvoiceProfileResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline BatchGetInvoiceProfileResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline BatchGetInvoiceProfileResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<InvoiceProfile> m_profiles;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Invoicing
} // namespace Aws
