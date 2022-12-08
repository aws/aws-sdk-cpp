/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/CapacitySizeType.h>
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
namespace SageMaker
{
namespace Model
{

  /**
   * <p>Specifies the endpoint capacity to activate for production.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/CapacitySize">AWS
   * API Reference</a></p>
   */
  class CapacitySize
  {
  public:
    AWS_SAGEMAKER_API CapacitySize();
    AWS_SAGEMAKER_API CapacitySize(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API CapacitySize& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Specifies the endpoint capacity type.</p> <ul> <li> <p>
     * <code>INSTANCE_COUNT</code>: The endpoint activates based on the number of
     * instances.</p> </li> <li> <p> <code>CAPACITY_PERCENT</code>: The endpoint
     * activates based on the specified percentage of capacity.</p> </li> </ul>
     */
    inline const CapacitySizeType& GetType() const{ return m_type; }

    /**
     * <p>Specifies the endpoint capacity type.</p> <ul> <li> <p>
     * <code>INSTANCE_COUNT</code>: The endpoint activates based on the number of
     * instances.</p> </li> <li> <p> <code>CAPACITY_PERCENT</code>: The endpoint
     * activates based on the specified percentage of capacity.</p> </li> </ul>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>Specifies the endpoint capacity type.</p> <ul> <li> <p>
     * <code>INSTANCE_COUNT</code>: The endpoint activates based on the number of
     * instances.</p> </li> <li> <p> <code>CAPACITY_PERCENT</code>: The endpoint
     * activates based on the specified percentage of capacity.</p> </li> </ul>
     */
    inline void SetType(const CapacitySizeType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>Specifies the endpoint capacity type.</p> <ul> <li> <p>
     * <code>INSTANCE_COUNT</code>: The endpoint activates based on the number of
     * instances.</p> </li> <li> <p> <code>CAPACITY_PERCENT</code>: The endpoint
     * activates based on the specified percentage of capacity.</p> </li> </ul>
     */
    inline void SetType(CapacitySizeType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>Specifies the endpoint capacity type.</p> <ul> <li> <p>
     * <code>INSTANCE_COUNT</code>: The endpoint activates based on the number of
     * instances.</p> </li> <li> <p> <code>CAPACITY_PERCENT</code>: The endpoint
     * activates based on the specified percentage of capacity.</p> </li> </ul>
     */
    inline CapacitySize& WithType(const CapacitySizeType& value) { SetType(value); return *this;}

    /**
     * <p>Specifies the endpoint capacity type.</p> <ul> <li> <p>
     * <code>INSTANCE_COUNT</code>: The endpoint activates based on the number of
     * instances.</p> </li> <li> <p> <code>CAPACITY_PERCENT</code>: The endpoint
     * activates based on the specified percentage of capacity.</p> </li> </ul>
     */
    inline CapacitySize& WithType(CapacitySizeType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>Defines the capacity size, either as a number of instances or a capacity
     * percentage.</p>
     */
    inline int GetValue() const{ return m_value; }

    /**
     * <p>Defines the capacity size, either as a number of instances or a capacity
     * percentage.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>Defines the capacity size, either as a number of instances or a capacity
     * percentage.</p>
     */
    inline void SetValue(int value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>Defines the capacity size, either as a number of instances or a capacity
     * percentage.</p>
     */
    inline CapacitySize& WithValue(int value) { SetValue(value); return *this;}

  private:

    CapacitySizeType m_type;
    bool m_typeHasBeenSet = false;

    int m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
