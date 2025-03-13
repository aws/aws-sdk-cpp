/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanroomsml/CleanRoomsML_EXPORTS.h>
#include <aws/cleanroomsml/model/InferenceInstanceType.h>
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
   * <p>Defines the resources used to perform model inference.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cleanroomsml-2023-09-06/InferenceResourceConfig">AWS
   * API Reference</a></p>
   */
  class InferenceResourceConfig
  {
  public:
    AWS_CLEANROOMSML_API InferenceResourceConfig() = default;
    AWS_CLEANROOMSML_API InferenceResourceConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMSML_API InferenceResourceConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMSML_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The type of instance that is used to perform model inference.</p>
     */
    inline InferenceInstanceType GetInstanceType() const { return m_instanceType; }
    inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }
    inline void SetInstanceType(InferenceInstanceType value) { m_instanceTypeHasBeenSet = true; m_instanceType = value; }
    inline InferenceResourceConfig& WithInstanceType(InferenceInstanceType value) { SetInstanceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of instances to use.</p>
     */
    inline int GetInstanceCount() const { return m_instanceCount; }
    inline bool InstanceCountHasBeenSet() const { return m_instanceCountHasBeenSet; }
    inline void SetInstanceCount(int value) { m_instanceCountHasBeenSet = true; m_instanceCount = value; }
    inline InferenceResourceConfig& WithInstanceCount(int value) { SetInstanceCount(value); return *this;}
    ///@}
  private:

    InferenceInstanceType m_instanceType{InferenceInstanceType::NOT_SET};
    bool m_instanceTypeHasBeenSet = false;

    int m_instanceCount{0};
    bool m_instanceCountHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRoomsML
} // namespace Aws
