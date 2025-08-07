/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/glue/model/IcebergTableUpdate.h>
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
   * <p>Contains the update operations to be applied to an existing Iceberg table
   * inGlue Data Catalog, defining the new state of the table metadata.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/UpdateIcebergTableInput">AWS
   * API Reference</a></p>
   */
  class UpdateIcebergTableInput
  {
  public:
    AWS_GLUE_API UpdateIcebergTableInput() = default;
    AWS_GLUE_API UpdateIcebergTableInput(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API UpdateIcebergTableInput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The list of table update operations that specify the changes to be made to
     * the Iceberg table, including schema modifications, partition specifications, and
     * table properties.</p>
     */
    inline const Aws::Vector<IcebergTableUpdate>& GetUpdates() const { return m_updates; }
    inline bool UpdatesHasBeenSet() const { return m_updatesHasBeenSet; }
    template<typename UpdatesT = Aws::Vector<IcebergTableUpdate>>
    void SetUpdates(UpdatesT&& value) { m_updatesHasBeenSet = true; m_updates = std::forward<UpdatesT>(value); }
    template<typename UpdatesT = Aws::Vector<IcebergTableUpdate>>
    UpdateIcebergTableInput& WithUpdates(UpdatesT&& value) { SetUpdates(std::forward<UpdatesT>(value)); return *this;}
    template<typename UpdatesT = IcebergTableUpdate>
    UpdateIcebergTableInput& AddUpdates(UpdatesT&& value) { m_updatesHasBeenSet = true; m_updates.emplace_back(std::forward<UpdatesT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<IcebergTableUpdate> m_updates;
    bool m_updatesHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
