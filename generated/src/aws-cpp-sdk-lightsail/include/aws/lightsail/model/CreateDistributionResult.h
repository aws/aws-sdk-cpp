/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/lightsail/model/LightsailDistribution.h>
#include <aws/lightsail/model/Operation.h>
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
namespace Lightsail
{
namespace Model
{
  class CreateDistributionResult
  {
  public:
    AWS_LIGHTSAIL_API CreateDistributionResult() = default;
    AWS_LIGHTSAIL_API CreateDistributionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LIGHTSAIL_API CreateDistributionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An object that describes the distribution created.</p>
     */
    inline const LightsailDistribution& GetDistribution() const { return m_distribution; }
    template<typename DistributionT = LightsailDistribution>
    void SetDistribution(DistributionT&& value) { m_distributionHasBeenSet = true; m_distribution = std::forward<DistributionT>(value); }
    template<typename DistributionT = LightsailDistribution>
    CreateDistributionResult& WithDistribution(DistributionT&& value) { SetDistribution(std::forward<DistributionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of objects that describe the result of the action, such as the
     * status of the request, the timestamp of the request, and the resources affected
     * by the request.</p>
     */
    inline const Operation& GetOperation() const { return m_operation; }
    template<typename OperationT = Operation>
    void SetOperation(OperationT&& value) { m_operationHasBeenSet = true; m_operation = std::forward<OperationT>(value); }
    template<typename OperationT = Operation>
    CreateDistributionResult& WithOperation(OperationT&& value) { SetOperation(std::forward<OperationT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateDistributionResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    LightsailDistribution m_distribution;
    bool m_distributionHasBeenSet = false;

    Operation m_operation;
    bool m_operationHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
