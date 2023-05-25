/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dynamodb/DynamoDB_EXPORTS.h>
#include <aws/dynamodb/model/ImportTableDescription.h>
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
  class DescribeImportResult
  {
  public:
    AWS_DYNAMODB_API DescribeImportResult();
    AWS_DYNAMODB_API DescribeImportResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DYNAMODB_API DescribeImportResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> Represents the properties of the table created for the import, and
     * parameters of the import. The import parameters include import status, how many
     * items were processed, and how many errors were encountered. </p>
     */
    inline const ImportTableDescription& GetImportTableDescription() const{ return m_importTableDescription; }

    /**
     * <p> Represents the properties of the table created for the import, and
     * parameters of the import. The import parameters include import status, how many
     * items were processed, and how many errors were encountered. </p>
     */
    inline void SetImportTableDescription(const ImportTableDescription& value) { m_importTableDescription = value; }

    /**
     * <p> Represents the properties of the table created for the import, and
     * parameters of the import. The import parameters include import status, how many
     * items were processed, and how many errors were encountered. </p>
     */
    inline void SetImportTableDescription(ImportTableDescription&& value) { m_importTableDescription = std::move(value); }

    /**
     * <p> Represents the properties of the table created for the import, and
     * parameters of the import. The import parameters include import status, how many
     * items were processed, and how many errors were encountered. </p>
     */
    inline DescribeImportResult& WithImportTableDescription(const ImportTableDescription& value) { SetImportTableDescription(value); return *this;}

    /**
     * <p> Represents the properties of the table created for the import, and
     * parameters of the import. The import parameters include import status, how many
     * items were processed, and how many errors were encountered. </p>
     */
    inline DescribeImportResult& WithImportTableDescription(ImportTableDescription&& value) { SetImportTableDescription(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DescribeImportResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DescribeImportResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DescribeImportResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    ImportTableDescription m_importTableDescription;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
