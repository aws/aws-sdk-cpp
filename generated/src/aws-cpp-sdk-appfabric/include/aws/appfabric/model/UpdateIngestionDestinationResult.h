/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appfabric/AppFabric_EXPORTS.h>
#include <aws/appfabric/model/IngestionDestination.h>
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
  class UpdateIngestionDestinationResult
  {
  public:
    AWS_APPFABRIC_API UpdateIngestionDestinationResult();
    AWS_APPFABRIC_API UpdateIngestionDestinationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPFABRIC_API UpdateIngestionDestinationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Contains information about an ingestion destination.</p>
     */
    inline const IngestionDestination& GetIngestionDestination() const{ return m_ingestionDestination; }

    /**
     * <p>Contains information about an ingestion destination.</p>
     */
    inline void SetIngestionDestination(const IngestionDestination& value) { m_ingestionDestination = value; }

    /**
     * <p>Contains information about an ingestion destination.</p>
     */
    inline void SetIngestionDestination(IngestionDestination&& value) { m_ingestionDestination = std::move(value); }

    /**
     * <p>Contains information about an ingestion destination.</p>
     */
    inline UpdateIngestionDestinationResult& WithIngestionDestination(const IngestionDestination& value) { SetIngestionDestination(value); return *this;}

    /**
     * <p>Contains information about an ingestion destination.</p>
     */
    inline UpdateIngestionDestinationResult& WithIngestionDestination(IngestionDestination&& value) { SetIngestionDestination(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline UpdateIngestionDestinationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline UpdateIngestionDestinationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline UpdateIngestionDestinationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    IngestionDestination m_ingestionDestination;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace AppFabric
} // namespace Aws
