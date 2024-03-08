/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iottwinmaker/IoTTwinMaker_EXPORTS.h>
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
namespace IoTTwinMaker
{
namespace Model
{

  /**
   * <p>The metadata transfer job AWS IoT TwinMaker destination
   * configuration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iottwinmaker-2021-11-29/IotTwinMakerDestinationConfiguration">AWS
   * API Reference</a></p>
   */
  class IotTwinMakerDestinationConfiguration
  {
  public:
    AWS_IOTTWINMAKER_API IotTwinMakerDestinationConfiguration();
    AWS_IOTTWINMAKER_API IotTwinMakerDestinationConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTTWINMAKER_API IotTwinMakerDestinationConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTTWINMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The IoT TwinMaker workspace.</p>
     */
    inline const Aws::String& GetWorkspace() const{ return m_workspace; }

    /**
     * <p>The IoT TwinMaker workspace.</p>
     */
    inline bool WorkspaceHasBeenSet() const { return m_workspaceHasBeenSet; }

    /**
     * <p>The IoT TwinMaker workspace.</p>
     */
    inline void SetWorkspace(const Aws::String& value) { m_workspaceHasBeenSet = true; m_workspace = value; }

    /**
     * <p>The IoT TwinMaker workspace.</p>
     */
    inline void SetWorkspace(Aws::String&& value) { m_workspaceHasBeenSet = true; m_workspace = std::move(value); }

    /**
     * <p>The IoT TwinMaker workspace.</p>
     */
    inline void SetWorkspace(const char* value) { m_workspaceHasBeenSet = true; m_workspace.assign(value); }

    /**
     * <p>The IoT TwinMaker workspace.</p>
     */
    inline IotTwinMakerDestinationConfiguration& WithWorkspace(const Aws::String& value) { SetWorkspace(value); return *this;}

    /**
     * <p>The IoT TwinMaker workspace.</p>
     */
    inline IotTwinMakerDestinationConfiguration& WithWorkspace(Aws::String&& value) { SetWorkspace(std::move(value)); return *this;}

    /**
     * <p>The IoT TwinMaker workspace.</p>
     */
    inline IotTwinMakerDestinationConfiguration& WithWorkspace(const char* value) { SetWorkspace(value); return *this;}

  private:

    Aws::String m_workspace;
    bool m_workspaceHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTTwinMaker
} // namespace Aws
