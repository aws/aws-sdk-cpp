/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/accessanalyzer/AccessAnalyzer_EXPORTS.h>

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
namespace AccessAnalyzer
{
namespace Model
{

  /**
   * <p>The <code>PublicAccessBlock</code> configuration to apply to this Amazon S3
   * bucket. If the proposed configuration is for an existing Amazon S3 bucket and
   * the configuration is not specified, the access preview uses the existing
   * setting. If the proposed configuration is for a new bucket and the configuration
   * is not specified, the access preview uses <code>false</code>. If the proposed
   * configuration is for a new access point or multi-region access point and the
   * access point BPA configuration is not specified, the access preview uses
   * <code>true</code>. For more information, see <a
   * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-properties-s3-bucket-publicaccessblockconfiguration.html">PublicAccessBlockConfiguration</a>.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/accessanalyzer-2019-11-01/S3PublicAccessBlockConfiguration">AWS
   * API Reference</a></p>
   */
  class S3PublicAccessBlockConfiguration
  {
  public:
    AWS_ACCESSANALYZER_API S3PublicAccessBlockConfiguration();
    AWS_ACCESSANALYZER_API S3PublicAccessBlockConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACCESSANALYZER_API S3PublicAccessBlockConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACCESSANALYZER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> Specifies whether Amazon S3 should ignore public ACLs for this bucket and
     * objects in this bucket. </p>
     */
    inline bool GetIgnorePublicAcls() const{ return m_ignorePublicAcls; }

    /**
     * <p> Specifies whether Amazon S3 should ignore public ACLs for this bucket and
     * objects in this bucket. </p>
     */
    inline bool IgnorePublicAclsHasBeenSet() const { return m_ignorePublicAclsHasBeenSet; }

    /**
     * <p> Specifies whether Amazon S3 should ignore public ACLs for this bucket and
     * objects in this bucket. </p>
     */
    inline void SetIgnorePublicAcls(bool value) { m_ignorePublicAclsHasBeenSet = true; m_ignorePublicAcls = value; }

    /**
     * <p> Specifies whether Amazon S3 should ignore public ACLs for this bucket and
     * objects in this bucket. </p>
     */
    inline S3PublicAccessBlockConfiguration& WithIgnorePublicAcls(bool value) { SetIgnorePublicAcls(value); return *this;}


    /**
     * <p> Specifies whether Amazon S3 should restrict public bucket policies for this
     * bucket. </p>
     */
    inline bool GetRestrictPublicBuckets() const{ return m_restrictPublicBuckets; }

    /**
     * <p> Specifies whether Amazon S3 should restrict public bucket policies for this
     * bucket. </p>
     */
    inline bool RestrictPublicBucketsHasBeenSet() const { return m_restrictPublicBucketsHasBeenSet; }

    /**
     * <p> Specifies whether Amazon S3 should restrict public bucket policies for this
     * bucket. </p>
     */
    inline void SetRestrictPublicBuckets(bool value) { m_restrictPublicBucketsHasBeenSet = true; m_restrictPublicBuckets = value; }

    /**
     * <p> Specifies whether Amazon S3 should restrict public bucket policies for this
     * bucket. </p>
     */
    inline S3PublicAccessBlockConfiguration& WithRestrictPublicBuckets(bool value) { SetRestrictPublicBuckets(value); return *this;}

  private:

    bool m_ignorePublicAcls;
    bool m_ignorePublicAclsHasBeenSet = false;

    bool m_restrictPublicBuckets;
    bool m_restrictPublicBucketsHasBeenSet = false;
  };

} // namespace Model
} // namespace AccessAnalyzer
} // namespace Aws
