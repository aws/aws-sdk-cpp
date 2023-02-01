/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dynamodb/DynamoDB_EXPORTS.h>
#include <aws/dynamodb/model/TableDescription.h>
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
   * <p>Represents the output of a <code>DescribeTable</code>
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/DescribeTableOutput">AWS
   * API Reference</a></p>
   */
  class DescribeTableResult
  {
  public:
    AWS_DYNAMODB_API DescribeTableResult();
    AWS_DYNAMODB_API DescribeTableResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DYNAMODB_API DescribeTableResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The properties of the table.</p>
     */
    inline const TableDescription& GetTable() const{ return m_table; }

    /**
     * <p>The properties of the table.</p>
     */
    inline void SetTable(const TableDescription& value) { m_table = value; }

    /**
     * <p>The properties of the table.</p>
     */
    inline void SetTable(TableDescription&& value) { m_table = std::move(value); }

    /**
     * <p>The properties of the table.</p>
     */
    inline DescribeTableResult& WithTable(const TableDescription& value) { SetTable(value); return *this;}

    /**
     * <p>The properties of the table.</p>
     */
    inline DescribeTableResult& WithTable(TableDescription&& value) { SetTable(std::move(value)); return *this;}

  private:

    TableDescription m_table;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
