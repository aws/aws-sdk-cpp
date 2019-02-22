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
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/glue/model/DevEndpoint.h>
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
namespace Glue
{
namespace Model
{
  class AWS_GLUE_API BatchGetDevEndpointsResult
  {
  public:
    BatchGetDevEndpointsResult();
    BatchGetDevEndpointsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    BatchGetDevEndpointsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of DevEndpoint definitions.</p>
     */
    inline const Aws::Vector<DevEndpoint>& GetDevEndpoints() const{ return m_devEndpoints; }

    /**
     * <p>A list of DevEndpoint definitions.</p>
     */
    inline void SetDevEndpoints(const Aws::Vector<DevEndpoint>& value) { m_devEndpoints = value; }

    /**
     * <p>A list of DevEndpoint definitions.</p>
     */
    inline void SetDevEndpoints(Aws::Vector<DevEndpoint>&& value) { m_devEndpoints = std::move(value); }

    /**
     * <p>A list of DevEndpoint definitions.</p>
     */
    inline BatchGetDevEndpointsResult& WithDevEndpoints(const Aws::Vector<DevEndpoint>& value) { SetDevEndpoints(value); return *this;}

    /**
     * <p>A list of DevEndpoint definitions.</p>
     */
    inline BatchGetDevEndpointsResult& WithDevEndpoints(Aws::Vector<DevEndpoint>&& value) { SetDevEndpoints(std::move(value)); return *this;}

    /**
     * <p>A list of DevEndpoint definitions.</p>
     */
    inline BatchGetDevEndpointsResult& AddDevEndpoints(const DevEndpoint& value) { m_devEndpoints.push_back(value); return *this; }

    /**
     * <p>A list of DevEndpoint definitions.</p>
     */
    inline BatchGetDevEndpointsResult& AddDevEndpoints(DevEndpoint&& value) { m_devEndpoints.push_back(std::move(value)); return *this; }


    /**
     * <p>A list of DevEndpoints not found.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDevEndpointsNotFound() const{ return m_devEndpointsNotFound; }

    /**
     * <p>A list of DevEndpoints not found.</p>
     */
    inline void SetDevEndpointsNotFound(const Aws::Vector<Aws::String>& value) { m_devEndpointsNotFound = value; }

    /**
     * <p>A list of DevEndpoints not found.</p>
     */
    inline void SetDevEndpointsNotFound(Aws::Vector<Aws::String>&& value) { m_devEndpointsNotFound = std::move(value); }

    /**
     * <p>A list of DevEndpoints not found.</p>
     */
    inline BatchGetDevEndpointsResult& WithDevEndpointsNotFound(const Aws::Vector<Aws::String>& value) { SetDevEndpointsNotFound(value); return *this;}

    /**
     * <p>A list of DevEndpoints not found.</p>
     */
    inline BatchGetDevEndpointsResult& WithDevEndpointsNotFound(Aws::Vector<Aws::String>&& value) { SetDevEndpointsNotFound(std::move(value)); return *this;}

    /**
     * <p>A list of DevEndpoints not found.</p>
     */
    inline BatchGetDevEndpointsResult& AddDevEndpointsNotFound(const Aws::String& value) { m_devEndpointsNotFound.push_back(value); return *this; }

    /**
     * <p>A list of DevEndpoints not found.</p>
     */
    inline BatchGetDevEndpointsResult& AddDevEndpointsNotFound(Aws::String&& value) { m_devEndpointsNotFound.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of DevEndpoints not found.</p>
     */
    inline BatchGetDevEndpointsResult& AddDevEndpointsNotFound(const char* value) { m_devEndpointsNotFound.push_back(value); return *this; }

  private:

    Aws::Vector<DevEndpoint> m_devEndpoints;

    Aws::Vector<Aws::String> m_devEndpointsNotFound;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
