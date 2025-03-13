/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iottwinmaker/IoTTwinMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace IoTTwinMaker
{
namespace Model
{

  /**
   * <p>Vilter by entity.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iottwinmaker-2021-11-29/FilterByEntity">AWS
   * API Reference</a></p>
   */
  class FilterByEntity
  {
  public:
    AWS_IOTTWINMAKER_API FilterByEntity() = default;
    AWS_IOTTWINMAKER_API FilterByEntity(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTTWINMAKER_API FilterByEntity& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTTWINMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The entity Id.</p>
     */
    inline const Aws::String& GetEntityId() const { return m_entityId; }
    inline bool EntityIdHasBeenSet() const { return m_entityIdHasBeenSet; }
    template<typename EntityIdT = Aws::String>
    void SetEntityId(EntityIdT&& value) { m_entityIdHasBeenSet = true; m_entityId = std::forward<EntityIdT>(value); }
    template<typename EntityIdT = Aws::String>
    FilterByEntity& WithEntityId(EntityIdT&& value) { SetEntityId(std::forward<EntityIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_entityId;
    bool m_entityIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTTwinMaker
} // namespace Aws
