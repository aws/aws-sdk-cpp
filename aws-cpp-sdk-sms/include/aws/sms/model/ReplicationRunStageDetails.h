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
#include <aws/sms/SMS_EXPORTS.h>
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
namespace SMS
{
namespace Model
{

  /**
   * <p>Details of the current stage of a replication run.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sms-2016-10-24/ReplicationRunStageDetails">AWS
   * API Reference</a></p>
   */
  class AWS_SMS_API ReplicationRunStageDetails
  {
  public:
    ReplicationRunStageDetails();
    ReplicationRunStageDetails(Aws::Utils::Json::JsonView jsonValue);
    ReplicationRunStageDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>String describing the current stage of a replication run.</p>
     */
    inline const Aws::String& GetStage() const{ return m_stage; }

    /**
     * <p>String describing the current stage of a replication run.</p>
     */
    inline bool StageHasBeenSet() const { return m_stageHasBeenSet; }

    /**
     * <p>String describing the current stage of a replication run.</p>
     */
    inline void SetStage(const Aws::String& value) { m_stageHasBeenSet = true; m_stage = value; }

    /**
     * <p>String describing the current stage of a replication run.</p>
     */
    inline void SetStage(Aws::String&& value) { m_stageHasBeenSet = true; m_stage = std::move(value); }

    /**
     * <p>String describing the current stage of a replication run.</p>
     */
    inline void SetStage(const char* value) { m_stageHasBeenSet = true; m_stage.assign(value); }

    /**
     * <p>String describing the current stage of a replication run.</p>
     */
    inline ReplicationRunStageDetails& WithStage(const Aws::String& value) { SetStage(value); return *this;}

    /**
     * <p>String describing the current stage of a replication run.</p>
     */
    inline ReplicationRunStageDetails& WithStage(Aws::String&& value) { SetStage(std::move(value)); return *this;}

    /**
     * <p>String describing the current stage of a replication run.</p>
     */
    inline ReplicationRunStageDetails& WithStage(const char* value) { SetStage(value); return *this;}


    /**
     * <p>String describing the progress of the current stage of a replication run.</p>
     */
    inline const Aws::String& GetStageProgress() const{ return m_stageProgress; }

    /**
     * <p>String describing the progress of the current stage of a replication run.</p>
     */
    inline bool StageProgressHasBeenSet() const { return m_stageProgressHasBeenSet; }

    /**
     * <p>String describing the progress of the current stage of a replication run.</p>
     */
    inline void SetStageProgress(const Aws::String& value) { m_stageProgressHasBeenSet = true; m_stageProgress = value; }

    /**
     * <p>String describing the progress of the current stage of a replication run.</p>
     */
    inline void SetStageProgress(Aws::String&& value) { m_stageProgressHasBeenSet = true; m_stageProgress = std::move(value); }

    /**
     * <p>String describing the progress of the current stage of a replication run.</p>
     */
    inline void SetStageProgress(const char* value) { m_stageProgressHasBeenSet = true; m_stageProgress.assign(value); }

    /**
     * <p>String describing the progress of the current stage of a replication run.</p>
     */
    inline ReplicationRunStageDetails& WithStageProgress(const Aws::String& value) { SetStageProgress(value); return *this;}

    /**
     * <p>String describing the progress of the current stage of a replication run.</p>
     */
    inline ReplicationRunStageDetails& WithStageProgress(Aws::String&& value) { SetStageProgress(std::move(value)); return *this;}

    /**
     * <p>String describing the progress of the current stage of a replication run.</p>
     */
    inline ReplicationRunStageDetails& WithStageProgress(const char* value) { SetStageProgress(value); return *this;}

  private:

    Aws::String m_stage;
    bool m_stageHasBeenSet;

    Aws::String m_stageProgress;
    bool m_stageProgressHasBeenSet;
  };

} // namespace Model
} // namespace SMS
} // namespace Aws
