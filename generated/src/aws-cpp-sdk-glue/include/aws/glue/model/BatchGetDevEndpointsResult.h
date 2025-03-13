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
  class BatchGetDevEndpointsResult
  {
  public:
    AWS_GLUE_API BatchGetDevEndpointsResult() = default;
    AWS_GLUE_API BatchGetDevEndpointsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLUE_API BatchGetDevEndpointsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of <code>DevEndpoint</code> definitions.</p>
     */
    inline const Aws::Vector<DevEndpoint>& GetDevEndpoints() const { return m_devEndpoints; }
    template<typename DevEndpointsT = Aws::Vector<DevEndpoint>>
    void SetDevEndpoints(DevEndpointsT&& value) { m_devEndpointsHasBeenSet = true; m_devEndpoints = std::forward<DevEndpointsT>(value); }
    template<typename DevEndpointsT = Aws::Vector<DevEndpoint>>
    BatchGetDevEndpointsResult& WithDevEndpoints(DevEndpointsT&& value) { SetDevEndpoints(std::forward<DevEndpointsT>(value)); return *this;}
    template<typename DevEndpointsT = DevEndpoint>
    BatchGetDevEndpointsResult& AddDevEndpoints(DevEndpointsT&& value) { m_devEndpointsHasBeenSet = true; m_devEndpoints.emplace_back(std::forward<DevEndpointsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of <code>DevEndpoints</code> not found.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDevEndpointsNotFound() const { return m_devEndpointsNotFound; }
    template<typename DevEndpointsNotFoundT = Aws::Vector<Aws::String>>
    void SetDevEndpointsNotFound(DevEndpointsNotFoundT&& value) { m_devEndpointsNotFoundHasBeenSet = true; m_devEndpointsNotFound = std::forward<DevEndpointsNotFoundT>(value); }
    template<typename DevEndpointsNotFoundT = Aws::Vector<Aws::String>>
    BatchGetDevEndpointsResult& WithDevEndpointsNotFound(DevEndpointsNotFoundT&& value) { SetDevEndpointsNotFound(std::forward<DevEndpointsNotFoundT>(value)); return *this;}
    template<typename DevEndpointsNotFoundT = Aws::String>
    BatchGetDevEndpointsResult& AddDevEndpointsNotFound(DevEndpointsNotFoundT&& value) { m_devEndpointsNotFoundHasBeenSet = true; m_devEndpointsNotFound.emplace_back(std::forward<DevEndpointsNotFoundT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    BatchGetDevEndpointsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<DevEndpoint> m_devEndpoints;
    bool m_devEndpointsHasBeenSet = false;

    Aws::Vector<Aws::String> m_devEndpointsNotFound;
    bool m_devEndpointsNotFoundHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
