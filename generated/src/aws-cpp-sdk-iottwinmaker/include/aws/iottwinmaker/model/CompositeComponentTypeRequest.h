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
   * <p>An object that sets information about the composite component types of a
   * component type.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iottwinmaker-2021-11-29/CompositeComponentTypeRequest">AWS
   * API Reference</a></p>
   */
  class CompositeComponentTypeRequest
  {
  public:
    AWS_IOTTWINMAKER_API CompositeComponentTypeRequest();
    AWS_IOTTWINMAKER_API CompositeComponentTypeRequest(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTTWINMAKER_API CompositeComponentTypeRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTTWINMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>This is the <code>componentTypeId</code> that the
     * <code>compositeComponentType</code> refers to.</p>
     */
    inline const Aws::String& GetComponentTypeId() const{ return m_componentTypeId; }

    /**
     * <p>This is the <code>componentTypeId</code> that the
     * <code>compositeComponentType</code> refers to.</p>
     */
    inline bool ComponentTypeIdHasBeenSet() const { return m_componentTypeIdHasBeenSet; }

    /**
     * <p>This is the <code>componentTypeId</code> that the
     * <code>compositeComponentType</code> refers to.</p>
     */
    inline void SetComponentTypeId(const Aws::String& value) { m_componentTypeIdHasBeenSet = true; m_componentTypeId = value; }

    /**
     * <p>This is the <code>componentTypeId</code> that the
     * <code>compositeComponentType</code> refers to.</p>
     */
    inline void SetComponentTypeId(Aws::String&& value) { m_componentTypeIdHasBeenSet = true; m_componentTypeId = std::move(value); }

    /**
     * <p>This is the <code>componentTypeId</code> that the
     * <code>compositeComponentType</code> refers to.</p>
     */
    inline void SetComponentTypeId(const char* value) { m_componentTypeIdHasBeenSet = true; m_componentTypeId.assign(value); }

    /**
     * <p>This is the <code>componentTypeId</code> that the
     * <code>compositeComponentType</code> refers to.</p>
     */
    inline CompositeComponentTypeRequest& WithComponentTypeId(const Aws::String& value) { SetComponentTypeId(value); return *this;}

    /**
     * <p>This is the <code>componentTypeId</code> that the
     * <code>compositeComponentType</code> refers to.</p>
     */
    inline CompositeComponentTypeRequest& WithComponentTypeId(Aws::String&& value) { SetComponentTypeId(std::move(value)); return *this;}

    /**
     * <p>This is the <code>componentTypeId</code> that the
     * <code>compositeComponentType</code> refers to.</p>
     */
    inline CompositeComponentTypeRequest& WithComponentTypeId(const char* value) { SetComponentTypeId(value); return *this;}

  private:

    Aws::String m_componentTypeId;
    bool m_componentTypeIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTTwinMaker
} // namespace Aws
