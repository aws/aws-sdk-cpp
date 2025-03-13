/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class GetJobOutputRequest : public GlacierRequest
  {
  public:
    AWS_GLACIER_API GetJobOutputRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetJobOutput"; }

    AWS_GLACIER_API Aws::String SerializePayload() const override;

    AWS_GLACIER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The <code>AccountId</code> value is the AWS account ID of the account that
     * owns the vault. You can either specify an AWS account ID or optionally a single
     * '<code>-</code>' (hyphen), in which case Amazon S3 Glacier uses the AWS account
     * ID associated with the credentials used to sign the request. If you use an
     * account ID, do not include any hyphens ('-') in the ID.</p>
     */
    inline const Aws::String& GetAccountId() const { return m_accountId; }
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
    template<typename AccountIdT = Aws::String>
    void SetAccountId(AccountIdT&& value) { m_accountIdHasBeenSet = true; m_accountId = std::forward<AccountIdT>(value); }
    template<typename AccountIdT = Aws::String>
    GetJobOutputRequest& WithAccountId(AccountIdT&& value) { SetAccountId(std::forward<AccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the vault.</p>
     */
    inline const Aws::String& GetVaultName() const { return m_vaultName; }
    inline bool VaultNameHasBeenSet() const { return m_vaultNameHasBeenSet; }
    template<typename VaultNameT = Aws::String>
    void SetVaultName(VaultNameT&& value) { m_vaultNameHasBeenSet = true; m_vaultName = std::forward<VaultNameT>(value); }
    template<typename VaultNameT = Aws::String>
    GetJobOutputRequest& WithVaultName(VaultNameT&& value) { SetVaultName(std::forward<VaultNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The job ID whose data is downloaded.</p>
     */
    inline const Aws::String& GetJobId() const { return m_jobId; }
    inline bool JobIdHasBeenSet() const { return m_jobIdHasBeenSet; }
    template<typename JobIdT = Aws::String>
    void SetJobId(JobIdT&& value) { m_jobIdHasBeenSet = true; m_jobId = std::forward<JobIdT>(value); }
    template<typename JobIdT = Aws::String>
    GetJobOutputRequest& WithJobId(JobIdT&& value) { SetJobId(std::forward<JobIdT>(value)); return *this;}
    ///@}

    ///@{
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
    inline const Aws::String& GetRange() const { return m_range; }
    inline bool RangeHasBeenSet() const { return m_rangeHasBeenSet; }
    template<typename RangeT = Aws::String>
    void SetRange(RangeT&& value) { m_rangeHasBeenSet = true; m_range = std::forward<RangeT>(value); }
    template<typename RangeT = Aws::String>
    GetJobOutputRequest& WithRange(RangeT&& value) { SetRange(std::forward<RangeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    Aws::String m_vaultName;
    bool m_vaultNameHasBeenSet = false;

    Aws::String m_jobId;
    bool m_jobIdHasBeenSet = false;

    Aws::String m_range;
    bool m_rangeHasBeenSet = false;
  };

} // namespace Model
} // namespace Glacier
} // namespace Aws
