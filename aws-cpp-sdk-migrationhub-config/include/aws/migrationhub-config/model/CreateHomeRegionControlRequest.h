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
#include <aws/migrationhub-config/MigrationHubConfig_EXPORTS.h>
#include <aws/migrationhub-config/MigrationHubConfigRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/migrationhub-config/model/Target.h>
#include <utility>

namespace Aws
{
namespace MigrationHubConfig
{
namespace Model
{

  /**
   */
  class AWS_MIGRATIONHUBCONFIG_API CreateHomeRegionControlRequest : public MigrationHubConfigRequest
  {
  public:
    CreateHomeRegionControlRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateHomeRegionControl"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the home region of the calling account.</p>
     */
    inline const Aws::String& GetHomeRegion() const{ return m_homeRegion; }

    /**
     * <p>The name of the home region of the calling account.</p>
     */
    inline bool HomeRegionHasBeenSet() const { return m_homeRegionHasBeenSet; }

    /**
     * <p>The name of the home region of the calling account.</p>
     */
    inline void SetHomeRegion(const Aws::String& value) { m_homeRegionHasBeenSet = true; m_homeRegion = value; }

    /**
     * <p>The name of the home region of the calling account.</p>
     */
    inline void SetHomeRegion(Aws::String&& value) { m_homeRegionHasBeenSet = true; m_homeRegion = std::move(value); }

    /**
     * <p>The name of the home region of the calling account.</p>
     */
    inline void SetHomeRegion(const char* value) { m_homeRegionHasBeenSet = true; m_homeRegion.assign(value); }

    /**
     * <p>The name of the home region of the calling account.</p>
     */
    inline CreateHomeRegionControlRequest& WithHomeRegion(const Aws::String& value) { SetHomeRegion(value); return *this;}

    /**
     * <p>The name of the home region of the calling account.</p>
     */
    inline CreateHomeRegionControlRequest& WithHomeRegion(Aws::String&& value) { SetHomeRegion(std::move(value)); return *this;}

    /**
     * <p>The name of the home region of the calling account.</p>
     */
    inline CreateHomeRegionControlRequest& WithHomeRegion(const char* value) { SetHomeRegion(value); return *this;}


    /**
     * <p>The account for which this command sets up a home region control. The
     * <code>Target</code> is always of type <code>ACCOUNT</code>.</p>
     */
    inline const Target& GetTarget() const{ return m_target; }

    /**
     * <p>The account for which this command sets up a home region control. The
     * <code>Target</code> is always of type <code>ACCOUNT</code>.</p>
     */
    inline bool TargetHasBeenSet() const { return m_targetHasBeenSet; }

    /**
     * <p>The account for which this command sets up a home region control. The
     * <code>Target</code> is always of type <code>ACCOUNT</code>.</p>
     */
    inline void SetTarget(const Target& value) { m_targetHasBeenSet = true; m_target = value; }

    /**
     * <p>The account for which this command sets up a home region control. The
     * <code>Target</code> is always of type <code>ACCOUNT</code>.</p>
     */
    inline void SetTarget(Target&& value) { m_targetHasBeenSet = true; m_target = std::move(value); }

    /**
     * <p>The account for which this command sets up a home region control. The
     * <code>Target</code> is always of type <code>ACCOUNT</code>.</p>
     */
    inline CreateHomeRegionControlRequest& WithTarget(const Target& value) { SetTarget(value); return *this;}

    /**
     * <p>The account for which this command sets up a home region control. The
     * <code>Target</code> is always of type <code>ACCOUNT</code>.</p>
     */
    inline CreateHomeRegionControlRequest& WithTarget(Target&& value) { SetTarget(std::move(value)); return *this;}


    /**
     * <p>Optional Boolean flag to indicate whether any effect should take place. It
     * tests whether the caller has permission to make the call.</p>
     */
    inline bool GetDryRun() const{ return m_dryRun; }

    /**
     * <p>Optional Boolean flag to indicate whether any effect should take place. It
     * tests whether the caller has permission to make the call.</p>
     */
    inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }

    /**
     * <p>Optional Boolean flag to indicate whether any effect should take place. It
     * tests whether the caller has permission to make the call.</p>
     */
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }

    /**
     * <p>Optional Boolean flag to indicate whether any effect should take place. It
     * tests whether the caller has permission to make the call.</p>
     */
    inline CreateHomeRegionControlRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}

  private:

    Aws::String m_homeRegion;
    bool m_homeRegionHasBeenSet;

    Target m_target;
    bool m_targetHasBeenSet;

    bool m_dryRun;
    bool m_dryRunHasBeenSet;
  };

} // namespace Model
} // namespace MigrationHubConfig
} // namespace Aws
