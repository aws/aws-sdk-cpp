/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mailmanager/MailManager_EXPORTS.h>
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
namespace MailManager
{
namespace Model
{
  class CreateAddressListResult
  {
  public:
    AWS_MAILMANAGER_API CreateAddressListResult();
    AWS_MAILMANAGER_API CreateAddressListResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MAILMANAGER_API CreateAddressListResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The identifier of the created address list.</p>
     */
    inline const Aws::String& GetAddressListId() const{ return m_addressListId; }
    inline void SetAddressListId(const Aws::String& value) { m_addressListId = value; }
    inline void SetAddressListId(Aws::String&& value) { m_addressListId = std::move(value); }
    inline void SetAddressListId(const char* value) { m_addressListId.assign(value); }
    inline CreateAddressListResult& WithAddressListId(const Aws::String& value) { SetAddressListId(value); return *this;}
    inline CreateAddressListResult& WithAddressListId(Aws::String&& value) { SetAddressListId(std::move(value)); return *this;}
    inline CreateAddressListResult& WithAddressListId(const char* value) { SetAddressListId(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateAddressListResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateAddressListResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateAddressListResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_addressListId;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace MailManager
} // namespace Aws
