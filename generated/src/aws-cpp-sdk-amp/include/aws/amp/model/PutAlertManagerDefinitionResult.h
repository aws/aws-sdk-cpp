/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amp/PrometheusService_EXPORTS.h>
#include <aws/amp/model/AlertManagerDefinitionStatus.h>
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
   * <p>Represents the output of a PutAlertManagerDefinition operation.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/amp-2020-08-01/PutAlertManagerDefinitionResponse">AWS
   * API Reference</a></p>
   */
  class PutAlertManagerDefinitionResult
  {
  public:
    AWS_PROMETHEUSSERVICE_API PutAlertManagerDefinitionResult();
    AWS_PROMETHEUSSERVICE_API PutAlertManagerDefinitionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PROMETHEUSSERVICE_API PutAlertManagerDefinitionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The status of alert manager definition.</p>
     */
    inline const AlertManagerDefinitionStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of alert manager definition.</p>
     */
    inline void SetStatus(const AlertManagerDefinitionStatus& value) { m_status = value; }

    /**
     * <p>The status of alert manager definition.</p>
     */
    inline void SetStatus(AlertManagerDefinitionStatus&& value) { m_status = std::move(value); }

    /**
     * <p>The status of alert manager definition.</p>
     */
    inline PutAlertManagerDefinitionResult& WithStatus(const AlertManagerDefinitionStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of alert manager definition.</p>
     */
    inline PutAlertManagerDefinitionResult& WithStatus(AlertManagerDefinitionStatus&& value) { SetStatus(std::move(value)); return *this;}

  private:

    AlertManagerDefinitionStatus m_status;
  };

} // namespace Model
} // namespace PrometheusService
} // namespace Aws
