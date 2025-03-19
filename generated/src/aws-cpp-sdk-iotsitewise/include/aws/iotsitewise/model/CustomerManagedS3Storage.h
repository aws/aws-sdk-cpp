/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
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
namespace IoTSiteWise
{
namespace Model
{

  /**
   * <p>Contains information about a customer managed Amazon S3 bucket.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/CustomerManagedS3Storage">AWS
   * API Reference</a></p>
   */
  class CustomerManagedS3Storage
  {
  public:
    AWS_IOTSITEWISE_API CustomerManagedS3Storage() = default;
    AWS_IOTSITEWISE_API CustomerManagedS3Storage(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTSITEWISE_API CustomerManagedS3Storage& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTSITEWISE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>
     * of the Amazon S3 object. For more information about how to find the ARN for an
     * Amazon S3 object, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/s3-arn-format.html">Amazon
     * S3 resources</a> in the <i>Amazon Simple Storage Service User Guide</i>.</p>
     */
    inline const Aws::String& GetS3ResourceArn() const { return m_s3ResourceArn; }
    inline bool S3ResourceArnHasBeenSet() const { return m_s3ResourceArnHasBeenSet; }
    template<typename S3ResourceArnT = Aws::String>
    void SetS3ResourceArn(S3ResourceArnT&& value) { m_s3ResourceArnHasBeenSet = true; m_s3ResourceArn = std::forward<S3ResourceArnT>(value); }
    template<typename S3ResourceArnT = Aws::String>
    CustomerManagedS3Storage& WithS3ResourceArn(S3ResourceArnT&& value) { SetS3ResourceArn(std::forward<S3ResourceArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>
     * of the Identity and Access Management role that allows IoT SiteWise to send data
     * to Amazon S3.</p>
     */
    inline const Aws::String& GetRoleArn() const { return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    template<typename RoleArnT = Aws::String>
    void SetRoleArn(RoleArnT&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::forward<RoleArnT>(value); }
    template<typename RoleArnT = Aws::String>
    CustomerManagedS3Storage& WithRoleArn(RoleArnT&& value) { SetRoleArn(std::forward<RoleArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_s3ResourceArn;
    bool m_s3ResourceArnHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
