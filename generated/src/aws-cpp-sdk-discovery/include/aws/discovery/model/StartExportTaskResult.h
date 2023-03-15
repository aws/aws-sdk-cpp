﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/discovery/ApplicationDiscoveryService_EXPORTS.h>
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
namespace ApplicationDiscoveryService
{
namespace Model
{
  class StartExportTaskResult
  {
  public:
    AWS_APPLICATIONDISCOVERYSERVICE_API StartExportTaskResult();
    AWS_APPLICATIONDISCOVERYSERVICE_API StartExportTaskResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPLICATIONDISCOVERYSERVICE_API StartExportTaskResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A unique identifier used to query the status of an export request.</p>
     */
    inline const Aws::String& GetExportId() const{ return m_exportId; }

    /**
     * <p>A unique identifier used to query the status of an export request.</p>
     */
    inline void SetExportId(const Aws::String& value) { m_exportId = value; }

    /**
     * <p>A unique identifier used to query the status of an export request.</p>
     */
    inline void SetExportId(Aws::String&& value) { m_exportId = std::move(value); }

    /**
     * <p>A unique identifier used to query the status of an export request.</p>
     */
    inline void SetExportId(const char* value) { m_exportId.assign(value); }

    /**
     * <p>A unique identifier used to query the status of an export request.</p>
     */
    inline StartExportTaskResult& WithExportId(const Aws::String& value) { SetExportId(value); return *this;}

    /**
     * <p>A unique identifier used to query the status of an export request.</p>
     */
    inline StartExportTaskResult& WithExportId(Aws::String&& value) { SetExportId(std::move(value)); return *this;}

    /**
     * <p>A unique identifier used to query the status of an export request.</p>
     */
    inline StartExportTaskResult& WithExportId(const char* value) { SetExportId(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline StartExportTaskResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline StartExportTaskResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline StartExportTaskResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_exportId;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ApplicationDiscoveryService
} // namespace Aws
