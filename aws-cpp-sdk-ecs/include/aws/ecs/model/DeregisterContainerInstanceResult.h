﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/ecs/model/ContainerInstance.h>
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
  class AWS_ECS_API DeregisterContainerInstanceResult
  {
  public:
    DeregisterContainerInstanceResult();
    DeregisterContainerInstanceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DeregisterContainerInstanceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The container instance that was deregistered.</p>
     */
    inline const ContainerInstance& GetContainerInstance() const{ return m_containerInstance; }

    /**
     * <p>The container instance that was deregistered.</p>
     */
    inline void SetContainerInstance(const ContainerInstance& value) { m_containerInstance = value; }

    /**
     * <p>The container instance that was deregistered.</p>
     */
    inline void SetContainerInstance(ContainerInstance&& value) { m_containerInstance = std::move(value); }

    /**
     * <p>The container instance that was deregistered.</p>
     */
    inline DeregisterContainerInstanceResult& WithContainerInstance(const ContainerInstance& value) { SetContainerInstance(value); return *this;}

    /**
     * <p>The container instance that was deregistered.</p>
     */
    inline DeregisterContainerInstanceResult& WithContainerInstance(ContainerInstance&& value) { SetContainerInstance(std::move(value)); return *this;}

  private:

    ContainerInstance m_containerInstance;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
