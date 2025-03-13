/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/greengrassv2/GreengrassV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/greengrassv2/model/ResolvedComponentVersion.h>
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
namespace GreengrassV2
{
namespace Model
{
  class ResolveComponentCandidatesResult
  {
  public:
    AWS_GREENGRASSV2_API ResolveComponentCandidatesResult() = default;
    AWS_GREENGRASSV2_API ResolveComponentCandidatesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GREENGRASSV2_API ResolveComponentCandidatesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of components that meet the requirements that you specify in the
     * request. This list includes each component's recipe that you can use to install
     * the component.</p>
     */
    inline const Aws::Vector<ResolvedComponentVersion>& GetResolvedComponentVersions() const { return m_resolvedComponentVersions; }
    template<typename ResolvedComponentVersionsT = Aws::Vector<ResolvedComponentVersion>>
    void SetResolvedComponentVersions(ResolvedComponentVersionsT&& value) { m_resolvedComponentVersionsHasBeenSet = true; m_resolvedComponentVersions = std::forward<ResolvedComponentVersionsT>(value); }
    template<typename ResolvedComponentVersionsT = Aws::Vector<ResolvedComponentVersion>>
    ResolveComponentCandidatesResult& WithResolvedComponentVersions(ResolvedComponentVersionsT&& value) { SetResolvedComponentVersions(std::forward<ResolvedComponentVersionsT>(value)); return *this;}
    template<typename ResolvedComponentVersionsT = ResolvedComponentVersion>
    ResolveComponentCandidatesResult& AddResolvedComponentVersions(ResolvedComponentVersionsT&& value) { m_resolvedComponentVersionsHasBeenSet = true; m_resolvedComponentVersions.emplace_back(std::forward<ResolvedComponentVersionsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ResolveComponentCandidatesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ResolvedComponentVersion> m_resolvedComponentVersions;
    bool m_resolvedComponentVersionsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace GreengrassV2
} // namespace Aws
