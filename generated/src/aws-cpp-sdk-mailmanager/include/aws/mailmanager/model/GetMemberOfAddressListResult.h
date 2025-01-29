/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mailmanager/MailManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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
namespace MailManager
{
namespace Model
{
  class GetMemberOfAddressListResult
  {
  public:
    AWS_MAILMANAGER_API GetMemberOfAddressListResult();
    AWS_MAILMANAGER_API GetMemberOfAddressListResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MAILMANAGER_API GetMemberOfAddressListResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The address retrieved from the address list.</p>
     */
    inline const Aws::String& GetAddress() const{ return m_address; }
    inline void SetAddress(const Aws::String& value) { m_address = value; }
    inline void SetAddress(Aws::String&& value) { m_address = std::move(value); }
    inline void SetAddress(const char* value) { m_address.assign(value); }
    inline GetMemberOfAddressListResult& WithAddress(const Aws::String& value) { SetAddress(value); return *this;}
    inline GetMemberOfAddressListResult& WithAddress(Aws::String&& value) { SetAddress(std::move(value)); return *this;}
    inline GetMemberOfAddressListResult& WithAddress(const char* value) { SetAddress(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of when the address was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTimestamp() const{ return m_createdTimestamp; }
    inline void SetCreatedTimestamp(const Aws::Utils::DateTime& value) { m_createdTimestamp = value; }
    inline void SetCreatedTimestamp(Aws::Utils::DateTime&& value) { m_createdTimestamp = std::move(value); }
    inline GetMemberOfAddressListResult& WithCreatedTimestamp(const Aws::Utils::DateTime& value) { SetCreatedTimestamp(value); return *this;}
    inline GetMemberOfAddressListResult& WithCreatedTimestamp(Aws::Utils::DateTime&& value) { SetCreatedTimestamp(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetMemberOfAddressListResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetMemberOfAddressListResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetMemberOfAddressListResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_address;

    Aws::Utils::DateTime m_createdTimestamp;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace MailManager
} // namespace Aws
