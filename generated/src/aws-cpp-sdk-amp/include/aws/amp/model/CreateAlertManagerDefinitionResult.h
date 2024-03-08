/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amp/PrometheusService_EXPORTS.h>
#include <aws/amp/model/AlertManagerDefinitionStatus.h>
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
namespace PrometheusService
{
namespace Model
{
  /**
   * <p>Represents the output of a <code>CreateAlertManagerDefinition</code>
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/amp-2020-08-01/CreateAlertManagerDefinitionResponse">AWS
   * API Reference</a></p>
   */
  class CreateAlertManagerDefinitionResult
  {
  public:
    AWS_PROMETHEUSSERVICE_API CreateAlertManagerDefinitionResult();
    AWS_PROMETHEUSSERVICE_API CreateAlertManagerDefinitionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PROMETHEUSSERVICE_API CreateAlertManagerDefinitionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A structure that displays the current status of the alert manager
     * definition.</p>
     */
    inline const AlertManagerDefinitionStatus& GetStatus() const{ return m_status; }

    /**
     * <p>A structure that displays the current status of the alert manager
     * definition.</p>
     */
    inline void SetStatus(const AlertManagerDefinitionStatus& value) { m_status = value; }

    /**
     * <p>A structure that displays the current status of the alert manager
     * definition.</p>
     */
    inline void SetStatus(AlertManagerDefinitionStatus&& value) { m_status = std::move(value); }

    /**
     * <p>A structure that displays the current status of the alert manager
     * definition.</p>
     */
    inline CreateAlertManagerDefinitionResult& WithStatus(const AlertManagerDefinitionStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>A structure that displays the current status of the alert manager
     * definition.</p>
     */
    inline CreateAlertManagerDefinitionResult& WithStatus(AlertManagerDefinitionStatus&& value) { SetStatus(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline CreateAlertManagerDefinitionResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline CreateAlertManagerDefinitionResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline CreateAlertManagerDefinitionResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    AlertManagerDefinitionStatus m_status;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace PrometheusService
} // namespace Aws
