/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/databrew/GlueDataBrew_EXPORTS.h>
#include <aws/databrew/model/CompressionFormat.h>
#include <aws/databrew/model/OutputFormat.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/databrew/model/S3Location.h>
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
namespace GlueDataBrew
{
namespace Model
{

  /**
   * <p>Represents individual output from a particular job run.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/databrew-2017-07-25/Output">AWS API
   * Reference</a></p>
   */
  class AWS_GLUEDATABREW_API Output
  {
  public:
    Output();
    Output(Aws::Utils::Json::JsonView jsonValue);
    Output& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The compression algorithm used to compress the output text of the job.</p>
     */
    inline const CompressionFormat& GetCompressionFormat() const{ return m_compressionFormat; }

    /**
     * <p>The compression algorithm used to compress the output text of the job.</p>
     */
    inline bool CompressionFormatHasBeenSet() const { return m_compressionFormatHasBeenSet; }

    /**
     * <p>The compression algorithm used to compress the output text of the job.</p>
     */
    inline void SetCompressionFormat(const CompressionFormat& value) { m_compressionFormatHasBeenSet = true; m_compressionFormat = value; }

    /**
     * <p>The compression algorithm used to compress the output text of the job.</p>
     */
    inline void SetCompressionFormat(CompressionFormat&& value) { m_compressionFormatHasBeenSet = true; m_compressionFormat = std::move(value); }

    /**
     * <p>The compression algorithm used to compress the output text of the job.</p>
     */
    inline Output& WithCompressionFormat(const CompressionFormat& value) { SetCompressionFormat(value); return *this;}

    /**
     * <p>The compression algorithm used to compress the output text of the job.</p>
     */
    inline Output& WithCompressionFormat(CompressionFormat&& value) { SetCompressionFormat(std::move(value)); return *this;}


    /**
     * <p>The data format of the output of the job.</p>
     */
    inline const OutputFormat& GetFormat() const{ return m_format; }

    /**
     * <p>The data format of the output of the job.</p>
     */
    inline bool FormatHasBeenSet() const { return m_formatHasBeenSet; }

    /**
     * <p>The data format of the output of the job.</p>
     */
    inline void SetFormat(const OutputFormat& value) { m_formatHasBeenSet = true; m_format = value; }

    /**
     * <p>The data format of the output of the job.</p>
     */
    inline void SetFormat(OutputFormat&& value) { m_formatHasBeenSet = true; m_format = std::move(value); }

    /**
     * <p>The data format of the output of the job.</p>
     */
    inline Output& WithFormat(const OutputFormat& value) { SetFormat(value); return *this;}

    /**
     * <p>The data format of the output of the job.</p>
     */
    inline Output& WithFormat(OutputFormat&& value) { SetFormat(std::move(value)); return *this;}


    /**
     * <p>The names of one or more partition columns for the output of the job.</p>
     */
    inline const Aws::Vector<Aws::String>& GetPartitionColumns() const{ return m_partitionColumns; }

    /**
     * <p>The names of one or more partition columns for the output of the job.</p>
     */
    inline bool PartitionColumnsHasBeenSet() const { return m_partitionColumnsHasBeenSet; }

    /**
     * <p>The names of one or more partition columns for the output of the job.</p>
     */
    inline void SetPartitionColumns(const Aws::Vector<Aws::String>& value) { m_partitionColumnsHasBeenSet = true; m_partitionColumns = value; }

    /**
     * <p>The names of one or more partition columns for the output of the job.</p>
     */
    inline void SetPartitionColumns(Aws::Vector<Aws::String>&& value) { m_partitionColumnsHasBeenSet = true; m_partitionColumns = std::move(value); }

    /**
     * <p>The names of one or more partition columns for the output of the job.</p>
     */
    inline Output& WithPartitionColumns(const Aws::Vector<Aws::String>& value) { SetPartitionColumns(value); return *this;}

    /**
     * <p>The names of one or more partition columns for the output of the job.</p>
     */
    inline Output& WithPartitionColumns(Aws::Vector<Aws::String>&& value) { SetPartitionColumns(std::move(value)); return *this;}

    /**
     * <p>The names of one or more partition columns for the output of the job.</p>
     */
    inline Output& AddPartitionColumns(const Aws::String& value) { m_partitionColumnsHasBeenSet = true; m_partitionColumns.push_back(value); return *this; }

    /**
     * <p>The names of one or more partition columns for the output of the job.</p>
     */
    inline Output& AddPartitionColumns(Aws::String&& value) { m_partitionColumnsHasBeenSet = true; m_partitionColumns.push_back(std::move(value)); return *this; }

    /**
     * <p>The names of one or more partition columns for the output of the job.</p>
     */
    inline Output& AddPartitionColumns(const char* value) { m_partitionColumnsHasBeenSet = true; m_partitionColumns.push_back(value); return *this; }


    /**
     * <p>The location in Amazon S3 where the job writes its output.</p>
     */
    inline const S3Location& GetLocation() const{ return m_location; }

    /**
     * <p>The location in Amazon S3 where the job writes its output.</p>
     */
    inline bool LocationHasBeenSet() const { return m_locationHasBeenSet; }

    /**
     * <p>The location in Amazon S3 where the job writes its output.</p>
     */
    inline void SetLocation(const S3Location& value) { m_locationHasBeenSet = true; m_location = value; }

    /**
     * <p>The location in Amazon S3 where the job writes its output.</p>
     */
    inline void SetLocation(S3Location&& value) { m_locationHasBeenSet = true; m_location = std::move(value); }

    /**
     * <p>The location in Amazon S3 where the job writes its output.</p>
     */
    inline Output& WithLocation(const S3Location& value) { SetLocation(value); return *this;}

    /**
     * <p>The location in Amazon S3 where the job writes its output.</p>
     */
    inline Output& WithLocation(S3Location&& value) { SetLocation(std::move(value)); return *this;}


    /**
     * <p>A value that, if true, means that any data in the location specified for
     * output is overwritten with new output.</p>
     */
    inline bool GetOverwrite() const{ return m_overwrite; }

    /**
     * <p>A value that, if true, means that any data in the location specified for
     * output is overwritten with new output.</p>
     */
    inline bool OverwriteHasBeenSet() const { return m_overwriteHasBeenSet; }

    /**
     * <p>A value that, if true, means that any data in the location specified for
     * output is overwritten with new output.</p>
     */
    inline void SetOverwrite(bool value) { m_overwriteHasBeenSet = true; m_overwrite = value; }

    /**
     * <p>A value that, if true, means that any data in the location specified for
     * output is overwritten with new output.</p>
     */
    inline Output& WithOverwrite(bool value) { SetOverwrite(value); return *this;}

  private:

    CompressionFormat m_compressionFormat;
    bool m_compressionFormatHasBeenSet;

    OutputFormat m_format;
    bool m_formatHasBeenSet;

    Aws::Vector<Aws::String> m_partitionColumns;
    bool m_partitionColumnsHasBeenSet;

    S3Location m_location;
    bool m_locationHasBeenSet;

    bool m_overwrite;
    bool m_overwriteHasBeenSet;
  };

} // namespace Model
} // namespace GlueDataBrew
} // namespace Aws
