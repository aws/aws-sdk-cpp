/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
   * <p>Represents the output of an <i>UpdateTable</i> operation.</p>
   */
  class AWS_DYNAMODB_API UpdateTableResult
  {
  public:
    UpdateTableResult();
    UpdateTableResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    UpdateTableResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    
    inline const TableDescription& GetTableDescription() const{ return m_tableDescription; }

    
    inline void SetTableDescription(const TableDescription& value) { m_tableDescription = value; }

    
    inline void SetTableDescription(TableDescription&& value) { m_tableDescription = value; }

    
    inline UpdateTableResult& WithTableDescription(const TableDescription& value) { SetTableDescription(value); return *this;}

    
    inline UpdateTableResult& WithTableDescription(TableDescription&& value) { SetTableDescription(value); return *this;}

  private:
    TableDescription m_tableDescription;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
