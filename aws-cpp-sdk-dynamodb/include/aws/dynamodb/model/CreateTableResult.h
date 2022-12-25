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
   * <p>Represents the output of a <code>CreateTable</code> operation.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/CreateTableOutput">AWS
   * API Reference</a></p>
   */
  class CreateTableResult
  {
  public:
    AWS_DYNAMODB_API CreateTableResult();
    AWS_DYNAMODB_API CreateTableResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DYNAMODB_API CreateTableResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Represents the properties of the table.</p>
     */
    inline const TableDescription& GetTableDescription() const{ return m_tableDescription; }

    /**
     * <p>Represents the properties of the table.</p>
     */
    inline void SetTableDescription(const TableDescription& value) { m_tableDescription = value; }

    /**
     * <p>Represents the properties of the table.</p>
     */
    inline void SetTableDescription(TableDescription&& value) { m_tableDescription = std::move(value); }

    /**
     * <p>Represents the properties of the table.</p>
     */
    inline CreateTableResult& WithTableDescription(const TableDescription& value) { SetTableDescription(value); return *this;}

    /**
     * <p>Represents the properties of the table.</p>
     */
    inline CreateTableResult& WithTableDescription(TableDescription&& value) { SetTableDescription(std::move(value)); return *this;}

  private:

    TableDescription m_tableDescription;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
