/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/account/Account_EXPORTS.h>
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
  class GetPrimaryEmailResult
  {
  public:
    AWS_ACCOUNT_API GetPrimaryEmailResult();
    AWS_ACCOUNT_API GetPrimaryEmailResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ACCOUNT_API GetPrimaryEmailResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Retrieves the primary email address associated with the specified
     * account.</p>
     */
    inline const Aws::String& GetPrimaryEmail() const{ return m_primaryEmail; }
    inline void SetPrimaryEmail(const Aws::String& value) { m_primaryEmail = value; }
    inline void SetPrimaryEmail(Aws::String&& value) { m_primaryEmail = std::move(value); }
    inline void SetPrimaryEmail(const char* value) { m_primaryEmail.assign(value); }
    inline GetPrimaryEmailResult& WithPrimaryEmail(const Aws::String& value) { SetPrimaryEmail(value); return *this;}
    inline GetPrimaryEmailResult& WithPrimaryEmail(Aws::String&& value) { SetPrimaryEmail(std::move(value)); return *this;}
    inline GetPrimaryEmailResult& WithPrimaryEmail(const char* value) { SetPrimaryEmail(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetPrimaryEmailResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetPrimaryEmailResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetPrimaryEmailResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_primaryEmail;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Account
} // namespace Aws
