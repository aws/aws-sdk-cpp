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
#include <aws/devicefarm/DeviceFarm_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/devicefarm/model/TestGridSessionArtifact.h>
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
namespace DeviceFarm
{
namespace Model
{
  class AWS_DEVICEFARM_API ListTestGridSessionArtifactsResult
  {
  public:
    ListTestGridSessionArtifactsResult();
    ListTestGridSessionArtifactsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListTestGridSessionArtifactsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of test grid session artifacts for a <a>TestGridSession</a>.</p>
     */
    inline const Aws::Vector<TestGridSessionArtifact>& GetArtifacts() const{ return m_artifacts; }

    /**
     * <p>A list of test grid session artifacts for a <a>TestGridSession</a>.</p>
     */
    inline void SetArtifacts(const Aws::Vector<TestGridSessionArtifact>& value) { m_artifacts = value; }

    /**
     * <p>A list of test grid session artifacts for a <a>TestGridSession</a>.</p>
     */
    inline void SetArtifacts(Aws::Vector<TestGridSessionArtifact>&& value) { m_artifacts = std::move(value); }

    /**
     * <p>A list of test grid session artifacts for a <a>TestGridSession</a>.</p>
     */
    inline ListTestGridSessionArtifactsResult& WithArtifacts(const Aws::Vector<TestGridSessionArtifact>& value) { SetArtifacts(value); return *this;}

    /**
     * <p>A list of test grid session artifacts for a <a>TestGridSession</a>.</p>
     */
    inline ListTestGridSessionArtifactsResult& WithArtifacts(Aws::Vector<TestGridSessionArtifact>&& value) { SetArtifacts(std::move(value)); return *this;}

    /**
     * <p>A list of test grid session artifacts for a <a>TestGridSession</a>.</p>
     */
    inline ListTestGridSessionArtifactsResult& AddArtifacts(const TestGridSessionArtifact& value) { m_artifacts.push_back(value); return *this; }

    /**
     * <p>A list of test grid session artifacts for a <a>TestGridSession</a>.</p>
     */
    inline ListTestGridSessionArtifactsResult& AddArtifacts(TestGridSessionArtifact&& value) { m_artifacts.push_back(std::move(value)); return *this; }


    /**
     * <p>Pagination token.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>Pagination token.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>Pagination token.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>Pagination token.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>Pagination token.</p>
     */
    inline ListTestGridSessionArtifactsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>Pagination token.</p>
     */
    inline ListTestGridSessionArtifactsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>Pagination token.</p>
     */
    inline ListTestGridSessionArtifactsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<TestGridSessionArtifact> m_artifacts;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace DeviceFarm
} // namespace Aws
