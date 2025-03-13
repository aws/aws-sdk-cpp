/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/comprehend/Comprehend_EXPORTS.h>
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
namespace Comprehend
{
namespace Model
{

  /**
   * <p>Provide the location for output data from a custom classifier job. This field
   * is mandatory if you are training a native document model.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/DocumentClassifierOutputDataConfig">AWS
   * API Reference</a></p>
   */
  class DocumentClassifierOutputDataConfig
  {
  public:
    AWS_COMPREHEND_API DocumentClassifierOutputDataConfig() = default;
    AWS_COMPREHEND_API DocumentClassifierOutputDataConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPREHEND_API DocumentClassifierOutputDataConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPREHEND_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>When you use the <code>OutputDataConfig</code> object while creating a custom
     * classifier, you specify the Amazon S3 location where you want to write the
     * confusion matrix and other output files. The URI must be in the same Region as
     * the API endpoint that you are calling. The location is used as the prefix for
     * the actual location of this output file.</p> <p>When the custom classifier job
     * is finished, the service creates the output file in a directory specific to the
     * job. The <code>S3Uri</code> field contains the location of the output file,
     * called <code>output.tar.gz</code>. It is a compressed archive that contains the
     * confusion matrix.</p>
     */
    inline const Aws::String& GetS3Uri() const { return m_s3Uri; }
    inline bool S3UriHasBeenSet() const { return m_s3UriHasBeenSet; }
    template<typename S3UriT = Aws::String>
    void SetS3Uri(S3UriT&& value) { m_s3UriHasBeenSet = true; m_s3Uri = std::forward<S3UriT>(value); }
    template<typename S3UriT = Aws::String>
    DocumentClassifierOutputDataConfig& WithS3Uri(S3UriT&& value) { SetS3Uri(std::forward<S3UriT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>ID for the Amazon Web Services Key Management Service (KMS) key that Amazon
     * Comprehend uses to encrypt the output results from an analysis job. The KmsKeyId
     * can be one of the following formats:</p> <ul> <li> <p>KMS Key ID:
     * <code>"1234abcd-12ab-34cd-56ef-1234567890ab"</code> </p> </li> <li> <p>Amazon
     * Resource Name (ARN) of a KMS Key:
     * <code>"arn:aws:kms:us-west-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab"</code>
     * </p> </li> <li> <p>KMS Key Alias: <code>"alias/ExampleAlias"</code> </p> </li>
     * <li> <p>ARN of a KMS Key Alias:
     * <code>"arn:aws:kms:us-west-2:111122223333:alias/ExampleAlias"</code> </p> </li>
     * </ul>
     */
    inline const Aws::String& GetKmsKeyId() const { return m_kmsKeyId; }
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }
    template<typename KmsKeyIdT = Aws::String>
    void SetKmsKeyId(KmsKeyIdT&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::forward<KmsKeyIdT>(value); }
    template<typename KmsKeyIdT = Aws::String>
    DocumentClassifierOutputDataConfig& WithKmsKeyId(KmsKeyIdT&& value) { SetKmsKeyId(std::forward<KmsKeyIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon S3 prefix for the data lake location of the flywheel
     * statistics.</p>
     */
    inline const Aws::String& GetFlywheelStatsS3Prefix() const { return m_flywheelStatsS3Prefix; }
    inline bool FlywheelStatsS3PrefixHasBeenSet() const { return m_flywheelStatsS3PrefixHasBeenSet; }
    template<typename FlywheelStatsS3PrefixT = Aws::String>
    void SetFlywheelStatsS3Prefix(FlywheelStatsS3PrefixT&& value) { m_flywheelStatsS3PrefixHasBeenSet = true; m_flywheelStatsS3Prefix = std::forward<FlywheelStatsS3PrefixT>(value); }
    template<typename FlywheelStatsS3PrefixT = Aws::String>
    DocumentClassifierOutputDataConfig& WithFlywheelStatsS3Prefix(FlywheelStatsS3PrefixT&& value) { SetFlywheelStatsS3Prefix(std::forward<FlywheelStatsS3PrefixT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_s3Uri;
    bool m_s3UriHasBeenSet = false;

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet = false;

    Aws::String m_flywheelStatsS3Prefix;
    bool m_flywheelStatsS3PrefixHasBeenSet = false;
  };

} // namespace Model
} // namespace Comprehend
} // namespace Aws
