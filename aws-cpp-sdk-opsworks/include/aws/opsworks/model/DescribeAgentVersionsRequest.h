/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opsworks/OpsWorks_EXPORTS.h>
#include <aws/opsworks/OpsWorksRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/opsworks/model/StackConfigurationManager.h>
#include <utility>

namespace Aws
{
namespace OpsWorks
{
namespace Model
{

  /**
   */
  class DescribeAgentVersionsRequest : public OpsWorksRequest
  {
  public:
    AWS_OPSWORKS_API DescribeAgentVersionsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeAgentVersions"; }

    AWS_OPSWORKS_API Aws::String SerializePayload() const override;

    AWS_OPSWORKS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The stack ID.</p>
     */
    inline const Aws::String& GetStackId() const{ return m_stackId; }

    /**
     * <p>The stack ID.</p>
     */
    inline bool StackIdHasBeenSet() const { return m_stackIdHasBeenSet; }

    /**
     * <p>The stack ID.</p>
     */
    inline void SetStackId(const Aws::String& value) { m_stackIdHasBeenSet = true; m_stackId = value; }

    /**
     * <p>The stack ID.</p>
     */
    inline void SetStackId(Aws::String&& value) { m_stackIdHasBeenSet = true; m_stackId = std::move(value); }

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
    inline DescribeAgentVersionsRequest& WithStackId(Aws::String&& value) { SetStackId(std::move(value)); return *this;}

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
    inline bool ConfigurationManagerHasBeenSet() const { return m_configurationManagerHasBeenSet; }

    /**
     * <p>The configuration manager.</p>
     */
    inline void SetConfigurationManager(const StackConfigurationManager& value) { m_configurationManagerHasBeenSet = true; m_configurationManager = value; }

    /**
     * <p>The configuration manager.</p>
     */
    inline void SetConfigurationManager(StackConfigurationManager&& value) { m_configurationManagerHasBeenSet = true; m_configurationManager = std::move(value); }

    /**
     * <p>The configuration manager.</p>
     */
    inline DescribeAgentVersionsRequest& WithConfigurationManager(const StackConfigurationManager& value) { SetConfigurationManager(value); return *this;}

    /**
     * <p>The configuration manager.</p>
     */
    inline DescribeAgentVersionsRequest& WithConfigurationManager(StackConfigurationManager&& value) { SetConfigurationManager(std::move(value)); return *this;}

  private:

    Aws::String m_stackId;
    bool m_stackIdHasBeenSet = false;

    StackConfigurationManager m_configurationManager;
    bool m_configurationManagerHasBeenSet = false;
  };

} // namespace Model
} // namespace OpsWorks
} // namespace Aws
