/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/finspace-data/FinSpaceData_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/finspace-data/model/ExportFileFormat.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
namespace FinSpaceData
{
namespace Model
{

  /**
   * <p>Structure for the Dataview destination type parameters.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/finspace-2020-07-13/DataViewDestinationTypeParams">AWS
   * API Reference</a></p>
   */
  class DataViewDestinationTypeParams
  {
  public:
    AWS_FINSPACEDATA_API DataViewDestinationTypeParams();
    AWS_FINSPACEDATA_API DataViewDestinationTypeParams(Aws::Utils::Json::JsonView jsonValue);
    AWS_FINSPACEDATA_API DataViewDestinationTypeParams& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FINSPACEDATA_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Destination type for a Dataview.</p> <ul> <li> <p> <code>GLUE_TABLE</code> –
     * Glue table destination type.</p> </li> <li> <p> <code>S3</code> – S3 destination
     * type.</p> </li> </ul>
     */
    inline const Aws::String& GetDestinationType() const{ return m_destinationType; }

    /**
     * <p>Destination type for a Dataview.</p> <ul> <li> <p> <code>GLUE_TABLE</code> –
     * Glue table destination type.</p> </li> <li> <p> <code>S3</code> – S3 destination
     * type.</p> </li> </ul>
     */
    inline bool DestinationTypeHasBeenSet() const { return m_destinationTypeHasBeenSet; }

    /**
     * <p>Destination type for a Dataview.</p> <ul> <li> <p> <code>GLUE_TABLE</code> –
     * Glue table destination type.</p> </li> <li> <p> <code>S3</code> – S3 destination
     * type.</p> </li> </ul>
     */
    inline void SetDestinationType(const Aws::String& value) { m_destinationTypeHasBeenSet = true; m_destinationType = value; }

    /**
     * <p>Destination type for a Dataview.</p> <ul> <li> <p> <code>GLUE_TABLE</code> –
     * Glue table destination type.</p> </li> <li> <p> <code>S3</code> – S3 destination
     * type.</p> </li> </ul>
     */
    inline void SetDestinationType(Aws::String&& value) { m_destinationTypeHasBeenSet = true; m_destinationType = std::move(value); }

    /**
     * <p>Destination type for a Dataview.</p> <ul> <li> <p> <code>GLUE_TABLE</code> –
     * Glue table destination type.</p> </li> <li> <p> <code>S3</code> – S3 destination
     * type.</p> </li> </ul>
     */
    inline void SetDestinationType(const char* value) { m_destinationTypeHasBeenSet = true; m_destinationType.assign(value); }

    /**
     * <p>Destination type for a Dataview.</p> <ul> <li> <p> <code>GLUE_TABLE</code> –
     * Glue table destination type.</p> </li> <li> <p> <code>S3</code> – S3 destination
     * type.</p> </li> </ul>
     */
    inline DataViewDestinationTypeParams& WithDestinationType(const Aws::String& value) { SetDestinationType(value); return *this;}

    /**
     * <p>Destination type for a Dataview.</p> <ul> <li> <p> <code>GLUE_TABLE</code> –
     * Glue table destination type.</p> </li> <li> <p> <code>S3</code> – S3 destination
     * type.</p> </li> </ul>
     */
    inline DataViewDestinationTypeParams& WithDestinationType(Aws::String&& value) { SetDestinationType(std::move(value)); return *this;}

    /**
     * <p>Destination type for a Dataview.</p> <ul> <li> <p> <code>GLUE_TABLE</code> –
     * Glue table destination type.</p> </li> <li> <p> <code>S3</code> – S3 destination
     * type.</p> </li> </ul>
     */
    inline DataViewDestinationTypeParams& WithDestinationType(const char* value) { SetDestinationType(value); return *this;}


    /**
     * <p>Dataview export file format.</p> <ul> <li> <p> <code>PARQUET</code> – Parquet
     * export file format.</p> </li> <li> <p> <code>DELIMITED_TEXT</code> – Delimited
     * text export file format.</p> </li> </ul>
     */
    inline const ExportFileFormat& GetS3DestinationExportFileFormat() const{ return m_s3DestinationExportFileFormat; }

    /**
     * <p>Dataview export file format.</p> <ul> <li> <p> <code>PARQUET</code> – Parquet
     * export file format.</p> </li> <li> <p> <code>DELIMITED_TEXT</code> – Delimited
     * text export file format.</p> </li> </ul>
     */
    inline bool S3DestinationExportFileFormatHasBeenSet() const { return m_s3DestinationExportFileFormatHasBeenSet; }

    /**
     * <p>Dataview export file format.</p> <ul> <li> <p> <code>PARQUET</code> – Parquet
     * export file format.</p> </li> <li> <p> <code>DELIMITED_TEXT</code> – Delimited
     * text export file format.</p> </li> </ul>
     */
    inline void SetS3DestinationExportFileFormat(const ExportFileFormat& value) { m_s3DestinationExportFileFormatHasBeenSet = true; m_s3DestinationExportFileFormat = value; }

    /**
     * <p>Dataview export file format.</p> <ul> <li> <p> <code>PARQUET</code> – Parquet
     * export file format.</p> </li> <li> <p> <code>DELIMITED_TEXT</code> – Delimited
     * text export file format.</p> </li> </ul>
     */
    inline void SetS3DestinationExportFileFormat(ExportFileFormat&& value) { m_s3DestinationExportFileFormatHasBeenSet = true; m_s3DestinationExportFileFormat = std::move(value); }

    /**
     * <p>Dataview export file format.</p> <ul> <li> <p> <code>PARQUET</code> – Parquet
     * export file format.</p> </li> <li> <p> <code>DELIMITED_TEXT</code> – Delimited
     * text export file format.</p> </li> </ul>
     */
    inline DataViewDestinationTypeParams& WithS3DestinationExportFileFormat(const ExportFileFormat& value) { SetS3DestinationExportFileFormat(value); return *this;}

    /**
     * <p>Dataview export file format.</p> <ul> <li> <p> <code>PARQUET</code> – Parquet
     * export file format.</p> </li> <li> <p> <code>DELIMITED_TEXT</code> – Delimited
     * text export file format.</p> </li> </ul>
     */
    inline DataViewDestinationTypeParams& WithS3DestinationExportFileFormat(ExportFileFormat&& value) { SetS3DestinationExportFileFormat(std::move(value)); return *this;}


    /**
     * <p>Format Options for S3 Destination type.</p> <p>Here is an example of how you
     * could specify the <code>s3DestinationExportFileFormatOptions</code> </p> <p>
     * <code> { "header": "true", "delimiter": ",", "compression": "gzip" }</code> </p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetS3DestinationExportFileFormatOptions() const{ return m_s3DestinationExportFileFormatOptions; }

    /**
     * <p>Format Options for S3 Destination type.</p> <p>Here is an example of how you
     * could specify the <code>s3DestinationExportFileFormatOptions</code> </p> <p>
     * <code> { "header": "true", "delimiter": ",", "compression": "gzip" }</code> </p>
     */
    inline bool S3DestinationExportFileFormatOptionsHasBeenSet() const { return m_s3DestinationExportFileFormatOptionsHasBeenSet; }

    /**
     * <p>Format Options for S3 Destination type.</p> <p>Here is an example of how you
     * could specify the <code>s3DestinationExportFileFormatOptions</code> </p> <p>
     * <code> { "header": "true", "delimiter": ",", "compression": "gzip" }</code> </p>
     */
    inline void SetS3DestinationExportFileFormatOptions(const Aws::Map<Aws::String, Aws::String>& value) { m_s3DestinationExportFileFormatOptionsHasBeenSet = true; m_s3DestinationExportFileFormatOptions = value; }

    /**
     * <p>Format Options for S3 Destination type.</p> <p>Here is an example of how you
     * could specify the <code>s3DestinationExportFileFormatOptions</code> </p> <p>
     * <code> { "header": "true", "delimiter": ",", "compression": "gzip" }</code> </p>
     */
    inline void SetS3DestinationExportFileFormatOptions(Aws::Map<Aws::String, Aws::String>&& value) { m_s3DestinationExportFileFormatOptionsHasBeenSet = true; m_s3DestinationExportFileFormatOptions = std::move(value); }

    /**
     * <p>Format Options for S3 Destination type.</p> <p>Here is an example of how you
     * could specify the <code>s3DestinationExportFileFormatOptions</code> </p> <p>
     * <code> { "header": "true", "delimiter": ",", "compression": "gzip" }</code> </p>
     */
    inline DataViewDestinationTypeParams& WithS3DestinationExportFileFormatOptions(const Aws::Map<Aws::String, Aws::String>& value) { SetS3DestinationExportFileFormatOptions(value); return *this;}

    /**
     * <p>Format Options for S3 Destination type.</p> <p>Here is an example of how you
     * could specify the <code>s3DestinationExportFileFormatOptions</code> </p> <p>
     * <code> { "header": "true", "delimiter": ",", "compression": "gzip" }</code> </p>
     */
    inline DataViewDestinationTypeParams& WithS3DestinationExportFileFormatOptions(Aws::Map<Aws::String, Aws::String>&& value) { SetS3DestinationExportFileFormatOptions(std::move(value)); return *this;}

    /**
     * <p>Format Options for S3 Destination type.</p> <p>Here is an example of how you
     * could specify the <code>s3DestinationExportFileFormatOptions</code> </p> <p>
     * <code> { "header": "true", "delimiter": ",", "compression": "gzip" }</code> </p>
     */
    inline DataViewDestinationTypeParams& AddS3DestinationExportFileFormatOptions(const Aws::String& key, const Aws::String& value) { m_s3DestinationExportFileFormatOptionsHasBeenSet = true; m_s3DestinationExportFileFormatOptions.emplace(key, value); return *this; }

    /**
     * <p>Format Options for S3 Destination type.</p> <p>Here is an example of how you
     * could specify the <code>s3DestinationExportFileFormatOptions</code> </p> <p>
     * <code> { "header": "true", "delimiter": ",", "compression": "gzip" }</code> </p>
     */
    inline DataViewDestinationTypeParams& AddS3DestinationExportFileFormatOptions(Aws::String&& key, const Aws::String& value) { m_s3DestinationExportFileFormatOptionsHasBeenSet = true; m_s3DestinationExportFileFormatOptions.emplace(std::move(key), value); return *this; }

    /**
     * <p>Format Options for S3 Destination type.</p> <p>Here is an example of how you
     * could specify the <code>s3DestinationExportFileFormatOptions</code> </p> <p>
     * <code> { "header": "true", "delimiter": ",", "compression": "gzip" }</code> </p>
     */
    inline DataViewDestinationTypeParams& AddS3DestinationExportFileFormatOptions(const Aws::String& key, Aws::String&& value) { m_s3DestinationExportFileFormatOptionsHasBeenSet = true; m_s3DestinationExportFileFormatOptions.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Format Options for S3 Destination type.</p> <p>Here is an example of how you
     * could specify the <code>s3DestinationExportFileFormatOptions</code> </p> <p>
     * <code> { "header": "true", "delimiter": ",", "compression": "gzip" }</code> </p>
     */
    inline DataViewDestinationTypeParams& AddS3DestinationExportFileFormatOptions(Aws::String&& key, Aws::String&& value) { m_s3DestinationExportFileFormatOptionsHasBeenSet = true; m_s3DestinationExportFileFormatOptions.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Format Options for S3 Destination type.</p> <p>Here is an example of how you
     * could specify the <code>s3DestinationExportFileFormatOptions</code> </p> <p>
     * <code> { "header": "true", "delimiter": ",", "compression": "gzip" }</code> </p>
     */
    inline DataViewDestinationTypeParams& AddS3DestinationExportFileFormatOptions(const char* key, Aws::String&& value) { m_s3DestinationExportFileFormatOptionsHasBeenSet = true; m_s3DestinationExportFileFormatOptions.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Format Options for S3 Destination type.</p> <p>Here is an example of how you
     * could specify the <code>s3DestinationExportFileFormatOptions</code> </p> <p>
     * <code> { "header": "true", "delimiter": ",", "compression": "gzip" }</code> </p>
     */
    inline DataViewDestinationTypeParams& AddS3DestinationExportFileFormatOptions(Aws::String&& key, const char* value) { m_s3DestinationExportFileFormatOptionsHasBeenSet = true; m_s3DestinationExportFileFormatOptions.emplace(std::move(key), value); return *this; }

    /**
     * <p>Format Options for S3 Destination type.</p> <p>Here is an example of how you
     * could specify the <code>s3DestinationExportFileFormatOptions</code> </p> <p>
     * <code> { "header": "true", "delimiter": ",", "compression": "gzip" }</code> </p>
     */
    inline DataViewDestinationTypeParams& AddS3DestinationExportFileFormatOptions(const char* key, const char* value) { m_s3DestinationExportFileFormatOptionsHasBeenSet = true; m_s3DestinationExportFileFormatOptions.emplace(key, value); return *this; }

  private:

    Aws::String m_destinationType;
    bool m_destinationTypeHasBeenSet = false;

    ExportFileFormat m_s3DestinationExportFileFormat;
    bool m_s3DestinationExportFileFormatHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_s3DestinationExportFileFormatOptions;
    bool m_s3DestinationExportFileFormatOptionsHasBeenSet = false;
  };

} // namespace Model
} // namespace FinSpaceData
} // namespace Aws
