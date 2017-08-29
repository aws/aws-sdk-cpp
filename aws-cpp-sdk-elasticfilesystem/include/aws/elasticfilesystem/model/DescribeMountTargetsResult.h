/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_EFS_API DescribeMountTargetsResult
  {
  public:
    DescribeMountTargetsResult();
    DescribeMountTargetsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeMountTargetsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>If the request included the <code>Marker</code>, the response returns that
     * value in this field.</p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }

    /**
     * <p>If the request included the <code>Marker</code>, the response returns that
     * value in this field.</p>
     */
    inline void SetMarker(const Aws::String& value) { m_marker = value; }

    /**
     * <p>If the request included the <code>Marker</code>, the response returns that
     * value in this field.</p>
     */
    inline void SetMarker(Aws::String&& value) { m_marker = std::move(value); }

    /**
     * <p>If the request included the <code>Marker</code>, the response returns that
     * value in this field.</p>
     */
    inline void SetMarker(const char* value) { m_marker.assign(value); }

    /**
     * <p>If the request included the <code>Marker</code>, the response returns that
     * value in this field.</p>
     */
    inline DescribeMountTargetsResult& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    /**
     * <p>If the request included the <code>Marker</code>, the response returns that
     * value in this field.</p>
     */
    inline DescribeMountTargetsResult& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}

    /**
     * <p>If the request included the <code>Marker</code>, the response returns that
     * value in this field.</p>
     */
    inline DescribeMountTargetsResult& WithMarker(const char* value) { SetMarker(value); return *this;}


    /**
     * <p>Returns the file system's mount targets as an array of
     * <code>MountTargetDescription</code> objects.</p>
     */
    inline const Aws::Vector<MountTargetDescription>& GetMountTargets() const{ return m_mountTargets; }

    /**
     * <p>Returns the file system's mount targets as an array of
     * <code>MountTargetDescription</code> objects.</p>
     */
    inline void SetMountTargets(const Aws::Vector<MountTargetDescription>& value) { m_mountTargets = value; }

    /**
     * <p>Returns the file system's mount targets as an array of
     * <code>MountTargetDescription</code> objects.</p>
     */
    inline void SetMountTargets(Aws::Vector<MountTargetDescription>&& value) { m_mountTargets = std::move(value); }

    /**
     * <p>Returns the file system's mount targets as an array of
     * <code>MountTargetDescription</code> objects.</p>
     */
    inline DescribeMountTargetsResult& WithMountTargets(const Aws::Vector<MountTargetDescription>& value) { SetMountTargets(value); return *this;}

    /**
     * <p>Returns the file system's mount targets as an array of
     * <code>MountTargetDescription</code> objects.</p>
     */
    inline DescribeMountTargetsResult& WithMountTargets(Aws::Vector<MountTargetDescription>&& value) { SetMountTargets(std::move(value)); return *this;}

    /**
     * <p>Returns the file system's mount targets as an array of
     * <code>MountTargetDescription</code> objects.</p>
     */
    inline DescribeMountTargetsResult& AddMountTargets(const MountTargetDescription& value) { m_mountTargets.push_back(value); return *this; }

    /**
     * <p>Returns the file system's mount targets as an array of
     * <code>MountTargetDescription</code> objects.</p>
     */
    inline DescribeMountTargetsResult& AddMountTargets(MountTargetDescription&& value) { m_mountTargets.push_back(std::move(value)); return *this; }


    /**
     * <p>If a value is present, there are more mount targets to return. In a
     * subsequent request, you can provide <code>Marker</code> in your request with
     * this value to retrieve the next set of mount targets.</p>
     */
    inline const Aws::String& GetNextMarker() const{ return m_nextMarker; }

    /**
     * <p>If a value is present, there are more mount targets to return. In a
     * subsequent request, you can provide <code>Marker</code> in your request with
     * this value to retrieve the next set of mount targets.</p>
     */
    inline void SetNextMarker(const Aws::String& value) { m_nextMarker = value; }

    /**
     * <p>If a value is present, there are more mount targets to return. In a
     * subsequent request, you can provide <code>Marker</code> in your request with
     * this value to retrieve the next set of mount targets.</p>
     */
    inline void SetNextMarker(Aws::String&& value) { m_nextMarker = std::move(value); }

    /**
     * <p>If a value is present, there are more mount targets to return. In a
     * subsequent request, you can provide <code>Marker</code> in your request with
     * this value to retrieve the next set of mount targets.</p>
     */
    inline void SetNextMarker(const char* value) { m_nextMarker.assign(value); }

    /**
     * <p>If a value is present, there are more mount targets to return. In a
     * subsequent request, you can provide <code>Marker</code> in your request with
     * this value to retrieve the next set of mount targets.</p>
     */
    inline DescribeMountTargetsResult& WithNextMarker(const Aws::String& value) { SetNextMarker(value); return *this;}

    /**
     * <p>If a value is present, there are more mount targets to return. In a
     * subsequent request, you can provide <code>Marker</code> in your request with
     * this value to retrieve the next set of mount targets.</p>
     */
    inline DescribeMountTargetsResult& WithNextMarker(Aws::String&& value) { SetNextMarker(std::move(value)); return *this;}

    /**
     * <p>If a value is present, there are more mount targets to return. In a
     * subsequent request, you can provide <code>Marker</code> in your request with
     * this value to retrieve the next set of mount targets.</p>
     */
    inline DescribeMountTargetsResult& WithNextMarker(const char* value) { SetNextMarker(value); return *this;}

  private:

    Aws::String m_marker;

    Aws::Vector<MountTargetDescription> m_mountTargets;

    Aws::String m_nextMarker;
  };

} // namespace Model
} // namespace EFS
} // namespace Aws
