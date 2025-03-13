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
    AWS_DRS_API LifeCycleLastLaunchInitiated() = default;
    AWS_DRS_API LifeCycleLastLaunchInitiated(Aws::Utils::Json::JsonView jsonValue);
    AWS_DRS_API LifeCycleLastLaunchInitiated& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DRS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The date and time the last Source Server launch was initiated.</p>
     */
    inline const Aws::String& GetApiCallDateTime() const { return m_apiCallDateTime; }
    inline bool ApiCallDateTimeHasBeenSet() const { return m_apiCallDateTimeHasBeenSet; }
    template<typename ApiCallDateTimeT = Aws::String>
    void SetApiCallDateTime(ApiCallDateTimeT&& value) { m_apiCallDateTimeHasBeenSet = true; m_apiCallDateTime = std::forward<ApiCallDateTimeT>(value); }
    template<typename ApiCallDateTimeT = Aws::String>
    LifeCycleLastLaunchInitiated& WithApiCallDateTime(ApiCallDateTimeT&& value) { SetApiCallDateTime(std::forward<ApiCallDateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Job that was used to last launch the Source Server.</p>
     */
    inline const Aws::String& GetJobID() const { return m_jobID; }
    inline bool JobIDHasBeenSet() const { return m_jobIDHasBeenSet; }
    template<typename JobIDT = Aws::String>
    void SetJobID(JobIDT&& value) { m_jobIDHasBeenSet = true; m_jobID = std::forward<JobIDT>(value); }
    template<typename JobIDT = Aws::String>
    LifeCycleLastLaunchInitiated& WithJobID(JobIDT&& value) { SetJobID(std::forward<JobIDT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Job type that was used to last launch the Source Server.</p>
     */
    inline LastLaunchType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(LastLaunchType value) { m_typeHasBeenSet = true; m_type = value; }
    inline LifeCycleLastLaunchInitiated& WithType(LastLaunchType value) { SetType(value); return *this;}
    ///@}
  private:

    Aws::String m_apiCallDateTime;
    bool m_apiCallDateTimeHasBeenSet = false;

    Aws::String m_jobID;
    bool m_jobIDHasBeenSet = false;

    LastLaunchType m_type{LastLaunchType::NOT_SET};
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace drs
} // namespace Aws
