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
   * <p>Specifies configuration properties for an exporting labels task
   * run.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/ExportLabelsTaskRunProperties">AWS
   * API Reference</a></p>
   */
  class ExportLabelsTaskRunProperties
  {
  public:
    AWS_GLUE_API ExportLabelsTaskRunProperties();
    AWS_GLUE_API ExportLabelsTaskRunProperties(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API ExportLabelsTaskRunProperties& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Simple Storage Service (Amazon S3) path where you will export the
     * labels.</p>
     */
    inline const Aws::String& GetOutputS3Path() const{ return m_outputS3Path; }

    /**
     * <p>The Amazon Simple Storage Service (Amazon S3) path where you will export the
     * labels.</p>
     */
    inline bool OutputS3PathHasBeenSet() const { return m_outputS3PathHasBeenSet; }

    /**
     * <p>The Amazon Simple Storage Service (Amazon S3) path where you will export the
     * labels.</p>
     */
    inline void SetOutputS3Path(const Aws::String& value) { m_outputS3PathHasBeenSet = true; m_outputS3Path = value; }

    /**
     * <p>The Amazon Simple Storage Service (Amazon S3) path where you will export the
     * labels.</p>
     */
    inline void SetOutputS3Path(Aws::String&& value) { m_outputS3PathHasBeenSet = true; m_outputS3Path = std::move(value); }

    /**
     * <p>The Amazon Simple Storage Service (Amazon S3) path where you will export the
     * labels.</p>
     */
    inline void SetOutputS3Path(const char* value) { m_outputS3PathHasBeenSet = true; m_outputS3Path.assign(value); }

    /**
     * <p>The Amazon Simple Storage Service (Amazon S3) path where you will export the
     * labels.</p>
     */
    inline ExportLabelsTaskRunProperties& WithOutputS3Path(const Aws::String& value) { SetOutputS3Path(value); return *this;}

    /**
     * <p>The Amazon Simple Storage Service (Amazon S3) path where you will export the
     * labels.</p>
     */
    inline ExportLabelsTaskRunProperties& WithOutputS3Path(Aws::String&& value) { SetOutputS3Path(std::move(value)); return *this;}

    /**
     * <p>The Amazon Simple Storage Service (Amazon S3) path where you will export the
     * labels.</p>
     */
    inline ExportLabelsTaskRunProperties& WithOutputS3Path(const char* value) { SetOutputS3Path(value); return *this;}

  private:

    Aws::String m_outputS3Path;
    bool m_outputS3PathHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
