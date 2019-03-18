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
#include <aws/worklink/WorkLink_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/worklink/model/FleetStatus.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace WorkLink
{
namespace Model
{

  /**
   * <p>The summary of the fleet.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/worklink-2018-09-25/FleetSummary">AWS
   * API Reference</a></p>
   */
  class AWS_WORKLINK_API FleetSummary
  {
  public:
    FleetSummary();
    FleetSummary(Aws::Utils::Json::JsonView jsonValue);
    FleetSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ARN of the fleet.</p>
     */
    inline const Aws::String& GetFleetArn() const{ return m_fleetArn; }

    /**
     * <p>The ARN of the fleet.</p>
     */
    inline bool FleetArnHasBeenSet() const { return m_fleetArnHasBeenSet; }

    /**
     * <p>The ARN of the fleet.</p>
     */
    inline void SetFleetArn(const Aws::String& value) { m_fleetArnHasBeenSet = true; m_fleetArn = value; }

    /**
     * <p>The ARN of the fleet.</p>
     */
    inline void SetFleetArn(Aws::String&& value) { m_fleetArnHasBeenSet = true; m_fleetArn = std::move(value); }

    /**
     * <p>The ARN of the fleet.</p>
     */
    inline void SetFleetArn(const char* value) { m_fleetArnHasBeenSet = true; m_fleetArn.assign(value); }

    /**
     * <p>The ARN of the fleet.</p>
     */
    inline FleetSummary& WithFleetArn(const Aws::String& value) { SetFleetArn(value); return *this;}

    /**
     * <p>The ARN of the fleet.</p>
     */
    inline FleetSummary& WithFleetArn(Aws::String&& value) { SetFleetArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the fleet.</p>
     */
    inline FleetSummary& WithFleetArn(const char* value) { SetFleetArn(value); return *this;}


    /**
     * <p>The time when the fleet was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTime() const{ return m_createdTime; }

    /**
     * <p>The time when the fleet was created.</p>
     */
    inline bool CreatedTimeHasBeenSet() const { return m_createdTimeHasBeenSet; }

    /**
     * <p>The time when the fleet was created.</p>
     */
    inline void SetCreatedTime(const Aws::Utils::DateTime& value) { m_createdTimeHasBeenSet = true; m_createdTime = value; }

    /**
     * <p>The time when the fleet was created.</p>
     */
    inline void SetCreatedTime(Aws::Utils::DateTime&& value) { m_createdTimeHasBeenSet = true; m_createdTime = std::move(value); }

    /**
     * <p>The time when the fleet was created.</p>
     */
    inline FleetSummary& WithCreatedTime(const Aws::Utils::DateTime& value) { SetCreatedTime(value); return *this;}

    /**
     * <p>The time when the fleet was created.</p>
     */
    inline FleetSummary& WithCreatedTime(Aws::Utils::DateTime&& value) { SetCreatedTime(std::move(value)); return *this;}


    /**
     * <p>The time when the fleet was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedTime() const{ return m_lastUpdatedTime; }

    /**
     * <p>The time when the fleet was last updated.</p>
     */
    inline bool LastUpdatedTimeHasBeenSet() const { return m_lastUpdatedTimeHasBeenSet; }

    /**
     * <p>The time when the fleet was last updated.</p>
     */
    inline void SetLastUpdatedTime(const Aws::Utils::DateTime& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = value; }

    /**
     * <p>The time when the fleet was last updated.</p>
     */
    inline void SetLastUpdatedTime(Aws::Utils::DateTime&& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = std::move(value); }

    /**
     * <p>The time when the fleet was last updated.</p>
     */
    inline FleetSummary& WithLastUpdatedTime(const Aws::Utils::DateTime& value) { SetLastUpdatedTime(value); return *this;}

    /**
     * <p>The time when the fleet was last updated.</p>
     */
    inline FleetSummary& WithLastUpdatedTime(Aws::Utils::DateTime&& value) { SetLastUpdatedTime(std::move(value)); return *this;}


    /**
     * <p>The name of the fleet.</p>
     */
    inline const Aws::String& GetFleetName() const{ return m_fleetName; }

    /**
     * <p>The name of the fleet.</p>
     */
    inline bool FleetNameHasBeenSet() const { return m_fleetNameHasBeenSet; }

    /**
     * <p>The name of the fleet.</p>
     */
    inline void SetFleetName(const Aws::String& value) { m_fleetNameHasBeenSet = true; m_fleetName = value; }

    /**
     * <p>The name of the fleet.</p>
     */
    inline void SetFleetName(Aws::String&& value) { m_fleetNameHasBeenSet = true; m_fleetName = std::move(value); }

    /**
     * <p>The name of the fleet.</p>
     */
    inline void SetFleetName(const char* value) { m_fleetNameHasBeenSet = true; m_fleetName.assign(value); }

    /**
     * <p>The name of the fleet.</p>
     */
    inline FleetSummary& WithFleetName(const Aws::String& value) { SetFleetName(value); return *this;}

    /**
     * <p>The name of the fleet.</p>
     */
    inline FleetSummary& WithFleetName(Aws::String&& value) { SetFleetName(std::move(value)); return *this;}

    /**
     * <p>The name of the fleet.</p>
     */
    inline FleetSummary& WithFleetName(const char* value) { SetFleetName(value); return *this;}


    /**
     * <p>The name to display.</p>
     */
    inline const Aws::String& GetDisplayName() const{ return m_displayName; }

    /**
     * <p>The name to display.</p>
     */
    inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }

    /**
     * <p>The name to display.</p>
     */
    inline void SetDisplayName(const Aws::String& value) { m_displayNameHasBeenSet = true; m_displayName = value; }

    /**
     * <p>The name to display.</p>
     */
    inline void SetDisplayName(Aws::String&& value) { m_displayNameHasBeenSet = true; m_displayName = std::move(value); }

    /**
     * <p>The name to display.</p>
     */
    inline void SetDisplayName(const char* value) { m_displayNameHasBeenSet = true; m_displayName.assign(value); }

    /**
     * <p>The name to display.</p>
     */
    inline FleetSummary& WithDisplayName(const Aws::String& value) { SetDisplayName(value); return *this;}

    /**
     * <p>The name to display.</p>
     */
    inline FleetSummary& WithDisplayName(Aws::String&& value) { SetDisplayName(std::move(value)); return *this;}

    /**
     * <p>The name to display.</p>
     */
    inline FleetSummary& WithDisplayName(const char* value) { SetDisplayName(value); return *this;}


    /**
     * <p>The identifier used by users to sign into the Amazon WorkLink app.</p>
     */
    inline const Aws::String& GetCompanyCode() const{ return m_companyCode; }

    /**
     * <p>The identifier used by users to sign into the Amazon WorkLink app.</p>
     */
    inline bool CompanyCodeHasBeenSet() const { return m_companyCodeHasBeenSet; }

    /**
     * <p>The identifier used by users to sign into the Amazon WorkLink app.</p>
     */
    inline void SetCompanyCode(const Aws::String& value) { m_companyCodeHasBeenSet = true; m_companyCode = value; }

    /**
     * <p>The identifier used by users to sign into the Amazon WorkLink app.</p>
     */
    inline void SetCompanyCode(Aws::String&& value) { m_companyCodeHasBeenSet = true; m_companyCode = std::move(value); }

    /**
     * <p>The identifier used by users to sign into the Amazon WorkLink app.</p>
     */
    inline void SetCompanyCode(const char* value) { m_companyCodeHasBeenSet = true; m_companyCode.assign(value); }

    /**
     * <p>The identifier used by users to sign into the Amazon WorkLink app.</p>
     */
    inline FleetSummary& WithCompanyCode(const Aws::String& value) { SetCompanyCode(value); return *this;}

    /**
     * <p>The identifier used by users to sign into the Amazon WorkLink app.</p>
     */
    inline FleetSummary& WithCompanyCode(Aws::String&& value) { SetCompanyCode(std::move(value)); return *this;}

    /**
     * <p>The identifier used by users to sign into the Amazon WorkLink app.</p>
     */
    inline FleetSummary& WithCompanyCode(const char* value) { SetCompanyCode(value); return *this;}


    /**
     * <p>The status of the fleet.</p>
     */
    inline const FleetStatus& GetFleetStatus() const{ return m_fleetStatus; }

    /**
     * <p>The status of the fleet.</p>
     */
    inline bool FleetStatusHasBeenSet() const { return m_fleetStatusHasBeenSet; }

    /**
     * <p>The status of the fleet.</p>
     */
    inline void SetFleetStatus(const FleetStatus& value) { m_fleetStatusHasBeenSet = true; m_fleetStatus = value; }

    /**
     * <p>The status of the fleet.</p>
     */
    inline void SetFleetStatus(FleetStatus&& value) { m_fleetStatusHasBeenSet = true; m_fleetStatus = std::move(value); }

    /**
     * <p>The status of the fleet.</p>
     */
    inline FleetSummary& WithFleetStatus(const FleetStatus& value) { SetFleetStatus(value); return *this;}

    /**
     * <p>The status of the fleet.</p>
     */
    inline FleetSummary& WithFleetStatus(FleetStatus&& value) { SetFleetStatus(std::move(value)); return *this;}

  private:

    Aws::String m_fleetArn;
    bool m_fleetArnHasBeenSet;

    Aws::Utils::DateTime m_createdTime;
    bool m_createdTimeHasBeenSet;

    Aws::Utils::DateTime m_lastUpdatedTime;
    bool m_lastUpdatedTimeHasBeenSet;

    Aws::String m_fleetName;
    bool m_fleetNameHasBeenSet;

    Aws::String m_displayName;
    bool m_displayNameHasBeenSet;

    Aws::String m_companyCode;
    bool m_companyCodeHasBeenSet;

    FleetStatus m_fleetStatus;
    bool m_fleetStatusHasBeenSet;
  };

} // namespace Model
} // namespace WorkLink
} // namespace Aws
