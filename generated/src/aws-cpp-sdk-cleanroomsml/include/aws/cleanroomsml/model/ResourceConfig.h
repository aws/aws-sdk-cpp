/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanroomsml/CleanRoomsML_EXPORTS.h>
#include <aws/cleanroomsml/model/InstanceType.h>
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
namespace CleanRoomsML
{
namespace Model
{

  /**
   * <p>Information about the EC2 resources that are used to train the
   * model.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cleanroomsml-2023-09-06/ResourceConfig">AWS
   * API Reference</a></p>
   */
  class ResourceConfig
  {
  public:
    AWS_CLEANROOMSML_API ResourceConfig() = default;
    AWS_CLEANROOMSML_API ResourceConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMSML_API ResourceConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMSML_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The number of resources that are used to train the model.</p>
     */
    inline int GetInstanceCount() const { return m_instanceCount; }
    inline bool InstanceCountHasBeenSet() const { return m_instanceCountHasBeenSet; }
    inline void SetInstanceCount(int value) { m_instanceCountHasBeenSet = true; m_instanceCount = value; }
    inline ResourceConfig& WithInstanceCount(int value) { SetInstanceCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The instance type that is used to train the model.</p>
     */
    inline InstanceType GetInstanceType() const { return m_instanceType; }
    inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }
    inline void SetInstanceType(InstanceType value) { m_instanceTypeHasBeenSet = true; m_instanceType = value; }
    inline ResourceConfig& WithInstanceType(InstanceType value) { SetInstanceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum size of the instance that is used to train the model.</p>
     */
    inline int GetVolumeSizeInGB() const { return m_volumeSizeInGB; }
    inline bool VolumeSizeInGBHasBeenSet() const { return m_volumeSizeInGBHasBeenSet; }
    inline void SetVolumeSizeInGB(int value) { m_volumeSizeInGBHasBeenSet = true; m_volumeSizeInGB = value; }
    inline ResourceConfig& WithVolumeSizeInGB(int value) { SetVolumeSizeInGB(value); return *this;}
    ///@}
  private:

    int m_instanceCount{0};
    bool m_instanceCountHasBeenSet = false;

    InstanceType m_instanceType{InstanceType::NOT_SET};
    bool m_instanceTypeHasBeenSet = false;

    int m_volumeSizeInGB{0};
    bool m_volumeSizeInGBHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRoomsML
} // namespace Aws
