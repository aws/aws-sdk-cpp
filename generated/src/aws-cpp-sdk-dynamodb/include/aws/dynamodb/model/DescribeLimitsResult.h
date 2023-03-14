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
    AWS_DYNAMODB_API DescribeLimitsResult();
    AWS_DYNAMODB_API DescribeLimitsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DYNAMODB_API DescribeLimitsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The maximum total read capacity units that your account allows you to
     * provision across all of your tables in this Region.</p>
     */
    inline long long GetAccountMaxReadCapacityUnits() const{ return m_accountMaxReadCapacityUnits; }

    /**
     * <p>The maximum total read capacity units that your account allows you to
     * provision across all of your tables in this Region.</p>
     */
    inline void SetAccountMaxReadCapacityUnits(long long value) { m_accountMaxReadCapacityUnits = value; }

    /**
     * <p>The maximum total read capacity units that your account allows you to
     * provision across all of your tables in this Region.</p>
     */
    inline DescribeLimitsResult& WithAccountMaxReadCapacityUnits(long long value) { SetAccountMaxReadCapacityUnits(value); return *this;}


    /**
     * <p>The maximum total write capacity units that your account allows you to
     * provision across all of your tables in this Region.</p>
     */
    inline long long GetAccountMaxWriteCapacityUnits() const{ return m_accountMaxWriteCapacityUnits; }

    /**
     * <p>The maximum total write capacity units that your account allows you to
     * provision across all of your tables in this Region.</p>
     */
    inline void SetAccountMaxWriteCapacityUnits(long long value) { m_accountMaxWriteCapacityUnits = value; }

    /**
     * <p>The maximum total write capacity units that your account allows you to
     * provision across all of your tables in this Region.</p>
     */
    inline DescribeLimitsResult& WithAccountMaxWriteCapacityUnits(long long value) { SetAccountMaxWriteCapacityUnits(value); return *this;}


    /**
     * <p>The maximum read capacity units that your account allows you to provision for
     * a new table that you are creating in this Region, including the read capacity
     * units provisioned for its global secondary indexes (GSIs).</p>
     */
    inline long long GetTableMaxReadCapacityUnits() const{ return m_tableMaxReadCapacityUnits; }

    /**
     * <p>The maximum read capacity units that your account allows you to provision for
     * a new table that you are creating in this Region, including the read capacity
     * units provisioned for its global secondary indexes (GSIs).</p>
     */
    inline void SetTableMaxReadCapacityUnits(long long value) { m_tableMaxReadCapacityUnits = value; }

    /**
     * <p>The maximum read capacity units that your account allows you to provision for
     * a new table that you are creating in this Region, including the read capacity
     * units provisioned for its global secondary indexes (GSIs).</p>
     */
    inline DescribeLimitsResult& WithTableMaxReadCapacityUnits(long long value) { SetTableMaxReadCapacityUnits(value); return *this;}


    /**
     * <p>The maximum write capacity units that your account allows you to provision
     * for a new table that you are creating in this Region, including the write
     * capacity units provisioned for its global secondary indexes (GSIs).</p>
     */
    inline long long GetTableMaxWriteCapacityUnits() const{ return m_tableMaxWriteCapacityUnits; }

    /**
     * <p>The maximum write capacity units that your account allows you to provision
     * for a new table that you are creating in this Region, including the write
     * capacity units provisioned for its global secondary indexes (GSIs).</p>
     */
    inline void SetTableMaxWriteCapacityUnits(long long value) { m_tableMaxWriteCapacityUnits = value; }

    /**
     * <p>The maximum write capacity units that your account allows you to provision
     * for a new table that you are creating in this Region, including the write
     * capacity units provisioned for its global secondary indexes (GSIs).</p>
     */
    inline DescribeLimitsResult& WithTableMaxWriteCapacityUnits(long long value) { SetTableMaxWriteCapacityUnits(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DescribeLimitsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DescribeLimitsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DescribeLimitsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    long long m_accountMaxReadCapacityUnits;

    long long m_accountMaxWriteCapacityUnits;

    long long m_tableMaxReadCapacityUnits;

    long long m_tableMaxWriteCapacityUnits;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
