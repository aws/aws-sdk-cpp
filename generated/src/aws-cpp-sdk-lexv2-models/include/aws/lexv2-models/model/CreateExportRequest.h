/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/lexv2-models/LexModelsV2Request.h>
#include <aws/lexv2-models/model/ExportResourceSpecification.h>
#include <aws/lexv2-models/model/ImportExportFileFormat.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace LexModelsV2
{
namespace Model
{

  /**
   */
  class CreateExportRequest : public LexModelsV2Request
  {
  public:
    AWS_LEXMODELSV2_API CreateExportRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateExport"; }

    AWS_LEXMODELSV2_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>Specifies the type of resource to export, either a bot or a bot locale. You
     * can only specify one type of resource to export.</p>
     */
    inline const ExportResourceSpecification& GetResourceSpecification() const { return m_resourceSpecification; }
    inline bool ResourceSpecificationHasBeenSet() const { return m_resourceSpecificationHasBeenSet; }
    template<typename ResourceSpecificationT = ExportResourceSpecification>
    void SetResourceSpecification(ResourceSpecificationT&& value) { m_resourceSpecificationHasBeenSet = true; m_resourceSpecification = std::forward<ResourceSpecificationT>(value); }
    template<typename ResourceSpecificationT = ExportResourceSpecification>
    CreateExportRequest& WithResourceSpecification(ResourceSpecificationT&& value) { SetResourceSpecification(std::forward<ResourceSpecificationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The file format of the bot or bot locale definition files.</p>
     */
    inline ImportExportFileFormat GetFileFormat() const { return m_fileFormat; }
    inline bool FileFormatHasBeenSet() const { return m_fileFormatHasBeenSet; }
    inline void SetFileFormat(ImportExportFileFormat value) { m_fileFormatHasBeenSet = true; m_fileFormat = value; }
    inline CreateExportRequest& WithFileFormat(ImportExportFileFormat value) { SetFileFormat(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An password to use to encrypt the exported archive. Using a password is
     * optional, but you should encrypt the archive to protect the data in transit
     * between Amazon Lex and your local computer.</p>
     */
    inline const Aws::String& GetFilePassword() const { return m_filePassword; }
    inline bool FilePasswordHasBeenSet() const { return m_filePasswordHasBeenSet; }
    template<typename FilePasswordT = Aws::String>
    void SetFilePassword(FilePasswordT&& value) { m_filePasswordHasBeenSet = true; m_filePassword = std::forward<FilePasswordT>(value); }
    template<typename FilePasswordT = Aws::String>
    CreateExportRequest& WithFilePassword(FilePasswordT&& value) { SetFilePassword(std::forward<FilePasswordT>(value)); return *this;}
    ///@}
  private:

    ExportResourceSpecification m_resourceSpecification;
    bool m_resourceSpecificationHasBeenSet = false;

    ImportExportFileFormat m_fileFormat{ImportExportFileFormat::NOT_SET};
    bool m_fileFormatHasBeenSet = false;

    Aws::String m_filePassword;
    bool m_filePasswordHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
