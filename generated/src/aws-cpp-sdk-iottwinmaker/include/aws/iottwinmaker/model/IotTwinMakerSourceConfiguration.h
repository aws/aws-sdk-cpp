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
    AWS_IOTTWINMAKER_API IotTwinMakerSourceConfiguration() = default;
    AWS_IOTTWINMAKER_API IotTwinMakerSourceConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTTWINMAKER_API IotTwinMakerSourceConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTTWINMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The IoT TwinMaker workspace.</p>
     */
    inline const Aws::String& GetWorkspace() const { return m_workspace; }
    inline bool WorkspaceHasBeenSet() const { return m_workspaceHasBeenSet; }
    template<typename WorkspaceT = Aws::String>
    void SetWorkspace(WorkspaceT&& value) { m_workspaceHasBeenSet = true; m_workspace = std::forward<WorkspaceT>(value); }
    template<typename WorkspaceT = Aws::String>
    IotTwinMakerSourceConfiguration& WithWorkspace(WorkspaceT&& value) { SetWorkspace(std::forward<WorkspaceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The metadata transfer job AWS IoT TwinMaker source configuration filters.</p>
     */
    inline const Aws::Vector<IotTwinMakerSourceConfigurationFilter>& GetFilters() const { return m_filters; }
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }
    template<typename FiltersT = Aws::Vector<IotTwinMakerSourceConfigurationFilter>>
    void SetFilters(FiltersT&& value) { m_filtersHasBeenSet = true; m_filters = std::forward<FiltersT>(value); }
    template<typename FiltersT = Aws::Vector<IotTwinMakerSourceConfigurationFilter>>
    IotTwinMakerSourceConfiguration& WithFilters(FiltersT&& value) { SetFilters(std::forward<FiltersT>(value)); return *this;}
    template<typename FiltersT = IotTwinMakerSourceConfigurationFilter>
    IotTwinMakerSourceConfiguration& AddFilters(FiltersT&& value) { m_filtersHasBeenSet = true; m_filters.emplace_back(std::forward<FiltersT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_workspace;
    bool m_workspaceHasBeenSet = false;

    Aws::Vector<IotTwinMakerSourceConfigurationFilter> m_filters;
    bool m_filtersHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTTwinMaker
} // namespace Aws
