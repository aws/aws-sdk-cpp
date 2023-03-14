/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dynamodb/DynamoDB_EXPORTS.h>
#include <aws/dynamodb/model/ExportDescription.h>
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
  class ExportTableToPointInTimeResult
  {
  public:
    AWS_DYNAMODB_API ExportTableToPointInTimeResult();
    AWS_DYNAMODB_API ExportTableToPointInTimeResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DYNAMODB_API ExportTableToPointInTimeResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Contains a description of the table export.</p>
     */
    inline const ExportDescription& GetExportDescription() const{ return m_exportDescription; }

    /**
     * <p>Contains a description of the table export.</p>
     */
    inline void SetExportDescription(const ExportDescription& value) { m_exportDescription = value; }

    /**
     * <p>Contains a description of the table export.</p>
     */
    inline void SetExportDescription(ExportDescription&& value) { m_exportDescription = std::move(value); }

    /**
     * <p>Contains a description of the table export.</p>
     */
    inline ExportTableToPointInTimeResult& WithExportDescription(const ExportDescription& value) { SetExportDescription(value); return *this;}

    /**
     * <p>Contains a description of the table export.</p>
     */
    inline ExportTableToPointInTimeResult& WithExportDescription(ExportDescription&& value) { SetExportDescription(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ExportTableToPointInTimeResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ExportTableToPointInTimeResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ExportTableToPointInTimeResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    ExportDescription m_exportDescription;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
