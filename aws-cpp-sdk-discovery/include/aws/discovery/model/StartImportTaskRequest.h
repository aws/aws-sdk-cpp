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
#include <aws/discovery/ApplicationDiscoveryServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace ApplicationDiscoveryService
{
namespace Model
{

  /**
   */
  class AWS_APPLICATIONDISCOVERYSERVICE_API StartImportTaskRequest : public ApplicationDiscoveryServiceRequest
  {
  public:
    StartImportTaskRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartImportTask"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Optional. A unique token that you can provide to prevent the same import
     * request from occurring more than once. If you don't provide a token, a token is
     * automatically generated.</p> <p>Sending more than one
     * <code>StartImportTask</code> request with the same client request token will
     * return information about the original import task with that client request
     * token.</p>
     */
    inline const Aws::String& GetClientRequestToken() const{ return m_clientRequestToken; }

    /**
     * <p>Optional. A unique token that you can provide to prevent the same import
     * request from occurring more than once. If you don't provide a token, a token is
     * automatically generated.</p> <p>Sending more than one
     * <code>StartImportTask</code> request with the same client request token will
     * return information about the original import task with that client request
     * token.</p>
     */
    inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }

    /**
     * <p>Optional. A unique token that you can provide to prevent the same import
     * request from occurring more than once. If you don't provide a token, a token is
     * automatically generated.</p> <p>Sending more than one
     * <code>StartImportTask</code> request with the same client request token will
     * return information about the original import task with that client request
     * token.</p>
     */
    inline void SetClientRequestToken(const Aws::String& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = value; }

    /**
     * <p>Optional. A unique token that you can provide to prevent the same import
     * request from occurring more than once. If you don't provide a token, a token is
     * automatically generated.</p> <p>Sending more than one
     * <code>StartImportTask</code> request with the same client request token will
     * return information about the original import task with that client request
     * token.</p>
     */
    inline void SetClientRequestToken(Aws::String&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::move(value); }

    /**
     * <p>Optional. A unique token that you can provide to prevent the same import
     * request from occurring more than once. If you don't provide a token, a token is
     * automatically generated.</p> <p>Sending more than one
     * <code>StartImportTask</code> request with the same client request token will
     * return information about the original import task with that client request
     * token.</p>
     */
    inline void SetClientRequestToken(const char* value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken.assign(value); }

    /**
     * <p>Optional. A unique token that you can provide to prevent the same import
     * request from occurring more than once. If you don't provide a token, a token is
     * automatically generated.</p> <p>Sending more than one
     * <code>StartImportTask</code> request with the same client request token will
     * return information about the original import task with that client request
     * token.</p>
     */
    inline StartImportTaskRequest& WithClientRequestToken(const Aws::String& value) { SetClientRequestToken(value); return *this;}

    /**
     * <p>Optional. A unique token that you can provide to prevent the same import
     * request from occurring more than once. If you don't provide a token, a token is
     * automatically generated.</p> <p>Sending more than one
     * <code>StartImportTask</code> request with the same client request token will
     * return information about the original import task with that client request
     * token.</p>
     */
    inline StartImportTaskRequest& WithClientRequestToken(Aws::String&& value) { SetClientRequestToken(std::move(value)); return *this;}

    /**
     * <p>Optional. A unique token that you can provide to prevent the same import
     * request from occurring more than once. If you don't provide a token, a token is
     * automatically generated.</p> <p>Sending more than one
     * <code>StartImportTask</code> request with the same client request token will
     * return information about the original import task with that client request
     * token.</p>
     */
    inline StartImportTaskRequest& WithClientRequestToken(const char* value) { SetClientRequestToken(value); return *this;}


    /**
     * <p>A descriptive name for this request. You can use this name to filter future
     * requests related to this import task, such as identifying applications and
     * servers that were included in this import task. We recommend that you use a
     * meaningful name for each import task.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>A descriptive name for this request. You can use this name to filter future
     * requests related to this import task, such as identifying applications and
     * servers that were included in this import task. We recommend that you use a
     * meaningful name for each import task.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>A descriptive name for this request. You can use this name to filter future
     * requests related to this import task, such as identifying applications and
     * servers that were included in this import task. We recommend that you use a
     * meaningful name for each import task.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>A descriptive name for this request. You can use this name to filter future
     * requests related to this import task, such as identifying applications and
     * servers that were included in this import task. We recommend that you use a
     * meaningful name for each import task.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>A descriptive name for this request. You can use this name to filter future
     * requests related to this import task, such as identifying applications and
     * servers that were included in this import task. We recommend that you use a
     * meaningful name for each import task.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>A descriptive name for this request. You can use this name to filter future
     * requests related to this import task, such as identifying applications and
     * servers that were included in this import task. We recommend that you use a
     * meaningful name for each import task.</p>
     */
    inline StartImportTaskRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>A descriptive name for this request. You can use this name to filter future
     * requests related to this import task, such as identifying applications and
     * servers that were included in this import task. We recommend that you use a
     * meaningful name for each import task.</p>
     */
    inline StartImportTaskRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>A descriptive name for this request. You can use this name to filter future
     * requests related to this import task, such as identifying applications and
     * servers that were included in this import task. We recommend that you use a
     * meaningful name for each import task.</p>
     */
    inline StartImportTaskRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The URL for your import file that you've uploaded to Amazon S3.</p> <note>
     * <p>If you're using the AWS CLI, this URL is structured as follows:
     * <code>s3://BucketName/ImportFileName.CSV</code> </p> </note>
     */
    inline const Aws::String& GetImportUrl() const{ return m_importUrl; }

    /**
     * <p>The URL for your import file that you've uploaded to Amazon S3.</p> <note>
     * <p>If you're using the AWS CLI, this URL is structured as follows:
     * <code>s3://BucketName/ImportFileName.CSV</code> </p> </note>
     */
    inline bool ImportUrlHasBeenSet() const { return m_importUrlHasBeenSet; }

    /**
     * <p>The URL for your import file that you've uploaded to Amazon S3.</p> <note>
     * <p>If you're using the AWS CLI, this URL is structured as follows:
     * <code>s3://BucketName/ImportFileName.CSV</code> </p> </note>
     */
    inline void SetImportUrl(const Aws::String& value) { m_importUrlHasBeenSet = true; m_importUrl = value; }

    /**
     * <p>The URL for your import file that you've uploaded to Amazon S3.</p> <note>
     * <p>If you're using the AWS CLI, this URL is structured as follows:
     * <code>s3://BucketName/ImportFileName.CSV</code> </p> </note>
     */
    inline void SetImportUrl(Aws::String&& value) { m_importUrlHasBeenSet = true; m_importUrl = std::move(value); }

    /**
     * <p>The URL for your import file that you've uploaded to Amazon S3.</p> <note>
     * <p>If you're using the AWS CLI, this URL is structured as follows:
     * <code>s3://BucketName/ImportFileName.CSV</code> </p> </note>
     */
    inline void SetImportUrl(const char* value) { m_importUrlHasBeenSet = true; m_importUrl.assign(value); }

    /**
     * <p>The URL for your import file that you've uploaded to Amazon S3.</p> <note>
     * <p>If you're using the AWS CLI, this URL is structured as follows:
     * <code>s3://BucketName/ImportFileName.CSV</code> </p> </note>
     */
    inline StartImportTaskRequest& WithImportUrl(const Aws::String& value) { SetImportUrl(value); return *this;}

    /**
     * <p>The URL for your import file that you've uploaded to Amazon S3.</p> <note>
     * <p>If you're using the AWS CLI, this URL is structured as follows:
     * <code>s3://BucketName/ImportFileName.CSV</code> </p> </note>
     */
    inline StartImportTaskRequest& WithImportUrl(Aws::String&& value) { SetImportUrl(std::move(value)); return *this;}

    /**
     * <p>The URL for your import file that you've uploaded to Amazon S3.</p> <note>
     * <p>If you're using the AWS CLI, this URL is structured as follows:
     * <code>s3://BucketName/ImportFileName.CSV</code> </p> </note>
     */
    inline StartImportTaskRequest& WithImportUrl(const char* value) { SetImportUrl(value); return *this;}

  private:

    Aws::String m_clientRequestToken;
    bool m_clientRequestTokenHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_importUrl;
    bool m_importUrlHasBeenSet;
  };

} // namespace Model
} // namespace ApplicationDiscoveryService
} // namespace Aws
