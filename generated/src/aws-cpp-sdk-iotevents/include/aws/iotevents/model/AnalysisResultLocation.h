/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotevents/IoTEvents_EXPORTS.h>
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
namespace IoTEvents
{
namespace Model
{

  /**
   * <p>Contains information that you can use to locate the field in your detector
   * model that the analysis result references.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotevents-2018-07-27/AnalysisResultLocation">AWS
   * API Reference</a></p>
   */
  class AnalysisResultLocation
  {
  public:
    AWS_IOTEVENTS_API AnalysisResultLocation();
    AWS_IOTEVENTS_API AnalysisResultLocation(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTEVENTS_API AnalysisResultLocation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTEVENTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A <a href="https://github.com/json-path/JsonPath">JsonPath</a> expression
     * that identifies the error field in your detector model.</p>
     */
    inline const Aws::String& GetPath() const{ return m_path; }

    /**
     * <p>A <a href="https://github.com/json-path/JsonPath">JsonPath</a> expression
     * that identifies the error field in your detector model.</p>
     */
    inline bool PathHasBeenSet() const { return m_pathHasBeenSet; }

    /**
     * <p>A <a href="https://github.com/json-path/JsonPath">JsonPath</a> expression
     * that identifies the error field in your detector model.</p>
     */
    inline void SetPath(const Aws::String& value) { m_pathHasBeenSet = true; m_path = value; }

    /**
     * <p>A <a href="https://github.com/json-path/JsonPath">JsonPath</a> expression
     * that identifies the error field in your detector model.</p>
     */
    inline void SetPath(Aws::String&& value) { m_pathHasBeenSet = true; m_path = std::move(value); }

    /**
     * <p>A <a href="https://github.com/json-path/JsonPath">JsonPath</a> expression
     * that identifies the error field in your detector model.</p>
     */
    inline void SetPath(const char* value) { m_pathHasBeenSet = true; m_path.assign(value); }

    /**
     * <p>A <a href="https://github.com/json-path/JsonPath">JsonPath</a> expression
     * that identifies the error field in your detector model.</p>
     */
    inline AnalysisResultLocation& WithPath(const Aws::String& value) { SetPath(value); return *this;}

    /**
     * <p>A <a href="https://github.com/json-path/JsonPath">JsonPath</a> expression
     * that identifies the error field in your detector model.</p>
     */
    inline AnalysisResultLocation& WithPath(Aws::String&& value) { SetPath(std::move(value)); return *this;}

    /**
     * <p>A <a href="https://github.com/json-path/JsonPath">JsonPath</a> expression
     * that identifies the error field in your detector model.</p>
     */
    inline AnalysisResultLocation& WithPath(const char* value) { SetPath(value); return *this;}

  private:

    Aws::String m_path;
    bool m_pathHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTEvents
} // namespace Aws
