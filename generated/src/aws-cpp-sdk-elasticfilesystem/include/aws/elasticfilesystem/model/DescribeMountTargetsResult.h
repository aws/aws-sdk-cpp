﻿/**
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
    AWS_EFS_API DescribeMountTargetsResult();
    AWS_EFS_API DescribeMountTargetsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_EFS_API DescribeMountTargetsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>If the request included the <code>Marker</code>, the response returns that
     * value in this field.</p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }
    inline void SetMarker(const Aws::String& value) { m_marker = value; }
    inline void SetMarker(Aws::String&& value) { m_marker = std::move(value); }
    inline void SetMarker(const char* value) { m_marker.assign(value); }
    inline DescribeMountTargetsResult& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}
    inline DescribeMountTargetsResult& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}
    inline DescribeMountTargetsResult& WithMarker(const char* value) { SetMarker(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns the file system's mount targets as an array of
     * <code>MountTargetDescription</code> objects.</p>
     */
    inline const Aws::Vector<MountTargetDescription>& GetMountTargets() const{ return m_mountTargets; }
    inline void SetMountTargets(const Aws::Vector<MountTargetDescription>& value) { m_mountTargets = value; }
    inline void SetMountTargets(Aws::Vector<MountTargetDescription>&& value) { m_mountTargets = std::move(value); }
    inline DescribeMountTargetsResult& WithMountTargets(const Aws::Vector<MountTargetDescription>& value) { SetMountTargets(value); return *this;}
    inline DescribeMountTargetsResult& WithMountTargets(Aws::Vector<MountTargetDescription>&& value) { SetMountTargets(std::move(value)); return *this;}
    inline DescribeMountTargetsResult& AddMountTargets(const MountTargetDescription& value) { m_mountTargets.push_back(value); return *this; }
    inline DescribeMountTargetsResult& AddMountTargets(MountTargetDescription&& value) { m_mountTargets.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If a value is present, there are more mount targets to return. In a
     * subsequent request, you can provide <code>Marker</code> in your request with
     * this value to retrieve the next set of mount targets.</p>
     */
    inline const Aws::String& GetNextMarker() const{ return m_nextMarker; }
    inline void SetNextMarker(const Aws::String& value) { m_nextMarker = value; }
    inline void SetNextMarker(Aws::String&& value) { m_nextMarker = std::move(value); }
    inline void SetNextMarker(const char* value) { m_nextMarker.assign(value); }
    inline DescribeMountTargetsResult& WithNextMarker(const Aws::String& value) { SetNextMarker(value); return *this;}
    inline DescribeMountTargetsResult& WithNextMarker(Aws::String&& value) { SetNextMarker(std::move(value)); return *this;}
    inline DescribeMountTargetsResult& WithNextMarker(const char* value) { SetNextMarker(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeMountTargetsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeMountTargetsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeMountTargetsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_marker;

    Aws::Vector<MountTargetDescription> m_mountTargets;

    Aws::String m_nextMarker;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace EFS
} // namespace Aws
