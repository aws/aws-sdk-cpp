/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/TagSpecification.h>
#include <utility>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   */
  class StartDeclarativePoliciesReportRequest : public EC2Request
  {
  public:
    AWS_EC2_API StartDeclarativePoliciesReportRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartDeclarativePoliciesReport"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool GetDryRun() const{ return m_dryRun; }
    inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }
    inline StartDeclarativePoliciesReportRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the S3 bucket where the report will be saved. The bucket must be
     * in the same Region where the report generation request is made.</p>
     */
    inline const Aws::String& GetS3Bucket() const{ return m_s3Bucket; }
    inline bool S3BucketHasBeenSet() const { return m_s3BucketHasBeenSet; }
    inline void SetS3Bucket(const Aws::String& value) { m_s3BucketHasBeenSet = true; m_s3Bucket = value; }
    inline void SetS3Bucket(Aws::String&& value) { m_s3BucketHasBeenSet = true; m_s3Bucket = std::move(value); }
    inline void SetS3Bucket(const char* value) { m_s3BucketHasBeenSet = true; m_s3Bucket.assign(value); }
    inline StartDeclarativePoliciesReportRequest& WithS3Bucket(const Aws::String& value) { SetS3Bucket(value); return *this;}
    inline StartDeclarativePoliciesReportRequest& WithS3Bucket(Aws::String&& value) { SetS3Bucket(std::move(value)); return *this;}
    inline StartDeclarativePoliciesReportRequest& WithS3Bucket(const char* value) { SetS3Bucket(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The prefix for your S3 object.</p>
     */
    inline const Aws::String& GetS3Prefix() const{ return m_s3Prefix; }
    inline bool S3PrefixHasBeenSet() const { return m_s3PrefixHasBeenSet; }
    inline void SetS3Prefix(const Aws::String& value) { m_s3PrefixHasBeenSet = true; m_s3Prefix = value; }
    inline void SetS3Prefix(Aws::String&& value) { m_s3PrefixHasBeenSet = true; m_s3Prefix = std::move(value); }
    inline void SetS3Prefix(const char* value) { m_s3PrefixHasBeenSet = true; m_s3Prefix.assign(value); }
    inline StartDeclarativePoliciesReportRequest& WithS3Prefix(const Aws::String& value) { SetS3Prefix(value); return *this;}
    inline StartDeclarativePoliciesReportRequest& WithS3Prefix(Aws::String&& value) { SetS3Prefix(std::move(value)); return *this;}
    inline StartDeclarativePoliciesReportRequest& WithS3Prefix(const char* value) { SetS3Prefix(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The root ID, organizational unit ID, or account ID.</p> <p>Format:</p> <ul>
     * <li> <p>For root: <code>r-ab12</code> </p> </li> <li> <p>For OU:
     * <code>ou-ab12-cdef1234</code> </p> </li> <li> <p>For account:
     * <code>123456789012</code> </p> </li> </ul>
     */
    inline const Aws::String& GetTargetId() const{ return m_targetId; }
    inline bool TargetIdHasBeenSet() const { return m_targetIdHasBeenSet; }
    inline void SetTargetId(const Aws::String& value) { m_targetIdHasBeenSet = true; m_targetId = value; }
    inline void SetTargetId(Aws::String&& value) { m_targetIdHasBeenSet = true; m_targetId = std::move(value); }
    inline void SetTargetId(const char* value) { m_targetIdHasBeenSet = true; m_targetId.assign(value); }
    inline StartDeclarativePoliciesReportRequest& WithTargetId(const Aws::String& value) { SetTargetId(value); return *this;}
    inline StartDeclarativePoliciesReportRequest& WithTargetId(Aws::String&& value) { SetTargetId(std::move(value)); return *this;}
    inline StartDeclarativePoliciesReportRequest& WithTargetId(const char* value) { SetTargetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags to apply.</p>
     */
    inline const Aws::Vector<TagSpecification>& GetTagSpecifications() const{ return m_tagSpecifications; }
    inline bool TagSpecificationsHasBeenSet() const { return m_tagSpecificationsHasBeenSet; }
    inline void SetTagSpecifications(const Aws::Vector<TagSpecification>& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications = value; }
    inline void SetTagSpecifications(Aws::Vector<TagSpecification>&& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications = std::move(value); }
    inline StartDeclarativePoliciesReportRequest& WithTagSpecifications(const Aws::Vector<TagSpecification>& value) { SetTagSpecifications(value); return *this;}
    inline StartDeclarativePoliciesReportRequest& WithTagSpecifications(Aws::Vector<TagSpecification>&& value) { SetTagSpecifications(std::move(value)); return *this;}
    inline StartDeclarativePoliciesReportRequest& AddTagSpecifications(const TagSpecification& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications.push_back(value); return *this; }
    inline StartDeclarativePoliciesReportRequest& AddTagSpecifications(TagSpecification&& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications.push_back(std::move(value)); return *this; }
    ///@}
  private:

    bool m_dryRun;
    bool m_dryRunHasBeenSet = false;

    Aws::String m_s3Bucket;
    bool m_s3BucketHasBeenSet = false;

    Aws::String m_s3Prefix;
    bool m_s3PrefixHasBeenSet = false;

    Aws::String m_targetId;
    bool m_targetIdHasBeenSet = false;

    Aws::Vector<TagSpecification> m_tagSpecifications;
    bool m_tagSpecificationsHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
