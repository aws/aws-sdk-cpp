/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime/Chime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/chime/model/PhoneNumberOrder.h>
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
namespace Chime
{
namespace Model
{
  class ListPhoneNumberOrdersResult
  {
  public:
    AWS_CHIME_API ListPhoneNumberOrdersResult();
    AWS_CHIME_API ListPhoneNumberOrdersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CHIME_API ListPhoneNumberOrdersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The phone number order details.</p>
     */
    inline const Aws::Vector<PhoneNumberOrder>& GetPhoneNumberOrders() const{ return m_phoneNumberOrders; }

    /**
     * <p>The phone number order details.</p>
     */
    inline void SetPhoneNumberOrders(const Aws::Vector<PhoneNumberOrder>& value) { m_phoneNumberOrders = value; }

    /**
     * <p>The phone number order details.</p>
     */
    inline void SetPhoneNumberOrders(Aws::Vector<PhoneNumberOrder>&& value) { m_phoneNumberOrders = std::move(value); }

    /**
     * <p>The phone number order details.</p>
     */
    inline ListPhoneNumberOrdersResult& WithPhoneNumberOrders(const Aws::Vector<PhoneNumberOrder>& value) { SetPhoneNumberOrders(value); return *this;}

    /**
     * <p>The phone number order details.</p>
     */
    inline ListPhoneNumberOrdersResult& WithPhoneNumberOrders(Aws::Vector<PhoneNumberOrder>&& value) { SetPhoneNumberOrders(std::move(value)); return *this;}

    /**
     * <p>The phone number order details.</p>
     */
    inline ListPhoneNumberOrdersResult& AddPhoneNumberOrders(const PhoneNumberOrder& value) { m_phoneNumberOrders.push_back(value); return *this; }

    /**
     * <p>The phone number order details.</p>
     */
    inline ListPhoneNumberOrdersResult& AddPhoneNumberOrders(PhoneNumberOrder&& value) { m_phoneNumberOrders.push_back(std::move(value)); return *this; }


    /**
     * <p>The token to use to retrieve the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token to use to retrieve the next page of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token to use to retrieve the next page of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token to use to retrieve the next page of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token to use to retrieve the next page of results.</p>
     */
    inline ListPhoneNumberOrdersResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to use to retrieve the next page of results.</p>
     */
    inline ListPhoneNumberOrdersResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to use to retrieve the next page of results.</p>
     */
    inline ListPhoneNumberOrdersResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<PhoneNumberOrder> m_phoneNumberOrders;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace Chime
} // namespace Aws
