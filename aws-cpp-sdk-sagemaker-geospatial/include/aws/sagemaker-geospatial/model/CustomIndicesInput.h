/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker-geospatial/SageMakerGeospatial_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker-geospatial/model/Operation.h>
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
namespace SageMakerGeospatial
{
namespace Model
{

  /**
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-geospatial-2020-05-27/CustomIndicesInput">AWS
   * API Reference</a></p>
   */
  class AWS_SAGEMAKERGEOSPATIAL_API CustomIndicesInput
  {
  public:
    CustomIndicesInput();
    CustomIndicesInput(Aws::Utils::Json::JsonView jsonValue);
    CustomIndicesInput& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p/>
     */
    inline const Aws::Vector<Operation>& GetOperations() const{ return m_operations; }

    /**
     * <p/>
     */
    inline bool OperationsHasBeenSet() const { return m_operationsHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetOperations(const Aws::Vector<Operation>& value) { m_operationsHasBeenSet = true; m_operations = value; }

    /**
     * <p/>
     */
    inline void SetOperations(Aws::Vector<Operation>&& value) { m_operationsHasBeenSet = true; m_operations = std::move(value); }

    /**
     * <p/>
     */
    inline CustomIndicesInput& WithOperations(const Aws::Vector<Operation>& value) { SetOperations(value); return *this;}

    /**
     * <p/>
     */
    inline CustomIndicesInput& WithOperations(Aws::Vector<Operation>&& value) { SetOperations(std::move(value)); return *this;}

    /**
     * <p/>
     */
    inline CustomIndicesInput& AddOperations(const Operation& value) { m_operationsHasBeenSet = true; m_operations.push_back(value); return *this; }

    /**
     * <p/>
     */
    inline CustomIndicesInput& AddOperations(Operation&& value) { m_operationsHasBeenSet = true; m_operations.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<Operation> m_operations;
    bool m_operationsHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMakerGeospatial
} // namespace Aws
