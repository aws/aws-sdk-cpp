/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticloadbalancingv2/ElasticLoadBalancingv2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/elasticloadbalancingv2/model/RevocationType.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace ElasticLoadBalancingv2
{
namespace Model
{

  /**
   * <p>Information about a revocation file.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancingv2-2015-12-01/RevocationContent">AWS
   * API Reference</a></p>
   */
  class RevocationContent
  {
  public:
    AWS_ELASTICLOADBALANCINGV2_API RevocationContent() = default;
    AWS_ELASTICLOADBALANCINGV2_API RevocationContent(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_ELASTICLOADBALANCINGV2_API RevocationContent& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_ELASTICLOADBALANCINGV2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_ELASTICLOADBALANCINGV2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The Amazon S3 bucket for the revocation file.</p>
     */
    inline const Aws::String& GetS3Bucket() const { return m_s3Bucket; }
    inline bool S3BucketHasBeenSet() const { return m_s3BucketHasBeenSet; }
    template<typename S3BucketT = Aws::String>
    void SetS3Bucket(S3BucketT&& value) { m_s3BucketHasBeenSet = true; m_s3Bucket = std::forward<S3BucketT>(value); }
    template<typename S3BucketT = Aws::String>
    RevocationContent& WithS3Bucket(S3BucketT&& value) { SetS3Bucket(std::forward<S3BucketT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon S3 path for the revocation file.</p>
     */
    inline const Aws::String& GetS3Key() const { return m_s3Key; }
    inline bool S3KeyHasBeenSet() const { return m_s3KeyHasBeenSet; }
    template<typename S3KeyT = Aws::String>
    void SetS3Key(S3KeyT&& value) { m_s3KeyHasBeenSet = true; m_s3Key = std::forward<S3KeyT>(value); }
    template<typename S3KeyT = Aws::String>
    RevocationContent& WithS3Key(S3KeyT&& value) { SetS3Key(std::forward<S3KeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon S3 object version of the revocation file.</p>
     */
    inline const Aws::String& GetS3ObjectVersion() const { return m_s3ObjectVersion; }
    inline bool S3ObjectVersionHasBeenSet() const { return m_s3ObjectVersionHasBeenSet; }
    template<typename S3ObjectVersionT = Aws::String>
    void SetS3ObjectVersion(S3ObjectVersionT&& value) { m_s3ObjectVersionHasBeenSet = true; m_s3ObjectVersion = std::forward<S3ObjectVersionT>(value); }
    template<typename S3ObjectVersionT = Aws::String>
    RevocationContent& WithS3ObjectVersion(S3ObjectVersionT&& value) { SetS3ObjectVersion(std::forward<S3ObjectVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of revocation file.</p>
     */
    inline RevocationType GetRevocationType() const { return m_revocationType; }
    inline bool RevocationTypeHasBeenSet() const { return m_revocationTypeHasBeenSet; }
    inline void SetRevocationType(RevocationType value) { m_revocationTypeHasBeenSet = true; m_revocationType = value; }
    inline RevocationContent& WithRevocationType(RevocationType value) { SetRevocationType(value); return *this;}
    ///@}
  private:

    Aws::String m_s3Bucket;
    bool m_s3BucketHasBeenSet = false;

    Aws::String m_s3Key;
    bool m_s3KeyHasBeenSet = false;

    Aws::String m_s3ObjectVersion;
    bool m_s3ObjectVersionHasBeenSet = false;

    RevocationType m_revocationType{RevocationType::NOT_SET};
    bool m_revocationTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticLoadBalancingv2
} // namespace Aws
