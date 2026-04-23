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
#include <aws/discovery/ApplicationDiscoveryService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/discovery/model/ImportStatus.h>
#include <aws/core/utils/DateTime.h>
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
namespace ApplicationDiscoveryService
{
namespace Model
{

  /**
   * <p>An array of information related to the import task request that includes
   * status information, times, IDs, the Amazon S3 Object URL for the import file,
   * and more.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/discovery-2015-11-01/ImportTask">AWS
   * API Reference</a></p>
   */
  class AWS_APPLICATIONDISCOVERYSERVICE_API ImportTask
  {
  public:
    ImportTask();
    ImportTask(Aws::Utils::Json::JsonView jsonValue);
    ImportTask& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The unique ID for a specific import task. These IDs aren't globally unique,
     * but they are unique within an AWS account.</p>
     */
    inline const Aws::String& GetImportTaskId() const{ return m_importTaskId; }

    /**
     * <p>The unique ID for a specific import task. These IDs aren't globally unique,
     * but they are unique within an AWS account.</p>
     */
    inline bool ImportTaskIdHasBeenSet() const { return m_importTaskIdHasBeenSet; }

    /**
     * <p>The unique ID for a specific import task. These IDs aren't globally unique,
     * but they are unique within an AWS account.</p>
     */
    inline void SetImportTaskId(const Aws::String& value) { m_importTaskIdHasBeenSet = true; m_importTaskId = value; }

    /**
     * <p>The unique ID for a specific import task. These IDs aren't globally unique,
     * but they are unique within an AWS account.</p>
     */
    inline void SetImportTaskId(Aws::String&& value) { m_importTaskIdHasBeenSet = true; m_importTaskId = std::move(value); }

    /**
     * <p>The unique ID for a specific import task. These IDs aren't globally unique,
     * but they are unique within an AWS account.</p>
     */
    inline void SetImportTaskId(const char* value) { m_importTaskIdHasBeenSet = true; m_importTaskId.assign(value); }

    /**
     * <p>The unique ID for a specific import task. These IDs aren't globally unique,
     * but they are unique within an AWS account.</p>
     */
    inline ImportTask& WithImportTaskId(const Aws::String& value) { SetImportTaskId(value); return *this;}

    /**
     * <p>The unique ID for a specific import task. These IDs aren't globally unique,
     * but they are unique within an AWS account.</p>
     */
    inline ImportTask& WithImportTaskId(Aws::String&& value) { SetImportTaskId(std::move(value)); return *this;}

    /**
     * <p>The unique ID for a specific import task. These IDs aren't globally unique,
     * but they are unique within an AWS account.</p>
     */
    inline ImportTask& WithImportTaskId(const char* value) { SetImportTaskId(value); return *this;}


    /**
     * <p>A unique token used to prevent the same import request from occurring more
     * than once. If you didn't provide a token, a token was automatically generated
     * when the import task request was sent.</p>
     */
    inline const Aws::String& GetClientRequestToken() const{ return m_clientRequestToken; }

    /**
     * <p>A unique token used to prevent the same import request from occurring more
     * than once. If you didn't provide a token, a token was automatically generated
     * when the import task request was sent.</p>
     */
    inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }

    /**
     * <p>A unique token used to prevent the same import request from occurring more
     * than once. If you didn't provide a token, a token was automatically generated
     * when the import task request was sent.</p>
     */
    inline void SetClientRequestToken(const Aws::String& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = value; }

    /**
     * <p>A unique token used to prevent the same import request from occurring more
     * than once. If you didn't provide a token, a token was automatically generated
     * when the import task request was sent.</p>
     */
    inline void SetClientRequestToken(Aws::String&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::move(value); }

    /**
     * <p>A unique token used to prevent the same import request from occurring more
     * than once. If you didn't provide a token, a token was automatically generated
     * when the import task request was sent.</p>
     */
    inline void SetClientRequestToken(const char* value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken.assign(value); }

    /**
     * <p>A unique token used to prevent the same import request from occurring more
     * than once. If you didn't provide a token, a token was automatically generated
     * when the import task request was sent.</p>
     */
    inline ImportTask& WithClientRequestToken(const Aws::String& value) { SetClientRequestToken(value); return *this;}

    /**
     * <p>A unique token used to prevent the same import request from occurring more
     * than once. If you didn't provide a token, a token was automatically generated
     * when the import task request was sent.</p>
     */
    inline ImportTask& WithClientRequestToken(Aws::String&& value) { SetClientRequestToken(std::move(value)); return *this;}

    /**
     * <p>A unique token used to prevent the same import request from occurring more
     * than once. If you didn't provide a token, a token was automatically generated
     * when the import task request was sent.</p>
     */
    inline ImportTask& WithClientRequestToken(const char* value) { SetClientRequestToken(value); return *this;}


    /**
     * <p>A descriptive name for an import task. You can use this name to filter future
     * requests related to this import task, such as identifying applications and
     * servers that were included in this import task. We recommend that you use a
     * meaningful name for each import task.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>A descriptive name for an import task. You can use this name to filter future
     * requests related to this import task, such as identifying applications and
     * servers that were included in this import task. We recommend that you use a
     * meaningful name for each import task.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>A descriptive name for an import task. You can use this name to filter future
     * requests related to this import task, such as identifying applications and
     * servers that were included in this import task. We recommend that you use a
     * meaningful name for each import task.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>A descriptive name for an import task. You can use this name to filter future
     * requests related to this import task, such as identifying applications and
     * servers that were included in this import task. We recommend that you use a
     * meaningful name for each import task.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>A descriptive name for an import task. You can use this name to filter future
     * requests related to this import task, such as identifying applications and
     * servers that were included in this import task. We recommend that you use a
     * meaningful name for each import task.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>A descriptive name for an import task. You can use this name to filter future
     * requests related to this import task, such as identifying applications and
     * servers that were included in this import task. We recommend that you use a
     * meaningful name for each import task.</p>
     */
    inline ImportTask& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>A descriptive name for an import task. You can use this name to filter future
     * requests related to this import task, such as identifying applications and
     * servers that were included in this import task. We recommend that you use a
     * meaningful name for each import task.</p>
     */
    inline ImportTask& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>A descriptive name for an import task. You can use this name to filter future
     * requests related to this import task, such as identifying applications and
     * servers that were included in this import task. We recommend that you use a
     * meaningful name for each import task.</p>
     */
    inline ImportTask& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The URL for your import file that you've uploaded to Amazon S3.</p>
     */
    inline const Aws::String& GetImportUrl() const{ return m_importUrl; }

    /**
     * <p>The URL for your import file that you've uploaded to Amazon S3.</p>
     */
    inline bool ImportUrlHasBeenSet() const { return m_importUrlHasBeenSet; }

    /**
     * <p>The URL for your import file that you've uploaded to Amazon S3.</p>
     */
    inline void SetImportUrl(const Aws::String& value) { m_importUrlHasBeenSet = true; m_importUrl = value; }

    /**
     * <p>The URL for your import file that you've uploaded to Amazon S3.</p>
     */
    inline void SetImportUrl(Aws::String&& value) { m_importUrlHasBeenSet = true; m_importUrl = std::move(value); }

    /**
     * <p>The URL for your import file that you've uploaded to Amazon S3.</p>
     */
    inline void SetImportUrl(const char* value) { m_importUrlHasBeenSet = true; m_importUrl.assign(value); }

    /**
     * <p>The URL for your import file that you've uploaded to Amazon S3.</p>
     */
    inline ImportTask& WithImportUrl(const Aws::String& value) { SetImportUrl(value); return *this;}

    /**
     * <p>The URL for your import file that you've uploaded to Amazon S3.</p>
     */
    inline ImportTask& WithImportUrl(Aws::String&& value) { SetImportUrl(std::move(value)); return *this;}

    /**
     * <p>The URL for your import file that you've uploaded to Amazon S3.</p>
     */
    inline ImportTask& WithImportUrl(const char* value) { SetImportUrl(value); return *this;}


    /**
     * <p>The status of the import task. An import can have the status of
     * <code>IMPORT_COMPLETE</code> and still have some records fail to import from the
     * overall request. More information can be found in the downloadable archive
     * defined in the <code>errorsAndFailedEntriesZip</code> field, or in the Migration
     * Hub management console.</p>
     */
    inline const ImportStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the import task. An import can have the status of
     * <code>IMPORT_COMPLETE</code> and still have some records fail to import from the
     * overall request. More information can be found in the downloadable archive
     * defined in the <code>errorsAndFailedEntriesZip</code> field, or in the Migration
     * Hub management console.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the import task. An import can have the status of
     * <code>IMPORT_COMPLETE</code> and still have some records fail to import from the
     * overall request. More information can be found in the downloadable archive
     * defined in the <code>errorsAndFailedEntriesZip</code> field, or in the Migration
     * Hub management console.</p>
     */
    inline void SetStatus(const ImportStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the import task. An import can have the status of
     * <code>IMPORT_COMPLETE</code> and still have some records fail to import from the
     * overall request. More information can be found in the downloadable archive
     * defined in the <code>errorsAndFailedEntriesZip</code> field, or in the Migration
     * Hub management console.</p>
     */
    inline void SetStatus(ImportStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the import task. An import can have the status of
     * <code>IMPORT_COMPLETE</code> and still have some records fail to import from the
     * overall request. More information can be found in the downloadable archive
     * defined in the <code>errorsAndFailedEntriesZip</code> field, or in the Migration
     * Hub management console.</p>
     */
    inline ImportTask& WithStatus(const ImportStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the import task. An import can have the status of
     * <code>IMPORT_COMPLETE</code> and still have some records fail to import from the
     * overall request. More information can be found in the downloadable archive
     * defined in the <code>errorsAndFailedEntriesZip</code> field, or in the Migration
     * Hub management console.</p>
     */
    inline ImportTask& WithStatus(ImportStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The time that the import task request was made, presented in the Unix time
     * stamp format.</p>
     */
    inline const Aws::Utils::DateTime& GetImportRequestTime() const{ return m_importRequestTime; }

    /**
     * <p>The time that the import task request was made, presented in the Unix time
     * stamp format.</p>
     */
    inline bool ImportRequestTimeHasBeenSet() const { return m_importRequestTimeHasBeenSet; }

    /**
     * <p>The time that the import task request was made, presented in the Unix time
     * stamp format.</p>
     */
    inline void SetImportRequestTime(const Aws::Utils::DateTime& value) { m_importRequestTimeHasBeenSet = true; m_importRequestTime = value; }

    /**
     * <p>The time that the import task request was made, presented in the Unix time
     * stamp format.</p>
     */
    inline void SetImportRequestTime(Aws::Utils::DateTime&& value) { m_importRequestTimeHasBeenSet = true; m_importRequestTime = std::move(value); }

    /**
     * <p>The time that the import task request was made, presented in the Unix time
     * stamp format.</p>
     */
    inline ImportTask& WithImportRequestTime(const Aws::Utils::DateTime& value) { SetImportRequestTime(value); return *this;}

    /**
     * <p>The time that the import task request was made, presented in the Unix time
     * stamp format.</p>
     */
    inline ImportTask& WithImportRequestTime(Aws::Utils::DateTime&& value) { SetImportRequestTime(std::move(value)); return *this;}


    /**
     * <p>The time that the import task request finished, presented in the Unix time
     * stamp format.</p>
     */
    inline const Aws::Utils::DateTime& GetImportCompletionTime() const{ return m_importCompletionTime; }

    /**
     * <p>The time that the import task request finished, presented in the Unix time
     * stamp format.</p>
     */
    inline bool ImportCompletionTimeHasBeenSet() const { return m_importCompletionTimeHasBeenSet; }

    /**
     * <p>The time that the import task request finished, presented in the Unix time
     * stamp format.</p>
     */
    inline void SetImportCompletionTime(const Aws::Utils::DateTime& value) { m_importCompletionTimeHasBeenSet = true; m_importCompletionTime = value; }

    /**
     * <p>The time that the import task request finished, presented in the Unix time
     * stamp format.</p>
     */
    inline void SetImportCompletionTime(Aws::Utils::DateTime&& value) { m_importCompletionTimeHasBeenSet = true; m_importCompletionTime = std::move(value); }

    /**
     * <p>The time that the import task request finished, presented in the Unix time
     * stamp format.</p>
     */
    inline ImportTask& WithImportCompletionTime(const Aws::Utils::DateTime& value) { SetImportCompletionTime(value); return *this;}

    /**
     * <p>The time that the import task request finished, presented in the Unix time
     * stamp format.</p>
     */
    inline ImportTask& WithImportCompletionTime(Aws::Utils::DateTime&& value) { SetImportCompletionTime(std::move(value)); return *this;}


    /**
     * <p>The time that the import task request was deleted, presented in the Unix time
     * stamp format.</p>
     */
    inline const Aws::Utils::DateTime& GetImportDeletedTime() const{ return m_importDeletedTime; }

    /**
     * <p>The time that the import task request was deleted, presented in the Unix time
     * stamp format.</p>
     */
    inline bool ImportDeletedTimeHasBeenSet() const { return m_importDeletedTimeHasBeenSet; }

    /**
     * <p>The time that the import task request was deleted, presented in the Unix time
     * stamp format.</p>
     */
    inline void SetImportDeletedTime(const Aws::Utils::DateTime& value) { m_importDeletedTimeHasBeenSet = true; m_importDeletedTime = value; }

    /**
     * <p>The time that the import task request was deleted, presented in the Unix time
     * stamp format.</p>
     */
    inline void SetImportDeletedTime(Aws::Utils::DateTime&& value) { m_importDeletedTimeHasBeenSet = true; m_importDeletedTime = std::move(value); }

    /**
     * <p>The time that the import task request was deleted, presented in the Unix time
     * stamp format.</p>
     */
    inline ImportTask& WithImportDeletedTime(const Aws::Utils::DateTime& value) { SetImportDeletedTime(value); return *this;}

    /**
     * <p>The time that the import task request was deleted, presented in the Unix time
     * stamp format.</p>
     */
    inline ImportTask& WithImportDeletedTime(Aws::Utils::DateTime&& value) { SetImportDeletedTime(std::move(value)); return *this;}


    /**
     * <p>The total number of server records in the import file that were successfully
     * imported.</p>
     */
    inline int GetServerImportSuccess() const{ return m_serverImportSuccess; }

    /**
     * <p>The total number of server records in the import file that were successfully
     * imported.</p>
     */
    inline bool ServerImportSuccessHasBeenSet() const { return m_serverImportSuccessHasBeenSet; }

    /**
     * <p>The total number of server records in the import file that were successfully
     * imported.</p>
     */
    inline void SetServerImportSuccess(int value) { m_serverImportSuccessHasBeenSet = true; m_serverImportSuccess = value; }

    /**
     * <p>The total number of server records in the import file that were successfully
     * imported.</p>
     */
    inline ImportTask& WithServerImportSuccess(int value) { SetServerImportSuccess(value); return *this;}


    /**
     * <p>The total number of server records in the import file that failed to be
     * imported.</p>
     */
    inline int GetServerImportFailure() const{ return m_serverImportFailure; }

    /**
     * <p>The total number of server records in the import file that failed to be
     * imported.</p>
     */
    inline bool ServerImportFailureHasBeenSet() const { return m_serverImportFailureHasBeenSet; }

    /**
     * <p>The total number of server records in the import file that failed to be
     * imported.</p>
     */
    inline void SetServerImportFailure(int value) { m_serverImportFailureHasBeenSet = true; m_serverImportFailure = value; }

    /**
     * <p>The total number of server records in the import file that failed to be
     * imported.</p>
     */
    inline ImportTask& WithServerImportFailure(int value) { SetServerImportFailure(value); return *this;}


    /**
     * <p>The total number of application records in the import file that were
     * successfully imported.</p>
     */
    inline int GetApplicationImportSuccess() const{ return m_applicationImportSuccess; }

    /**
     * <p>The total number of application records in the import file that were
     * successfully imported.</p>
     */
    inline bool ApplicationImportSuccessHasBeenSet() const { return m_applicationImportSuccessHasBeenSet; }

    /**
     * <p>The total number of application records in the import file that were
     * successfully imported.</p>
     */
    inline void SetApplicationImportSuccess(int value) { m_applicationImportSuccessHasBeenSet = true; m_applicationImportSuccess = value; }

    /**
     * <p>The total number of application records in the import file that were
     * successfully imported.</p>
     */
    inline ImportTask& WithApplicationImportSuccess(int value) { SetApplicationImportSuccess(value); return *this;}


    /**
     * <p>The total number of application records in the import file that failed to be
     * imported.</p>
     */
    inline int GetApplicationImportFailure() const{ return m_applicationImportFailure; }

    /**
     * <p>The total number of application records in the import file that failed to be
     * imported.</p>
     */
    inline bool ApplicationImportFailureHasBeenSet() const { return m_applicationImportFailureHasBeenSet; }

    /**
     * <p>The total number of application records in the import file that failed to be
     * imported.</p>
     */
    inline void SetApplicationImportFailure(int value) { m_applicationImportFailureHasBeenSet = true; m_applicationImportFailure = value; }

    /**
     * <p>The total number of application records in the import file that failed to be
     * imported.</p>
     */
    inline ImportTask& WithApplicationImportFailure(int value) { SetApplicationImportFailure(value); return *this;}


    /**
     * <p>A link to a compressed archive folder (in the ZIP format) that contains an
     * error log and a file of failed records. You can use these two files to quickly
     * identify records that failed, why they failed, and correct those records.
     * Afterward, you can upload the corrected file to your Amazon S3 bucket and create
     * another import task request.</p> <p>This field also includes authorization
     * information so you can confirm the authenticity of the compressed archive before
     * you download it.</p> <p>If some records failed to be imported we recommend that
     * you correct the records in the failed entries file and then imports that failed
     * entries file. This prevents you from having to correct and update the larger
     * original file and attempt importing it again.</p>
     */
    inline const Aws::String& GetErrorsAndFailedEntriesZip() const{ return m_errorsAndFailedEntriesZip; }

    /**
     * <p>A link to a compressed archive folder (in the ZIP format) that contains an
     * error log and a file of failed records. You can use these two files to quickly
     * identify records that failed, why they failed, and correct those records.
     * Afterward, you can upload the corrected file to your Amazon S3 bucket and create
     * another import task request.</p> <p>This field also includes authorization
     * information so you can confirm the authenticity of the compressed archive before
     * you download it.</p> <p>If some records failed to be imported we recommend that
     * you correct the records in the failed entries file and then imports that failed
     * entries file. This prevents you from having to correct and update the larger
     * original file and attempt importing it again.</p>
     */
    inline bool ErrorsAndFailedEntriesZipHasBeenSet() const { return m_errorsAndFailedEntriesZipHasBeenSet; }

    /**
     * <p>A link to a compressed archive folder (in the ZIP format) that contains an
     * error log and a file of failed records. You can use these two files to quickly
     * identify records that failed, why they failed, and correct those records.
     * Afterward, you can upload the corrected file to your Amazon S3 bucket and create
     * another import task request.</p> <p>This field also includes authorization
     * information so you can confirm the authenticity of the compressed archive before
     * you download it.</p> <p>If some records failed to be imported we recommend that
     * you correct the records in the failed entries file and then imports that failed
     * entries file. This prevents you from having to correct and update the larger
     * original file and attempt importing it again.</p>
     */
    inline void SetErrorsAndFailedEntriesZip(const Aws::String& value) { m_errorsAndFailedEntriesZipHasBeenSet = true; m_errorsAndFailedEntriesZip = value; }

    /**
     * <p>A link to a compressed archive folder (in the ZIP format) that contains an
     * error log and a file of failed records. You can use these two files to quickly
     * identify records that failed, why they failed, and correct those records.
     * Afterward, you can upload the corrected file to your Amazon S3 bucket and create
     * another import task request.</p> <p>This field also includes authorization
     * information so you can confirm the authenticity of the compressed archive before
     * you download it.</p> <p>If some records failed to be imported we recommend that
     * you correct the records in the failed entries file and then imports that failed
     * entries file. This prevents you from having to correct and update the larger
     * original file and attempt importing it again.</p>
     */
    inline void SetErrorsAndFailedEntriesZip(Aws::String&& value) { m_errorsAndFailedEntriesZipHasBeenSet = true; m_errorsAndFailedEntriesZip = std::move(value); }

    /**
     * <p>A link to a compressed archive folder (in the ZIP format) that contains an
     * error log and a file of failed records. You can use these two files to quickly
     * identify records that failed, why they failed, and correct those records.
     * Afterward, you can upload the corrected file to your Amazon S3 bucket and create
     * another import task request.</p> <p>This field also includes authorization
     * information so you can confirm the authenticity of the compressed archive before
     * you download it.</p> <p>If some records failed to be imported we recommend that
     * you correct the records in the failed entries file and then imports that failed
     * entries file. This prevents you from having to correct and update the larger
     * original file and attempt importing it again.</p>
     */
    inline void SetErrorsAndFailedEntriesZip(const char* value) { m_errorsAndFailedEntriesZipHasBeenSet = true; m_errorsAndFailedEntriesZip.assign(value); }

    /**
     * <p>A link to a compressed archive folder (in the ZIP format) that contains an
     * error log and a file of failed records. You can use these two files to quickly
     * identify records that failed, why they failed, and correct those records.
     * Afterward, you can upload the corrected file to your Amazon S3 bucket and create
     * another import task request.</p> <p>This field also includes authorization
     * information so you can confirm the authenticity of the compressed archive before
     * you download it.</p> <p>If some records failed to be imported we recommend that
     * you correct the records in the failed entries file and then imports that failed
     * entries file. This prevents you from having to correct and update the larger
     * original file and attempt importing it again.</p>
     */
    inline ImportTask& WithErrorsAndFailedEntriesZip(const Aws::String& value) { SetErrorsAndFailedEntriesZip(value); return *this;}

    /**
     * <p>A link to a compressed archive folder (in the ZIP format) that contains an
     * error log and a file of failed records. You can use these two files to quickly
     * identify records that failed, why they failed, and correct those records.
     * Afterward, you can upload the corrected file to your Amazon S3 bucket and create
     * another import task request.</p> <p>This field also includes authorization
     * information so you can confirm the authenticity of the compressed archive before
     * you download it.</p> <p>If some records failed to be imported we recommend that
     * you correct the records in the failed entries file and then imports that failed
     * entries file. This prevents you from having to correct and update the larger
     * original file and attempt importing it again.</p>
     */
    inline ImportTask& WithErrorsAndFailedEntriesZip(Aws::String&& value) { SetErrorsAndFailedEntriesZip(std::move(value)); return *this;}

    /**
     * <p>A link to a compressed archive folder (in the ZIP format) that contains an
     * error log and a file of failed records. You can use these two files to quickly
     * identify records that failed, why they failed, and correct those records.
     * Afterward, you can upload the corrected file to your Amazon S3 bucket and create
     * another import task request.</p> <p>This field also includes authorization
     * information so you can confirm the authenticity of the compressed archive before
     * you download it.</p> <p>If some records failed to be imported we recommend that
     * you correct the records in the failed entries file and then imports that failed
     * entries file. This prevents you from having to correct and update the larger
     * original file and attempt importing it again.</p>
     */
    inline ImportTask& WithErrorsAndFailedEntriesZip(const char* value) { SetErrorsAndFailedEntriesZip(value); return *this;}

  private:

    Aws::String m_importTaskId;
    bool m_importTaskIdHasBeenSet;

    Aws::String m_clientRequestToken;
    bool m_clientRequestTokenHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_importUrl;
    bool m_importUrlHasBeenSet;

    ImportStatus m_status;
    bool m_statusHasBeenSet;

    Aws::Utils::DateTime m_importRequestTime;
    bool m_importRequestTimeHasBeenSet;

    Aws::Utils::DateTime m_importCompletionTime;
    bool m_importCompletionTimeHasBeenSet;

    Aws::Utils::DateTime m_importDeletedTime;
    bool m_importDeletedTimeHasBeenSet;

    int m_serverImportSuccess;
    bool m_serverImportSuccessHasBeenSet;

    int m_serverImportFailure;
    bool m_serverImportFailureHasBeenSet;

    int m_applicationImportSuccess;
    bool m_applicationImportSuccessHasBeenSet;

    int m_applicationImportFailure;
    bool m_applicationImportFailureHasBeenSet;

    Aws::String m_errorsAndFailedEntriesZip;
    bool m_errorsAndFailedEntriesZipHasBeenSet;
  };

} // namespace Model
} // namespace ApplicationDiscoveryService
} // namespace Aws
