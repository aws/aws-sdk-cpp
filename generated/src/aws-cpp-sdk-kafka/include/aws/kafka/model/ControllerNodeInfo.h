/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kafka/Kafka_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Kafka
{
namespace Model
{

  /**
   * 
            <p>Controller node information.</p>
         <p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kafka-2018-11-14/ControllerNodeInfo">AWS
   * API Reference</a></p>
   */
  class ControllerNodeInfo
  {
  public:
    AWS_KAFKA_API ControllerNodeInfo();
    AWS_KAFKA_API ControllerNodeInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_KAFKA_API ControllerNodeInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KAFKA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * 
            <p>Endpoints for accessing the Controller.</p>
         
     */
    inline const Aws::Vector<Aws::String>& GetEndpoints() const{ return m_endpoints; }
    inline bool EndpointsHasBeenSet() const { return m_endpointsHasBeenSet; }
    inline void SetEndpoints(const Aws::Vector<Aws::String>& value) { m_endpointsHasBeenSet = true; m_endpoints = value; }
    inline void SetEndpoints(Aws::Vector<Aws::String>&& value) { m_endpointsHasBeenSet = true; m_endpoints = std::move(value); }
    inline ControllerNodeInfo& WithEndpoints(const Aws::Vector<Aws::String>& value) { SetEndpoints(value); return *this;}
    inline ControllerNodeInfo& WithEndpoints(Aws::Vector<Aws::String>&& value) { SetEndpoints(std::move(value)); return *this;}
    inline ControllerNodeInfo& AddEndpoints(const Aws::String& value) { m_endpointsHasBeenSet = true; m_endpoints.push_back(value); return *this; }
    inline ControllerNodeInfo& AddEndpoints(Aws::String&& value) { m_endpointsHasBeenSet = true; m_endpoints.push_back(std::move(value)); return *this; }
    inline ControllerNodeInfo& AddEndpoints(const char* value) { m_endpointsHasBeenSet = true; m_endpoints.push_back(value); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_endpoints;
    bool m_endpointsHasBeenSet = false;
  };

} // namespace Model
} // namespace Kafka
} // namespace Aws
