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
  class AWS_DYNAMODB_API RestoreTableFromBackupResult
  {
  public:
    RestoreTableFromBackupResult();
    RestoreTableFromBackupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    RestoreTableFromBackupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The description of the table created from an existing backup.</p>
     */
    inline const TableDescription& GetTableDescription() const{ return m_tableDescription; }

    /**
     * <p>The description of the table created from an existing backup.</p>
     */
    inline void SetTableDescription(const TableDescription& value) { m_tableDescription = value; }

    /**
     * <p>The description of the table created from an existing backup.</p>
     */
    inline void SetTableDescription(TableDescription&& value) { m_tableDescription = std::move(value); }

    /**
     * <p>The description of the table created from an existing backup.</p>
     */
    inline RestoreTableFromBackupResult& WithTableDescription(const TableDescription& value) { SetTableDescription(value); return *this;}

    /**
     * <p>The description of the table created from an existing backup.</p>
     */
    inline RestoreTableFromBackupResult& WithTableDescription(TableDescription&& value) { SetTableDescription(std::move(value)); return *this;}

  private:

    TableDescription m_tableDescription;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
