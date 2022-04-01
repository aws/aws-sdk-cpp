﻿/**
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
  class AWS_BRAKET_API InstanceConfig
  {
  public:
    InstanceConfig();
    InstanceConfig(Aws::Utils::Json::JsonView jsonValue);
    InstanceConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Configures the type resource instances to use while running an Amazon Braket
     * hybrid job.</p>
     */
    inline const InstanceType& GetInstanceType() const{ return m_instanceType; }

    /**
     * <p>Configures the type resource instances to use while running an Amazon Braket
     * hybrid job.</p>
     */
    inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }

    /**
     * <p>Configures the type resource instances to use while running an Amazon Braket
     * hybrid job.</p>
     */
    inline void SetInstanceType(const InstanceType& value) { m_instanceTypeHasBeenSet = true; m_instanceType = value; }

    /**
     * <p>Configures the type resource instances to use while running an Amazon Braket
     * hybrid job.</p>
     */
    inline void SetInstanceType(InstanceType&& value) { m_instanceTypeHasBeenSet = true; m_instanceType = std::move(value); }

    /**
     * <p>Configures the type resource instances to use while running an Amazon Braket
     * hybrid job.</p>
     */
    inline InstanceConfig& WithInstanceType(const InstanceType& value) { SetInstanceType(value); return *this;}

    /**
     * <p>Configures the type resource instances to use while running an Amazon Braket
     * hybrid job.</p>
     */
    inline InstanceConfig& WithInstanceType(InstanceType&& value) { SetInstanceType(std::move(value)); return *this;}


    /**
     * <p>The size of the storage volume, in GB, that user wants to provision.</p>
     */
    inline int GetVolumeSizeInGb() const{ return m_volumeSizeInGb; }

    /**
     * <p>The size of the storage volume, in GB, that user wants to provision.</p>
     */
    inline bool VolumeSizeInGbHasBeenSet() const { return m_volumeSizeInGbHasBeenSet; }

    /**
     * <p>The size of the storage volume, in GB, that user wants to provision.</p>
     */
    inline void SetVolumeSizeInGb(int value) { m_volumeSizeInGbHasBeenSet = true; m_volumeSizeInGb = value; }

    /**
     * <p>The size of the storage volume, in GB, that user wants to provision.</p>
     */
    inline InstanceConfig& WithVolumeSizeInGb(int value) { SetVolumeSizeInGb(value); return *this;}

  private:

    InstanceType m_instanceType;
    bool m_instanceTypeHasBeenSet;

    int m_volumeSizeInGb;
    bool m_volumeSizeInGbHasBeenSet;
  };

} // namespace Model
} // namespace Braket
} // namespace Aws
