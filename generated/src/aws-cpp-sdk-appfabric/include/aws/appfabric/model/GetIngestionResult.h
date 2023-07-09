/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appfabric/AppFabric_EXPORTS.h>
#include <aws/appfabric/model/Ingestion.h>
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
namespace AppFabric
{
namespace Model
{
  class GetIngestionResult
  {
  public:
    AWS_APPFABRIC_API GetIngestionResult();
    AWS_APPFABRIC_API GetIngestionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPFABRIC_API GetIngestionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Contains information about an ingestion.</p>
     */
    inline const Ingestion& GetIngestion() const{ return m_ingestion; }

    /**
     * <p>Contains information about an ingestion.</p>
     */
    inline void SetIngestion(const Ingestion& value) { m_ingestion = value; }

    /**
     * <p>Contains information about an ingestion.</p>
     */
    inline void SetIngestion(Ingestion&& value) { m_ingestion = std::move(value); }

    /**
     * <p>Contains information about an ingestion.</p>
     */
    inline GetIngestionResult& WithIngestion(const Ingestion& value) { SetIngestion(value); return *this;}

    /**
     * <p>Contains information about an ingestion.</p>
     */
    inline GetIngestionResult& WithIngestion(Ingestion&& value) { SetIngestion(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetIngestionResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetIngestionResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetIngestionResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Ingestion m_ingestion;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace AppFabric
} // namespace Aws
