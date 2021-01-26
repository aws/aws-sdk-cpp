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
   * <p>Currently, the <code>CapacitySize</code> API is not supported.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/CapacitySize">AWS
   * API Reference</a></p>
   */
  class AWS_SAGEMAKER_API CapacitySize
  {
  public:
    CapacitySize();
    CapacitySize(Aws::Utils::Json::JsonView jsonValue);
    CapacitySize& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>This API is not supported.</p>
     */
    inline const CapacitySizeType& GetType() const{ return m_type; }

    /**
     * <p>This API is not supported.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>This API is not supported.</p>
     */
    inline void SetType(const CapacitySizeType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>This API is not supported.</p>
     */
    inline void SetType(CapacitySizeType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>This API is not supported.</p>
     */
    inline CapacitySize& WithType(const CapacitySizeType& value) { SetType(value); return *this;}

    /**
     * <p>This API is not supported.</p>
     */
    inline CapacitySize& WithType(CapacitySizeType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p/>
     */
    inline int GetValue() const{ return m_value; }

    /**
     * <p/>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetValue(int value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p/>
     */
    inline CapacitySize& WithValue(int value) { SetValue(value); return *this;}

  private:

    CapacitySizeType m_type;
    bool m_typeHasBeenSet;

    int m_value;
    bool m_valueHasBeenSet;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
