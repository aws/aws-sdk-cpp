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
#include <aws/glue/model/DevEndpoint.h>
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
  class AWS_GLUE_API GetDevEndpointResult
  {
  public:
    GetDevEndpointResult();
    GetDevEndpointResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetDevEndpointResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A DevEndpoint definition.</p>
     */
    inline const DevEndpoint& GetDevEndpoint() const{ return m_devEndpoint; }

    /**
     * <p>A DevEndpoint definition.</p>
     */
    inline void SetDevEndpoint(const DevEndpoint& value) { m_devEndpoint = value; }

    /**
     * <p>A DevEndpoint definition.</p>
     */
    inline void SetDevEndpoint(DevEndpoint&& value) { m_devEndpoint = std::move(value); }

    /**
     * <p>A DevEndpoint definition.</p>
     */
    inline GetDevEndpointResult& WithDevEndpoint(const DevEndpoint& value) { SetDevEndpoint(value); return *this;}

    /**
     * <p>A DevEndpoint definition.</p>
     */
    inline GetDevEndpointResult& WithDevEndpoint(DevEndpoint&& value) { SetDevEndpoint(std::move(value)); return *this;}

  private:

    DevEndpoint m_devEndpoint;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
