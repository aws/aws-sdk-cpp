/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticfilesystem/EFS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/elasticfilesystem/model/MountTargetDescription.h>
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
  /**
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticfilesystem-2015-02-01/DescribeMountTargetsResponse">AWS
   * API Reference</a></p>
   */
  class DescribeMountTargetsResult
  {
  public:
    AWS_EFS_API DescribeMountTargetsResult() = default;
    AWS_EFS_API DescribeMountTargetsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_EFS_API DescribeMountTargetsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>If the request included the <code>Marker</code>, the response returns that
     * value in this field.</p>
     */
    inline const Aws::String& GetMarker() const { return m_marker; }
    template<typename MarkerT = Aws::String>
    void SetMarker(MarkerT&& value) { m_markerHasBeenSet = true; m_marker = std::forward<MarkerT>(value); }
    template<typename MarkerT = Aws::String>
    DescribeMountTargetsResult& WithMarker(MarkerT&& value) { SetMarker(std::forward<MarkerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns the file system's mount targets as an array of
     * <code>MountTargetDescription</code> objects.</p>
     */
    inline const Aws::Vector<MountTargetDescription>& GetMountTargets() const { return m_mountTargets; }
    template<typename MountTargetsT = Aws::Vector<MountTargetDescription>>
    void SetMountTargets(MountTargetsT&& value) { m_mountTargetsHasBeenSet = true; m_mountTargets = std::forward<MountTargetsT>(value); }
    template<typename MountTargetsT = Aws::Vector<MountTargetDescription>>
    DescribeMountTargetsResult& WithMountTargets(MountTargetsT&& value) { SetMountTargets(std::forward<MountTargetsT>(value)); return *this;}
    template<typename MountTargetsT = MountTargetDescription>
    DescribeMountTargetsResult& AddMountTargets(MountTargetsT&& value) { m_mountTargetsHasBeenSet = true; m_mountTargets.emplace_back(std::forward<MountTargetsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If a value is present, there are more mount targets to return. In a
     * subsequent request, you can provide <code>Marker</code> in your request with
     * this value to retrieve the next set of mount targets.</p>
     */
    inline const Aws::String& GetNextMarker() const { return m_nextMarker; }
    template<typename NextMarkerT = Aws::String>
    void SetNextMarker(NextMarkerT&& value) { m_nextMarkerHasBeenSet = true; m_nextMarker = std::forward<NextMarkerT>(value); }
    template<typename NextMarkerT = Aws::String>
    DescribeMountTargetsResult& WithNextMarker(NextMarkerT&& value) { SetNextMarker(std::forward<NextMarkerT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeMountTargetsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_marker;
    bool m_markerHasBeenSet = false;

    Aws::Vector<MountTargetDescription> m_mountTargets;
    bool m_mountTargetsHasBeenSet = false;

    Aws::String m_nextMarker;
    bool m_nextMarkerHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace EFS
} // namespace Aws
