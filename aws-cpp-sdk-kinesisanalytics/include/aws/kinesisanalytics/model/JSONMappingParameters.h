/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesisanalytics/KinesisAnalytics_EXPORTS.h>
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
namespace KinesisAnalytics
{
namespace Model
{

  /**
   * <p>Provides additional mapping information when JSON is the record format on the
   * streaming source.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalytics-2015-08-14/JSONMappingParameters">AWS
   * API Reference</a></p>
   */
  class JSONMappingParameters
  {
  public:
    AWS_KINESISANALYTICS_API JSONMappingParameters();
    AWS_KINESISANALYTICS_API JSONMappingParameters(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICS_API JSONMappingParameters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Path to the top-level parent that contains the records.</p>
     */
    inline const Aws::String& GetRecordRowPath() const{ return m_recordRowPath; }

    /**
     * <p>Path to the top-level parent that contains the records.</p>
     */
    inline bool RecordRowPathHasBeenSet() const { return m_recordRowPathHasBeenSet; }

    /**
     * <p>Path to the top-level parent that contains the records.</p>
     */
    inline void SetRecordRowPath(const Aws::String& value) { m_recordRowPathHasBeenSet = true; m_recordRowPath = value; }

    /**
     * <p>Path to the top-level parent that contains the records.</p>
     */
    inline void SetRecordRowPath(Aws::String&& value) { m_recordRowPathHasBeenSet = true; m_recordRowPath = std::move(value); }

    /**
     * <p>Path to the top-level parent that contains the records.</p>
     */
    inline void SetRecordRowPath(const char* value) { m_recordRowPathHasBeenSet = true; m_recordRowPath.assign(value); }

    /**
     * <p>Path to the top-level parent that contains the records.</p>
     */
    inline JSONMappingParameters& WithRecordRowPath(const Aws::String& value) { SetRecordRowPath(value); return *this;}

    /**
     * <p>Path to the top-level parent that contains the records.</p>
     */
    inline JSONMappingParameters& WithRecordRowPath(Aws::String&& value) { SetRecordRowPath(std::move(value)); return *this;}

    /**
     * <p>Path to the top-level parent that contains the records.</p>
     */
    inline JSONMappingParameters& WithRecordRowPath(const char* value) { SetRecordRowPath(value); return *this;}

  private:

    Aws::String m_recordRowPath;
    bool m_recordRowPathHasBeenSet = false;
  };

} // namespace Model
} // namespace KinesisAnalytics
} // namespace Aws
