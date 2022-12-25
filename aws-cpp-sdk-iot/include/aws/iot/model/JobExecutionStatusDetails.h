/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class JobExecutionStatusDetails
  {
  public:
    AWS_IOT_API JobExecutionStatusDetails();
    AWS_IOT_API JobExecutionStatusDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API JobExecutionStatusDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API Aws::Utils::Json::JsonValue Jsonize() const;


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
    bool m_detailsMapHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
