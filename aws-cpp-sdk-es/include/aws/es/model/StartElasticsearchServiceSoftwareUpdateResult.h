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
#include <aws/es/ElasticsearchService_EXPORTS.h>
#include <aws/es/model/ServiceSoftwareOptions.h>
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
   * <p>The result of a <code>StartElasticsearchServiceSoftwareUpdate</code>
   * operation. Contains the status of the update.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/StartElasticsearchServiceSoftwareUpdateResponse">AWS
   * API Reference</a></p>
   */
  class AWS_ELASTICSEARCHSERVICE_API StartElasticsearchServiceSoftwareUpdateResult
  {
  public:
    StartElasticsearchServiceSoftwareUpdateResult();
    StartElasticsearchServiceSoftwareUpdateResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    StartElasticsearchServiceSoftwareUpdateResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The current status of the Elasticsearch service software update.</p>
     */
    inline const ServiceSoftwareOptions& GetServiceSoftwareOptions() const{ return m_serviceSoftwareOptions; }

    /**
     * <p>The current status of the Elasticsearch service software update.</p>
     */
    inline void SetServiceSoftwareOptions(const ServiceSoftwareOptions& value) { m_serviceSoftwareOptions = value; }

    /**
     * <p>The current status of the Elasticsearch service software update.</p>
     */
    inline void SetServiceSoftwareOptions(ServiceSoftwareOptions&& value) { m_serviceSoftwareOptions = std::move(value); }

    /**
     * <p>The current status of the Elasticsearch service software update.</p>
     */
    inline StartElasticsearchServiceSoftwareUpdateResult& WithServiceSoftwareOptions(const ServiceSoftwareOptions& value) { SetServiceSoftwareOptions(value); return *this;}

    /**
     * <p>The current status of the Elasticsearch service software update.</p>
     */
    inline StartElasticsearchServiceSoftwareUpdateResult& WithServiceSoftwareOptions(ServiceSoftwareOptions&& value) { SetServiceSoftwareOptions(std::move(value)); return *this;}

  private:

    ServiceSoftwareOptions m_serviceSoftwareOptions;
  };

} // namespace Model
} // namespace ElasticsearchService
} // namespace Aws
