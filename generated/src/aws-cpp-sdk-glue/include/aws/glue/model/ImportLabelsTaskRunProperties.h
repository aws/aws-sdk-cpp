/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class ImportLabelsTaskRunProperties
  {
  public:
    AWS_GLUE_API ImportLabelsTaskRunProperties();
    AWS_GLUE_API ImportLabelsTaskRunProperties(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API ImportLabelsTaskRunProperties& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


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
    bool m_inputS3PathHasBeenSet = false;

    bool m_replace;
    bool m_replaceHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
