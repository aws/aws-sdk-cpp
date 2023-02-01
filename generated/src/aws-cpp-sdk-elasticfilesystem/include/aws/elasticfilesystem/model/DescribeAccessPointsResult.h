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
    AWS_EFS_API DescribeAccessPointsResult();
    AWS_EFS_API DescribeAccessPointsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_EFS_API DescribeAccessPointsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An array of access point descriptions.</p>
     */
    inline const Aws::Vector<AccessPointDescription>& GetAccessPoints() const{ return m_accessPoints; }

    /**
     * <p>An array of access point descriptions.</p>
     */
    inline void SetAccessPoints(const Aws::Vector<AccessPointDescription>& value) { m_accessPoints = value; }

    /**
     * <p>An array of access point descriptions.</p>
     */
    inline void SetAccessPoints(Aws::Vector<AccessPointDescription>&& value) { m_accessPoints = std::move(value); }

    /**
     * <p>An array of access point descriptions.</p>
     */
    inline DescribeAccessPointsResult& WithAccessPoints(const Aws::Vector<AccessPointDescription>& value) { SetAccessPoints(value); return *this;}

    /**
     * <p>An array of access point descriptions.</p>
     */
    inline DescribeAccessPointsResult& WithAccessPoints(Aws::Vector<AccessPointDescription>&& value) { SetAccessPoints(std::move(value)); return *this;}

    /**
     * <p>An array of access point descriptions.</p>
     */
    inline DescribeAccessPointsResult& AddAccessPoints(const AccessPointDescription& value) { m_accessPoints.push_back(value); return *this; }

    /**
     * <p>An array of access point descriptions.</p>
     */
    inline DescribeAccessPointsResult& AddAccessPoints(AccessPointDescription&& value) { m_accessPoints.push_back(std::move(value)); return *this; }


    /**
     * <p>Present if there are more access points than returned in the response. You
     * can use the NextMarker in the subsequent request to fetch the additional
     * descriptions.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>Present if there are more access points than returned in the response. You
     * can use the NextMarker in the subsequent request to fetch the additional
     * descriptions.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>Present if there are more access points than returned in the response. You
     * can use the NextMarker in the subsequent request to fetch the additional
     * descriptions.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>Present if there are more access points than returned in the response. You
     * can use the NextMarker in the subsequent request to fetch the additional
     * descriptions.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>Present if there are more access points than returned in the response. You
     * can use the NextMarker in the subsequent request to fetch the additional
     * descriptions.</p>
     */
    inline DescribeAccessPointsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>Present if there are more access points than returned in the response. You
     * can use the NextMarker in the subsequent request to fetch the additional
     * descriptions.</p>
     */
    inline DescribeAccessPointsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>Present if there are more access points than returned in the response. You
     * can use the NextMarker in the subsequent request to fetch the additional
     * descriptions.</p>
     */
    inline DescribeAccessPointsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<AccessPointDescription> m_accessPoints;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace EFS
} // namespace Aws
