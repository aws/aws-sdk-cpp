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
    AWS_FINSPACEDATA_API DataViewDestinationTypeParams() = default;
    AWS_FINSPACEDATA_API DataViewDestinationTypeParams(Aws::Utils::Json::JsonView jsonValue);
    AWS_FINSPACEDATA_API DataViewDestinationTypeParams& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FINSPACEDATA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Destination type for a Dataview.</p> <ul> <li> <p> <code>GLUE_TABLE</code> –
     * Glue table destination type.</p> </li> <li> <p> <code>S3</code> – S3 destination
     * type.</p> </li> </ul>
     */
    inline const Aws::String& GetDestinationType() const { return m_destinationType; }
    inline bool DestinationTypeHasBeenSet() const { return m_destinationTypeHasBeenSet; }
    template<typename DestinationTypeT = Aws::String>
    void SetDestinationType(DestinationTypeT&& value) { m_destinationTypeHasBeenSet = true; m_destinationType = std::forward<DestinationTypeT>(value); }
    template<typename DestinationTypeT = Aws::String>
    DataViewDestinationTypeParams& WithDestinationType(DestinationTypeT&& value) { SetDestinationType(std::forward<DestinationTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Dataview export file format.</p> <ul> <li> <p> <code>PARQUET</code> – Parquet
     * export file format.</p> </li> <li> <p> <code>DELIMITED_TEXT</code> – Delimited
     * text export file format.</p> </li> </ul>
     */
    inline ExportFileFormat GetS3DestinationExportFileFormat() const { return m_s3DestinationExportFileFormat; }
    inline bool S3DestinationExportFileFormatHasBeenSet() const { return m_s3DestinationExportFileFormatHasBeenSet; }
    inline void SetS3DestinationExportFileFormat(ExportFileFormat value) { m_s3DestinationExportFileFormatHasBeenSet = true; m_s3DestinationExportFileFormat = value; }
    inline DataViewDestinationTypeParams& WithS3DestinationExportFileFormat(ExportFileFormat value) { SetS3DestinationExportFileFormat(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Format Options for S3 Destination type.</p> <p>Here is an example of how you
     * could specify the <code>s3DestinationExportFileFormatOptions</code> </p> <p>
     * <code> { "header": "true", "delimiter": ",", "compression": "gzip" }</code> </p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetS3DestinationExportFileFormatOptions() const { return m_s3DestinationExportFileFormatOptions; }
    inline bool S3DestinationExportFileFormatOptionsHasBeenSet() const { return m_s3DestinationExportFileFormatOptionsHasBeenSet; }
    template<typename S3DestinationExportFileFormatOptionsT = Aws::Map<Aws::String, Aws::String>>
    void SetS3DestinationExportFileFormatOptions(S3DestinationExportFileFormatOptionsT&& value) { m_s3DestinationExportFileFormatOptionsHasBeenSet = true; m_s3DestinationExportFileFormatOptions = std::forward<S3DestinationExportFileFormatOptionsT>(value); }
    template<typename S3DestinationExportFileFormatOptionsT = Aws::Map<Aws::String, Aws::String>>
    DataViewDestinationTypeParams& WithS3DestinationExportFileFormatOptions(S3DestinationExportFileFormatOptionsT&& value) { SetS3DestinationExportFileFormatOptions(std::forward<S3DestinationExportFileFormatOptionsT>(value)); return *this;}
    template<typename S3DestinationExportFileFormatOptionsKeyT = Aws::String, typename S3DestinationExportFileFormatOptionsValueT = Aws::String>
    DataViewDestinationTypeParams& AddS3DestinationExportFileFormatOptions(S3DestinationExportFileFormatOptionsKeyT&& key, S3DestinationExportFileFormatOptionsValueT&& value) {
      m_s3DestinationExportFileFormatOptionsHasBeenSet = true; m_s3DestinationExportFileFormatOptions.emplace(std::forward<S3DestinationExportFileFormatOptionsKeyT>(key), std::forward<S3DestinationExportFileFormatOptionsValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::String m_destinationType;
    bool m_destinationTypeHasBeenSet = false;

    ExportFileFormat m_s3DestinationExportFileFormat{ExportFileFormat::NOT_SET};
    bool m_s3DestinationExportFileFormatHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_s3DestinationExportFileFormatOptions;
    bool m_s3DestinationExportFileFormatOptionsHasBeenSet = false;
  };

} // namespace Model
} // namespace FinSpaceData
} // namespace Aws
