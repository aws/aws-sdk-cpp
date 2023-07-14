﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class AWS_IOTTHINGSGRAPH_API GetSystemInstanceRequest : public IoTThingsGraphRequest
  {
  public:
    GetSystemInstanceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetSystemInstance"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ID of the system deployment instance. This value is returned by
     * <code>CreateSystemInstance</code>.</p> <p>The ID should be in the following
     * format.</p> <p> <code>urn:tdm:REGION/ACCOUNT
     * ID/default:deployment:DEPLOYMENTNAME</code> </p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The ID of the system deployment instance. This value is returned by
     * <code>CreateSystemInstance</code>.</p> <p>The ID should be in the following
     * format.</p> <p> <code>urn:tdm:REGION/ACCOUNT
     * ID/default:deployment:DEPLOYMENTNAME</code> </p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The ID of the system deployment instance. This value is returned by
     * <code>CreateSystemInstance</code>.</p> <p>The ID should be in the following
     * format.</p> <p> <code>urn:tdm:REGION/ACCOUNT
     * ID/default:deployment:DEPLOYMENTNAME</code> </p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The ID of the system deployment instance. This value is returned by
     * <code>CreateSystemInstance</code>.</p> <p>The ID should be in the following
     * format.</p> <p> <code>urn:tdm:REGION/ACCOUNT
     * ID/default:deployment:DEPLOYMENTNAME</code> </p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The ID of the system deployment instance. This value is returned by
     * <code>CreateSystemInstance</code>.</p> <p>The ID should be in the following
     * format.</p> <p> <code>urn:tdm:REGION/ACCOUNT
     * ID/default:deployment:DEPLOYMENTNAME</code> </p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The ID of the system deployment instance. This value is returned by
     * <code>CreateSystemInstance</code>.</p> <p>The ID should be in the following
     * format.</p> <p> <code>urn:tdm:REGION/ACCOUNT
     * ID/default:deployment:DEPLOYMENTNAME</code> </p>
     */
    inline GetSystemInstanceRequest& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The ID of the system deployment instance. This value is returned by
     * <code>CreateSystemInstance</code>.</p> <p>The ID should be in the following
     * format.</p> <p> <code>urn:tdm:REGION/ACCOUNT
     * ID/default:deployment:DEPLOYMENTNAME</code> </p>
     */
    inline GetSystemInstanceRequest& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The ID of the system deployment instance. This value is returned by
     * <code>CreateSystemInstance</code>.</p> <p>The ID should be in the following
     * format.</p> <p> <code>urn:tdm:REGION/ACCOUNT
     * ID/default:deployment:DEPLOYMENTNAME</code> </p>
     */
    inline GetSystemInstanceRequest& WithId(const char* value) { SetId(value); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet;
  };

} // namespace Model
} // namespace IoTThingsGraph
} // namespace Aws
