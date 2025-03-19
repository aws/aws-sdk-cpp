/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
  class ListDevEndpointsResult
  {
  public:
    AWS_GLUE_API ListDevEndpointsResult() = default;
    AWS_GLUE_API ListDevEndpointsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLUE_API ListDevEndpointsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The names of all the <code>DevEndpoint</code>s in the account, or the
     * <code>DevEndpoint</code>s with the specified tags.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDevEndpointNames() const { return m_devEndpointNames; }
    template<typename DevEndpointNamesT = Aws::Vector<Aws::String>>
    void SetDevEndpointNames(DevEndpointNamesT&& value) { m_devEndpointNamesHasBeenSet = true; m_devEndpointNames = std::forward<DevEndpointNamesT>(value); }
    template<typename DevEndpointNamesT = Aws::Vector<Aws::String>>
    ListDevEndpointsResult& WithDevEndpointNames(DevEndpointNamesT&& value) { SetDevEndpointNames(std::forward<DevEndpointNamesT>(value)); return *this;}
    template<typename DevEndpointNamesT = Aws::String>
    ListDevEndpointsResult& AddDevEndpointNames(DevEndpointNamesT&& value) { m_devEndpointNamesHasBeenSet = true; m_devEndpointNames.emplace_back(std::forward<DevEndpointNamesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A continuation token, if the returned list does not contain the last metric
     * available.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListDevEndpointsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListDevEndpointsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_devEndpointNames;
    bool m_devEndpointNamesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
