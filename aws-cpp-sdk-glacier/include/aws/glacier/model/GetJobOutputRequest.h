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
#include <aws/glacier/Glacier_EXPORTS.h>
#include <aws/glacier/GlacierRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Glacier
{
namespace Model
{

  /**
   * <p>Provides options for downloading output of an Amazon S3 Glacier
   * job.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glacier-2012-06-01/GetJobOutputInput">AWS
   * API Reference</a></p>
   */
  class AWS_GLACIER_API GetJobOutputRequest : public GlacierRequest
  {
  public:
    GetJobOutputRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetJobOutput"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The <code>AccountId</code> value is the AWS account ID of the account that
     * owns the vault. You can either specify an AWS account ID or optionally a single
     * '<code>-</code>' (hyphen), in which case Amazon S3 Glacier uses the AWS account
     * ID associated with the credentials used to sign the request. If you use an
     * account ID, do not include any hyphens ('-') in the ID.</p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }

    /**
     * <p>The <code>AccountId</code> value is the AWS account ID of the account that
     * owns the vault. You can either specify an AWS account ID or optionally a single
     * '<code>-</code>' (hyphen), in which case Amazon S3 Glacier uses the AWS account
     * ID associated with the credentials used to sign the request. If you use an
     * account ID, do not include any hyphens ('-') in the ID.</p>
     */
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }

    /**
     * <p>The <code>AccountId</code> value is the AWS account ID of the account that
     * owns the vault. You can either specify an AWS account ID or optionally a single
     * '<code>-</code>' (hyphen), in which case Amazon S3 Glacier uses the AWS account
     * ID associated with the credentials used to sign the request. If you use an
     * account ID, do not include any hyphens ('-') in the ID.</p>
     */
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }

    /**
     * <p>The <code>AccountId</code> value is the AWS account ID of the account that
     * owns the vault. You can either specify an AWS account ID or optionally a single
     * '<code>-</code>' (hyphen), in which case Amazon S3 Glacier uses the AWS account
     * ID associated with the credentials used to sign the request. If you use an
     * account ID, do not include any hyphens ('-') in the ID.</p>
     */
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }

    /**
     * <p>The <code>AccountId</code> value is the AWS account ID of the account that
     * owns the vault. You can either specify an AWS account ID or optionally a single
     * '<code>-</code>' (hyphen), in which case Amazon S3 Glacier uses the AWS account
     * ID associated with the credentials used to sign the request. If you use an
     * account ID, do not include any hyphens ('-') in the ID.</p>
     */
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }

    /**
     * <p>The <code>AccountId</code> value is the AWS account ID of the account that
     * owns the vault. You can either specify an AWS account ID or optionally a single
     * '<code>-</code>' (hyphen), in which case Amazon S3 Glacier uses the AWS account
     * ID associated with the credentials used to sign the request. If you use an
     * account ID, do not include any hyphens ('-') in the ID.</p>
     */
    inline GetJobOutputRequest& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}

    /**
     * <p>The <code>AccountId</code> value is the AWS account ID of the account that
     * owns the vault. You can either specify an AWS account ID or optionally a single
     * '<code>-</code>' (hyphen), in which case Amazon S3 Glacier uses the AWS account
     * ID associated with the credentials used to sign the request. If you use an
     * account ID, do not include any hyphens ('-') in the ID.</p>
     */
    inline GetJobOutputRequest& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}

    /**
     * <p>The <code>AccountId</code> value is the AWS account ID of the account that
     * owns the vault. You can either specify an AWS account ID or optionally a single
     * '<code>-</code>' (hyphen), in which case Amazon S3 Glacier uses the AWS account
     * ID associated with the credentials used to sign the request. If you use an
     * account ID, do not include any hyphens ('-') in the ID.</p>
     */
    inline GetJobOutputRequest& WithAccountId(const char* value) { SetAccountId(value); return *this;}


    /**
     * <p>The name of the vault.</p>
     */
    inline const Aws::String& GetVaultName() const{ return m_vaultName; }

    /**
     * <p>The name of the vault.</p>
     */
    inline bool VaultNameHasBeenSet() const { return m_vaultNameHasBeenSet; }

    /**
     * <p>The name of the vault.</p>
     */
    inline void SetVaultName(const Aws::String& value) { m_vaultNameHasBeenSet = true; m_vaultName = value; }

    /**
     * <p>The name of the vault.</p>
     */
    inline void SetVaultName(Aws::String&& value) { m_vaultNameHasBeenSet = true; m_vaultName = std::move(value); }

    /**
     * <p>The name of the vault.</p>
     */
    inline void SetVaultName(const char* value) { m_vaultNameHasBeenSet = true; m_vaultName.assign(value); }

    /**
     * <p>The name of the vault.</p>
     */
    inline GetJobOutputRequest& WithVaultName(const Aws::String& value) { SetVaultName(value); return *this;}

    /**
     * <p>The name of the vault.</p>
     */
    inline GetJobOutputRequest& WithVaultName(Aws::String&& value) { SetVaultName(std::move(value)); return *this;}

    /**
     * <p>The name of the vault.</p>
     */
    inline GetJobOutputRequest& WithVaultName(const char* value) { SetVaultName(value); return *this;}


    /**
     * <p>The job ID whose data is downloaded.</p>
     */
    inline const Aws::String& GetJobId() const{ return m_jobId; }

    /**
     * <p>The job ID whose data is downloaded.</p>
     */
    inline bool JobIdHasBeenSet() const { return m_jobIdHasBeenSet; }

    /**
     * <p>The job ID whose data is downloaded.</p>
     */
    inline void SetJobId(const Aws::String& value) { m_jobIdHasBeenSet = true; m_jobId = value; }

    /**
     * <p>The job ID whose data is downloaded.</p>
     */
    inline void SetJobId(Aws::String&& value) { m_jobIdHasBeenSet = true; m_jobId = std::move(value); }

    /**
     * <p>The job ID whose data is downloaded.</p>
     */
    inline void SetJobId(const char* value) { m_jobIdHasBeenSet = true; m_jobId.assign(value); }

    /**
     * <p>The job ID whose data is downloaded.</p>
     */
    inline GetJobOutputRequest& WithJobId(const Aws::String& value) { SetJobId(value); return *this;}

    /**
     * <p>The job ID whose data is downloaded.</p>
     */
    inline GetJobOutputRequest& WithJobId(Aws::String&& value) { SetJobId(std::move(value)); return *this;}

    /**
     * <p>The job ID whose data is downloaded.</p>
     */
    inline GetJobOutputRequest& WithJobId(const char* value) { SetJobId(value); return *this;}


    /**
     * <p>The range of bytes to retrieve from the output. For example, if you want to
     * download the first 1,048,576 bytes, specify the range as
     * <code>bytes=0-1048575</code>. By default, this operation downloads the entire
     * output.</p> <p>If the job output is large, then you can use a range to retrieve
     * a portion of the output. This allows you to download the entire output in
     * smaller chunks of bytes. For example, suppose you have 1 GB of job output you
     * want to download and you decide to download 128 MB chunks of data at a time,
     * which is a total of eight Get Job Output requests. You use the following process
     * to download the job output:</p> <ol> <li> <p>Download a 128 MB chunk of output
     * by specifying the appropriate byte range. Verify that all 128 MB of data was
     * received.</p> </li> <li> <p>Along with the data, the response includes a SHA256
     * tree hash of the payload. You compute the checksum of the payload on the client
     * and compare it with the checksum you received in the response to ensure you
     * received all the expected data.</p> </li> <li> <p>Repeat steps 1 and 2 for all
     * the eight 128 MB chunks of output data, each time specifying the appropriate
     * byte range.</p> </li> <li> <p>After downloading all the parts of the job output,
     * you have a list of eight checksum values. Compute the tree hash of these values
     * to find the checksum of the entire output. Using the <a>DescribeJob</a> API,
     * obtain job information of the job that provided you the output. The response
     * includes the checksum of the entire archive stored in Amazon S3 Glacier. You
     * compare this value with the checksum you computed to ensure you have downloaded
     * the entire archive content with no errors.</p> <p/> </li> </ol>
     */
    inline const Aws::String& GetRange() const{ return m_range; }

    /**
     * <p>The range of bytes to retrieve from the output. For example, if you want to
     * download the first 1,048,576 bytes, specify the range as
     * <code>bytes=0-1048575</code>. By default, this operation downloads the entire
     * output.</p> <p>If the job output is large, then you can use a range to retrieve
     * a portion of the output. This allows you to download the entire output in
     * smaller chunks of bytes. For example, suppose you have 1 GB of job output you
     * want to download and you decide to download 128 MB chunks of data at a time,
     * which is a total of eight Get Job Output requests. You use the following process
     * to download the job output:</p> <ol> <li> <p>Download a 128 MB chunk of output
     * by specifying the appropriate byte range. Verify that all 128 MB of data was
     * received.</p> </li> <li> <p>Along with the data, the response includes a SHA256
     * tree hash of the payload. You compute the checksum of the payload on the client
     * and compare it with the checksum you received in the response to ensure you
     * received all the expected data.</p> </li> <li> <p>Repeat steps 1 and 2 for all
     * the eight 128 MB chunks of output data, each time specifying the appropriate
     * byte range.</p> </li> <li> <p>After downloading all the parts of the job output,
     * you have a list of eight checksum values. Compute the tree hash of these values
     * to find the checksum of the entire output. Using the <a>DescribeJob</a> API,
     * obtain job information of the job that provided you the output. The response
     * includes the checksum of the entire archive stored in Amazon S3 Glacier. You
     * compare this value with the checksum you computed to ensure you have downloaded
     * the entire archive content with no errors.</p> <p/> </li> </ol>
     */
    inline bool RangeHasBeenSet() const { return m_rangeHasBeenSet; }

    /**
     * <p>The range of bytes to retrieve from the output. For example, if you want to
     * download the first 1,048,576 bytes, specify the range as
     * <code>bytes=0-1048575</code>. By default, this operation downloads the entire
     * output.</p> <p>If the job output is large, then you can use a range to retrieve
     * a portion of the output. This allows you to download the entire output in
     * smaller chunks of bytes. For example, suppose you have 1 GB of job output you
     * want to download and you decide to download 128 MB chunks of data at a time,
     * which is a total of eight Get Job Output requests. You use the following process
     * to download the job output:</p> <ol> <li> <p>Download a 128 MB chunk of output
     * by specifying the appropriate byte range. Verify that all 128 MB of data was
     * received.</p> </li> <li> <p>Along with the data, the response includes a SHA256
     * tree hash of the payload. You compute the checksum of the payload on the client
     * and compare it with the checksum you received in the response to ensure you
     * received all the expected data.</p> </li> <li> <p>Repeat steps 1 and 2 for all
     * the eight 128 MB chunks of output data, each time specifying the appropriate
     * byte range.</p> </li> <li> <p>After downloading all the parts of the job output,
     * you have a list of eight checksum values. Compute the tree hash of these values
     * to find the checksum of the entire output. Using the <a>DescribeJob</a> API,
     * obtain job information of the job that provided you the output. The response
     * includes the checksum of the entire archive stored in Amazon S3 Glacier. You
     * compare this value with the checksum you computed to ensure you have downloaded
     * the entire archive content with no errors.</p> <p/> </li> </ol>
     */
    inline void SetRange(const Aws::String& value) { m_rangeHasBeenSet = true; m_range = value; }

    /**
     * <p>The range of bytes to retrieve from the output. For example, if you want to
     * download the first 1,048,576 bytes, specify the range as
     * <code>bytes=0-1048575</code>. By default, this operation downloads the entire
     * output.</p> <p>If the job output is large, then you can use a range to retrieve
     * a portion of the output. This allows you to download the entire output in
     * smaller chunks of bytes. For example, suppose you have 1 GB of job output you
     * want to download and you decide to download 128 MB chunks of data at a time,
     * which is a total of eight Get Job Output requests. You use the following process
     * to download the job output:</p> <ol> <li> <p>Download a 128 MB chunk of output
     * by specifying the appropriate byte range. Verify that all 128 MB of data was
     * received.</p> </li> <li> <p>Along with the data, the response includes a SHA256
     * tree hash of the payload. You compute the checksum of the payload on the client
     * and compare it with the checksum you received in the response to ensure you
     * received all the expected data.</p> </li> <li> <p>Repeat steps 1 and 2 for all
     * the eight 128 MB chunks of output data, each time specifying the appropriate
     * byte range.</p> </li> <li> <p>After downloading all the parts of the job output,
     * you have a list of eight checksum values. Compute the tree hash of these values
     * to find the checksum of the entire output. Using the <a>DescribeJob</a> API,
     * obtain job information of the job that provided you the output. The response
     * includes the checksum of the entire archive stored in Amazon S3 Glacier. You
     * compare this value with the checksum you computed to ensure you have downloaded
     * the entire archive content with no errors.</p> <p/> </li> </ol>
     */
    inline void SetRange(Aws::String&& value) { m_rangeHasBeenSet = true; m_range = std::move(value); }

    /**
     * <p>The range of bytes to retrieve from the output. For example, if you want to
     * download the first 1,048,576 bytes, specify the range as
     * <code>bytes=0-1048575</code>. By default, this operation downloads the entire
     * output.</p> <p>If the job output is large, then you can use a range to retrieve
     * a portion of the output. This allows you to download the entire output in
     * smaller chunks of bytes. For example, suppose you have 1 GB of job output you
     * want to download and you decide to download 128 MB chunks of data at a time,
     * which is a total of eight Get Job Output requests. You use the following process
     * to download the job output:</p> <ol> <li> <p>Download a 128 MB chunk of output
     * by specifying the appropriate byte range. Verify that all 128 MB of data was
     * received.</p> </li> <li> <p>Along with the data, the response includes a SHA256
     * tree hash of the payload. You compute the checksum of the payload on the client
     * and compare it with the checksum you received in the response to ensure you
     * received all the expected data.</p> </li> <li> <p>Repeat steps 1 and 2 for all
     * the eight 128 MB chunks of output data, each time specifying the appropriate
     * byte range.</p> </li> <li> <p>After downloading all the parts of the job output,
     * you have a list of eight checksum values. Compute the tree hash of these values
     * to find the checksum of the entire output. Using the <a>DescribeJob</a> API,
     * obtain job information of the job that provided you the output. The response
     * includes the checksum of the entire archive stored in Amazon S3 Glacier. You
     * compare this value with the checksum you computed to ensure you have downloaded
     * the entire archive content with no errors.</p> <p/> </li> </ol>
     */
    inline void SetRange(const char* value) { m_rangeHasBeenSet = true; m_range.assign(value); }

    /**
     * <p>The range of bytes to retrieve from the output. For example, if you want to
     * download the first 1,048,576 bytes, specify the range as
     * <code>bytes=0-1048575</code>. By default, this operation downloads the entire
     * output.</p> <p>If the job output is large, then you can use a range to retrieve
     * a portion of the output. This allows you to download the entire output in
     * smaller chunks of bytes. For example, suppose you have 1 GB of job output you
     * want to download and you decide to download 128 MB chunks of data at a time,
     * which is a total of eight Get Job Output requests. You use the following process
     * to download the job output:</p> <ol> <li> <p>Download a 128 MB chunk of output
     * by specifying the appropriate byte range. Verify that all 128 MB of data was
     * received.</p> </li> <li> <p>Along with the data, the response includes a SHA256
     * tree hash of the payload. You compute the checksum of the payload on the client
     * and compare it with the checksum you received in the response to ensure you
     * received all the expected data.</p> </li> <li> <p>Repeat steps 1 and 2 for all
     * the eight 128 MB chunks of output data, each time specifying the appropriate
     * byte range.</p> </li> <li> <p>After downloading all the parts of the job output,
     * you have a list of eight checksum values. Compute the tree hash of these values
     * to find the checksum of the entire output. Using the <a>DescribeJob</a> API,
     * obtain job information of the job that provided you the output. The response
     * includes the checksum of the entire archive stored in Amazon S3 Glacier. You
     * compare this value with the checksum you computed to ensure you have downloaded
     * the entire archive content with no errors.</p> <p/> </li> </ol>
     */
    inline GetJobOutputRequest& WithRange(const Aws::String& value) { SetRange(value); return *this;}

    /**
     * <p>The range of bytes to retrieve from the output. For example, if you want to
     * download the first 1,048,576 bytes, specify the range as
     * <code>bytes=0-1048575</code>. By default, this operation downloads the entire
     * output.</p> <p>If the job output is large, then you can use a range to retrieve
     * a portion of the output. This allows you to download the entire output in
     * smaller chunks of bytes. For example, suppose you have 1 GB of job output you
     * want to download and you decide to download 128 MB chunks of data at a time,
     * which is a total of eight Get Job Output requests. You use the following process
     * to download the job output:</p> <ol> <li> <p>Download a 128 MB chunk of output
     * by specifying the appropriate byte range. Verify that all 128 MB of data was
     * received.</p> </li> <li> <p>Along with the data, the response includes a SHA256
     * tree hash of the payload. You compute the checksum of the payload on the client
     * and compare it with the checksum you received in the response to ensure you
     * received all the expected data.</p> </li> <li> <p>Repeat steps 1 and 2 for all
     * the eight 128 MB chunks of output data, each time specifying the appropriate
     * byte range.</p> </li> <li> <p>After downloading all the parts of the job output,
     * you have a list of eight checksum values. Compute the tree hash of these values
     * to find the checksum of the entire output. Using the <a>DescribeJob</a> API,
     * obtain job information of the job that provided you the output. The response
     * includes the checksum of the entire archive stored in Amazon S3 Glacier. You
     * compare this value with the checksum you computed to ensure you have downloaded
     * the entire archive content with no errors.</p> <p/> </li> </ol>
     */
    inline GetJobOutputRequest& WithRange(Aws::String&& value) { SetRange(std::move(value)); return *this;}

    /**
     * <p>The range of bytes to retrieve from the output. For example, if you want to
     * download the first 1,048,576 bytes, specify the range as
     * <code>bytes=0-1048575</code>. By default, this operation downloads the entire
     * output.</p> <p>If the job output is large, then you can use a range to retrieve
     * a portion of the output. This allows you to download the entire output in
     * smaller chunks of bytes. For example, suppose you have 1 GB of job output you
     * want to download and you decide to download 128 MB chunks of data at a time,
     * which is a total of eight Get Job Output requests. You use the following process
     * to download the job output:</p> <ol> <li> <p>Download a 128 MB chunk of output
     * by specifying the appropriate byte range. Verify that all 128 MB of data was
     * received.</p> </li> <li> <p>Along with the data, the response includes a SHA256
     * tree hash of the payload. You compute the checksum of the payload on the client
     * and compare it with the checksum you received in the response to ensure you
     * received all the expected data.</p> </li> <li> <p>Repeat steps 1 and 2 for all
     * the eight 128 MB chunks of output data, each time specifying the appropriate
     * byte range.</p> </li> <li> <p>After downloading all the parts of the job output,
     * you have a list of eight checksum values. Compute the tree hash of these values
     * to find the checksum of the entire output. Using the <a>DescribeJob</a> API,
     * obtain job information of the job that provided you the output. The response
     * includes the checksum of the entire archive stored in Amazon S3 Glacier. You
     * compare this value with the checksum you computed to ensure you have downloaded
     * the entire archive content with no errors.</p> <p/> </li> </ol>
     */
    inline GetJobOutputRequest& WithRange(const char* value) { SetRange(value); return *this;}

  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet;

    Aws::String m_vaultName;
    bool m_vaultNameHasBeenSet;

    Aws::String m_jobId;
    bool m_jobIdHasBeenSet;

    Aws::String m_range;
    bool m_rangeHasBeenSet;
  };

} // namespace Model
} // namespace Glacier
} // namespace Aws
