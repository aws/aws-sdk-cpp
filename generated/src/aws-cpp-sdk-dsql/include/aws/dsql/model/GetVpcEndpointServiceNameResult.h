/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dsql/DSQL_EXPORTS.h>
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
namespace DSQL
{
namespace Model
{
  class GetVpcEndpointServiceNameResult
  {
  public:
    AWS_DSQL_API GetVpcEndpointServiceNameResult() = default;
    AWS_DSQL_API GetVpcEndpointServiceNameResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DSQL_API GetVpcEndpointServiceNameResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The VPC endpoint service name.</p>
     */
    inline const Aws::String& GetServiceName() const { return m_serviceName; }
    template<typename ServiceNameT = Aws::String>
    void SetServiceName(ServiceNameT&& value) { m_serviceNameHasBeenSet = true; m_serviceName = std::forward<ServiceNameT>(value); }
    template<typename ServiceNameT = Aws::String>
    GetVpcEndpointServiceNameResult& WithServiceName(ServiceNameT&& value) { SetServiceName(std::forward<ServiceNameT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetVpcEndpointServiceNameResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_serviceName;
    bool m_serviceNameHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DSQL
} // namespace Aws
