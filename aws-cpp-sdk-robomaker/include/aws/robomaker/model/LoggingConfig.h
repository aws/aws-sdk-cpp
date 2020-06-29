/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/robomaker/RoboMaker_EXPORTS.h>

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
namespace RoboMaker
{
namespace Model
{

  /**
   * <p>The logging configuration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/LoggingConfig">AWS
   * API Reference</a></p>
   */
  class AWS_ROBOMAKER_API LoggingConfig
  {
  public:
    LoggingConfig();
    LoggingConfig(Aws::Utils::Json::JsonView jsonValue);
    LoggingConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A boolean indicating whether to record all ROS topics.</p>
     */
    inline bool GetRecordAllRosTopics() const{ return m_recordAllRosTopics; }

    /**
     * <p>A boolean indicating whether to record all ROS topics.</p>
     */
    inline bool RecordAllRosTopicsHasBeenSet() const { return m_recordAllRosTopicsHasBeenSet; }

    /**
     * <p>A boolean indicating whether to record all ROS topics.</p>
     */
    inline void SetRecordAllRosTopics(bool value) { m_recordAllRosTopicsHasBeenSet = true; m_recordAllRosTopics = value; }

    /**
     * <p>A boolean indicating whether to record all ROS topics.</p>
     */
    inline LoggingConfig& WithRecordAllRosTopics(bool value) { SetRecordAllRosTopics(value); return *this;}

  private:

    bool m_recordAllRosTopics;
    bool m_recordAllRosTopicsHasBeenSet;
  };

} // namespace Model
} // namespace RoboMaker
} // namespace Aws
