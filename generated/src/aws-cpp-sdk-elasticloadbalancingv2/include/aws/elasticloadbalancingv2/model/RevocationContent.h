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
    AWS_ELASTICLOADBALANCINGV2_API RevocationContent();
    AWS_ELASTICLOADBALANCINGV2_API RevocationContent(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_ELASTICLOADBALANCINGV2_API RevocationContent& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_ELASTICLOADBALANCINGV2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_ELASTICLOADBALANCINGV2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The Amazon S3 bucket for the revocation file.</p>
     */
    inline const Aws::String& GetS3Bucket() const{ return m_s3Bucket; }
    inline bool S3BucketHasBeenSet() const { return m_s3BucketHasBeenSet; }
    inline void SetS3Bucket(const Aws::String& value) { m_s3BucketHasBeenSet = true; m_s3Bucket = value; }
    inline void SetS3Bucket(Aws::String&& value) { m_s3BucketHasBeenSet = true; m_s3Bucket = std::move(value); }
    inline void SetS3Bucket(const char* value) { m_s3BucketHasBeenSet = true; m_s3Bucket.assign(value); }
    inline RevocationContent& WithS3Bucket(const Aws::String& value) { SetS3Bucket(value); return *this;}
    inline RevocationContent& WithS3Bucket(Aws::String&& value) { SetS3Bucket(std::move(value)); return *this;}
    inline RevocationContent& WithS3Bucket(const char* value) { SetS3Bucket(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon S3 path for the revocation file.</p>
     */
    inline const Aws::String& GetS3Key() const{ return m_s3Key; }
    inline bool S3KeyHasBeenSet() const { return m_s3KeyHasBeenSet; }
    inline void SetS3Key(const Aws::String& value) { m_s3KeyHasBeenSet = true; m_s3Key = value; }
    inline void SetS3Key(Aws::String&& value) { m_s3KeyHasBeenSet = true; m_s3Key = std::move(value); }
    inline void SetS3Key(const char* value) { m_s3KeyHasBeenSet = true; m_s3Key.assign(value); }
    inline RevocationContent& WithS3Key(const Aws::String& value) { SetS3Key(value); return *this;}
    inline RevocationContent& WithS3Key(Aws::String&& value) { SetS3Key(std::move(value)); return *this;}
    inline RevocationContent& WithS3Key(const char* value) { SetS3Key(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon S3 object version of the revocation file.</p>
     */
    inline const Aws::String& GetS3ObjectVersion() const{ return m_s3ObjectVersion; }
    inline bool S3ObjectVersionHasBeenSet() const { return m_s3ObjectVersionHasBeenSet; }
    inline void SetS3ObjectVersion(const Aws::String& value) { m_s3ObjectVersionHasBeenSet = true; m_s3ObjectVersion = value; }
    inline void SetS3ObjectVersion(Aws::String&& value) { m_s3ObjectVersionHasBeenSet = true; m_s3ObjectVersion = std::move(value); }
    inline void SetS3ObjectVersion(const char* value) { m_s3ObjectVersionHasBeenSet = true; m_s3ObjectVersion.assign(value); }
    inline RevocationContent& WithS3ObjectVersion(const Aws::String& value) { SetS3ObjectVersion(value); return *this;}
    inline RevocationContent& WithS3ObjectVersion(Aws::String&& value) { SetS3ObjectVersion(std::move(value)); return *this;}
    inline RevocationContent& WithS3ObjectVersion(const char* value) { SetS3ObjectVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of revocation file.</p>
     */
    inline const RevocationType& GetRevocationType() const{ return m_revocationType; }
    inline bool RevocationTypeHasBeenSet() const { return m_revocationTypeHasBeenSet; }
    inline void SetRevocationType(const RevocationType& value) { m_revocationTypeHasBeenSet = true; m_revocationType = value; }
    inline void SetRevocationType(RevocationType&& value) { m_revocationTypeHasBeenSet = true; m_revocationType = std::move(value); }
    inline RevocationContent& WithRevocationType(const RevocationType& value) { SetRevocationType(value); return *this;}
    inline RevocationContent& WithRevocationType(RevocationType&& value) { SetRevocationType(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_s3Bucket;
    bool m_s3BucketHasBeenSet = false;

    Aws::String m_s3Key;
    bool m_s3KeyHasBeenSet = false;

    Aws::String m_s3ObjectVersion;
    bool m_s3ObjectVersionHasBeenSet = false;

    RevocationType m_revocationType;
    bool m_revocationTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticLoadBalancingv2
} // namespace Aws
