/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/config/ConfigServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace ConfigService
{
namespace Model
{

  /**
   */
  class DeleteOrganizationConformancePackRequest : public ConfigServiceRequest
  {
  public:
    AWS_CONFIGSERVICE_API DeleteOrganizationConformancePackRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteOrganizationConformancePack"; }

    AWS_CONFIGSERVICE_API Aws::String SerializePayload() const override;

    AWS_CONFIGSERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of organization conformance pack that you want to delete.</p>
     */
    inline const Aws::String& GetOrganizationConformancePackName() const{ return m_organizationConformancePackName; }

    /**
     * <p>The name of organization conformance pack that you want to delete.</p>
     */
    inline bool OrganizationConformancePackNameHasBeenSet() const { return m_organizationConformancePackNameHasBeenSet; }

    /**
     * <p>The name of organization conformance pack that you want to delete.</p>
     */
    inline void SetOrganizationConformancePackName(const Aws::String& value) { m_organizationConformancePackNameHasBeenSet = true; m_organizationConformancePackName = value; }

    /**
     * <p>The name of organization conformance pack that you want to delete.</p>
     */
    inline void SetOrganizationConformancePackName(Aws::String&& value) { m_organizationConformancePackNameHasBeenSet = true; m_organizationConformancePackName = std::move(value); }

    /**
     * <p>The name of organization conformance pack that you want to delete.</p>
     */
    inline void SetOrganizationConformancePackName(const char* value) { m_organizationConformancePackNameHasBeenSet = true; m_organizationConformancePackName.assign(value); }

    /**
     * <p>The name of organization conformance pack that you want to delete.</p>
     */
    inline DeleteOrganizationConformancePackRequest& WithOrganizationConformancePackName(const Aws::String& value) { SetOrganizationConformancePackName(value); return *this;}

    /**
     * <p>The name of organization conformance pack that you want to delete.</p>
     */
    inline DeleteOrganizationConformancePackRequest& WithOrganizationConformancePackName(Aws::String&& value) { SetOrganizationConformancePackName(std::move(value)); return *this;}

    /**
     * <p>The name of organization conformance pack that you want to delete.</p>
     */
    inline DeleteOrganizationConformancePackRequest& WithOrganizationConformancePackName(const char* value) { SetOrganizationConformancePackName(value); return *this;}

  private:

    Aws::String m_organizationConformancePackName;
    bool m_organizationConformancePackNameHasBeenSet = false;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
