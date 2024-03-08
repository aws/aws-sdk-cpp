/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appstream/AppStream_EXPORTS.h>

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
namespace AppStream
{
namespace Model
{

  /**
   * <p>Describes the capacity for a fleet.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/ComputeCapacity">AWS
   * API Reference</a></p>
   */
  class ComputeCapacity
  {
  public:
    AWS_APPSTREAM_API ComputeCapacity();
    AWS_APPSTREAM_API ComputeCapacity(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPSTREAM_API ComputeCapacity& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPSTREAM_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The desired number of streaming instances.</p>
     */
    inline int GetDesiredInstances() const{ return m_desiredInstances; }

    /**
     * <p>The desired number of streaming instances.</p>
     */
    inline bool DesiredInstancesHasBeenSet() const { return m_desiredInstancesHasBeenSet; }

    /**
     * <p>The desired number of streaming instances.</p>
     */
    inline void SetDesiredInstances(int value) { m_desiredInstancesHasBeenSet = true; m_desiredInstances = value; }

    /**
     * <p>The desired number of streaming instances.</p>
     */
    inline ComputeCapacity& WithDesiredInstances(int value) { SetDesiredInstances(value); return *this;}


    /**
     * <p>The desired number of user sessions for a multi-session fleet. This is not
     * allowed for single-session fleets.</p> <p>When you create a fleet, you must set
     * either the DesiredSessions or DesiredInstances attribute, based on the type of
     * fleet you create. You can’t define both attributes or leave both attributes
     * blank.</p>
     */
    inline int GetDesiredSessions() const{ return m_desiredSessions; }

    /**
     * <p>The desired number of user sessions for a multi-session fleet. This is not
     * allowed for single-session fleets.</p> <p>When you create a fleet, you must set
     * either the DesiredSessions or DesiredInstances attribute, based on the type of
     * fleet you create. You can’t define both attributes or leave both attributes
     * blank.</p>
     */
    inline bool DesiredSessionsHasBeenSet() const { return m_desiredSessionsHasBeenSet; }

    /**
     * <p>The desired number of user sessions for a multi-session fleet. This is not
     * allowed for single-session fleets.</p> <p>When you create a fleet, you must set
     * either the DesiredSessions or DesiredInstances attribute, based on the type of
     * fleet you create. You can’t define both attributes or leave both attributes
     * blank.</p>
     */
    inline void SetDesiredSessions(int value) { m_desiredSessionsHasBeenSet = true; m_desiredSessions = value; }

    /**
     * <p>The desired number of user sessions for a multi-session fleet. This is not
     * allowed for single-session fleets.</p> <p>When you create a fleet, you must set
     * either the DesiredSessions or DesiredInstances attribute, based on the type of
     * fleet you create. You can’t define both attributes or leave both attributes
     * blank.</p>
     */
    inline ComputeCapacity& WithDesiredSessions(int value) { SetDesiredSessions(value); return *this;}

  private:

    int m_desiredInstances;
    bool m_desiredInstancesHasBeenSet = false;

    int m_desiredSessions;
    bool m_desiredSessionsHasBeenSet = false;
  };

} // namespace Model
} // namespace AppStream
} // namespace Aws
