/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticfilesystem/EFS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/elasticfilesystem/model/AccessPointDescription.h>
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
namespace EFS
{
namespace Model
{
  class DescribeAccessPointsResult
  {
  public:
    AWS_EFS_API DescribeAccessPointsResult() = default;
    AWS_EFS_API DescribeAccessPointsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_EFS_API DescribeAccessPointsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of access point descriptions.</p>
     */
    inline const Aws::Vector<AccessPointDescription>& GetAccessPoints() const { return m_accessPoints; }
    template<typename AccessPointsT = Aws::Vector<AccessPointDescription>>
    void SetAccessPoints(AccessPointsT&& value) { m_accessPointsHasBeenSet = true; m_accessPoints = std::forward<AccessPointsT>(value); }
    template<typename AccessPointsT = Aws::Vector<AccessPointDescription>>
    DescribeAccessPointsResult& WithAccessPoints(AccessPointsT&& value) { SetAccessPoints(std::forward<AccessPointsT>(value)); return *this;}
    template<typename AccessPointsT = AccessPointDescription>
    DescribeAccessPointsResult& AddAccessPoints(AccessPointsT&& value) { m_accessPointsHasBeenSet = true; m_accessPoints.emplace_back(std::forward<AccessPointsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Present if there are more access points than returned in the response. You
     * can use the NextMarker in the subsequent request to fetch the additional
     * descriptions.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeAccessPointsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeAccessPointsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<AccessPointDescription> m_accessPoints;
    bool m_accessPointsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace EFS
} // namespace Aws
