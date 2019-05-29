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
#include <aws/iotthingsgraph/IoTThingsGraph_EXPORTS.h>
#include <aws/iotthingsgraph/IoTThingsGraphRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotthingsgraph/model/EntityType.h>
#include <utility>

namespace Aws
{
namespace IoTThingsGraph
{
namespace Model
{

  /**
   */
  class AWS_IOTTHINGSGRAPH_API DissociateEntityFromThingRequest : public IoTThingsGraphRequest
  {
  public:
    DissociateEntityFromThingRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DissociateEntityFromThing"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the thing to disassociate.</p>
     */
    inline const Aws::String& GetThingName() const{ return m_thingName; }

    /**
     * <p>The name of the thing to disassociate.</p>
     */
    inline bool ThingNameHasBeenSet() const { return m_thingNameHasBeenSet; }

    /**
     * <p>The name of the thing to disassociate.</p>
     */
    inline void SetThingName(const Aws::String& value) { m_thingNameHasBeenSet = true; m_thingName = value; }

    /**
     * <p>The name of the thing to disassociate.</p>
     */
    inline void SetThingName(Aws::String&& value) { m_thingNameHasBeenSet = true; m_thingName = std::move(value); }

    /**
     * <p>The name of the thing to disassociate.</p>
     */
    inline void SetThingName(const char* value) { m_thingNameHasBeenSet = true; m_thingName.assign(value); }

    /**
     * <p>The name of the thing to disassociate.</p>
     */
    inline DissociateEntityFromThingRequest& WithThingName(const Aws::String& value) { SetThingName(value); return *this;}

    /**
     * <p>The name of the thing to disassociate.</p>
     */
    inline DissociateEntityFromThingRequest& WithThingName(Aws::String&& value) { SetThingName(std::move(value)); return *this;}

    /**
     * <p>The name of the thing to disassociate.</p>
     */
    inline DissociateEntityFromThingRequest& WithThingName(const char* value) { SetThingName(value); return *this;}


    /**
     * <p>The entity type from which to disassociate the thing.</p>
     */
    inline const EntityType& GetEntityType() const{ return m_entityType; }

    /**
     * <p>The entity type from which to disassociate the thing.</p>
     */
    inline bool EntityTypeHasBeenSet() const { return m_entityTypeHasBeenSet; }

    /**
     * <p>The entity type from which to disassociate the thing.</p>
     */
    inline void SetEntityType(const EntityType& value) { m_entityTypeHasBeenSet = true; m_entityType = value; }

    /**
     * <p>The entity type from which to disassociate the thing.</p>
     */
    inline void SetEntityType(EntityType&& value) { m_entityTypeHasBeenSet = true; m_entityType = std::move(value); }

    /**
     * <p>The entity type from which to disassociate the thing.</p>
     */
    inline DissociateEntityFromThingRequest& WithEntityType(const EntityType& value) { SetEntityType(value); return *this;}

    /**
     * <p>The entity type from which to disassociate the thing.</p>
     */
    inline DissociateEntityFromThingRequest& WithEntityType(EntityType&& value) { SetEntityType(std::move(value)); return *this;}

  private:

    Aws::String m_thingName;
    bool m_thingNameHasBeenSet;

    EntityType m_entityType;
    bool m_entityTypeHasBeenSet;
  };

} // namespace Model
} // namespace IoTThingsGraph
} // namespace Aws
