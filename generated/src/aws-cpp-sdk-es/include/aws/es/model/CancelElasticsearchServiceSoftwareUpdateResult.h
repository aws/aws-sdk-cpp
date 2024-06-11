﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/es/ElasticsearchService_EXPORTS.h>
#include <aws/es/model/ServiceSoftwareOptions.h>
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
namespace ElasticsearchService
{
namespace Model
{
  /**
   * <p>The result of a <code>CancelElasticsearchServiceSoftwareUpdate</code>
   * operation. Contains the status of the update.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/CancelElasticsearchServiceSoftwareUpdateResponse">AWS
   * API Reference</a></p>
   */
  class CancelElasticsearchServiceSoftwareUpdateResult
  {
  public:
    AWS_ELASTICSEARCHSERVICE_API CancelElasticsearchServiceSoftwareUpdateResult();
    AWS_ELASTICSEARCHSERVICE_API CancelElasticsearchServiceSoftwareUpdateResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ELASTICSEARCHSERVICE_API CancelElasticsearchServiceSoftwareUpdateResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The current status of the Elasticsearch service software update.</p>
     */
    inline const ServiceSoftwareOptions& GetServiceSoftwareOptions() const{ return m_serviceSoftwareOptions; }
    inline void SetServiceSoftwareOptions(const ServiceSoftwareOptions& value) { m_serviceSoftwareOptions = value; }
    inline void SetServiceSoftwareOptions(ServiceSoftwareOptions&& value) { m_serviceSoftwareOptions = std::move(value); }
    inline CancelElasticsearchServiceSoftwareUpdateResult& WithServiceSoftwareOptions(const ServiceSoftwareOptions& value) { SetServiceSoftwareOptions(value); return *this;}
    inline CancelElasticsearchServiceSoftwareUpdateResult& WithServiceSoftwareOptions(ServiceSoftwareOptions&& value) { SetServiceSoftwareOptions(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CancelElasticsearchServiceSoftwareUpdateResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CancelElasticsearchServiceSoftwareUpdateResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CancelElasticsearchServiceSoftwareUpdateResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    ServiceSoftwareOptions m_serviceSoftwareOptions;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ElasticsearchService
} // namespace Aws
