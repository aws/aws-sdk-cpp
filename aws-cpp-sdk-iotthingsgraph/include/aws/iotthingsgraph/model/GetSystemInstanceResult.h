﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotthingsgraph/IoTThingsGraph_EXPORTS.h>
#include <aws/iotthingsgraph/model/SystemInstanceDescription.h>
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
namespace IoTThingsGraph
{
namespace Model
{
  class AWS_IOTTHINGSGRAPH_API GetSystemInstanceResult
  {
  public:
    GetSystemInstanceResult();
    GetSystemInstanceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetSystemInstanceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An object that describes the system instance.</p>
     */
    inline const SystemInstanceDescription& GetDescription() const{ return m_description; }

    /**
     * <p>An object that describes the system instance.</p>
     */
    inline void SetDescription(const SystemInstanceDescription& value) { m_description = value; }

    /**
     * <p>An object that describes the system instance.</p>
     */
    inline void SetDescription(SystemInstanceDescription&& value) { m_description = std::move(value); }

    /**
     * <p>An object that describes the system instance.</p>
     */
    inline GetSystemInstanceResult& WithDescription(const SystemInstanceDescription& value) { SetDescription(value); return *this;}

    /**
     * <p>An object that describes the system instance.</p>
     */
    inline GetSystemInstanceResult& WithDescription(SystemInstanceDescription&& value) { SetDescription(std::move(value)); return *this;}

  private:

    SystemInstanceDescription m_description;
  };

} // namespace Model
} // namespace IoTThingsGraph
} // namespace Aws
