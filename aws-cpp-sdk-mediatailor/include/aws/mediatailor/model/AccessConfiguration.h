/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediatailor/MediaTailor_EXPORTS.h>
#include <aws/mediatailor/model/AccessType.h>
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
namespace MediaTailor
{
namespace Model
{

  /**
   * <p>Access configuration parameters.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/AccessConfiguration">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIATAILOR_API AccessConfiguration
  {
  public:
    AccessConfiguration();
    AccessConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AccessConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The type of authentication used to access content from
     * HttpConfiguration::BaseUrl on your source location. Accepted value:
     * S3_SIGV4.</p> <p>S3_SIGV4 - AWS Signature Version 4 authentication for Amazon S3
     * hosted virtual-style access. If your source location base URL is an Amazon S3
     * bucket, MediaTailor can use AWS Signature Version 4 (SigV4) authentication to
     * access the bucket where your source content is stored. Your MediaTailor source
     * location baseURL must follow the S3 virtual hosted-style request URL format. For
     * example, https://bucket-name.s3.Region.amazonaws.com/key-name.</p> <p>Before you
     * can use S3_SIGV4, you must meet these requirements:</p> <p>• You must allow
     * MediaTailor to access your S3 bucket by granting mediatailor.amazonaws.com
     * principal access in IAM. For information about configuring access in IAM, see
     * Access management in the IAM User Guide.</p> <p>• The mediatailor.amazonaws.com
     * service principal must have permissions to read all top level manifests
     * referenced by the VodSource packaging configurations.</p> <p>• The caller of the
     * API must have s3:GetObject IAM permissions to read all top level manifests
     * referenced by your MediaTailor VodSource packaging configurations.</p>
     */
    inline const AccessType& GetAccessType() const{ return m_accessType; }

    /**
     * <p>The type of authentication used to access content from
     * HttpConfiguration::BaseUrl on your source location. Accepted value:
     * S3_SIGV4.</p> <p>S3_SIGV4 - AWS Signature Version 4 authentication for Amazon S3
     * hosted virtual-style access. If your source location base URL is an Amazon S3
     * bucket, MediaTailor can use AWS Signature Version 4 (SigV4) authentication to
     * access the bucket where your source content is stored. Your MediaTailor source
     * location baseURL must follow the S3 virtual hosted-style request URL format. For
     * example, https://bucket-name.s3.Region.amazonaws.com/key-name.</p> <p>Before you
     * can use S3_SIGV4, you must meet these requirements:</p> <p>• You must allow
     * MediaTailor to access your S3 bucket by granting mediatailor.amazonaws.com
     * principal access in IAM. For information about configuring access in IAM, see
     * Access management in the IAM User Guide.</p> <p>• The mediatailor.amazonaws.com
     * service principal must have permissions to read all top level manifests
     * referenced by the VodSource packaging configurations.</p> <p>• The caller of the
     * API must have s3:GetObject IAM permissions to read all top level manifests
     * referenced by your MediaTailor VodSource packaging configurations.</p>
     */
    inline bool AccessTypeHasBeenSet() const { return m_accessTypeHasBeenSet; }

    /**
     * <p>The type of authentication used to access content from
     * HttpConfiguration::BaseUrl on your source location. Accepted value:
     * S3_SIGV4.</p> <p>S3_SIGV4 - AWS Signature Version 4 authentication for Amazon S3
     * hosted virtual-style access. If your source location base URL is an Amazon S3
     * bucket, MediaTailor can use AWS Signature Version 4 (SigV4) authentication to
     * access the bucket where your source content is stored. Your MediaTailor source
     * location baseURL must follow the S3 virtual hosted-style request URL format. For
     * example, https://bucket-name.s3.Region.amazonaws.com/key-name.</p> <p>Before you
     * can use S3_SIGV4, you must meet these requirements:</p> <p>• You must allow
     * MediaTailor to access your S3 bucket by granting mediatailor.amazonaws.com
     * principal access in IAM. For information about configuring access in IAM, see
     * Access management in the IAM User Guide.</p> <p>• The mediatailor.amazonaws.com
     * service principal must have permissions to read all top level manifests
     * referenced by the VodSource packaging configurations.</p> <p>• The caller of the
     * API must have s3:GetObject IAM permissions to read all top level manifests
     * referenced by your MediaTailor VodSource packaging configurations.</p>
     */
    inline void SetAccessType(const AccessType& value) { m_accessTypeHasBeenSet = true; m_accessType = value; }

    /**
     * <p>The type of authentication used to access content from
     * HttpConfiguration::BaseUrl on your source location. Accepted value:
     * S3_SIGV4.</p> <p>S3_SIGV4 - AWS Signature Version 4 authentication for Amazon S3
     * hosted virtual-style access. If your source location base URL is an Amazon S3
     * bucket, MediaTailor can use AWS Signature Version 4 (SigV4) authentication to
     * access the bucket where your source content is stored. Your MediaTailor source
     * location baseURL must follow the S3 virtual hosted-style request URL format. For
     * example, https://bucket-name.s3.Region.amazonaws.com/key-name.</p> <p>Before you
     * can use S3_SIGV4, you must meet these requirements:</p> <p>• You must allow
     * MediaTailor to access your S3 bucket by granting mediatailor.amazonaws.com
     * principal access in IAM. For information about configuring access in IAM, see
     * Access management in the IAM User Guide.</p> <p>• The mediatailor.amazonaws.com
     * service principal must have permissions to read all top level manifests
     * referenced by the VodSource packaging configurations.</p> <p>• The caller of the
     * API must have s3:GetObject IAM permissions to read all top level manifests
     * referenced by your MediaTailor VodSource packaging configurations.</p>
     */
    inline void SetAccessType(AccessType&& value) { m_accessTypeHasBeenSet = true; m_accessType = std::move(value); }

    /**
     * <p>The type of authentication used to access content from
     * HttpConfiguration::BaseUrl on your source location. Accepted value:
     * S3_SIGV4.</p> <p>S3_SIGV4 - AWS Signature Version 4 authentication for Amazon S3
     * hosted virtual-style access. If your source location base URL is an Amazon S3
     * bucket, MediaTailor can use AWS Signature Version 4 (SigV4) authentication to
     * access the bucket where your source content is stored. Your MediaTailor source
     * location baseURL must follow the S3 virtual hosted-style request URL format. For
     * example, https://bucket-name.s3.Region.amazonaws.com/key-name.</p> <p>Before you
     * can use S3_SIGV4, you must meet these requirements:</p> <p>• You must allow
     * MediaTailor to access your S3 bucket by granting mediatailor.amazonaws.com
     * principal access in IAM. For information about configuring access in IAM, see
     * Access management in the IAM User Guide.</p> <p>• The mediatailor.amazonaws.com
     * service principal must have permissions to read all top level manifests
     * referenced by the VodSource packaging configurations.</p> <p>• The caller of the
     * API must have s3:GetObject IAM permissions to read all top level manifests
     * referenced by your MediaTailor VodSource packaging configurations.</p>
     */
    inline AccessConfiguration& WithAccessType(const AccessType& value) { SetAccessType(value); return *this;}

    /**
     * <p>The type of authentication used to access content from
     * HttpConfiguration::BaseUrl on your source location. Accepted value:
     * S3_SIGV4.</p> <p>S3_SIGV4 - AWS Signature Version 4 authentication for Amazon S3
     * hosted virtual-style access. If your source location base URL is an Amazon S3
     * bucket, MediaTailor can use AWS Signature Version 4 (SigV4) authentication to
     * access the bucket where your source content is stored. Your MediaTailor source
     * location baseURL must follow the S3 virtual hosted-style request URL format. For
     * example, https://bucket-name.s3.Region.amazonaws.com/key-name.</p> <p>Before you
     * can use S3_SIGV4, you must meet these requirements:</p> <p>• You must allow
     * MediaTailor to access your S3 bucket by granting mediatailor.amazonaws.com
     * principal access in IAM. For information about configuring access in IAM, see
     * Access management in the IAM User Guide.</p> <p>• The mediatailor.amazonaws.com
     * service principal must have permissions to read all top level manifests
     * referenced by the VodSource packaging configurations.</p> <p>• The caller of the
     * API must have s3:GetObject IAM permissions to read all top level manifests
     * referenced by your MediaTailor VodSource packaging configurations.</p>
     */
    inline AccessConfiguration& WithAccessType(AccessType&& value) { SetAccessType(std::move(value)); return *this;}

  private:

    AccessType m_accessType;
    bool m_accessTypeHasBeenSet;
  };

} // namespace Model
} // namespace MediaTailor
} // namespace Aws
