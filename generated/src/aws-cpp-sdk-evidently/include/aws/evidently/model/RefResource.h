/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/evidently/CloudWatchEvidently_EXPORTS.h>
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
namespace CloudWatchEvidently
{
namespace Model
{

  /**
   * <p>A structure that contains information about one experiment or launch that
   * uses the specified segment. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/evidently-2021-02-01/RefResource">AWS
   * API Reference</a></p>
   */
  class RefResource
  {
  public:
    AWS_CLOUDWATCHEVIDENTLY_API RefResource();
    AWS_CLOUDWATCHEVIDENTLY_API RefResource(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHEVIDENTLY_API RefResource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHEVIDENTLY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN of the experiment or launch.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline RefResource& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline RefResource& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline RefResource& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The day and time that this experiment or launch ended.</p>
     */
    inline const Aws::String& GetEndTime() const{ return m_endTime; }
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }
    inline void SetEndTime(const Aws::String& value) { m_endTimeHasBeenSet = true; m_endTime = value; }
    inline void SetEndTime(Aws::String&& value) { m_endTimeHasBeenSet = true; m_endTime = std::move(value); }
    inline void SetEndTime(const char* value) { m_endTimeHasBeenSet = true; m_endTime.assign(value); }
    inline RefResource& WithEndTime(const Aws::String& value) { SetEndTime(value); return *this;}
    inline RefResource& WithEndTime(Aws::String&& value) { SetEndTime(std::move(value)); return *this;}
    inline RefResource& WithEndTime(const char* value) { SetEndTime(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The day and time that this experiment or launch was most recently
     * updated.</p>
     */
    inline const Aws::String& GetLastUpdatedOn() const{ return m_lastUpdatedOn; }
    inline bool LastUpdatedOnHasBeenSet() const { return m_lastUpdatedOnHasBeenSet; }
    inline void SetLastUpdatedOn(const Aws::String& value) { m_lastUpdatedOnHasBeenSet = true; m_lastUpdatedOn = value; }
    inline void SetLastUpdatedOn(Aws::String&& value) { m_lastUpdatedOnHasBeenSet = true; m_lastUpdatedOn = std::move(value); }
    inline void SetLastUpdatedOn(const char* value) { m_lastUpdatedOnHasBeenSet = true; m_lastUpdatedOn.assign(value); }
    inline RefResource& WithLastUpdatedOn(const Aws::String& value) { SetLastUpdatedOn(value); return *this;}
    inline RefResource& WithLastUpdatedOn(Aws::String&& value) { SetLastUpdatedOn(std::move(value)); return *this;}
    inline RefResource& WithLastUpdatedOn(const char* value) { SetLastUpdatedOn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the experiment or launch.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline RefResource& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline RefResource& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline RefResource& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The day and time that this experiment or launch started.</p>
     */
    inline const Aws::String& GetStartTime() const{ return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    inline void SetStartTime(const Aws::String& value) { m_startTimeHasBeenSet = true; m_startTime = value; }
    inline void SetStartTime(Aws::String&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }
    inline void SetStartTime(const char* value) { m_startTimeHasBeenSet = true; m_startTime.assign(value); }
    inline RefResource& WithStartTime(const Aws::String& value) { SetStartTime(value); return *this;}
    inline RefResource& WithStartTime(Aws::String&& value) { SetStartTime(std::move(value)); return *this;}
    inline RefResource& WithStartTime(const char* value) { SetStartTime(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the experiment or launch.</p>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }
    inline RefResource& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}
    inline RefResource& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}
    inline RefResource& WithStatus(const char* value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether the resource that this structure contains information about
     * is an experiment or a launch.</p>
     */
    inline const Aws::String& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const Aws::String& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(Aws::String&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline void SetType(const char* value) { m_typeHasBeenSet = true; m_type.assign(value); }
    inline RefResource& WithType(const Aws::String& value) { SetType(value); return *this;}
    inline RefResource& WithType(Aws::String&& value) { SetType(std::move(value)); return *this;}
    inline RefResource& WithType(const char* value) { SetType(value); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_endTime;
    bool m_endTimeHasBeenSet = false;

    Aws::String m_lastUpdatedOn;
    bool m_lastUpdatedOnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_startTime;
    bool m_startTimeHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchEvidently
} // namespace Aws
