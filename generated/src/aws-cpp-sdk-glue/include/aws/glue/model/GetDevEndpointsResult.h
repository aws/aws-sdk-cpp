/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/model/DevEndpoint.h>
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
  class GetDevEndpointsResult
  {
  public:
    AWS_GLUE_API GetDevEndpointsResult() = default;
    AWS_GLUE_API GetDevEndpointsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLUE_API GetDevEndpointsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of <code>DevEndpoint</code> definitions.</p>
     */
    inline const Aws::Vector<DevEndpoint>& GetDevEndpoints() const { return m_devEndpoints; }
    template<typename DevEndpointsT = Aws::Vector<DevEndpoint>>
    void SetDevEndpoints(DevEndpointsT&& value) { m_devEndpointsHasBeenSet = true; m_devEndpoints = std::forward<DevEndpointsT>(value); }
    template<typename DevEndpointsT = Aws::Vector<DevEndpoint>>
    GetDevEndpointsResult& WithDevEndpoints(DevEndpointsT&& value) { SetDevEndpoints(std::forward<DevEndpointsT>(value)); return *this;}
    template<typename DevEndpointsT = DevEndpoint>
    GetDevEndpointsResult& AddDevEndpoints(DevEndpointsT&& value) { m_devEndpointsHasBeenSet = true; m_devEndpoints.emplace_back(std::forward<DevEndpointsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A continuation token, if not all <code>DevEndpoint</code> definitions have
     * yet been returned.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    GetDevEndpointsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetDevEndpointsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<DevEndpoint> m_devEndpoints;
    bool m_devEndpointsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
