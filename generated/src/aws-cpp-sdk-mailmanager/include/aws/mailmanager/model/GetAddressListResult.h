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
  class GetAddressListResult
  {
  public:
    AWS_MAILMANAGER_API GetAddressListResult();
    AWS_MAILMANAGER_API GetAddressListResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MAILMANAGER_API GetAddressListResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the address list resource.</p>
     */
    inline const Aws::String& GetAddressListArn() const{ return m_addressListArn; }
    inline void SetAddressListArn(const Aws::String& value) { m_addressListArn = value; }
    inline void SetAddressListArn(Aws::String&& value) { m_addressListArn = std::move(value); }
    inline void SetAddressListArn(const char* value) { m_addressListArn.assign(value); }
    inline GetAddressListResult& WithAddressListArn(const Aws::String& value) { SetAddressListArn(value); return *this;}
    inline GetAddressListResult& WithAddressListArn(Aws::String&& value) { SetAddressListArn(std::move(value)); return *this;}
    inline GetAddressListResult& WithAddressListArn(const char* value) { SetAddressListArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the address list resource.</p>
     */
    inline const Aws::String& GetAddressListId() const{ return m_addressListId; }
    inline void SetAddressListId(const Aws::String& value) { m_addressListId = value; }
    inline void SetAddressListId(Aws::String&& value) { m_addressListId = std::move(value); }
    inline void SetAddressListId(const char* value) { m_addressListId.assign(value); }
    inline GetAddressListResult& WithAddressListId(const Aws::String& value) { SetAddressListId(value); return *this;}
    inline GetAddressListResult& WithAddressListId(Aws::String&& value) { SetAddressListId(std::move(value)); return *this;}
    inline GetAddressListResult& WithAddressListId(const char* value) { SetAddressListId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A user-friendly name for the address list resource.</p>
     */
    inline const Aws::String& GetAddressListName() const{ return m_addressListName; }
    inline void SetAddressListName(const Aws::String& value) { m_addressListName = value; }
    inline void SetAddressListName(Aws::String&& value) { m_addressListName = std::move(value); }
    inline void SetAddressListName(const char* value) { m_addressListName.assign(value); }
    inline GetAddressListResult& WithAddressListName(const Aws::String& value) { SetAddressListName(value); return *this;}
    inline GetAddressListResult& WithAddressListName(Aws::String&& value) { SetAddressListName(std::move(value)); return *this;}
    inline GetAddressListResult& WithAddressListName(const char* value) { SetAddressListName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date of when then address list was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTimestamp() const{ return m_createdTimestamp; }
    inline void SetCreatedTimestamp(const Aws::Utils::DateTime& value) { m_createdTimestamp = value; }
    inline void SetCreatedTimestamp(Aws::Utils::DateTime&& value) { m_createdTimestamp = std::move(value); }
    inline GetAddressListResult& WithCreatedTimestamp(const Aws::Utils::DateTime& value) { SetCreatedTimestamp(value); return *this;}
    inline GetAddressListResult& WithCreatedTimestamp(Aws::Utils::DateTime&& value) { SetCreatedTimestamp(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date of when the address list was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedTimestamp() const{ return m_lastUpdatedTimestamp; }
    inline void SetLastUpdatedTimestamp(const Aws::Utils::DateTime& value) { m_lastUpdatedTimestamp = value; }
    inline void SetLastUpdatedTimestamp(Aws::Utils::DateTime&& value) { m_lastUpdatedTimestamp = std::move(value); }
    inline GetAddressListResult& WithLastUpdatedTimestamp(const Aws::Utils::DateTime& value) { SetLastUpdatedTimestamp(value); return *this;}
    inline GetAddressListResult& WithLastUpdatedTimestamp(Aws::Utils::DateTime&& value) { SetLastUpdatedTimestamp(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetAddressListResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetAddressListResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetAddressListResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_addressListArn;

    Aws::String m_addressListId;

    Aws::String m_addressListName;

    Aws::Utils::DateTime m_createdTimestamp;

    Aws::Utils::DateTime m_lastUpdatedTimestamp;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace MailManager
} // namespace Aws
