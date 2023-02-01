/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/drs/Drs_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/drs/model/LastLaunchType.h>
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
namespace drs
{
namespace Model
{

  /**
   * <p>An object containing information regarding the initiation of the last launch
   * of a Source Server.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/drs-2020-02-26/LifeCycleLastLaunchInitiated">AWS
   * API Reference</a></p>
   */
  class LifeCycleLastLaunchInitiated
  {
  public:
    AWS_DRS_API LifeCycleLastLaunchInitiated();
    AWS_DRS_API LifeCycleLastLaunchInitiated(Aws::Utils::Json::JsonView jsonValue);
    AWS_DRS_API LifeCycleLastLaunchInitiated& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DRS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The date and time the last Source Server launch was initiated.</p>
     */
    inline const Aws::String& GetApiCallDateTime() const{ return m_apiCallDateTime; }

    /**
     * <p>The date and time the last Source Server launch was initiated.</p>
     */
    inline bool ApiCallDateTimeHasBeenSet() const { return m_apiCallDateTimeHasBeenSet; }

    /**
     * <p>The date and time the last Source Server launch was initiated.</p>
     */
    inline void SetApiCallDateTime(const Aws::String& value) { m_apiCallDateTimeHasBeenSet = true; m_apiCallDateTime = value; }

    /**
     * <p>The date and time the last Source Server launch was initiated.</p>
     */
    inline void SetApiCallDateTime(Aws::String&& value) { m_apiCallDateTimeHasBeenSet = true; m_apiCallDateTime = std::move(value); }

    /**
     * <p>The date and time the last Source Server launch was initiated.</p>
     */
    inline void SetApiCallDateTime(const char* value) { m_apiCallDateTimeHasBeenSet = true; m_apiCallDateTime.assign(value); }

    /**
     * <p>The date and time the last Source Server launch was initiated.</p>
     */
    inline LifeCycleLastLaunchInitiated& WithApiCallDateTime(const Aws::String& value) { SetApiCallDateTime(value); return *this;}

    /**
     * <p>The date and time the last Source Server launch was initiated.</p>
     */
    inline LifeCycleLastLaunchInitiated& WithApiCallDateTime(Aws::String&& value) { SetApiCallDateTime(std::move(value)); return *this;}

    /**
     * <p>The date and time the last Source Server launch was initiated.</p>
     */
    inline LifeCycleLastLaunchInitiated& WithApiCallDateTime(const char* value) { SetApiCallDateTime(value); return *this;}


    /**
     * <p>The ID of the Job that was used to last launch the Source Server.</p>
     */
    inline const Aws::String& GetJobID() const{ return m_jobID; }

    /**
     * <p>The ID of the Job that was used to last launch the Source Server.</p>
     */
    inline bool JobIDHasBeenSet() const { return m_jobIDHasBeenSet; }

    /**
     * <p>The ID of the Job that was used to last launch the Source Server.</p>
     */
    inline void SetJobID(const Aws::String& value) { m_jobIDHasBeenSet = true; m_jobID = value; }

    /**
     * <p>The ID of the Job that was used to last launch the Source Server.</p>
     */
    inline void SetJobID(Aws::String&& value) { m_jobIDHasBeenSet = true; m_jobID = std::move(value); }

    /**
     * <p>The ID of the Job that was used to last launch the Source Server.</p>
     */
    inline void SetJobID(const char* value) { m_jobIDHasBeenSet = true; m_jobID.assign(value); }

    /**
     * <p>The ID of the Job that was used to last launch the Source Server.</p>
     */
    inline LifeCycleLastLaunchInitiated& WithJobID(const Aws::String& value) { SetJobID(value); return *this;}

    /**
     * <p>The ID of the Job that was used to last launch the Source Server.</p>
     */
    inline LifeCycleLastLaunchInitiated& WithJobID(Aws::String&& value) { SetJobID(std::move(value)); return *this;}

    /**
     * <p>The ID of the Job that was used to last launch the Source Server.</p>
     */
    inline LifeCycleLastLaunchInitiated& WithJobID(const char* value) { SetJobID(value); return *this;}


    /**
     * <p>The Job type that was used to last launch the Source Server.</p>
     */
    inline const LastLaunchType& GetType() const{ return m_type; }

    /**
     * <p>The Job type that was used to last launch the Source Server.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The Job type that was used to last launch the Source Server.</p>
     */
    inline void SetType(const LastLaunchType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The Job type that was used to last launch the Source Server.</p>
     */
    inline void SetType(LastLaunchType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The Job type that was used to last launch the Source Server.</p>
     */
    inline LifeCycleLastLaunchInitiated& WithType(const LastLaunchType& value) { SetType(value); return *this;}

    /**
     * <p>The Job type that was used to last launch the Source Server.</p>
     */
    inline LifeCycleLastLaunchInitiated& WithType(LastLaunchType&& value) { SetType(std::move(value)); return *this;}

  private:

    Aws::String m_apiCallDateTime;
    bool m_apiCallDateTimeHasBeenSet = false;

    Aws::String m_jobID;
    bool m_jobIDHasBeenSet = false;

    LastLaunchType m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace drs
} // namespace Aws
