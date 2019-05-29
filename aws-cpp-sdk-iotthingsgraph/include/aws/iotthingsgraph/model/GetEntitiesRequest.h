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
#include <aws/core/utils/memory/stl/AWSVector.h>
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
  class AWS_IOTTHINGSGRAPH_API GetEntitiesRequest : public IoTThingsGraphRequest
  {
  public:
    GetEntitiesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetEntities"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>An array of entity IDs.</p> <p>The IDs should be in the following format.</p>
     * <p> <code>urn:tdm:REGION/ACCOUNT ID/default:device:DEVICENAME</code> </p>
     */
    inline const Aws::Vector<Aws::String>& GetIds() const{ return m_ids; }

    /**
     * <p>An array of entity IDs.</p> <p>The IDs should be in the following format.</p>
     * <p> <code>urn:tdm:REGION/ACCOUNT ID/default:device:DEVICENAME</code> </p>
     */
    inline bool IdsHasBeenSet() const { return m_idsHasBeenSet; }

    /**
     * <p>An array of entity IDs.</p> <p>The IDs should be in the following format.</p>
     * <p> <code>urn:tdm:REGION/ACCOUNT ID/default:device:DEVICENAME</code> </p>
     */
    inline void SetIds(const Aws::Vector<Aws::String>& value) { m_idsHasBeenSet = true; m_ids = value; }

    /**
     * <p>An array of entity IDs.</p> <p>The IDs should be in the following format.</p>
     * <p> <code>urn:tdm:REGION/ACCOUNT ID/default:device:DEVICENAME</code> </p>
     */
    inline void SetIds(Aws::Vector<Aws::String>&& value) { m_idsHasBeenSet = true; m_ids = std::move(value); }

    /**
     * <p>An array of entity IDs.</p> <p>The IDs should be in the following format.</p>
     * <p> <code>urn:tdm:REGION/ACCOUNT ID/default:device:DEVICENAME</code> </p>
     */
    inline GetEntitiesRequest& WithIds(const Aws::Vector<Aws::String>& value) { SetIds(value); return *this;}

    /**
     * <p>An array of entity IDs.</p> <p>The IDs should be in the following format.</p>
     * <p> <code>urn:tdm:REGION/ACCOUNT ID/default:device:DEVICENAME</code> </p>
     */
    inline GetEntitiesRequest& WithIds(Aws::Vector<Aws::String>&& value) { SetIds(std::move(value)); return *this;}

    /**
     * <p>An array of entity IDs.</p> <p>The IDs should be in the following format.</p>
     * <p> <code>urn:tdm:REGION/ACCOUNT ID/default:device:DEVICENAME</code> </p>
     */
    inline GetEntitiesRequest& AddIds(const Aws::String& value) { m_idsHasBeenSet = true; m_ids.push_back(value); return *this; }

    /**
     * <p>An array of entity IDs.</p> <p>The IDs should be in the following format.</p>
     * <p> <code>urn:tdm:REGION/ACCOUNT ID/default:device:DEVICENAME</code> </p>
     */
    inline GetEntitiesRequest& AddIds(Aws::String&& value) { m_idsHasBeenSet = true; m_ids.push_back(std::move(value)); return *this; }

    /**
     * <p>An array of entity IDs.</p> <p>The IDs should be in the following format.</p>
     * <p> <code>urn:tdm:REGION/ACCOUNT ID/default:device:DEVICENAME</code> </p>
     */
    inline GetEntitiesRequest& AddIds(const char* value) { m_idsHasBeenSet = true; m_ids.push_back(value); return *this; }


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
    inline GetEntitiesRequest& WithNamespaceVersion(long long value) { SetNamespaceVersion(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_ids;
    bool m_idsHasBeenSet;

    long long m_namespaceVersion;
    bool m_namespaceVersionHasBeenSet;
  };

} // namespace Model
} // namespace IoTThingsGraph
} // namespace Aws
