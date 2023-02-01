/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotanalytics/IoTAnalytics_EXPORTS.h>
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
namespace IoTAnalytics
{
namespace Model
{

  /**
   * <p>The value of the variable as a structure that specifies an output file
   * URI.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotanalytics-2017-11-27/OutputFileUriValue">AWS
   * API Reference</a></p>
   */
  class OutputFileUriValue
  {
  public:
    AWS_IOTANALYTICS_API OutputFileUriValue();
    AWS_IOTANALYTICS_API OutputFileUriValue(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTANALYTICS_API OutputFileUriValue& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTANALYTICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The URI of the location where dataset contents are stored, usually the URI of
     * a file in an S3 bucket.</p>
     */
    inline const Aws::String& GetFileName() const{ return m_fileName; }

    /**
     * <p>The URI of the location where dataset contents are stored, usually the URI of
     * a file in an S3 bucket.</p>
     */
    inline bool FileNameHasBeenSet() const { return m_fileNameHasBeenSet; }

    /**
     * <p>The URI of the location where dataset contents are stored, usually the URI of
     * a file in an S3 bucket.</p>
     */
    inline void SetFileName(const Aws::String& value) { m_fileNameHasBeenSet = true; m_fileName = value; }

    /**
     * <p>The URI of the location where dataset contents are stored, usually the URI of
     * a file in an S3 bucket.</p>
     */
    inline void SetFileName(Aws::String&& value) { m_fileNameHasBeenSet = true; m_fileName = std::move(value); }

    /**
     * <p>The URI of the location where dataset contents are stored, usually the URI of
     * a file in an S3 bucket.</p>
     */
    inline void SetFileName(const char* value) { m_fileNameHasBeenSet = true; m_fileName.assign(value); }

    /**
     * <p>The URI of the location where dataset contents are stored, usually the URI of
     * a file in an S3 bucket.</p>
     */
    inline OutputFileUriValue& WithFileName(const Aws::String& value) { SetFileName(value); return *this;}

    /**
     * <p>The URI of the location where dataset contents are stored, usually the URI of
     * a file in an S3 bucket.</p>
     */
    inline OutputFileUriValue& WithFileName(Aws::String&& value) { SetFileName(std::move(value)); return *this;}

    /**
     * <p>The URI of the location where dataset contents are stored, usually the URI of
     * a file in an S3 bucket.</p>
     */
    inline OutputFileUriValue& WithFileName(const char* value) { SetFileName(value); return *this;}

  private:

    Aws::String m_fileName;
    bool m_fileNameHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTAnalytics
} // namespace Aws
