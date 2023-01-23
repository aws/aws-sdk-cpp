/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/groundstation/GroundStation_EXPORTS.h>
#include <aws/groundstation/GroundStationRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace GroundStation
{
namespace Model
{

  /**
   */
  class UpdateEphemerisRequest : public GroundStationRequest
  {
  public:
    AWS_GROUNDSTATION_API UpdateEphemerisRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateEphemeris"; }

    AWS_GROUNDSTATION_API Aws::String SerializePayload() const override;


    /**
     * <p>Whether the ephemeris is enabled or not. Changing this value will not require
     * the ephemeris to be re-validated.</p>
     */
    inline bool GetEnabled() const{ return m_enabled; }

    /**
     * <p>Whether the ephemeris is enabled or not. Changing this value will not require
     * the ephemeris to be re-validated.</p>
     */
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }

    /**
     * <p>Whether the ephemeris is enabled or not. Changing this value will not require
     * the ephemeris to be re-validated.</p>
     */
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }

    /**
     * <p>Whether the ephemeris is enabled or not. Changing this value will not require
     * the ephemeris to be re-validated.</p>
     */
    inline UpdateEphemerisRequest& WithEnabled(bool value) { SetEnabled(value); return *this;}


    /**
     * <p>The AWS Ground Station ephemeris ID.</p>
     */
    inline const Aws::String& GetEphemerisId() const{ return m_ephemerisId; }

    /**
     * <p>The AWS Ground Station ephemeris ID.</p>
     */
    inline bool EphemerisIdHasBeenSet() const { return m_ephemerisIdHasBeenSet; }

    /**
     * <p>The AWS Ground Station ephemeris ID.</p>
     */
    inline void SetEphemerisId(const Aws::String& value) { m_ephemerisIdHasBeenSet = true; m_ephemerisId = value; }

    /**
     * <p>The AWS Ground Station ephemeris ID.</p>
     */
    inline void SetEphemerisId(Aws::String&& value) { m_ephemerisIdHasBeenSet = true; m_ephemerisId = std::move(value); }

    /**
     * <p>The AWS Ground Station ephemeris ID.</p>
     */
    inline void SetEphemerisId(const char* value) { m_ephemerisIdHasBeenSet = true; m_ephemerisId.assign(value); }

    /**
     * <p>The AWS Ground Station ephemeris ID.</p>
     */
    inline UpdateEphemerisRequest& WithEphemerisId(const Aws::String& value) { SetEphemerisId(value); return *this;}

    /**
     * <p>The AWS Ground Station ephemeris ID.</p>
     */
    inline UpdateEphemerisRequest& WithEphemerisId(Aws::String&& value) { SetEphemerisId(std::move(value)); return *this;}

    /**
     * <p>The AWS Ground Station ephemeris ID.</p>
     */
    inline UpdateEphemerisRequest& WithEphemerisId(const char* value) { SetEphemerisId(value); return *this;}


    /**
     * <p>A name string associated with the ephemeris. Used as a human-readable
     * identifier for the ephemeris.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>A name string associated with the ephemeris. Used as a human-readable
     * identifier for the ephemeris.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>A name string associated with the ephemeris. Used as a human-readable
     * identifier for the ephemeris.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>A name string associated with the ephemeris. Used as a human-readable
     * identifier for the ephemeris.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>A name string associated with the ephemeris. Used as a human-readable
     * identifier for the ephemeris.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>A name string associated with the ephemeris. Used as a human-readable
     * identifier for the ephemeris.</p>
     */
    inline UpdateEphemerisRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>A name string associated with the ephemeris. Used as a human-readable
     * identifier for the ephemeris.</p>
     */
    inline UpdateEphemerisRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>A name string associated with the ephemeris. Used as a human-readable
     * identifier for the ephemeris.</p>
     */
    inline UpdateEphemerisRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>Customer-provided priority score to establish the order in which overlapping
     * ephemerides should be used.</p> <p>The default for customer-provided ephemeris
     * priority is 1, and higher numbers take precedence.</p> <p>Priority must be 1 or
     * greater</p>
     */
    inline int GetPriority() const{ return m_priority; }

    /**
     * <p>Customer-provided priority score to establish the order in which overlapping
     * ephemerides should be used.</p> <p>The default for customer-provided ephemeris
     * priority is 1, and higher numbers take precedence.</p> <p>Priority must be 1 or
     * greater</p>
     */
    inline bool PriorityHasBeenSet() const { return m_priorityHasBeenSet; }

    /**
     * <p>Customer-provided priority score to establish the order in which overlapping
     * ephemerides should be used.</p> <p>The default for customer-provided ephemeris
     * priority is 1, and higher numbers take precedence.</p> <p>Priority must be 1 or
     * greater</p>
     */
    inline void SetPriority(int value) { m_priorityHasBeenSet = true; m_priority = value; }

    /**
     * <p>Customer-provided priority score to establish the order in which overlapping
     * ephemerides should be used.</p> <p>The default for customer-provided ephemeris
     * priority is 1, and higher numbers take precedence.</p> <p>Priority must be 1 or
     * greater</p>
     */
    inline UpdateEphemerisRequest& WithPriority(int value) { SetPriority(value); return *this;}

  private:

    bool m_enabled;
    bool m_enabledHasBeenSet = false;

    Aws::String m_ephemerisId;
    bool m_ephemerisIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    int m_priority;
    bool m_priorityHasBeenSet = false;
  };

} // namespace Model
} // namespace GroundStation
} // namespace Aws
