﻿/**
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
  class AWS_GROUNDSTATION_API DeleteEphemerisRequest : public GroundStationRequest
  {
  public:
    DeleteEphemerisRequest();

    /**
     * Virtual Copy Constructor idiom;
     * Override in an inherited class to have overridden functions (such as GetRequestSpecificHeaders) be called by the SDK.
     * (If you are creating a child of this: don't forget to keep the original return type or (better) just use the 'override' keyword)
    */
    virtual Aws::UniquePtr<DeleteEphemerisRequest> Clone() const
    {
      return Aws::MakeUnique<DeleteEphemerisRequest>(GetServiceRequestName(), *this);
    }

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteEphemeris"; }

    Aws::String SerializePayload() const override;


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
    inline DeleteEphemerisRequest& WithEphemerisId(const Aws::String& value) { SetEphemerisId(value); return *this;}

    /**
     * <p>The AWS Ground Station ephemeris ID.</p>
     */
    inline DeleteEphemerisRequest& WithEphemerisId(Aws::String&& value) { SetEphemerisId(std::move(value)); return *this;}

    /**
     * <p>The AWS Ground Station ephemeris ID.</p>
     */
    inline DeleteEphemerisRequest& WithEphemerisId(const char* value) { SetEphemerisId(value); return *this;}

  private:

    Aws::String m_ephemerisId;
    bool m_ephemerisIdHasBeenSet = false;
  };

} // namespace Model
} // namespace GroundStation
} // namespace Aws
