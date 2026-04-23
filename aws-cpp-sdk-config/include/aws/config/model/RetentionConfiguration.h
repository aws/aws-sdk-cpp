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
#include <aws/config/ConfigService_EXPORTS.h>
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
namespace ConfigService
{
namespace Model
{

  /**
   * <p>An object with the name of the retention configuration and the retention
   * period in days. The object stores the configuration for data retention in AWS
   * Config.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/RetentionConfiguration">AWS
   * API Reference</a></p>
   */
  class AWS_CONFIGSERVICE_API RetentionConfiguration
  {
  public:
    RetentionConfiguration();
    RetentionConfiguration(Aws::Utils::Json::JsonView jsonValue);
    RetentionConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the retention configuration object.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the retention configuration object.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the retention configuration object.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the retention configuration object.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the retention configuration object.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the retention configuration object.</p>
     */
    inline RetentionConfiguration& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the retention configuration object.</p>
     */
    inline RetentionConfiguration& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the retention configuration object.</p>
     */
    inline RetentionConfiguration& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>Number of days AWS Config stores your historical information.</p> <note>
     * <p>Currently, only applicable to the configuration item history.</p> </note>
     */
    inline int GetRetentionPeriodInDays() const{ return m_retentionPeriodInDays; }

    /**
     * <p>Number of days AWS Config stores your historical information.</p> <note>
     * <p>Currently, only applicable to the configuration item history.</p> </note>
     */
    inline bool RetentionPeriodInDaysHasBeenSet() const { return m_retentionPeriodInDaysHasBeenSet; }

    /**
     * <p>Number of days AWS Config stores your historical information.</p> <note>
     * <p>Currently, only applicable to the configuration item history.</p> </note>
     */
    inline void SetRetentionPeriodInDays(int value) { m_retentionPeriodInDaysHasBeenSet = true; m_retentionPeriodInDays = value; }

    /**
     * <p>Number of days AWS Config stores your historical information.</p> <note>
     * <p>Currently, only applicable to the configuration item history.</p> </note>
     */
    inline RetentionConfiguration& WithRetentionPeriodInDays(int value) { SetRetentionPeriodInDays(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;

    int m_retentionPeriodInDays;
    bool m_retentionPeriodInDaysHasBeenSet;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
