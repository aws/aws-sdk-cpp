/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dynamodb/DynamoDB_EXPORTS.h>
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
namespace DynamoDB
{
namespace Model
{
  /**
   * <p>Represents the output of a <code>DescribeLimits</code>
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/DescribeLimitsOutput">AWS
   * API Reference</a></p>
   */
  class DescribeLimitsResult
  {
  public:
    AWS_DYNAMODB_API DescribeLimitsResult() = default;
    AWS_DYNAMODB_API DescribeLimitsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DYNAMODB_API DescribeLimitsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The maximum total read capacity units that your account allows you to
     * provision across all of your tables in this Region.</p>
     */
    inline long long GetAccountMaxReadCapacityUnits() const { return m_accountMaxReadCapacityUnits; }
    inline void SetAccountMaxReadCapacityUnits(long long value) { m_accountMaxReadCapacityUnitsHasBeenSet = true; m_accountMaxReadCapacityUnits = value; }
    inline DescribeLimitsResult& WithAccountMaxReadCapacityUnits(long long value) { SetAccountMaxReadCapacityUnits(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum total write capacity units that your account allows you to
     * provision across all of your tables in this Region.</p>
     */
    inline long long GetAccountMaxWriteCapacityUnits() const { return m_accountMaxWriteCapacityUnits; }
    inline void SetAccountMaxWriteCapacityUnits(long long value) { m_accountMaxWriteCapacityUnitsHasBeenSet = true; m_accountMaxWriteCapacityUnits = value; }
    inline DescribeLimitsResult& WithAccountMaxWriteCapacityUnits(long long value) { SetAccountMaxWriteCapacityUnits(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum read capacity units that your account allows you to provision for
     * a new table that you are creating in this Region, including the read capacity
     * units provisioned for its global secondary indexes (GSIs).</p>
     */
    inline long long GetTableMaxReadCapacityUnits() const { return m_tableMaxReadCapacityUnits; }
    inline void SetTableMaxReadCapacityUnits(long long value) { m_tableMaxReadCapacityUnitsHasBeenSet = true; m_tableMaxReadCapacityUnits = value; }
    inline DescribeLimitsResult& WithTableMaxReadCapacityUnits(long long value) { SetTableMaxReadCapacityUnits(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum write capacity units that your account allows you to provision
     * for a new table that you are creating in this Region, including the write
     * capacity units provisioned for its global secondary indexes (GSIs).</p>
     */
    inline long long GetTableMaxWriteCapacityUnits() const { return m_tableMaxWriteCapacityUnits; }
    inline void SetTableMaxWriteCapacityUnits(long long value) { m_tableMaxWriteCapacityUnitsHasBeenSet = true; m_tableMaxWriteCapacityUnits = value; }
    inline DescribeLimitsResult& WithTableMaxWriteCapacityUnits(long long value) { SetTableMaxWriteCapacityUnits(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeLimitsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    long long m_accountMaxReadCapacityUnits{0};
    bool m_accountMaxReadCapacityUnitsHasBeenSet = false;

    long long m_accountMaxWriteCapacityUnits{0};
    bool m_accountMaxWriteCapacityUnitsHasBeenSet = false;

    long long m_tableMaxReadCapacityUnits{0};
    bool m_tableMaxReadCapacityUnitsHasBeenSet = false;

    long long m_tableMaxWriteCapacityUnits{0};
    bool m_tableMaxWriteCapacityUnitsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
