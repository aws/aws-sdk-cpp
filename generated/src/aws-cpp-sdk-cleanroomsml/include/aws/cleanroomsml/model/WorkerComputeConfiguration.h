/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanroomsml/CleanRoomsML_EXPORTS.h>
#include <aws/cleanroomsml/model/WorkerComputeType.h>
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
   * <p>Configuration information about the compute workers that perform the
   * transform job.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cleanroomsml-2023-09-06/WorkerComputeConfiguration">AWS
   * API Reference</a></p>
   */
  class WorkerComputeConfiguration
  {
  public:
    AWS_CLEANROOMSML_API WorkerComputeConfiguration() = default;
    AWS_CLEANROOMSML_API WorkerComputeConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMSML_API WorkerComputeConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMSML_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The instance type of the compute workers that are used.</p>
     */
    inline WorkerComputeType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(WorkerComputeType value) { m_typeHasBeenSet = true; m_type = value; }
    inline WorkerComputeConfiguration& WithType(WorkerComputeType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of compute workers that are used.</p>
     */
    inline int GetNumber() const { return m_number; }
    inline bool NumberHasBeenSet() const { return m_numberHasBeenSet; }
    inline void SetNumber(int value) { m_numberHasBeenSet = true; m_number = value; }
    inline WorkerComputeConfiguration& WithNumber(int value) { SetNumber(value); return *this;}
    ///@}
  private:

    WorkerComputeType m_type{WorkerComputeType::NOT_SET};
    bool m_typeHasBeenSet = false;

    int m_number{0};
    bool m_numberHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRoomsML
} // namespace Aws
