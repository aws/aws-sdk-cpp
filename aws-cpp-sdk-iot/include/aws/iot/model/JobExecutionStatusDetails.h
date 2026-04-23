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
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
namespace IoT
{
namespace Model
{

  /**
   * <p>Details of the job execution status.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/JobExecutionStatusDetails">AWS
   * API Reference</a></p>
   */
  class AWS_IOT_API JobExecutionStatusDetails
  {
  public:
    JobExecutionStatusDetails();
    JobExecutionStatusDetails(Aws::Utils::Json::JsonView jsonValue);
    JobExecutionStatusDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The job execution status.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetDetailsMap() const{ return m_detailsMap; }

    /**
     * <p>The job execution status.</p>
     */
    inline bool DetailsMapHasBeenSet() const { return m_detailsMapHasBeenSet; }

    /**
     * <p>The job execution status.</p>
     */
    inline void SetDetailsMap(const Aws::Map<Aws::String, Aws::String>& value) { m_detailsMapHasBeenSet = true; m_detailsMap = value; }

    /**
     * <p>The job execution status.</p>
     */
    inline void SetDetailsMap(Aws::Map<Aws::String, Aws::String>&& value) { m_detailsMapHasBeenSet = true; m_detailsMap = std::move(value); }

    /**
     * <p>The job execution status.</p>
     */
    inline JobExecutionStatusDetails& WithDetailsMap(const Aws::Map<Aws::String, Aws::String>& value) { SetDetailsMap(value); return *this;}

    /**
     * <p>The job execution status.</p>
     */
    inline JobExecutionStatusDetails& WithDetailsMap(Aws::Map<Aws::String, Aws::String>&& value) { SetDetailsMap(std::move(value)); return *this;}

    /**
     * <p>The job execution status.</p>
     */
    inline JobExecutionStatusDetails& AddDetailsMap(const Aws::String& key, const Aws::String& value) { m_detailsMapHasBeenSet = true; m_detailsMap.emplace(key, value); return *this; }

    /**
     * <p>The job execution status.</p>
     */
    inline JobExecutionStatusDetails& AddDetailsMap(Aws::String&& key, const Aws::String& value) { m_detailsMapHasBeenSet = true; m_detailsMap.emplace(std::move(key), value); return *this; }

    /**
     * <p>The job execution status.</p>
     */
    inline JobExecutionStatusDetails& AddDetailsMap(const Aws::String& key, Aws::String&& value) { m_detailsMapHasBeenSet = true; m_detailsMap.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The job execution status.</p>
     */
    inline JobExecutionStatusDetails& AddDetailsMap(Aws::String&& key, Aws::String&& value) { m_detailsMapHasBeenSet = true; m_detailsMap.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The job execution status.</p>
     */
    inline JobExecutionStatusDetails& AddDetailsMap(const char* key, Aws::String&& value) { m_detailsMapHasBeenSet = true; m_detailsMap.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The job execution status.</p>
     */
    inline JobExecutionStatusDetails& AddDetailsMap(Aws::String&& key, const char* value) { m_detailsMapHasBeenSet = true; m_detailsMap.emplace(std::move(key), value); return *this; }

    /**
     * <p>The job execution status.</p>
     */
    inline JobExecutionStatusDetails& AddDetailsMap(const char* key, const char* value) { m_detailsMapHasBeenSet = true; m_detailsMap.emplace(key, value); return *this; }

  private:

    Aws::Map<Aws::String, Aws::String> m_detailsMap;
    bool m_detailsMapHasBeenSet;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
