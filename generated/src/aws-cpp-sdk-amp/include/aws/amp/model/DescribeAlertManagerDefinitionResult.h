/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amp/PrometheusService_EXPORTS.h>
#include <aws/amp/model/AlertManagerDefinitionDescription.h>
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
   * <p>Represents the output of a <code>DescribeAlertManagerDefinition</code>
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/amp-2020-08-01/DescribeAlertManagerDefinitionResponse">AWS
   * API Reference</a></p>
   */
  class DescribeAlertManagerDefinitionResult
  {
  public:
    AWS_PROMETHEUSSERVICE_API DescribeAlertManagerDefinitionResult() = default;
    AWS_PROMETHEUSSERVICE_API DescribeAlertManagerDefinitionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PROMETHEUSSERVICE_API DescribeAlertManagerDefinitionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The alert manager definition.</p>
     */
    inline const AlertManagerDefinitionDescription& GetAlertManagerDefinition() const { return m_alertManagerDefinition; }
    template<typename AlertManagerDefinitionT = AlertManagerDefinitionDescription>
    void SetAlertManagerDefinition(AlertManagerDefinitionT&& value) { m_alertManagerDefinitionHasBeenSet = true; m_alertManagerDefinition = std::forward<AlertManagerDefinitionT>(value); }
    template<typename AlertManagerDefinitionT = AlertManagerDefinitionDescription>
    DescribeAlertManagerDefinitionResult& WithAlertManagerDefinition(AlertManagerDefinitionT&& value) { SetAlertManagerDefinition(std::forward<AlertManagerDefinitionT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeAlertManagerDefinitionResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    AlertManagerDefinitionDescription m_alertManagerDefinition;
    bool m_alertManagerDefinitionHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace PrometheusService
} // namespace Aws
