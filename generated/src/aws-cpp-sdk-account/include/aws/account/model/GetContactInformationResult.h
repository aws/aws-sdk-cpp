/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/account/Account_EXPORTS.h>
#include <aws/account/model/ContactInformation.h>
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
namespace Account
{
namespace Model
{
  class GetContactInformationResult
  {
  public:
    AWS_ACCOUNT_API GetContactInformationResult();
    AWS_ACCOUNT_API GetContactInformationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ACCOUNT_API GetContactInformationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Contains the details of the primary contact information associated with an
     * Amazon Web Services account.</p>
     */
    inline const ContactInformation& GetContactInformation() const{ return m_contactInformation; }

    /**
     * <p>Contains the details of the primary contact information associated with an
     * Amazon Web Services account.</p>
     */
    inline void SetContactInformation(const ContactInformation& value) { m_contactInformation = value; }

    /**
     * <p>Contains the details of the primary contact information associated with an
     * Amazon Web Services account.</p>
     */
    inline void SetContactInformation(ContactInformation&& value) { m_contactInformation = std::move(value); }

    /**
     * <p>Contains the details of the primary contact information associated with an
     * Amazon Web Services account.</p>
     */
    inline GetContactInformationResult& WithContactInformation(const ContactInformation& value) { SetContactInformation(value); return *this;}

    /**
     * <p>Contains the details of the primary contact information associated with an
     * Amazon Web Services account.</p>
     */
    inline GetContactInformationResult& WithContactInformation(ContactInformation&& value) { SetContactInformation(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetContactInformationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetContactInformationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetContactInformationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    ContactInformation m_contactInformation;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Account
} // namespace Aws
