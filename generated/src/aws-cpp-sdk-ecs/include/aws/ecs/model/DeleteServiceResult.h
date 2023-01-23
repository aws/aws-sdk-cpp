/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/ecs/model/Service.h>
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
namespace ECS
{
namespace Model
{
  class DeleteServiceResult
  {
  public:
    AWS_ECS_API DeleteServiceResult();
    AWS_ECS_API DeleteServiceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ECS_API DeleteServiceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The full description of the deleted service.</p>
     */
    inline const Service& GetService() const{ return m_service; }

    /**
     * <p>The full description of the deleted service.</p>
     */
    inline void SetService(const Service& value) { m_service = value; }

    /**
     * <p>The full description of the deleted service.</p>
     */
    inline void SetService(Service&& value) { m_service = std::move(value); }

    /**
     * <p>The full description of the deleted service.</p>
     */
    inline DeleteServiceResult& WithService(const Service& value) { SetService(value); return *this;}

    /**
     * <p>The full description of the deleted service.</p>
     */
    inline DeleteServiceResult& WithService(Service&& value) { SetService(std::move(value)); return *this;}

  private:

    Service m_service;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
