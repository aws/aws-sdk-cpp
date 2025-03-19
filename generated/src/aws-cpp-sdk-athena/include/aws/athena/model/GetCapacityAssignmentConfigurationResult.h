/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/athena/Athena_EXPORTS.h>
#include <aws/athena/model/CapacityAssignmentConfiguration.h>
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
namespace Athena
{
namespace Model
{
  class GetCapacityAssignmentConfigurationResult
  {
  public:
    AWS_ATHENA_API GetCapacityAssignmentConfigurationResult() = default;
    AWS_ATHENA_API GetCapacityAssignmentConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ATHENA_API GetCapacityAssignmentConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The requested capacity assignment configuration for the specified capacity
     * reservation.</p>
     */
    inline const CapacityAssignmentConfiguration& GetCapacityAssignmentConfiguration() const { return m_capacityAssignmentConfiguration; }
    template<typename CapacityAssignmentConfigurationT = CapacityAssignmentConfiguration>
    void SetCapacityAssignmentConfiguration(CapacityAssignmentConfigurationT&& value) { m_capacityAssignmentConfigurationHasBeenSet = true; m_capacityAssignmentConfiguration = std::forward<CapacityAssignmentConfigurationT>(value); }
    template<typename CapacityAssignmentConfigurationT = CapacityAssignmentConfiguration>
    GetCapacityAssignmentConfigurationResult& WithCapacityAssignmentConfiguration(CapacityAssignmentConfigurationT&& value) { SetCapacityAssignmentConfiguration(std::forward<CapacityAssignmentConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetCapacityAssignmentConfigurationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    CapacityAssignmentConfiguration m_capacityAssignmentConfiguration;
    bool m_capacityAssignmentConfigurationHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Athena
} // namespace Aws
