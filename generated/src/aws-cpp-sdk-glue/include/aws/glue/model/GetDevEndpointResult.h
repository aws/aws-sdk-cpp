/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/model/DevEndpoint.h>
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
namespace Glue
{
namespace Model
{
  class GetDevEndpointResult
  {
  public:
    AWS_GLUE_API GetDevEndpointResult() = default;
    AWS_GLUE_API GetDevEndpointResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLUE_API GetDevEndpointResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A <code>DevEndpoint</code> definition.</p>
     */
    inline const DevEndpoint& GetDevEndpoint() const { return m_devEndpoint; }
    template<typename DevEndpointT = DevEndpoint>
    void SetDevEndpoint(DevEndpointT&& value) { m_devEndpointHasBeenSet = true; m_devEndpoint = std::forward<DevEndpointT>(value); }
    template<typename DevEndpointT = DevEndpoint>
    GetDevEndpointResult& WithDevEndpoint(DevEndpointT&& value) { SetDevEndpoint(std::forward<DevEndpointT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetDevEndpointResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    DevEndpoint m_devEndpoint;
    bool m_devEndpointHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
