/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/keyspaces/Keyspaces_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/keyspaces/model/AutoScalingSpecification.h>
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
namespace Keyspaces
{
namespace Model
{

  /**
   * <p>The auto scaling settings of a multi-Region table in the specified Amazon Web
   * Services Region.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/keyspaces-2022-02-10/ReplicaAutoScalingSpecification">AWS
   * API Reference</a></p>
   */
  class ReplicaAutoScalingSpecification
  {
  public:
    AWS_KEYSPACES_API ReplicaAutoScalingSpecification() = default;
    AWS_KEYSPACES_API ReplicaAutoScalingSpecification(Aws::Utils::Json::JsonView jsonValue);
    AWS_KEYSPACES_API ReplicaAutoScalingSpecification& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KEYSPACES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Web Services Region.</p>
     */
    inline const Aws::String& GetRegion() const { return m_region; }
    inline bool RegionHasBeenSet() const { return m_regionHasBeenSet; }
    template<typename RegionT = Aws::String>
    void SetRegion(RegionT&& value) { m_regionHasBeenSet = true; m_region = std::forward<RegionT>(value); }
    template<typename RegionT = Aws::String>
    ReplicaAutoScalingSpecification& WithRegion(RegionT&& value) { SetRegion(std::forward<RegionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The auto scaling settings for a multi-Region table in the specified Amazon
     * Web Services Region.</p>
     */
    inline const AutoScalingSpecification& GetAutoScalingSpecification() const { return m_autoScalingSpecification; }
    inline bool AutoScalingSpecificationHasBeenSet() const { return m_autoScalingSpecificationHasBeenSet; }
    template<typename AutoScalingSpecificationT = AutoScalingSpecification>
    void SetAutoScalingSpecification(AutoScalingSpecificationT&& value) { m_autoScalingSpecificationHasBeenSet = true; m_autoScalingSpecification = std::forward<AutoScalingSpecificationT>(value); }
    template<typename AutoScalingSpecificationT = AutoScalingSpecification>
    ReplicaAutoScalingSpecification& WithAutoScalingSpecification(AutoScalingSpecificationT&& value) { SetAutoScalingSpecification(std::forward<AutoScalingSpecificationT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_region;
    bool m_regionHasBeenSet = false;

    AutoScalingSpecification m_autoScalingSpecification;
    bool m_autoScalingSpecificationHasBeenSet = false;
  };

} // namespace Model
} // namespace Keyspaces
} // namespace Aws
