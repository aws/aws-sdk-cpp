/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/controlcatalog/ControlCatalog_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/controlcatalog/model/ControlMapping.h>
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
namespace ControlCatalog
{
namespace Model
{
  class ListControlMappingsResult
  {
  public:
    AWS_CONTROLCATALOG_API ListControlMappingsResult() = default;
    AWS_CONTROLCATALOG_API ListControlMappingsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONTROLCATALOG_API ListControlMappingsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The list of control mappings that the ListControlMappings API returns.</p>
     */
    inline const Aws::Vector<ControlMapping>& GetControlMappings() const { return m_controlMappings; }
    template<typename ControlMappingsT = Aws::Vector<ControlMapping>>
    void SetControlMappings(ControlMappingsT&& value) { m_controlMappingsHasBeenSet = true; m_controlMappings = std::forward<ControlMappingsT>(value); }
    template<typename ControlMappingsT = Aws::Vector<ControlMapping>>
    ListControlMappingsResult& WithControlMappings(ControlMappingsT&& value) { SetControlMappings(std::forward<ControlMappingsT>(value)); return *this;}
    template<typename ControlMappingsT = ControlMapping>
    ListControlMappingsResult& AddControlMappings(ControlMappingsT&& value) { m_controlMappingsHasBeenSet = true; m_controlMappings.emplace_back(std::forward<ControlMappingsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The pagination token that's used to fetch the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListControlMappingsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListControlMappingsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ControlMapping> m_controlMappings;
    bool m_controlMappingsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ControlCatalog
} // namespace Aws
