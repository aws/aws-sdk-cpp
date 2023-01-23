/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/ClaimedPhoneNumberSummary.h>
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
  class DescribePhoneNumberResult
  {
  public:
    AWS_CONNECT_API DescribePhoneNumberResult();
    AWS_CONNECT_API DescribePhoneNumberResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECT_API DescribePhoneNumberResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about a phone number that's been claimed to your Amazon Connect
     * instance or traffic distribution group.</p>
     */
    inline const ClaimedPhoneNumberSummary& GetClaimedPhoneNumberSummary() const{ return m_claimedPhoneNumberSummary; }

    /**
     * <p>Information about a phone number that's been claimed to your Amazon Connect
     * instance or traffic distribution group.</p>
     */
    inline void SetClaimedPhoneNumberSummary(const ClaimedPhoneNumberSummary& value) { m_claimedPhoneNumberSummary = value; }

    /**
     * <p>Information about a phone number that's been claimed to your Amazon Connect
     * instance or traffic distribution group.</p>
     */
    inline void SetClaimedPhoneNumberSummary(ClaimedPhoneNumberSummary&& value) { m_claimedPhoneNumberSummary = std::move(value); }

    /**
     * <p>Information about a phone number that's been claimed to your Amazon Connect
     * instance or traffic distribution group.</p>
     */
    inline DescribePhoneNumberResult& WithClaimedPhoneNumberSummary(const ClaimedPhoneNumberSummary& value) { SetClaimedPhoneNumberSummary(value); return *this;}

    /**
     * <p>Information about a phone number that's been claimed to your Amazon Connect
     * instance or traffic distribution group.</p>
     */
    inline DescribePhoneNumberResult& WithClaimedPhoneNumberSummary(ClaimedPhoneNumberSummary&& value) { SetClaimedPhoneNumberSummary(std::move(value)); return *this;}

  private:

    ClaimedPhoneNumberSummary m_claimedPhoneNumberSummary;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
