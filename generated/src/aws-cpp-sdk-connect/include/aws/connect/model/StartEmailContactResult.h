/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
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
namespace Connect
{
namespace Model
{
  class StartEmailContactResult
  {
  public:
    AWS_CONNECT_API StartEmailContactResult();
    AWS_CONNECT_API StartEmailContactResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECT_API StartEmailContactResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The identifier of this contact within the Amazon Connect instance.</p>
     */
    inline const Aws::String& GetContactId() const{ return m_contactId; }
    inline void SetContactId(const Aws::String& value) { m_contactId = value; }
    inline void SetContactId(Aws::String&& value) { m_contactId = std::move(value); }
    inline void SetContactId(const char* value) { m_contactId.assign(value); }
    inline StartEmailContactResult& WithContactId(const Aws::String& value) { SetContactId(value); return *this;}
    inline StartEmailContactResult& WithContactId(Aws::String&& value) { SetContactId(std::move(value)); return *this;}
    inline StartEmailContactResult& WithContactId(const char* value) { SetContactId(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline StartEmailContactResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline StartEmailContactResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline StartEmailContactResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_contactId;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
