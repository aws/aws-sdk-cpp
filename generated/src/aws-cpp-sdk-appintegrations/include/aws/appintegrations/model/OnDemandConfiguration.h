/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appintegrations/AppIntegrationsService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace AppIntegrationsService
{
namespace Model
{

  /**
   * <p>The start and end time for data pull from the source.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appintegrations-2020-07-29/OnDemandConfiguration">AWS
   * API Reference</a></p>
   */
  class OnDemandConfiguration
  {
  public:
    AWS_APPINTEGRATIONSSERVICE_API OnDemandConfiguration();
    AWS_APPINTEGRATIONSSERVICE_API OnDemandConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPINTEGRATIONSSERVICE_API OnDemandConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPINTEGRATIONSSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The start time for data pull from the source as an Unix/epoch string in
     * milliseconds</p>
     */
    inline const Aws::String& GetStartTime() const{ return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    inline void SetStartTime(const Aws::String& value) { m_startTimeHasBeenSet = true; m_startTime = value; }
    inline void SetStartTime(Aws::String&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }
    inline void SetStartTime(const char* value) { m_startTimeHasBeenSet = true; m_startTime.assign(value); }
    inline OnDemandConfiguration& WithStartTime(const Aws::String& value) { SetStartTime(value); return *this;}
    inline OnDemandConfiguration& WithStartTime(Aws::String&& value) { SetStartTime(std::move(value)); return *this;}
    inline OnDemandConfiguration& WithStartTime(const char* value) { SetStartTime(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The end time for data pull from the source as an Unix/epoch string in
     * milliseconds</p>
     */
    inline const Aws::String& GetEndTime() const{ return m_endTime; }
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }
    inline void SetEndTime(const Aws::String& value) { m_endTimeHasBeenSet = true; m_endTime = value; }
    inline void SetEndTime(Aws::String&& value) { m_endTimeHasBeenSet = true; m_endTime = std::move(value); }
    inline void SetEndTime(const char* value) { m_endTimeHasBeenSet = true; m_endTime.assign(value); }
    inline OnDemandConfiguration& WithEndTime(const Aws::String& value) { SetEndTime(value); return *this;}
    inline OnDemandConfiguration& WithEndTime(Aws::String&& value) { SetEndTime(std::move(value)); return *this;}
    inline OnDemandConfiguration& WithEndTime(const char* value) { SetEndTime(value); return *this;}
    ///@}
  private:

    Aws::String m_startTime;
    bool m_startTimeHasBeenSet = false;

    Aws::String m_endTime;
    bool m_endTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace AppIntegrationsService
} // namespace Aws
