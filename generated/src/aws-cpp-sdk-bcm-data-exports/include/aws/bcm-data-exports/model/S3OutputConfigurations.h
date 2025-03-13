/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bcm-data-exports/BCMDataExports_EXPORTS.h>
#include <aws/bcm-data-exports/model/CompressionOption.h>
#include <aws/bcm-data-exports/model/FormatOption.h>
#include <aws/bcm-data-exports/model/S3OutputType.h>
#include <aws/bcm-data-exports/model/OverwriteOption.h>
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
namespace BCMDataExports
{
namespace Model
{

  /**
   * <p>The compression type, file format, and overwrite preference for the data
   * export.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bcm-data-exports-2023-11-26/S3OutputConfigurations">AWS
   * API Reference</a></p>
   */
  class S3OutputConfigurations
  {
  public:
    AWS_BCMDATAEXPORTS_API S3OutputConfigurations() = default;
    AWS_BCMDATAEXPORTS_API S3OutputConfigurations(Aws::Utils::Json::JsonView jsonValue);
    AWS_BCMDATAEXPORTS_API S3OutputConfigurations& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BCMDATAEXPORTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The compression type for the data export.</p>
     */
    inline CompressionOption GetCompression() const { return m_compression; }
    inline bool CompressionHasBeenSet() const { return m_compressionHasBeenSet; }
    inline void SetCompression(CompressionOption value) { m_compressionHasBeenSet = true; m_compression = value; }
    inline S3OutputConfigurations& WithCompression(CompressionOption value) { SetCompression(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The file format for the data export.</p>
     */
    inline FormatOption GetFormat() const { return m_format; }
    inline bool FormatHasBeenSet() const { return m_formatHasBeenSet; }
    inline void SetFormat(FormatOption value) { m_formatHasBeenSet = true; m_format = value; }
    inline S3OutputConfigurations& WithFormat(FormatOption value) { SetFormat(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The output type for the data export.</p>
     */
    inline S3OutputType GetOutputType() const { return m_outputType; }
    inline bool OutputTypeHasBeenSet() const { return m_outputTypeHasBeenSet; }
    inline void SetOutputType(S3OutputType value) { m_outputTypeHasBeenSet = true; m_outputType = value; }
    inline S3OutputConfigurations& WithOutputType(S3OutputType value) { SetOutputType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The rule to follow when generating a version of the data export file. You
     * have the choice to overwrite the previous version or to be delivered in addition
     * to the previous versions. Overwriting exports can save on Amazon S3 storage
     * costs. Creating new export versions allows you to track the changes in cost and
     * usage data over time.</p>
     */
    inline OverwriteOption GetOverwrite() const { return m_overwrite; }
    inline bool OverwriteHasBeenSet() const { return m_overwriteHasBeenSet; }
    inline void SetOverwrite(OverwriteOption value) { m_overwriteHasBeenSet = true; m_overwrite = value; }
    inline S3OutputConfigurations& WithOverwrite(OverwriteOption value) { SetOverwrite(value); return *this;}
    ///@}
  private:

    CompressionOption m_compression{CompressionOption::NOT_SET};
    bool m_compressionHasBeenSet = false;

    FormatOption m_format{FormatOption::NOT_SET};
    bool m_formatHasBeenSet = false;

    S3OutputType m_outputType{S3OutputType::NOT_SET};
    bool m_outputTypeHasBeenSet = false;

    OverwriteOption m_overwrite{OverwriteOption::NOT_SET};
    bool m_overwriteHasBeenSet = false;
  };

} // namespace Model
} // namespace BCMDataExports
} // namespace Aws
