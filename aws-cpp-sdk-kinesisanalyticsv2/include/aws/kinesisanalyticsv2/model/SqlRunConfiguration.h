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
#include <aws/kinesisanalyticsv2/KinesisAnalyticsV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kinesisanalyticsv2/model/InputStartingPositionConfiguration.h>
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
namespace KinesisAnalyticsV2
{
namespace Model
{

  /**
   * <p>Describes the starting parameters for an SQL-based Kinesis Data Analytics
   * application.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/SqlRunConfiguration">AWS
   * API Reference</a></p>
   */
  class AWS_KINESISANALYTICSV2_API SqlRunConfiguration
  {
  public:
    SqlRunConfiguration();
    SqlRunConfiguration(Aws::Utils::Json::JsonView jsonValue);
    SqlRunConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The input source ID. You can get this ID by calling the
     * <a>DescribeApplication</a> operation. </p>
     */
    inline const Aws::String& GetInputId() const{ return m_inputId; }

    /**
     * <p>The input source ID. You can get this ID by calling the
     * <a>DescribeApplication</a> operation. </p>
     */
    inline bool InputIdHasBeenSet() const { return m_inputIdHasBeenSet; }

    /**
     * <p>The input source ID. You can get this ID by calling the
     * <a>DescribeApplication</a> operation. </p>
     */
    inline void SetInputId(const Aws::String& value) { m_inputIdHasBeenSet = true; m_inputId = value; }

    /**
     * <p>The input source ID. You can get this ID by calling the
     * <a>DescribeApplication</a> operation. </p>
     */
    inline void SetInputId(Aws::String&& value) { m_inputIdHasBeenSet = true; m_inputId = std::move(value); }

    /**
     * <p>The input source ID. You can get this ID by calling the
     * <a>DescribeApplication</a> operation. </p>
     */
    inline void SetInputId(const char* value) { m_inputIdHasBeenSet = true; m_inputId.assign(value); }

    /**
     * <p>The input source ID. You can get this ID by calling the
     * <a>DescribeApplication</a> operation. </p>
     */
    inline SqlRunConfiguration& WithInputId(const Aws::String& value) { SetInputId(value); return *this;}

    /**
     * <p>The input source ID. You can get this ID by calling the
     * <a>DescribeApplication</a> operation. </p>
     */
    inline SqlRunConfiguration& WithInputId(Aws::String&& value) { SetInputId(std::move(value)); return *this;}

    /**
     * <p>The input source ID. You can get this ID by calling the
     * <a>DescribeApplication</a> operation. </p>
     */
    inline SqlRunConfiguration& WithInputId(const char* value) { SetInputId(value); return *this;}


    /**
     * <p>The point at which you want the application to start processing records from
     * the streaming source. </p>
     */
    inline const InputStartingPositionConfiguration& GetInputStartingPositionConfiguration() const{ return m_inputStartingPositionConfiguration; }

    /**
     * <p>The point at which you want the application to start processing records from
     * the streaming source. </p>
     */
    inline bool InputStartingPositionConfigurationHasBeenSet() const { return m_inputStartingPositionConfigurationHasBeenSet; }

    /**
     * <p>The point at which you want the application to start processing records from
     * the streaming source. </p>
     */
    inline void SetInputStartingPositionConfiguration(const InputStartingPositionConfiguration& value) { m_inputStartingPositionConfigurationHasBeenSet = true; m_inputStartingPositionConfiguration = value; }

    /**
     * <p>The point at which you want the application to start processing records from
     * the streaming source. </p>
     */
    inline void SetInputStartingPositionConfiguration(InputStartingPositionConfiguration&& value) { m_inputStartingPositionConfigurationHasBeenSet = true; m_inputStartingPositionConfiguration = std::move(value); }

    /**
     * <p>The point at which you want the application to start processing records from
     * the streaming source. </p>
     */
    inline SqlRunConfiguration& WithInputStartingPositionConfiguration(const InputStartingPositionConfiguration& value) { SetInputStartingPositionConfiguration(value); return *this;}

    /**
     * <p>The point at which you want the application to start processing records from
     * the streaming source. </p>
     */
    inline SqlRunConfiguration& WithInputStartingPositionConfiguration(InputStartingPositionConfiguration&& value) { SetInputStartingPositionConfiguration(std::move(value)); return *this;}

  private:

    Aws::String m_inputId;
    bool m_inputIdHasBeenSet;

    InputStartingPositionConfiguration m_inputStartingPositionConfiguration;
    bool m_inputStartingPositionConfigurationHasBeenSet;
  };

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
