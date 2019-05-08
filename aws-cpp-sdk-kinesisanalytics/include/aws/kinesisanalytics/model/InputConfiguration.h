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
#include <aws/kinesisanalytics/KinesisAnalytics_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kinesisanalytics/model/InputStartingPositionConfiguration.h>
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
namespace KinesisAnalytics
{
namespace Model
{

  /**
   * <p>When you start your application, you provide this configuration, which
   * identifies the input source and the point in the input source at which you want
   * the application to start processing records.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalytics-2015-08-14/InputConfiguration">AWS
   * API Reference</a></p>
   */
  class AWS_KINESISANALYTICS_API InputConfiguration
  {
  public:
    InputConfiguration();
    InputConfiguration(Aws::Utils::Json::JsonView jsonValue);
    InputConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Input source ID. You can get this ID by calling the <a
     * href="https://docs.aws.amazon.com/kinesisanalytics/latest/dev/API_DescribeApplication.html">DescribeApplication</a>
     * operation.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>Input source ID. You can get this ID by calling the <a
     * href="https://docs.aws.amazon.com/kinesisanalytics/latest/dev/API_DescribeApplication.html">DescribeApplication</a>
     * operation.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>Input source ID. You can get this ID by calling the <a
     * href="https://docs.aws.amazon.com/kinesisanalytics/latest/dev/API_DescribeApplication.html">DescribeApplication</a>
     * operation.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>Input source ID. You can get this ID by calling the <a
     * href="https://docs.aws.amazon.com/kinesisanalytics/latest/dev/API_DescribeApplication.html">DescribeApplication</a>
     * operation.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>Input source ID. You can get this ID by calling the <a
     * href="https://docs.aws.amazon.com/kinesisanalytics/latest/dev/API_DescribeApplication.html">DescribeApplication</a>
     * operation.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>Input source ID. You can get this ID by calling the <a
     * href="https://docs.aws.amazon.com/kinesisanalytics/latest/dev/API_DescribeApplication.html">DescribeApplication</a>
     * operation.</p>
     */
    inline InputConfiguration& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>Input source ID. You can get this ID by calling the <a
     * href="https://docs.aws.amazon.com/kinesisanalytics/latest/dev/API_DescribeApplication.html">DescribeApplication</a>
     * operation.</p>
     */
    inline InputConfiguration& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>Input source ID. You can get this ID by calling the <a
     * href="https://docs.aws.amazon.com/kinesisanalytics/latest/dev/API_DescribeApplication.html">DescribeApplication</a>
     * operation.</p>
     */
    inline InputConfiguration& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>Point at which you want the application to start processing records from the
     * streaming source.</p>
     */
    inline const InputStartingPositionConfiguration& GetInputStartingPositionConfiguration() const{ return m_inputStartingPositionConfiguration; }

    /**
     * <p>Point at which you want the application to start processing records from the
     * streaming source.</p>
     */
    inline bool InputStartingPositionConfigurationHasBeenSet() const { return m_inputStartingPositionConfigurationHasBeenSet; }

    /**
     * <p>Point at which you want the application to start processing records from the
     * streaming source.</p>
     */
    inline void SetInputStartingPositionConfiguration(const InputStartingPositionConfiguration& value) { m_inputStartingPositionConfigurationHasBeenSet = true; m_inputStartingPositionConfiguration = value; }

    /**
     * <p>Point at which you want the application to start processing records from the
     * streaming source.</p>
     */
    inline void SetInputStartingPositionConfiguration(InputStartingPositionConfiguration&& value) { m_inputStartingPositionConfigurationHasBeenSet = true; m_inputStartingPositionConfiguration = std::move(value); }

    /**
     * <p>Point at which you want the application to start processing records from the
     * streaming source.</p>
     */
    inline InputConfiguration& WithInputStartingPositionConfiguration(const InputStartingPositionConfiguration& value) { SetInputStartingPositionConfiguration(value); return *this;}

    /**
     * <p>Point at which you want the application to start processing records from the
     * streaming source.</p>
     */
    inline InputConfiguration& WithInputStartingPositionConfiguration(InputStartingPositionConfiguration&& value) { SetInputStartingPositionConfiguration(std::move(value)); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet;

    InputStartingPositionConfiguration m_inputStartingPositionConfiguration;
    bool m_inputStartingPositionConfigurationHasBeenSet;
  };

} // namespace Model
} // namespace KinesisAnalytics
} // namespace Aws
