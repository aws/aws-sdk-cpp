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
#include <aws/s3control/S3Control_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/s3control/model/AccessPoint.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace S3Control
{
namespace Model
{
  class AWS_S3CONTROL_API ListAccessPointsResult
  {
  public:
    ListAccessPointsResult();
    ListAccessPointsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    ListAccessPointsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>Contains identification and configuration information for one or more access
     * points associated with the specified bucket.</p>
     */
    inline const Aws::Vector<AccessPoint>& GetAccessPointList() const{ return m_accessPointList; }

    /**
     * <p>Contains identification and configuration information for one or more access
     * points associated with the specified bucket.</p>
     */
    inline void SetAccessPointList(const Aws::Vector<AccessPoint>& value) { m_accessPointList = value; }

    /**
     * <p>Contains identification and configuration information for one or more access
     * points associated with the specified bucket.</p>
     */
    inline void SetAccessPointList(Aws::Vector<AccessPoint>&& value) { m_accessPointList = std::move(value); }

    /**
     * <p>Contains identification and configuration information for one or more access
     * points associated with the specified bucket.</p>
     */
    inline ListAccessPointsResult& WithAccessPointList(const Aws::Vector<AccessPoint>& value) { SetAccessPointList(value); return *this;}

    /**
     * <p>Contains identification and configuration information for one or more access
     * points associated with the specified bucket.</p>
     */
    inline ListAccessPointsResult& WithAccessPointList(Aws::Vector<AccessPoint>&& value) { SetAccessPointList(std::move(value)); return *this;}

    /**
     * <p>Contains identification and configuration information for one or more access
     * points associated with the specified bucket.</p>
     */
    inline ListAccessPointsResult& AddAccessPointList(const AccessPoint& value) { m_accessPointList.push_back(value); return *this; }

    /**
     * <p>Contains identification and configuration information for one or more access
     * points associated with the specified bucket.</p>
     */
    inline ListAccessPointsResult& AddAccessPointList(AccessPoint&& value) { m_accessPointList.push_back(std::move(value)); return *this; }


    /**
     * <p>If the specified bucket has more access points than can be returned in one
     * call to this API, then this field contains a continuation token that you can
     * provide in subsequent calls to this API to retrieve additional access
     * points.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If the specified bucket has more access points than can be returned in one
     * call to this API, then this field contains a continuation token that you can
     * provide in subsequent calls to this API to retrieve additional access
     * points.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>If the specified bucket has more access points than can be returned in one
     * call to this API, then this field contains a continuation token that you can
     * provide in subsequent calls to this API to retrieve additional access
     * points.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>If the specified bucket has more access points than can be returned in one
     * call to this API, then this field contains a continuation token that you can
     * provide in subsequent calls to this API to retrieve additional access
     * points.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>If the specified bucket has more access points than can be returned in one
     * call to this API, then this field contains a continuation token that you can
     * provide in subsequent calls to this API to retrieve additional access
     * points.</p>
     */
    inline ListAccessPointsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If the specified bucket has more access points than can be returned in one
     * call to this API, then this field contains a continuation token that you can
     * provide in subsequent calls to this API to retrieve additional access
     * points.</p>
     */
    inline ListAccessPointsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If the specified bucket has more access points than can be returned in one
     * call to this API, then this field contains a continuation token that you can
     * provide in subsequent calls to this API to retrieve additional access
     * points.</p>
     */
    inline ListAccessPointsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<AccessPoint> m_accessPointList;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws
