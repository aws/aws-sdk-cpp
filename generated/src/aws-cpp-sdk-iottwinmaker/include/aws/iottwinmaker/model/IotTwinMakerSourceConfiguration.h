/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iottwinmaker/IoTTwinMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iottwinmaker/model/IotTwinMakerSourceConfigurationFilter.h>
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
   * <p>The metadata transfer job AWS IoT TwinMaker source
   * configuration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iottwinmaker-2021-11-29/IotTwinMakerSourceConfiguration">AWS
   * API Reference</a></p>
   */
  class IotTwinMakerSourceConfiguration
  {
  public:
    AWS_IOTTWINMAKER_API IotTwinMakerSourceConfiguration();
    AWS_IOTTWINMAKER_API IotTwinMakerSourceConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTTWINMAKER_API IotTwinMakerSourceConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    inline IotTwinMakerSourceConfiguration& WithWorkspace(const Aws::String& value) { SetWorkspace(value); return *this;}

    /**
     * <p>The IoT TwinMaker workspace.</p>
     */
    inline IotTwinMakerSourceConfiguration& WithWorkspace(Aws::String&& value) { SetWorkspace(std::move(value)); return *this;}

    /**
     * <p>The IoT TwinMaker workspace.</p>
     */
    inline IotTwinMakerSourceConfiguration& WithWorkspace(const char* value) { SetWorkspace(value); return *this;}


    /**
     * <p>The metadata transfer job AWS IoT TwinMaker source configuration filters.</p>
     */
    inline const Aws::Vector<IotTwinMakerSourceConfigurationFilter>& GetFilters() const{ return m_filters; }

    /**
     * <p>The metadata transfer job AWS IoT TwinMaker source configuration filters.</p>
     */
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }

    /**
     * <p>The metadata transfer job AWS IoT TwinMaker source configuration filters.</p>
     */
    inline void SetFilters(const Aws::Vector<IotTwinMakerSourceConfigurationFilter>& value) { m_filtersHasBeenSet = true; m_filters = value; }

    /**
     * <p>The metadata transfer job AWS IoT TwinMaker source configuration filters.</p>
     */
    inline void SetFilters(Aws::Vector<IotTwinMakerSourceConfigurationFilter>&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }

    /**
     * <p>The metadata transfer job AWS IoT TwinMaker source configuration filters.</p>
     */
    inline IotTwinMakerSourceConfiguration& WithFilters(const Aws::Vector<IotTwinMakerSourceConfigurationFilter>& value) { SetFilters(value); return *this;}

    /**
     * <p>The metadata transfer job AWS IoT TwinMaker source configuration filters.</p>
     */
    inline IotTwinMakerSourceConfiguration& WithFilters(Aws::Vector<IotTwinMakerSourceConfigurationFilter>&& value) { SetFilters(std::move(value)); return *this;}

    /**
     * <p>The metadata transfer job AWS IoT TwinMaker source configuration filters.</p>
     */
    inline IotTwinMakerSourceConfiguration& AddFilters(const IotTwinMakerSourceConfigurationFilter& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }

    /**
     * <p>The metadata transfer job AWS IoT TwinMaker source configuration filters.</p>
     */
    inline IotTwinMakerSourceConfiguration& AddFilters(IotTwinMakerSourceConfigurationFilter&& value) { m_filtersHasBeenSet = true; m_filters.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_workspace;
    bool m_workspaceHasBeenSet = false;

    Aws::Vector<IotTwinMakerSourceConfigurationFilter> m_filters;
    bool m_filtersHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTTwinMaker
} // namespace Aws
