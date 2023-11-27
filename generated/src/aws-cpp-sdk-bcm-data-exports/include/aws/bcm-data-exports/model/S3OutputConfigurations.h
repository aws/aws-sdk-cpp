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
    AWS_BCMDATAEXPORTS_API S3OutputConfigurations();
    AWS_BCMDATAEXPORTS_API S3OutputConfigurations(Aws::Utils::Json::JsonView jsonValue);
    AWS_BCMDATAEXPORTS_API S3OutputConfigurations& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BCMDATAEXPORTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The compression type for the data export.</p>
     */
    inline const CompressionOption& GetCompression() const{ return m_compression; }

    /**
     * <p>The compression type for the data export.</p>
     */
    inline bool CompressionHasBeenSet() const { return m_compressionHasBeenSet; }

    /**
     * <p>The compression type for the data export.</p>
     */
    inline void SetCompression(const CompressionOption& value) { m_compressionHasBeenSet = true; m_compression = value; }

    /**
     * <p>The compression type for the data export.</p>
     */
    inline void SetCompression(CompressionOption&& value) { m_compressionHasBeenSet = true; m_compression = std::move(value); }

    /**
     * <p>The compression type for the data export.</p>
     */
    inline S3OutputConfigurations& WithCompression(const CompressionOption& value) { SetCompression(value); return *this;}

    /**
     * <p>The compression type for the data export.</p>
     */
    inline S3OutputConfigurations& WithCompression(CompressionOption&& value) { SetCompression(std::move(value)); return *this;}


    /**
     * <p>The file format for the data export.</p>
     */
    inline const FormatOption& GetFormat() const{ return m_format; }

    /**
     * <p>The file format for the data export.</p>
     */
    inline bool FormatHasBeenSet() const { return m_formatHasBeenSet; }

    /**
     * <p>The file format for the data export.</p>
     */
    inline void SetFormat(const FormatOption& value) { m_formatHasBeenSet = true; m_format = value; }

    /**
     * <p>The file format for the data export.</p>
     */
    inline void SetFormat(FormatOption&& value) { m_formatHasBeenSet = true; m_format = std::move(value); }

    /**
     * <p>The file format for the data export.</p>
     */
    inline S3OutputConfigurations& WithFormat(const FormatOption& value) { SetFormat(value); return *this;}

    /**
     * <p>The file format for the data export.</p>
     */
    inline S3OutputConfigurations& WithFormat(FormatOption&& value) { SetFormat(std::move(value)); return *this;}


    /**
     * <p>The output type for the data export.</p>
     */
    inline const S3OutputType& GetOutputType() const{ return m_outputType; }

    /**
     * <p>The output type for the data export.</p>
     */
    inline bool OutputTypeHasBeenSet() const { return m_outputTypeHasBeenSet; }

    /**
     * <p>The output type for the data export.</p>
     */
    inline void SetOutputType(const S3OutputType& value) { m_outputTypeHasBeenSet = true; m_outputType = value; }

    /**
     * <p>The output type for the data export.</p>
     */
    inline void SetOutputType(S3OutputType&& value) { m_outputTypeHasBeenSet = true; m_outputType = std::move(value); }

    /**
     * <p>The output type for the data export.</p>
     */
    inline S3OutputConfigurations& WithOutputType(const S3OutputType& value) { SetOutputType(value); return *this;}

    /**
     * <p>The output type for the data export.</p>
     */
    inline S3OutputConfigurations& WithOutputType(S3OutputType&& value) { SetOutputType(std::move(value)); return *this;}


    /**
     * <p>The rule to follow when generating a version of the data export file. You
     * have the choice to overwrite the previous version or to be delivered in addition
     * to the previous versions. Overwriting exports can save on Amazon S3 storage
     * costs. Creating new export versions allows you to track the changes in cost and
     * usage data over time.</p>
     */
    inline const OverwriteOption& GetOverwrite() const{ return m_overwrite; }

    /**
     * <p>The rule to follow when generating a version of the data export file. You
     * have the choice to overwrite the previous version or to be delivered in addition
     * to the previous versions. Overwriting exports can save on Amazon S3 storage
     * costs. Creating new export versions allows you to track the changes in cost and
     * usage data over time.</p>
     */
    inline bool OverwriteHasBeenSet() const { return m_overwriteHasBeenSet; }

    /**
     * <p>The rule to follow when generating a version of the data export file. You
     * have the choice to overwrite the previous version or to be delivered in addition
     * to the previous versions. Overwriting exports can save on Amazon S3 storage
     * costs. Creating new export versions allows you to track the changes in cost and
     * usage data over time.</p>
     */
    inline void SetOverwrite(const OverwriteOption& value) { m_overwriteHasBeenSet = true; m_overwrite = value; }

    /**
     * <p>The rule to follow when generating a version of the data export file. You
     * have the choice to overwrite the previous version or to be delivered in addition
     * to the previous versions. Overwriting exports can save on Amazon S3 storage
     * costs. Creating new export versions allows you to track the changes in cost and
     * usage data over time.</p>
     */
    inline void SetOverwrite(OverwriteOption&& value) { m_overwriteHasBeenSet = true; m_overwrite = std::move(value); }

    /**
     * <p>The rule to follow when generating a version of the data export file. You
     * have the choice to overwrite the previous version or to be delivered in addition
     * to the previous versions. Overwriting exports can save on Amazon S3 storage
     * costs. Creating new export versions allows you to track the changes in cost and
     * usage data over time.</p>
     */
    inline S3OutputConfigurations& WithOverwrite(const OverwriteOption& value) { SetOverwrite(value); return *this;}

    /**
     * <p>The rule to follow when generating a version of the data export file. You
     * have the choice to overwrite the previous version or to be delivered in addition
     * to the previous versions. Overwriting exports can save on Amazon S3 storage
     * costs. Creating new export versions allows you to track the changes in cost and
     * usage data over time.</p>
     */
    inline S3OutputConfigurations& WithOverwrite(OverwriteOption&& value) { SetOverwrite(std::move(value)); return *this;}

  private:

    CompressionOption m_compression;
    bool m_compressionHasBeenSet = false;

    FormatOption m_format;
    bool m_formatHasBeenSet = false;

    S3OutputType m_outputType;
    bool m_outputTypeHasBeenSet = false;

    OverwriteOption m_overwrite;
    bool m_overwriteHasBeenSet = false;
  };

} // namespace Model
} // namespace BCMDataExports
} // namespace Aws
