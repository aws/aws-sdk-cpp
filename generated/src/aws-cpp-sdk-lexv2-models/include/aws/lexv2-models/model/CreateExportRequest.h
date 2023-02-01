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
    AWS_LEXMODELSV2_API CreateExportRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateExport"; }

    AWS_LEXMODELSV2_API Aws::String SerializePayload() const override;


    /**
     * <p>Specifies the type of resource to export, either a bot or a bot locale. You
     * can only specify one type of resource to export.</p>
     */
    inline const ExportResourceSpecification& GetResourceSpecification() const{ return m_resourceSpecification; }

    /**
     * <p>Specifies the type of resource to export, either a bot or a bot locale. You
     * can only specify one type of resource to export.</p>
     */
    inline bool ResourceSpecificationHasBeenSet() const { return m_resourceSpecificationHasBeenSet; }

    /**
     * <p>Specifies the type of resource to export, either a bot or a bot locale. You
     * can only specify one type of resource to export.</p>
     */
    inline void SetResourceSpecification(const ExportResourceSpecification& value) { m_resourceSpecificationHasBeenSet = true; m_resourceSpecification = value; }

    /**
     * <p>Specifies the type of resource to export, either a bot or a bot locale. You
     * can only specify one type of resource to export.</p>
     */
    inline void SetResourceSpecification(ExportResourceSpecification&& value) { m_resourceSpecificationHasBeenSet = true; m_resourceSpecification = std::move(value); }

    /**
     * <p>Specifies the type of resource to export, either a bot or a bot locale. You
     * can only specify one type of resource to export.</p>
     */
    inline CreateExportRequest& WithResourceSpecification(const ExportResourceSpecification& value) { SetResourceSpecification(value); return *this;}

    /**
     * <p>Specifies the type of resource to export, either a bot or a bot locale. You
     * can only specify one type of resource to export.</p>
     */
    inline CreateExportRequest& WithResourceSpecification(ExportResourceSpecification&& value) { SetResourceSpecification(std::move(value)); return *this;}


    /**
     * <p>The file format of the bot or bot locale definition files.</p>
     */
    inline const ImportExportFileFormat& GetFileFormat() const{ return m_fileFormat; }

    /**
     * <p>The file format of the bot or bot locale definition files.</p>
     */
    inline bool FileFormatHasBeenSet() const { return m_fileFormatHasBeenSet; }

    /**
     * <p>The file format of the bot or bot locale definition files.</p>
     */
    inline void SetFileFormat(const ImportExportFileFormat& value) { m_fileFormatHasBeenSet = true; m_fileFormat = value; }

    /**
     * <p>The file format of the bot or bot locale definition files.</p>
     */
    inline void SetFileFormat(ImportExportFileFormat&& value) { m_fileFormatHasBeenSet = true; m_fileFormat = std::move(value); }

    /**
     * <p>The file format of the bot or bot locale definition files.</p>
     */
    inline CreateExportRequest& WithFileFormat(const ImportExportFileFormat& value) { SetFileFormat(value); return *this;}

    /**
     * <p>The file format of the bot or bot locale definition files.</p>
     */
    inline CreateExportRequest& WithFileFormat(ImportExportFileFormat&& value) { SetFileFormat(std::move(value)); return *this;}


    /**
     * <p>An password to use to encrypt the exported archive. Using a password is
     * optional, but you should encrypt the archive to protect the data in transit
     * between Amazon Lex and your local computer.</p>
     */
    inline const Aws::String& GetFilePassword() const{ return m_filePassword; }

    /**
     * <p>An password to use to encrypt the exported archive. Using a password is
     * optional, but you should encrypt the archive to protect the data in transit
     * between Amazon Lex and your local computer.</p>
     */
    inline bool FilePasswordHasBeenSet() const { return m_filePasswordHasBeenSet; }

    /**
     * <p>An password to use to encrypt the exported archive. Using a password is
     * optional, but you should encrypt the archive to protect the data in transit
     * between Amazon Lex and your local computer.</p>
     */
    inline void SetFilePassword(const Aws::String& value) { m_filePasswordHasBeenSet = true; m_filePassword = value; }

    /**
     * <p>An password to use to encrypt the exported archive. Using a password is
     * optional, but you should encrypt the archive to protect the data in transit
     * between Amazon Lex and your local computer.</p>
     */
    inline void SetFilePassword(Aws::String&& value) { m_filePasswordHasBeenSet = true; m_filePassword = std::move(value); }

    /**
     * <p>An password to use to encrypt the exported archive. Using a password is
     * optional, but you should encrypt the archive to protect the data in transit
     * between Amazon Lex and your local computer.</p>
     */
    inline void SetFilePassword(const char* value) { m_filePasswordHasBeenSet = true; m_filePassword.assign(value); }

    /**
     * <p>An password to use to encrypt the exported archive. Using a password is
     * optional, but you should encrypt the archive to protect the data in transit
     * between Amazon Lex and your local computer.</p>
     */
    inline CreateExportRequest& WithFilePassword(const Aws::String& value) { SetFilePassword(value); return *this;}

    /**
     * <p>An password to use to encrypt the exported archive. Using a password is
     * optional, but you should encrypt the archive to protect the data in transit
     * between Amazon Lex and your local computer.</p>
     */
    inline CreateExportRequest& WithFilePassword(Aws::String&& value) { SetFilePassword(std::move(value)); return *this;}

    /**
     * <p>An password to use to encrypt the exported archive. Using a password is
     * optional, but you should encrypt the archive to protect the data in transit
     * between Amazon Lex and your local computer.</p>
     */
    inline CreateExportRequest& WithFilePassword(const char* value) { SetFilePassword(value); return *this;}

  private:

    ExportResourceSpecification m_resourceSpecification;
    bool m_resourceSpecificationHasBeenSet = false;

    ImportExportFileFormat m_fileFormat;
    bool m_fileFormatHasBeenSet = false;

    Aws::String m_filePassword;
    bool m_filePasswordHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
