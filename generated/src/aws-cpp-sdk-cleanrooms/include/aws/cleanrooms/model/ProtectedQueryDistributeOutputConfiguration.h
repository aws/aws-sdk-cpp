/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/cleanrooms/model/ProtectedQueryDistributeOutputConfigurationLocation.h>
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
namespace CleanRooms
{
namespace Model
{

  /**
   * <p> Specifies the configuration for distributing protected query results to
   * multiple receivers, including S3 and collaboration members.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cleanrooms-2022-02-17/ProtectedQueryDistributeOutputConfiguration">AWS
   * API Reference</a></p>
   */
  class ProtectedQueryDistributeOutputConfiguration
  {
  public:
    AWS_CLEANROOMS_API ProtectedQueryDistributeOutputConfiguration() = default;
    AWS_CLEANROOMS_API ProtectedQueryDistributeOutputConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API ProtectedQueryDistributeOutputConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> A list of locations where you want to distribute the protected query
     * results. Each location must specify either an S3 destination or a collaboration
     * member destination.</p>  <p>You can't specify more than one S3
     * location.</p> <p>You can't specify the query runner's account as a member
     * location.</p> <p>You must include either an S3 or member output configuration
     * for each location, but not both.</p> 
     */
    inline const Aws::Vector<ProtectedQueryDistributeOutputConfigurationLocation>& GetLocations() const { return m_locations; }
    inline bool LocationsHasBeenSet() const { return m_locationsHasBeenSet; }
    template<typename LocationsT = Aws::Vector<ProtectedQueryDistributeOutputConfigurationLocation>>
    void SetLocations(LocationsT&& value) { m_locationsHasBeenSet = true; m_locations = std::forward<LocationsT>(value); }
    template<typename LocationsT = Aws::Vector<ProtectedQueryDistributeOutputConfigurationLocation>>
    ProtectedQueryDistributeOutputConfiguration& WithLocations(LocationsT&& value) { SetLocations(std::forward<LocationsT>(value)); return *this;}
    template<typename LocationsT = ProtectedQueryDistributeOutputConfigurationLocation>
    ProtectedQueryDistributeOutputConfiguration& AddLocations(LocationsT&& value) { m_locationsHasBeenSet = true; m_locations.emplace_back(std::forward<LocationsT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<ProtectedQueryDistributeOutputConfigurationLocation> m_locations;
    bool m_locationsHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
