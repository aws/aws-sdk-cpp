/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dynamodb/DynamoDB_EXPORTS.h>
#include <aws/dynamodb/model/TableDescription.h>
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
  class RestoreTableFromBackupResult
  {
  public:
    AWS_DYNAMODB_API RestoreTableFromBackupResult();
    AWS_DYNAMODB_API RestoreTableFromBackupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DYNAMODB_API RestoreTableFromBackupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline RestoreTableFromBackupResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline RestoreTableFromBackupResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline RestoreTableFromBackupResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    TableDescription m_tableDescription;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
