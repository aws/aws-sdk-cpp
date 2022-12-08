/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/Contact.h>
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

  private:

    Contact m_contact;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
