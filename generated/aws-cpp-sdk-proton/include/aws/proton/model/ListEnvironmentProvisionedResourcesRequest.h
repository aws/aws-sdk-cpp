﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/proton/Proton_EXPORTS.h>
#include <aws/proton/ProtonRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Proton
{
namespace Model
{

  /**
   */
  class AWS_PROTON_API ListEnvironmentProvisionedResourcesRequest : public ProtonRequest
  {
  public:
    ListEnvironmentProvisionedResourcesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListEnvironmentProvisionedResources"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The environment name.</p>
     */
    inline const Aws::String& GetEnvironmentName() const{ return m_environmentName; }

    /**
     * <p>The environment name.</p>
     */
    inline bool EnvironmentNameHasBeenSet() const { return m_environmentNameHasBeenSet; }

    /**
     * <p>The environment name.</p>
     */
    inline void SetEnvironmentName(const Aws::String& value) { m_environmentNameHasBeenSet = true; m_environmentName = value; }

    /**
     * <p>The environment name.</p>
     */
    inline void SetEnvironmentName(Aws::String&& value) { m_environmentNameHasBeenSet = true; m_environmentName = std::move(value); }

    /**
     * <p>The environment name.</p>
     */
    inline void SetEnvironmentName(const char* value) { m_environmentNameHasBeenSet = true; m_environmentName.assign(value); }

    /**
     * <p>The environment name.</p>
     */
    inline ListEnvironmentProvisionedResourcesRequest& WithEnvironmentName(const Aws::String& value) { SetEnvironmentName(value); return *this;}

    /**
     * <p>The environment name.</p>
     */
    inline ListEnvironmentProvisionedResourcesRequest& WithEnvironmentName(Aws::String&& value) { SetEnvironmentName(std::move(value)); return *this;}

    /**
     * <p>The environment name.</p>
     */
    inline ListEnvironmentProvisionedResourcesRequest& WithEnvironmentName(const char* value) { SetEnvironmentName(value); return *this;}


    /**
     * <p>A token to indicate the location of the next environment provisioned resource
     * in the array of environment provisioned resources, after the list of environment
     * provisioned resources that was previously requested.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A token to indicate the location of the next environment provisioned resource
     * in the array of environment provisioned resources, after the list of environment
     * provisioned resources that was previously requested.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>A token to indicate the location of the next environment provisioned resource
     * in the array of environment provisioned resources, after the list of environment
     * provisioned resources that was previously requested.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>A token to indicate the location of the next environment provisioned resource
     * in the array of environment provisioned resources, after the list of environment
     * provisioned resources that was previously requested.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>A token to indicate the location of the next environment provisioned resource
     * in the array of environment provisioned resources, after the list of environment
     * provisioned resources that was previously requested.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>A token to indicate the location of the next environment provisioned resource
     * in the array of environment provisioned resources, after the list of environment
     * provisioned resources that was previously requested.</p>
     */
    inline ListEnvironmentProvisionedResourcesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A token to indicate the location of the next environment provisioned resource
     * in the array of environment provisioned resources, after the list of environment
     * provisioned resources that was previously requested.</p>
     */
    inline ListEnvironmentProvisionedResourcesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A token to indicate the location of the next environment provisioned resource
     * in the array of environment provisioned resources, after the list of environment
     * provisioned resources that was previously requested.</p>
     */
    inline ListEnvironmentProvisionedResourcesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::String m_environmentName;
    bool m_environmentNameHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;
  };

} // namespace Model
} // namespace Proton
} // namespace Aws
