/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotwireless/IoTWireless_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotwireless/model/UpdateWirelessGatewayTaskCreate.h>
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
namespace IoTWireless
{
namespace Model
{
  class GetWirelessGatewayTaskDefinitionResult
  {
  public:
    AWS_IOTWIRELESS_API GetWirelessGatewayTaskDefinitionResult();
    AWS_IOTWIRELESS_API GetWirelessGatewayTaskDefinitionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTWIRELESS_API GetWirelessGatewayTaskDefinitionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Whether to automatically create tasks using this task definition for all
     * gateways with the specified current version. If <code>false</code>, the task
     * must me created by calling <code>CreateWirelessGatewayTask</code>.</p>
     */
    inline bool GetAutoCreateTasks() const{ return m_autoCreateTasks; }

    /**
     * <p>Whether to automatically create tasks using this task definition for all
     * gateways with the specified current version. If <code>false</code>, the task
     * must me created by calling <code>CreateWirelessGatewayTask</code>.</p>
     */
    inline void SetAutoCreateTasks(bool value) { m_autoCreateTasks = value; }

    /**
     * <p>Whether to automatically create tasks using this task definition for all
     * gateways with the specified current version. If <code>false</code>, the task
     * must me created by calling <code>CreateWirelessGatewayTask</code>.</p>
     */
    inline GetWirelessGatewayTaskDefinitionResult& WithAutoCreateTasks(bool value) { SetAutoCreateTasks(value); return *this;}


    /**
     * <p>The name of the resource.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the resource.</p>
     */
    inline void SetName(const Aws::String& value) { m_name = value; }

    /**
     * <p>The name of the resource.</p>
     */
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }

    /**
     * <p>The name of the resource.</p>
     */
    inline void SetName(const char* value) { m_name.assign(value); }

    /**
     * <p>The name of the resource.</p>
     */
    inline GetWirelessGatewayTaskDefinitionResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the resource.</p>
     */
    inline GetWirelessGatewayTaskDefinitionResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the resource.</p>
     */
    inline GetWirelessGatewayTaskDefinitionResult& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>Information about the gateways to update.</p>
     */
    inline const UpdateWirelessGatewayTaskCreate& GetUpdate() const{ return m_update; }

    /**
     * <p>Information about the gateways to update.</p>
     */
    inline void SetUpdate(const UpdateWirelessGatewayTaskCreate& value) { m_update = value; }

    /**
     * <p>Information about the gateways to update.</p>
     */
    inline void SetUpdate(UpdateWirelessGatewayTaskCreate&& value) { m_update = std::move(value); }

    /**
     * <p>Information about the gateways to update.</p>
     */
    inline GetWirelessGatewayTaskDefinitionResult& WithUpdate(const UpdateWirelessGatewayTaskCreate& value) { SetUpdate(value); return *this;}

    /**
     * <p>Information about the gateways to update.</p>
     */
    inline GetWirelessGatewayTaskDefinitionResult& WithUpdate(UpdateWirelessGatewayTaskCreate&& value) { SetUpdate(std::move(value)); return *this;}


    /**
     * <p>The Amazon Resource Name of the resource.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name of the resource.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arn = value; }

    /**
     * <p>The Amazon Resource Name of the resource.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name of the resource.</p>
     */
    inline void SetArn(const char* value) { m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name of the resource.</p>
     */
    inline GetWirelessGatewayTaskDefinitionResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name of the resource.</p>
     */
    inline GetWirelessGatewayTaskDefinitionResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name of the resource.</p>
     */
    inline GetWirelessGatewayTaskDefinitionResult& WithArn(const char* value) { SetArn(value); return *this;}

  private:

    bool m_autoCreateTasks;

    Aws::String m_name;

    UpdateWirelessGatewayTaskCreate m_update;

    Aws::String m_arn;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
