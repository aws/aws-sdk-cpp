/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/HoursOfOperation.h>
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
  class DescribeHoursOfOperationResult
  {
  public:
    AWS_CONNECT_API DescribeHoursOfOperationResult();
    AWS_CONNECT_API DescribeHoursOfOperationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECT_API DescribeHoursOfOperationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The hours of operation.</p>
     */
    inline const HoursOfOperation& GetHoursOfOperation() const{ return m_hoursOfOperation; }

    /**
     * <p>The hours of operation.</p>
     */
    inline void SetHoursOfOperation(const HoursOfOperation& value) { m_hoursOfOperation = value; }

    /**
     * <p>The hours of operation.</p>
     */
    inline void SetHoursOfOperation(HoursOfOperation&& value) { m_hoursOfOperation = std::move(value); }

    /**
     * <p>The hours of operation.</p>
     */
    inline DescribeHoursOfOperationResult& WithHoursOfOperation(const HoursOfOperation& value) { SetHoursOfOperation(value); return *this;}

    /**
     * <p>The hours of operation.</p>
     */
    inline DescribeHoursOfOperationResult& WithHoursOfOperation(HoursOfOperation&& value) { SetHoursOfOperation(std::move(value)); return *this;}

  private:

    HoursOfOperation m_hoursOfOperation;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
