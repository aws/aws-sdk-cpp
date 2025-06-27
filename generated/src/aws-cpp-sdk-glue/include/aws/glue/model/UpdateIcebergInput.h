/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/model/UpdateIcebergTableInput.h>
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
namespace Glue
{
namespace Model
{

  /**
   * <p>Input parameters specific to updating Apache Iceberg tables in Glue Data
   * Catalog, containing the update operations to be applied to an existing Iceberg
   * table.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/UpdateIcebergInput">AWS
   * API Reference</a></p>
   */
  class UpdateIcebergInput
  {
  public:
    AWS_GLUE_API UpdateIcebergInput() = default;
    AWS_GLUE_API UpdateIcebergInput(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API UpdateIcebergInput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The specific update operations to be applied to the Iceberg table, containing
     * a list of updates that define the new state of the table including schema,
     * partitions, and properties.</p>
     */
    inline const UpdateIcebergTableInput& GetUpdateIcebergTableInput() const { return m_updateIcebergTableInput; }
    inline bool UpdateIcebergTableInputHasBeenSet() const { return m_updateIcebergTableInputHasBeenSet; }
    template<typename UpdateIcebergTableInputT = UpdateIcebergTableInput>
    void SetUpdateIcebergTableInput(UpdateIcebergTableInputT&& value) { m_updateIcebergTableInputHasBeenSet = true; m_updateIcebergTableInput = std::forward<UpdateIcebergTableInputT>(value); }
    template<typename UpdateIcebergTableInputT = UpdateIcebergTableInput>
    UpdateIcebergInput& WithUpdateIcebergTableInput(UpdateIcebergTableInputT&& value) { SetUpdateIcebergTableInput(std::forward<UpdateIcebergTableInputT>(value)); return *this;}
    ///@}
  private:

    UpdateIcebergTableInput m_updateIcebergTableInput;
    bool m_updateIcebergTableInputHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
