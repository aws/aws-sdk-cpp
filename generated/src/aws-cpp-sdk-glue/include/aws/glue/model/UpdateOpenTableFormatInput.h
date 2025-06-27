/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/model/UpdateIcebergInput.h>
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
   * <p>Input parameters for updating open table format tables in GlueData Catalog,
   * serving as a wrapper for format-specific update operations such as Apache
   * Iceberg.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/UpdateOpenTableFormatInput">AWS
   * API Reference</a></p>
   */
  class UpdateOpenTableFormatInput
  {
  public:
    AWS_GLUE_API UpdateOpenTableFormatInput() = default;
    AWS_GLUE_API UpdateOpenTableFormatInput(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API UpdateOpenTableFormatInput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Apache Iceberg-specific update parameters that define the table modifications
     * to be applied, including schema changes, partition specifications, and table
     * properties.</p>
     */
    inline const UpdateIcebergInput& GetUpdateIcebergInput() const { return m_updateIcebergInput; }
    inline bool UpdateIcebergInputHasBeenSet() const { return m_updateIcebergInputHasBeenSet; }
    template<typename UpdateIcebergInputT = UpdateIcebergInput>
    void SetUpdateIcebergInput(UpdateIcebergInputT&& value) { m_updateIcebergInputHasBeenSet = true; m_updateIcebergInput = std::forward<UpdateIcebergInputT>(value); }
    template<typename UpdateIcebergInputT = UpdateIcebergInput>
    UpdateOpenTableFormatInput& WithUpdateIcebergInput(UpdateIcebergInputT&& value) { SetUpdateIcebergInput(std::forward<UpdateIcebergInputT>(value)); return *this;}
    ///@}
  private:

    UpdateIcebergInput m_updateIcebergInput;
    bool m_updateIcebergInputHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
