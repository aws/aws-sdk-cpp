/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/iot/IoTRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace IoT
{
namespace Model
{

  /**
   * <p>The input for the DeprecateThingType operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/DeprecateThingTypeRequest">AWS
   * API Reference</a></p>
   */
  class DeprecateThingTypeRequest : public IoTRequest
  {
  public:
    AWS_IOT_API DeprecateThingTypeRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeprecateThingType"; }

    AWS_IOT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The name of the thing type to deprecate.</p>
     */
    inline const Aws::String& GetThingTypeName() const { return m_thingTypeName; }
    inline bool ThingTypeNameHasBeenSet() const { return m_thingTypeNameHasBeenSet; }
    template<typename ThingTypeNameT = Aws::String>
    void SetThingTypeName(ThingTypeNameT&& value) { m_thingTypeNameHasBeenSet = true; m_thingTypeName = std::forward<ThingTypeNameT>(value); }
    template<typename ThingTypeNameT = Aws::String>
    DeprecateThingTypeRequest& WithThingTypeName(ThingTypeNameT&& value) { SetThingTypeName(std::forward<ThingTypeNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether to undeprecate a deprecated thing type. If <b>true</b>, the thing
     * type will not be deprecated anymore and you can associate it with things.</p>
     */
    inline bool GetUndoDeprecate() const { return m_undoDeprecate; }
    inline bool UndoDeprecateHasBeenSet() const { return m_undoDeprecateHasBeenSet; }
    inline void SetUndoDeprecate(bool value) { m_undoDeprecateHasBeenSet = true; m_undoDeprecate = value; }
    inline DeprecateThingTypeRequest& WithUndoDeprecate(bool value) { SetUndoDeprecate(value); return *this;}
    ///@}
  private:

    Aws::String m_thingTypeName;
    bool m_thingTypeNameHasBeenSet = false;

    bool m_undoDeprecate{false};
    bool m_undoDeprecateHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
