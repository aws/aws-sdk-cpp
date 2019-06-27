/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/dynamodb/DynamoDB_EXPORTS.h>

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
  class AWS_DYNAMODB_API DescribeLimitsResult
  {
  public:
    DescribeLimitsResult();
    DescribeLimitsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeLimitsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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

  private:

    long long m_accountMaxReadCapacityUnits;

    long long m_accountMaxWriteCapacityUnits;

    long long m_tableMaxReadCapacityUnits;

    long long m_tableMaxWriteCapacityUnits;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
