﻿/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/opsworks/OpsWorks_EXPORTS.h>
#include <aws/opsworks/OpsWorksRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/opsworks/model/StackConfigurationManager.h>

namespace Aws
{
namespace OpsWorks
{
namespace Model
{

  /**
   */
  class AWS_OPSWORKS_API DescribeAgentVersionsRequest : public OpsWorksRequest
  {
  public:
    DescribeAgentVersionsRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>The stack ID.</p>
     */
    inline const Aws::String& GetStackId() const{ return m_stackId; }

    /**
     * <p>The stack ID.</p>
     */
    inline void SetStackId(const Aws::String& value) { m_stackIdHasBeenSet = true; m_stackId = value; }

    /**
     * <p>The stack ID.</p>
     */
    inline void SetStackId(Aws::String&& value) { m_stackIdHasBeenSet = true; m_stackId = value; }

    /**
     * <p>The stack ID.</p>
     */
    inline void SetStackId(const char* value) { m_stackIdHasBeenSet = true; m_stackId.assign(value); }

    /**
     * <p>The stack ID.</p>
     */
    inline DescribeAgentVersionsRequest& WithStackId(const Aws::String& value) { SetStackId(value); return *this;}

    /**
     * <p>The stack ID.</p>
     */
    inline DescribeAgentVersionsRequest& WithStackId(Aws::String&& value) { SetStackId(value); return *this;}

    /**
     * <p>The stack ID.</p>
     */
    inline DescribeAgentVersionsRequest& WithStackId(const char* value) { SetStackId(value); return *this;}

    /**
     * <p>The configuration manager.</p>
     */
    inline const StackConfigurationManager& GetConfigurationManager() const{ return m_configurationManager; }

    /**
     * <p>The configuration manager.</p>
     */
    inline void SetConfigurationManager(const StackConfigurationManager& value) { m_configurationManagerHasBeenSet = true; m_configurationManager = value; }

    /**
     * <p>The configuration manager.</p>
     */
    inline void SetConfigurationManager(StackConfigurationManager&& value) { m_configurationManagerHasBeenSet = true; m_configurationManager = value; }

    /**
     * <p>The configuration manager.</p>
     */
    inline DescribeAgentVersionsRequest& WithConfigurationManager(const StackConfigurationManager& value) { SetConfigurationManager(value); return *this;}

    /**
     * <p>The configuration manager.</p>
     */
    inline DescribeAgentVersionsRequest& WithConfigurationManager(StackConfigurationManager&& value) { SetConfigurationManager(value); return *this;}

  private:
    Aws::String m_stackId;
    bool m_stackIdHasBeenSet;
    StackConfigurationManager m_configurationManager;
    bool m_configurationManagerHasBeenSet;
  };

} // namespace Model
} // namespace OpsWorks
} // namespace Aws
