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
  class AWS_IOTANALYTICS_API OutputFileUriValue
  {
  public:
    OutputFileUriValue();
    OutputFileUriValue(Aws::Utils::Json::JsonView jsonValue);
    OutputFileUriValue& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The URI of the location where data set contents are stored, usually the URI
     * of a file in an S3 bucket.</p>
     */
    inline const Aws::String& GetFileName() const{ return m_fileName; }

    /**
     * <p>The URI of the location where data set contents are stored, usually the URI
     * of a file in an S3 bucket.</p>
     */
    inline bool FileNameHasBeenSet() const { return m_fileNameHasBeenSet; }

    /**
     * <p>The URI of the location where data set contents are stored, usually the URI
     * of a file in an S3 bucket.</p>
     */
    inline void SetFileName(const Aws::String& value) { m_fileNameHasBeenSet = true; m_fileName = value; }

    /**
     * <p>The URI of the location where data set contents are stored, usually the URI
     * of a file in an S3 bucket.</p>
     */
    inline void SetFileName(Aws::String&& value) { m_fileNameHasBeenSet = true; m_fileName = std::move(value); }

    /**
     * <p>The URI of the location where data set contents are stored, usually the URI
     * of a file in an S3 bucket.</p>
     */
    inline void SetFileName(const char* value) { m_fileNameHasBeenSet = true; m_fileName.assign(value); }

    /**
     * <p>The URI of the location where data set contents are stored, usually the URI
     * of a file in an S3 bucket.</p>
     */
    inline OutputFileUriValue& WithFileName(const Aws::String& value) { SetFileName(value); return *this;}

    /**
     * <p>The URI of the location where data set contents are stored, usually the URI
     * of a file in an S3 bucket.</p>
     */
    inline OutputFileUriValue& WithFileName(Aws::String&& value) { SetFileName(std::move(value)); return *this;}

    /**
     * <p>The URI of the location where data set contents are stored, usually the URI
     * of a file in an S3 bucket.</p>
     */
    inline OutputFileUriValue& WithFileName(const char* value) { SetFileName(value); return *this;}

  private:

    Aws::String m_fileName;
    bool m_fileNameHasBeenSet;
  };

} // namespace Model
} // namespace IoTAnalytics
} // namespace Aws
