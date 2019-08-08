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
#include <aws/glue/Glue_EXPORTS.h>
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
namespace Glue
{
namespace Model
{

  /**
   * <p>Specifies configuration properties for an importing labels task
   * run.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/ImportLabelsTaskRunProperties">AWS
   * API Reference</a></p>
   */
  class AWS_GLUE_API ImportLabelsTaskRunProperties
  {
  public:
    ImportLabelsTaskRunProperties();
    ImportLabelsTaskRunProperties(Aws::Utils::Json::JsonView jsonValue);
    ImportLabelsTaskRunProperties& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Simple Storage Service (Amazon S3) path from where you will import
     * the labels.</p>
     */
    inline const Aws::String& GetInputS3Path() const{ return m_inputS3Path; }

    /**
     * <p>The Amazon Simple Storage Service (Amazon S3) path from where you will import
     * the labels.</p>
     */
    inline bool InputS3PathHasBeenSet() const { return m_inputS3PathHasBeenSet; }

    /**
     * <p>The Amazon Simple Storage Service (Amazon S3) path from where you will import
     * the labels.</p>
     */
    inline void SetInputS3Path(const Aws::String& value) { m_inputS3PathHasBeenSet = true; m_inputS3Path = value; }

    /**
     * <p>The Amazon Simple Storage Service (Amazon S3) path from where you will import
     * the labels.</p>
     */
    inline void SetInputS3Path(Aws::String&& value) { m_inputS3PathHasBeenSet = true; m_inputS3Path = std::move(value); }

    /**
     * <p>The Amazon Simple Storage Service (Amazon S3) path from where you will import
     * the labels.</p>
     */
    inline void SetInputS3Path(const char* value) { m_inputS3PathHasBeenSet = true; m_inputS3Path.assign(value); }

    /**
     * <p>The Amazon Simple Storage Service (Amazon S3) path from where you will import
     * the labels.</p>
     */
    inline ImportLabelsTaskRunProperties& WithInputS3Path(const Aws::String& value) { SetInputS3Path(value); return *this;}

    /**
     * <p>The Amazon Simple Storage Service (Amazon S3) path from where you will import
     * the labels.</p>
     */
    inline ImportLabelsTaskRunProperties& WithInputS3Path(Aws::String&& value) { SetInputS3Path(std::move(value)); return *this;}

    /**
     * <p>The Amazon Simple Storage Service (Amazon S3) path from where you will import
     * the labels.</p>
     */
    inline ImportLabelsTaskRunProperties& WithInputS3Path(const char* value) { SetInputS3Path(value); return *this;}


    /**
     * <p>Indicates whether to overwrite your existing labels.</p>
     */
    inline bool GetReplace() const{ return m_replace; }

    /**
     * <p>Indicates whether to overwrite your existing labels.</p>
     */
    inline bool ReplaceHasBeenSet() const { return m_replaceHasBeenSet; }

    /**
     * <p>Indicates whether to overwrite your existing labels.</p>
     */
    inline void SetReplace(bool value) { m_replaceHasBeenSet = true; m_replace = value; }

    /**
     * <p>Indicates whether to overwrite your existing labels.</p>
     */
    inline ImportLabelsTaskRunProperties& WithReplace(bool value) { SetReplace(value); return *this;}

  private:

    Aws::String m_inputS3Path;
    bool m_inputS3PathHasBeenSet;

    bool m_replace;
    bool m_replaceHasBeenSet;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
