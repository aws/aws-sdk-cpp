/**
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
  class ListComponentProvisionedResourcesRequest : public ProtonRequest
  {
  public:
    AWS_PROTON_API ListComponentProvisionedResourcesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListComponentProvisionedResources"; }

    AWS_PROTON_API Aws::String SerializePayload() const override;

    AWS_PROTON_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the component whose provisioned resources you want.</p>
     */
    inline const Aws::String& GetComponentName() const{ return m_componentName; }

    /**
     * <p>The name of the component whose provisioned resources you want.</p>
     */
    inline bool ComponentNameHasBeenSet() const { return m_componentNameHasBeenSet; }

    /**
     * <p>The name of the component whose provisioned resources you want.</p>
     */
    inline void SetComponentName(const Aws::String& value) { m_componentNameHasBeenSet = true; m_componentName = value; }

    /**
     * <p>The name of the component whose provisioned resources you want.</p>
     */
    inline void SetComponentName(Aws::String&& value) { m_componentNameHasBeenSet = true; m_componentName = std::move(value); }

    /**
     * <p>The name of the component whose provisioned resources you want.</p>
     */
    inline void SetComponentName(const char* value) { m_componentNameHasBeenSet = true; m_componentName.assign(value); }

    /**
     * <p>The name of the component whose provisioned resources you want.</p>
     */
    inline ListComponentProvisionedResourcesRequest& WithComponentName(const Aws::String& value) { SetComponentName(value); return *this;}

    /**
     * <p>The name of the component whose provisioned resources you want.</p>
     */
    inline ListComponentProvisionedResourcesRequest& WithComponentName(Aws::String&& value) { SetComponentName(std::move(value)); return *this;}

    /**
     * <p>The name of the component whose provisioned resources you want.</p>
     */
    inline ListComponentProvisionedResourcesRequest& WithComponentName(const char* value) { SetComponentName(value); return *this;}


    /**
     * <p>A token that indicates the location of the next provisioned resource in the
     * array of provisioned resources, after the list of provisioned resources that was
     * previously requested.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A token that indicates the location of the next provisioned resource in the
     * array of provisioned resources, after the list of provisioned resources that was
     * previously requested.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>A token that indicates the location of the next provisioned resource in the
     * array of provisioned resources, after the list of provisioned resources that was
     * previously requested.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>A token that indicates the location of the next provisioned resource in the
     * array of provisioned resources, after the list of provisioned resources that was
     * previously requested.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>A token that indicates the location of the next provisioned resource in the
     * array of provisioned resources, after the list of provisioned resources that was
     * previously requested.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>A token that indicates the location of the next provisioned resource in the
     * array of provisioned resources, after the list of provisioned resources that was
     * previously requested.</p>
     */
    inline ListComponentProvisionedResourcesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A token that indicates the location of the next provisioned resource in the
     * array of provisioned resources, after the list of provisioned resources that was
     * previously requested.</p>
     */
    inline ListComponentProvisionedResourcesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A token that indicates the location of the next provisioned resource in the
     * array of provisioned resources, after the list of provisioned resources that was
     * previously requested.</p>
     */
    inline ListComponentProvisionedResourcesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::String m_componentName;
    bool m_componentNameHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace Proton
} // namespace Aws
