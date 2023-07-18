/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
#include <aws/opensearch/model/ServiceSoftwareOptions.h>
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
namespace OpenSearchService
{
namespace Model
{
  /**
   * <p>The result of a <code>CancelServiceSoftwareUpdate</code> operation. Contains
   * the status of the update. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/CancelServiceSoftwareUpdateResponse">AWS
   * API Reference</a></p>
   */
  class AWS_OPENSEARCHSERVICE_API CancelServiceSoftwareUpdateResult
  {
  public:
    CancelServiceSoftwareUpdateResult();
    CancelServiceSoftwareUpdateResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    CancelServiceSoftwareUpdateResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The current status of the OpenSearch service software update.</p>
     */
    inline const ServiceSoftwareOptions& GetServiceSoftwareOptions() const{ return m_serviceSoftwareOptions; }

    /**
     * <p>The current status of the OpenSearch service software update.</p>
     */
    inline void SetServiceSoftwareOptions(const ServiceSoftwareOptions& value) { m_serviceSoftwareOptions = value; }

    /**
     * <p>The current status of the OpenSearch service software update.</p>
     */
    inline void SetServiceSoftwareOptions(ServiceSoftwareOptions&& value) { m_serviceSoftwareOptions = std::move(value); }

    /**
     * <p>The current status of the OpenSearch service software update.</p>
     */
    inline CancelServiceSoftwareUpdateResult& WithServiceSoftwareOptions(const ServiceSoftwareOptions& value) { SetServiceSoftwareOptions(value); return *this;}

    /**
     * <p>The current status of the OpenSearch service software update.</p>
     */
    inline CancelServiceSoftwareUpdateResult& WithServiceSoftwareOptions(ServiceSoftwareOptions&& value) { SetServiceSoftwareOptions(std::move(value)); return *this;}

  private:

    ServiceSoftwareOptions m_serviceSoftwareOptions;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
