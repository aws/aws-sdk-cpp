/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dsql/DSQL_EXPORTS.h>
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
namespace DSQL
{
namespace Model
{
  class CreateMultiRegionClustersResult
  {
  public:
    AWS_DSQL_API CreateMultiRegionClustersResult() = default;
    AWS_DSQL_API CreateMultiRegionClustersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DSQL_API CreateMultiRegionClustersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array that contains the ARNs of all linked clusters.</p>
     */
    inline const Aws::Vector<Aws::String>& GetLinkedClusterArns() const { return m_linkedClusterArns; }
    template<typename LinkedClusterArnsT = Aws::Vector<Aws::String>>
    void SetLinkedClusterArns(LinkedClusterArnsT&& value) { m_linkedClusterArnsHasBeenSet = true; m_linkedClusterArns = std::forward<LinkedClusterArnsT>(value); }
    template<typename LinkedClusterArnsT = Aws::Vector<Aws::String>>
    CreateMultiRegionClustersResult& WithLinkedClusterArns(LinkedClusterArnsT&& value) { SetLinkedClusterArns(std::forward<LinkedClusterArnsT>(value)); return *this;}
    template<typename LinkedClusterArnsT = Aws::String>
    CreateMultiRegionClustersResult& AddLinkedClusterArns(LinkedClusterArnsT&& value) { m_linkedClusterArnsHasBeenSet = true; m_linkedClusterArns.emplace_back(std::forward<LinkedClusterArnsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateMultiRegionClustersResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_linkedClusterArns;
    bool m_linkedClusterArnsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DSQL
} // namespace Aws
