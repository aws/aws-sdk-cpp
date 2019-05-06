/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_IOT_API DeprecateThingTypeRequest : public IoTRequest
  {
  public:
    DeprecateThingTypeRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeprecateThingType"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The name of the thing type to deprecate.</p>
     */
    inline const Aws::String& GetThingTypeName() const{ return m_thingTypeName; }

    /**
     * <p>The name of the thing type to deprecate.</p>
     */
    inline bool ThingTypeNameHasBeenSet() const { return m_thingTypeNameHasBeenSet; }

    /**
     * <p>The name of the thing type to deprecate.</p>
     */
    inline void SetThingTypeName(const Aws::String& value) { m_thingTypeNameHasBeenSet = true; m_thingTypeName = value; }

    /**
     * <p>The name of the thing type to deprecate.</p>
     */
    inline void SetThingTypeName(Aws::String&& value) { m_thingTypeNameHasBeenSet = true; m_thingTypeName = std::move(value); }

    /**
     * <p>The name of the thing type to deprecate.</p>
     */
    inline void SetThingTypeName(const char* value) { m_thingTypeNameHasBeenSet = true; m_thingTypeName.assign(value); }

    /**
     * <p>The name of the thing type to deprecate.</p>
     */
    inline DeprecateThingTypeRequest& WithThingTypeName(const Aws::String& value) { SetThingTypeName(value); return *this;}

    /**
     * <p>The name of the thing type to deprecate.</p>
     */
    inline DeprecateThingTypeRequest& WithThingTypeName(Aws::String&& value) { SetThingTypeName(std::move(value)); return *this;}

    /**
     * <p>The name of the thing type to deprecate.</p>
     */
    inline DeprecateThingTypeRequest& WithThingTypeName(const char* value) { SetThingTypeName(value); return *this;}


    /**
     * <p>Whether to undeprecate a deprecated thing type. If <b>true</b>, the thing
     * type will not be deprecated anymore and you can associate it with things.</p>
     */
    inline bool GetUndoDeprecate() const{ return m_undoDeprecate; }

    /**
     * <p>Whether to undeprecate a deprecated thing type. If <b>true</b>, the thing
     * type will not be deprecated anymore and you can associate it with things.</p>
     */
    inline bool UndoDeprecateHasBeenSet() const { return m_undoDeprecateHasBeenSet; }

    /**
     * <p>Whether to undeprecate a deprecated thing type. If <b>true</b>, the thing
     * type will not be deprecated anymore and you can associate it with things.</p>
     */
    inline void SetUndoDeprecate(bool value) { m_undoDeprecateHasBeenSet = true; m_undoDeprecate = value; }

    /**
     * <p>Whether to undeprecate a deprecated thing type. If <b>true</b>, the thing
     * type will not be deprecated anymore and you can associate it with things.</p>
     */
    inline DeprecateThingTypeRequest& WithUndoDeprecate(bool value) { SetUndoDeprecate(value); return *this;}

  private:

    Aws::String m_thingTypeName;
    bool m_thingTypeNameHasBeenSet;

    bool m_undoDeprecate;
    bool m_undoDeprecateHasBeenSet;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
