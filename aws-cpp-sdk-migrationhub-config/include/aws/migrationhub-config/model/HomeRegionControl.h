/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/migrationhub-config/MigrationHubConfig_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/migrationhub-config/model/Target.h>
#include <aws/core/utils/DateTime.h>
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
namespace MigrationHubConfig
{
namespace Model
{

  /**
   * <p>A home region control is an object that specifies the home region for an
   * account, with some additional information. It contains a target (always of type
   * <code>ACCOUNT</code>), an ID, and a time at which the home region was
   * set.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/migrationhub-config-2019-06-30/HomeRegionControl">AWS
   * API Reference</a></p>
   */
  class HomeRegionControl
  {
  public:
    AWS_MIGRATIONHUBCONFIG_API HomeRegionControl();
    AWS_MIGRATIONHUBCONFIG_API HomeRegionControl(Aws::Utils::Json::JsonView jsonValue);
    AWS_MIGRATIONHUBCONFIG_API HomeRegionControl& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MIGRATIONHUBCONFIG_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A unique identifier that's generated for each home region control. It's
     * always a string that begins with "hrc-" followed by 12 lowercase letters and
     * numbers.</p>
     */
    inline const Aws::String& GetControlId() const{ return m_controlId; }

    /**
     * <p>A unique identifier that's generated for each home region control. It's
     * always a string that begins with "hrc-" followed by 12 lowercase letters and
     * numbers.</p>
     */
    inline bool ControlIdHasBeenSet() const { return m_controlIdHasBeenSet; }

    /**
     * <p>A unique identifier that's generated for each home region control. It's
     * always a string that begins with "hrc-" followed by 12 lowercase letters and
     * numbers.</p>
     */
    inline void SetControlId(const Aws::String& value) { m_controlIdHasBeenSet = true; m_controlId = value; }

    /**
     * <p>A unique identifier that's generated for each home region control. It's
     * always a string that begins with "hrc-" followed by 12 lowercase letters and
     * numbers.</p>
     */
    inline void SetControlId(Aws::String&& value) { m_controlIdHasBeenSet = true; m_controlId = std::move(value); }

    /**
     * <p>A unique identifier that's generated for each home region control. It's
     * always a string that begins with "hrc-" followed by 12 lowercase letters and
     * numbers.</p>
     */
    inline void SetControlId(const char* value) { m_controlIdHasBeenSet = true; m_controlId.assign(value); }

    /**
     * <p>A unique identifier that's generated for each home region control. It's
     * always a string that begins with "hrc-" followed by 12 lowercase letters and
     * numbers.</p>
     */
    inline HomeRegionControl& WithControlId(const Aws::String& value) { SetControlId(value); return *this;}

    /**
     * <p>A unique identifier that's generated for each home region control. It's
     * always a string that begins with "hrc-" followed by 12 lowercase letters and
     * numbers.</p>
     */
    inline HomeRegionControl& WithControlId(Aws::String&& value) { SetControlId(std::move(value)); return *this;}

    /**
     * <p>A unique identifier that's generated for each home region control. It's
     * always a string that begins with "hrc-" followed by 12 lowercase letters and
     * numbers.</p>
     */
    inline HomeRegionControl& WithControlId(const char* value) { SetControlId(value); return *this;}


    /**
     * <p>The AWS Region that's been set as home region. For example, "us-west-2" or
     * "eu-central-1" are valid home regions.</p>
     */
    inline const Aws::String& GetHomeRegion() const{ return m_homeRegion; }

    /**
     * <p>The AWS Region that's been set as home region. For example, "us-west-2" or
     * "eu-central-1" are valid home regions.</p>
     */
    inline bool HomeRegionHasBeenSet() const { return m_homeRegionHasBeenSet; }

    /**
     * <p>The AWS Region that's been set as home region. For example, "us-west-2" or
     * "eu-central-1" are valid home regions.</p>
     */
    inline void SetHomeRegion(const Aws::String& value) { m_homeRegionHasBeenSet = true; m_homeRegion = value; }

    /**
     * <p>The AWS Region that's been set as home region. For example, "us-west-2" or
     * "eu-central-1" are valid home regions.</p>
     */
    inline void SetHomeRegion(Aws::String&& value) { m_homeRegionHasBeenSet = true; m_homeRegion = std::move(value); }

    /**
     * <p>The AWS Region that's been set as home region. For example, "us-west-2" or
     * "eu-central-1" are valid home regions.</p>
     */
    inline void SetHomeRegion(const char* value) { m_homeRegionHasBeenSet = true; m_homeRegion.assign(value); }

    /**
     * <p>The AWS Region that's been set as home region. For example, "us-west-2" or
     * "eu-central-1" are valid home regions.</p>
     */
    inline HomeRegionControl& WithHomeRegion(const Aws::String& value) { SetHomeRegion(value); return *this;}

    /**
     * <p>The AWS Region that's been set as home region. For example, "us-west-2" or
     * "eu-central-1" are valid home regions.</p>
     */
    inline HomeRegionControl& WithHomeRegion(Aws::String&& value) { SetHomeRegion(std::move(value)); return *this;}

    /**
     * <p>The AWS Region that's been set as home region. For example, "us-west-2" or
     * "eu-central-1" are valid home regions.</p>
     */
    inline HomeRegionControl& WithHomeRegion(const char* value) { SetHomeRegion(value); return *this;}


    /**
     * <p>The target parameter specifies the identifier to which the home region is
     * applied, which is always an <code>ACCOUNT</code>. It applies the home region to
     * the current <code>ACCOUNT</code>.</p>
     */
    inline const Target& GetTarget() const{ return m_target; }

    /**
     * <p>The target parameter specifies the identifier to which the home region is
     * applied, which is always an <code>ACCOUNT</code>. It applies the home region to
     * the current <code>ACCOUNT</code>.</p>
     */
    inline bool TargetHasBeenSet() const { return m_targetHasBeenSet; }

    /**
     * <p>The target parameter specifies the identifier to which the home region is
     * applied, which is always an <code>ACCOUNT</code>. It applies the home region to
     * the current <code>ACCOUNT</code>.</p>
     */
    inline void SetTarget(const Target& value) { m_targetHasBeenSet = true; m_target = value; }

    /**
     * <p>The target parameter specifies the identifier to which the home region is
     * applied, which is always an <code>ACCOUNT</code>. It applies the home region to
     * the current <code>ACCOUNT</code>.</p>
     */
    inline void SetTarget(Target&& value) { m_targetHasBeenSet = true; m_target = std::move(value); }

    /**
     * <p>The target parameter specifies the identifier to which the home region is
     * applied, which is always an <code>ACCOUNT</code>. It applies the home region to
     * the current <code>ACCOUNT</code>.</p>
     */
    inline HomeRegionControl& WithTarget(const Target& value) { SetTarget(value); return *this;}

    /**
     * <p>The target parameter specifies the identifier to which the home region is
     * applied, which is always an <code>ACCOUNT</code>. It applies the home region to
     * the current <code>ACCOUNT</code>.</p>
     */
    inline HomeRegionControl& WithTarget(Target&& value) { SetTarget(std::move(value)); return *this;}


    /**
     * <p>A timestamp representing the time when the customer called
     * <code>CreateHomeregionControl</code> and set the home region for the
     * account.</p>
     */
    inline const Aws::Utils::DateTime& GetRequestedTime() const{ return m_requestedTime; }

    /**
     * <p>A timestamp representing the time when the customer called
     * <code>CreateHomeregionControl</code> and set the home region for the
     * account.</p>
     */
    inline bool RequestedTimeHasBeenSet() const { return m_requestedTimeHasBeenSet; }

    /**
     * <p>A timestamp representing the time when the customer called
     * <code>CreateHomeregionControl</code> and set the home region for the
     * account.</p>
     */
    inline void SetRequestedTime(const Aws::Utils::DateTime& value) { m_requestedTimeHasBeenSet = true; m_requestedTime = value; }

    /**
     * <p>A timestamp representing the time when the customer called
     * <code>CreateHomeregionControl</code> and set the home region for the
     * account.</p>
     */
    inline void SetRequestedTime(Aws::Utils::DateTime&& value) { m_requestedTimeHasBeenSet = true; m_requestedTime = std::move(value); }

    /**
     * <p>A timestamp representing the time when the customer called
     * <code>CreateHomeregionControl</code> and set the home region for the
     * account.</p>
     */
    inline HomeRegionControl& WithRequestedTime(const Aws::Utils::DateTime& value) { SetRequestedTime(value); return *this;}

    /**
     * <p>A timestamp representing the time when the customer called
     * <code>CreateHomeregionControl</code> and set the home region for the
     * account.</p>
     */
    inline HomeRegionControl& WithRequestedTime(Aws::Utils::DateTime&& value) { SetRequestedTime(std::move(value)); return *this;}

  private:

    Aws::String m_controlId;
    bool m_controlIdHasBeenSet = false;

    Aws::String m_homeRegion;
    bool m_homeRegionHasBeenSet = false;

    Target m_target;
    bool m_targetHasBeenSet = false;

    Aws::Utils::DateTime m_requestedTime;
    bool m_requestedTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace MigrationHubConfig
} // namespace Aws
