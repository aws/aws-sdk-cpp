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
  class MonitorContactResult
  {
  public:
    AWS_CONNECT_API MonitorContactResult();
    AWS_CONNECT_API MonitorContactResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECT_API MonitorContactResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The identifier of the contact.</p>
     */
    inline const Aws::String& GetContactId() const{ return m_contactId; }

    /**
     * <p>The identifier of the contact.</p>
     */
    inline void SetContactId(const Aws::String& value) { m_contactId = value; }

    /**
     * <p>The identifier of the contact.</p>
     */
    inline void SetContactId(Aws::String&& value) { m_contactId = std::move(value); }

    /**
     * <p>The identifier of the contact.</p>
     */
    inline void SetContactId(const char* value) { m_contactId.assign(value); }

    /**
     * <p>The identifier of the contact.</p>
     */
    inline MonitorContactResult& WithContactId(const Aws::String& value) { SetContactId(value); return *this;}

    /**
     * <p>The identifier of the contact.</p>
     */
    inline MonitorContactResult& WithContactId(Aws::String&& value) { SetContactId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the contact.</p>
     */
    inline MonitorContactResult& WithContactId(const char* value) { SetContactId(value); return *this;}


    /**
     * <p>The ARN of the contact.</p>
     */
    inline const Aws::String& GetContactArn() const{ return m_contactArn; }

    /**
     * <p>The ARN of the contact.</p>
     */
    inline void SetContactArn(const Aws::String& value) { m_contactArn = value; }

    /**
     * <p>The ARN of the contact.</p>
     */
    inline void SetContactArn(Aws::String&& value) { m_contactArn = std::move(value); }

    /**
     * <p>The ARN of the contact.</p>
     */
    inline void SetContactArn(const char* value) { m_contactArn.assign(value); }

    /**
     * <p>The ARN of the contact.</p>
     */
    inline MonitorContactResult& WithContactArn(const Aws::String& value) { SetContactArn(value); return *this;}

    /**
     * <p>The ARN of the contact.</p>
     */
    inline MonitorContactResult& WithContactArn(Aws::String&& value) { SetContactArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the contact.</p>
     */
    inline MonitorContactResult& WithContactArn(const char* value) { SetContactArn(value); return *this;}

  private:

    Aws::String m_contactId;

    Aws::String m_contactArn;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
