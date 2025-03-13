/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/firehose/Firehose_EXPORTS.h>
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
namespace Firehose
{
namespace Model
{

  /**
   * <p>Describes an encryption key for a destination in Amazon S3.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/firehose-2015-08-04/KMSEncryptionConfig">AWS
   * API Reference</a></p>
   */
  class KMSEncryptionConfig
  {
  public:
    AWS_FIREHOSE_API KMSEncryptionConfig() = default;
    AWS_FIREHOSE_API KMSEncryptionConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_FIREHOSE_API KMSEncryptionConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FIREHOSE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the encryption key. Must belong to the same
     * Amazon Web Services Region as the destination Amazon S3 bucket. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs) and Amazon Web Services Service Namespaces</a>.</p>
     */
    inline const Aws::String& GetAWSKMSKeyARN() const { return m_aWSKMSKeyARN; }
    inline bool AWSKMSKeyARNHasBeenSet() const { return m_aWSKMSKeyARNHasBeenSet; }
    template<typename AWSKMSKeyARNT = Aws::String>
    void SetAWSKMSKeyARN(AWSKMSKeyARNT&& value) { m_aWSKMSKeyARNHasBeenSet = true; m_aWSKMSKeyARN = std::forward<AWSKMSKeyARNT>(value); }
    template<typename AWSKMSKeyARNT = Aws::String>
    KMSEncryptionConfig& WithAWSKMSKeyARN(AWSKMSKeyARNT&& value) { SetAWSKMSKeyARN(std::forward<AWSKMSKeyARNT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_aWSKMSKeyARN;
    bool m_aWSKMSKeyARNHasBeenSet = false;
  };

} // namespace Model
} // namespace Firehose
} // namespace Aws
