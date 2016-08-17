/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/ecs/model/Service.h>

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
namespace ECS
{
namespace Model
{
  class AWS_ECS_API CreateServiceResult
  {
  public:
    CreateServiceResult();
    CreateServiceResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    CreateServiceResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    /**
     * <p>The full description of your service following the create call.</p>
     */
    inline const Service& GetService() const{ return m_service; }

    /**
     * <p>The full description of your service following the create call.</p>
     */
    inline void SetService(const Service& value) { m_service = value; }

    /**
     * <p>The full description of your service following the create call.</p>
     */
    inline void SetService(Service&& value) { m_service = value; }

    /**
     * <p>The full description of your service following the create call.</p>
     */
    inline CreateServiceResult& WithService(const Service& value) { SetService(value); return *this;}

    /**
     * <p>The full description of your service following the create call.</p>
     */
    inline CreateServiceResult& WithService(Service&& value) { SetService(value); return *this;}

  private:
    Service m_service;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
