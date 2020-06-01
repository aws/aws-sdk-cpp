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
#include <aws/athena/Athena_EXPORTS.h>
#include <aws/athena/model/TableMetadata.h>
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
namespace Athena
{
namespace Model
{
  class AWS_ATHENA_API GetTableMetadataResult
  {
  public:
    GetTableMetadataResult();
    GetTableMetadataResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetTableMetadataResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An object that contains table metadata.</p>
     */
    inline const TableMetadata& GetTableMetadata() const{ return m_tableMetadata; }

    /**
     * <p>An object that contains table metadata.</p>
     */
    inline void SetTableMetadata(const TableMetadata& value) { m_tableMetadata = value; }

    /**
     * <p>An object that contains table metadata.</p>
     */
    inline void SetTableMetadata(TableMetadata&& value) { m_tableMetadata = std::move(value); }

    /**
     * <p>An object that contains table metadata.</p>
     */
    inline GetTableMetadataResult& WithTableMetadata(const TableMetadata& value) { SetTableMetadata(value); return *this;}

    /**
     * <p>An object that contains table metadata.</p>
     */
    inline GetTableMetadataResult& WithTableMetadata(TableMetadata&& value) { SetTableMetadata(std::move(value)); return *this;}

  private:

    TableMetadata m_tableMetadata;
  };

} // namespace Model
} // namespace Athena
} // namespace Aws
