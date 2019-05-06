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
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/ConnectRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Connect
{
namespace Model
{

  /**
   */
  class AWS_CONNECT_API GetContactAttributesRequest : public ConnectRequest
  {
  public:
    GetContactAttributesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetContactAttributes"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The instance ID for the instance from which to retrieve contact
     * attributes.</p>
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }

    /**
     * <p>The instance ID for the instance from which to retrieve contact
     * attributes.</p>
     */
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }

    /**
     * <p>The instance ID for the instance from which to retrieve contact
     * attributes.</p>
     */
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }

    /**
     * <p>The instance ID for the instance from which to retrieve contact
     * attributes.</p>
     */
    inline void SetInstanceId(Aws::String&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::move(value); }

    /**
     * <p>The instance ID for the instance from which to retrieve contact
     * attributes.</p>
     */
    inline void SetInstanceId(const char* value) { m_instanceIdHasBeenSet = true; m_instanceId.assign(value); }

    /**
     * <p>The instance ID for the instance from which to retrieve contact
     * attributes.</p>
     */
    inline GetContactAttributesRequest& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}

    /**
     * <p>The instance ID for the instance from which to retrieve contact
     * attributes.</p>
     */
    inline GetContactAttributesRequest& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}

    /**
     * <p>The instance ID for the instance from which to retrieve contact
     * attributes.</p>
     */
    inline GetContactAttributesRequest& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}


    /**
     * <p>The ID for the initial contact in Amazon Connect associated with the
     * attributes to update.</p>
     */
    inline const Aws::String& GetInitialContactId() const{ return m_initialContactId; }

    /**
     * <p>The ID for the initial contact in Amazon Connect associated with the
     * attributes to update.</p>
     */
    inline bool InitialContactIdHasBeenSet() const { return m_initialContactIdHasBeenSet; }

    /**
     * <p>The ID for the initial contact in Amazon Connect associated with the
     * attributes to update.</p>
     */
    inline void SetInitialContactId(const Aws::String& value) { m_initialContactIdHasBeenSet = true; m_initialContactId = value; }

    /**
     * <p>The ID for the initial contact in Amazon Connect associated with the
     * attributes to update.</p>
     */
    inline void SetInitialContactId(Aws::String&& value) { m_initialContactIdHasBeenSet = true; m_initialContactId = std::move(value); }

    /**
     * <p>The ID for the initial contact in Amazon Connect associated with the
     * attributes to update.</p>
     */
    inline void SetInitialContactId(const char* value) { m_initialContactIdHasBeenSet = true; m_initialContactId.assign(value); }

    /**
     * <p>The ID for the initial contact in Amazon Connect associated with the
     * attributes to update.</p>
     */
    inline GetContactAttributesRequest& WithInitialContactId(const Aws::String& value) { SetInitialContactId(value); return *this;}

    /**
     * <p>The ID for the initial contact in Amazon Connect associated with the
     * attributes to update.</p>
     */
    inline GetContactAttributesRequest& WithInitialContactId(Aws::String&& value) { SetInitialContactId(std::move(value)); return *this;}

    /**
     * <p>The ID for the initial contact in Amazon Connect associated with the
     * attributes to update.</p>
     */
    inline GetContactAttributesRequest& WithInitialContactId(const char* value) { SetInitialContactId(value); return *this;}

  private:

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet;

    Aws::String m_initialContactId;
    bool m_initialContactIdHasBeenSet;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
