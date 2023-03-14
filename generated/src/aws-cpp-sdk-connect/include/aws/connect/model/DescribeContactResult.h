/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/Contact.h>
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
  class DescribeContactResult
  {
  public:
    AWS_CONNECT_API DescribeContactResult();
    AWS_CONNECT_API DescribeContactResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECT_API DescribeContactResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the contact.</p>
     */
    inline const Contact& GetContact() const{ return m_contact; }

    /**
     * <p>Information about the contact.</p>
     */
    inline void SetContact(const Contact& value) { m_contact = value; }

    /**
     * <p>Information about the contact.</p>
     */
    inline void SetContact(Contact&& value) { m_contact = std::move(value); }

    /**
     * <p>Information about the contact.</p>
     */
    inline DescribeContactResult& WithContact(const Contact& value) { SetContact(value); return *this;}

    /**
     * <p>Information about the contact.</p>
     */
    inline DescribeContactResult& WithContact(Contact&& value) { SetContact(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DescribeContactResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DescribeContactResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DescribeContactResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Contact m_contact;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
