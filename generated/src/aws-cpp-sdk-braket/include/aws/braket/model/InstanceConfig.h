/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/braket/Braket_EXPORTS.h>
#include <aws/braket/model/InstanceType.h>
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
namespace Braket
{
namespace Model
{

  /**
   * <p>Configures the resource instances to use while running the Amazon Braket
   * hybrid job on Amazon Braket.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/braket-2019-09-01/InstanceConfig">AWS
   * API Reference</a></p>
   */
  class InstanceConfig
  {
  public:
    AWS_BRAKET_API InstanceConfig() = default;
    AWS_BRAKET_API InstanceConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_BRAKET_API InstanceConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BRAKET_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Configures the type of resource instances to use while running an Amazon
     * Braket hybrid job.</p>
     */
    inline InstanceType GetInstanceType() const { return m_instanceType; }
    inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }
    inline void SetInstanceType(InstanceType value) { m_instanceTypeHasBeenSet = true; m_instanceType = value; }
    inline InstanceConfig& WithInstanceType(InstanceType value) { SetInstanceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The size of the storage volume, in GB, to provision.</p>
     */
    inline int GetVolumeSizeInGb() const { return m_volumeSizeInGb; }
    inline bool VolumeSizeInGbHasBeenSet() const { return m_volumeSizeInGbHasBeenSet; }
    inline void SetVolumeSizeInGb(int value) { m_volumeSizeInGbHasBeenSet = true; m_volumeSizeInGb = value; }
    inline InstanceConfig& WithVolumeSizeInGb(int value) { SetVolumeSizeInGb(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configures the number of resource instances to use while running an Amazon
     * Braket hybrid job on Amazon Braket. The default value is 1.</p>
     */
    inline int GetInstanceCount() const { return m_instanceCount; }
    inline bool InstanceCountHasBeenSet() const { return m_instanceCountHasBeenSet; }
    inline void SetInstanceCount(int value) { m_instanceCountHasBeenSet = true; m_instanceCount = value; }
    inline InstanceConfig& WithInstanceCount(int value) { SetInstanceCount(value); return *this;}
    ///@}
  private:

    InstanceType m_instanceType{InstanceType::NOT_SET};
    bool m_instanceTypeHasBeenSet = false;

    int m_volumeSizeInGb{0};
    bool m_volumeSizeInGbHasBeenSet = false;

    int m_instanceCount{0};
    bool m_instanceCountHasBeenSet = false;
  };

} // namespace Model
} // namespace Braket
} // namespace Aws
