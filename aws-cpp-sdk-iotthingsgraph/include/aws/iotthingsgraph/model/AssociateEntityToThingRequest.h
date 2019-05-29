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
#include <utility>

namespace Aws
{
namespace IoTThingsGraph
{
namespace Model
{

  /**
   */
  class AWS_IOTTHINGSGRAPH_API AssociateEntityToThingRequest : public IoTThingsGraphRequest
  {
  public:
    AssociateEntityToThingRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AssociateEntityToThing"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the thing to which the entity is to be associated.</p>
     */
    inline const Aws::String& GetThingName() const{ return m_thingName; }

    /**
     * <p>The name of the thing to which the entity is to be associated.</p>
     */
    inline bool ThingNameHasBeenSet() const { return m_thingNameHasBeenSet; }

    /**
     * <p>The name of the thing to which the entity is to be associated.</p>
     */
    inline void SetThingName(const Aws::String& value) { m_thingNameHasBeenSet = true; m_thingName = value; }

    /**
     * <p>The name of the thing to which the entity is to be associated.</p>
     */
    inline void SetThingName(Aws::String&& value) { m_thingNameHasBeenSet = true; m_thingName = std::move(value); }

    /**
     * <p>The name of the thing to which the entity is to be associated.</p>
     */
    inline void SetThingName(const char* value) { m_thingNameHasBeenSet = true; m_thingName.assign(value); }

    /**
     * <p>The name of the thing to which the entity is to be associated.</p>
     */
    inline AssociateEntityToThingRequest& WithThingName(const Aws::String& value) { SetThingName(value); return *this;}

    /**
     * <p>The name of the thing to which the entity is to be associated.</p>
     */
    inline AssociateEntityToThingRequest& WithThingName(Aws::String&& value) { SetThingName(std::move(value)); return *this;}

    /**
     * <p>The name of the thing to which the entity is to be associated.</p>
     */
    inline AssociateEntityToThingRequest& WithThingName(const char* value) { SetThingName(value); return *this;}


    /**
     * <p>The ID of the device to be associated with the thing.</p> <p>The ID should be
     * in the following format.</p> <p> <code>urn:tdm:REGION/ACCOUNT
     * ID/default:device:DEVICENAME</code> </p>
     */
    inline const Aws::String& GetEntityId() const{ return m_entityId; }

    /**
     * <p>The ID of the device to be associated with the thing.</p> <p>The ID should be
     * in the following format.</p> <p> <code>urn:tdm:REGION/ACCOUNT
     * ID/default:device:DEVICENAME</code> </p>
     */
    inline bool EntityIdHasBeenSet() const { return m_entityIdHasBeenSet; }

    /**
     * <p>The ID of the device to be associated with the thing.</p> <p>The ID should be
     * in the following format.</p> <p> <code>urn:tdm:REGION/ACCOUNT
     * ID/default:device:DEVICENAME</code> </p>
     */
    inline void SetEntityId(const Aws::String& value) { m_entityIdHasBeenSet = true; m_entityId = value; }

    /**
     * <p>The ID of the device to be associated with the thing.</p> <p>The ID should be
     * in the following format.</p> <p> <code>urn:tdm:REGION/ACCOUNT
     * ID/default:device:DEVICENAME</code> </p>
     */
    inline void SetEntityId(Aws::String&& value) { m_entityIdHasBeenSet = true; m_entityId = std::move(value); }

    /**
     * <p>The ID of the device to be associated with the thing.</p> <p>The ID should be
     * in the following format.</p> <p> <code>urn:tdm:REGION/ACCOUNT
     * ID/default:device:DEVICENAME</code> </p>
     */
    inline void SetEntityId(const char* value) { m_entityIdHasBeenSet = true; m_entityId.assign(value); }

    /**
     * <p>The ID of the device to be associated with the thing.</p> <p>The ID should be
     * in the following format.</p> <p> <code>urn:tdm:REGION/ACCOUNT
     * ID/default:device:DEVICENAME</code> </p>
     */
    inline AssociateEntityToThingRequest& WithEntityId(const Aws::String& value) { SetEntityId(value); return *this;}

    /**
     * <p>The ID of the device to be associated with the thing.</p> <p>The ID should be
     * in the following format.</p> <p> <code>urn:tdm:REGION/ACCOUNT
     * ID/default:device:DEVICENAME</code> </p>
     */
    inline AssociateEntityToThingRequest& WithEntityId(Aws::String&& value) { SetEntityId(std::move(value)); return *this;}

    /**
     * <p>The ID of the device to be associated with the thing.</p> <p>The ID should be
     * in the following format.</p> <p> <code>urn:tdm:REGION/ACCOUNT
     * ID/default:device:DEVICENAME</code> </p>
     */
    inline AssociateEntityToThingRequest& WithEntityId(const char* value) { SetEntityId(value); return *this;}


    /**
     * <p>The version of the user's namespace. Defaults to the latest version of the
     * user's namespace.</p>
     */
    inline long long GetNamespaceVersion() const{ return m_namespaceVersion; }

    /**
     * <p>The version of the user's namespace. Defaults to the latest version of the
     * user's namespace.</p>
     */
    inline bool NamespaceVersionHasBeenSet() const { return m_namespaceVersionHasBeenSet; }

    /**
     * <p>The version of the user's namespace. Defaults to the latest version of the
     * user's namespace.</p>
     */
    inline void SetNamespaceVersion(long long value) { m_namespaceVersionHasBeenSet = true; m_namespaceVersion = value; }

    /**
     * <p>The version of the user's namespace. Defaults to the latest version of the
     * user's namespace.</p>
     */
    inline AssociateEntityToThingRequest& WithNamespaceVersion(long long value) { SetNamespaceVersion(value); return *this;}

  private:

    Aws::String m_thingName;
    bool m_thingNameHasBeenSet;

    Aws::String m_entityId;
    bool m_entityIdHasBeenSet;

    long long m_namespaceVersion;
    bool m_namespaceVersionHasBeenSet;
  };

} // namespace Model
} // namespace IoTThingsGraph
} // namespace Aws
