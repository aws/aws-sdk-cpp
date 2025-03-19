/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cloudfront/model/KeyPairIds.h>
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
namespace CloudFront
{
namespace Model
{

  /**
   * <p>A list of Amazon Web Services accounts and the active CloudFront key pairs in
   * each account that CloudFront can use to verify the signatures of signed URLs and
   * signed cookies.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/Signer">AWS
   * API Reference</a></p>
   */
  class Signer
  {
  public:
    AWS_CLOUDFRONT_API Signer() = default;
    AWS_CLOUDFRONT_API Signer(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDFRONT_API Signer& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDFRONT_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    /**
     * <p>An Amazon Web Services account number that contains active CloudFront key
     * pairs that CloudFront can use to verify the signatures of signed URLs and signed
     * cookies. If the Amazon Web Services account that owns the key pairs is the same
     * account that owns the CloudFront distribution, the value of this field is
     * <code>self</code>.</p>
     */
    inline const Aws::String& GetAwsAccountNumber() const { return m_awsAccountNumber; }
    inline bool AwsAccountNumberHasBeenSet() const { return m_awsAccountNumberHasBeenSet; }
    template<typename AwsAccountNumberT = Aws::String>
    void SetAwsAccountNumber(AwsAccountNumberT&& value) { m_awsAccountNumberHasBeenSet = true; m_awsAccountNumber = std::forward<AwsAccountNumberT>(value); }
    template<typename AwsAccountNumberT = Aws::String>
    Signer& WithAwsAccountNumber(AwsAccountNumberT&& value) { SetAwsAccountNumber(std::forward<AwsAccountNumberT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of CloudFront key pair identifiers.</p>
     */
    inline const KeyPairIds& GetKeyPairIds() const { return m_keyPairIds; }
    inline bool KeyPairIdsHasBeenSet() const { return m_keyPairIdsHasBeenSet; }
    template<typename KeyPairIdsT = KeyPairIds>
    void SetKeyPairIds(KeyPairIdsT&& value) { m_keyPairIdsHasBeenSet = true; m_keyPairIds = std::forward<KeyPairIdsT>(value); }
    template<typename KeyPairIdsT = KeyPairIds>
    Signer& WithKeyPairIds(KeyPairIdsT&& value) { SetKeyPairIds(std::forward<KeyPairIdsT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_awsAccountNumber;
    bool m_awsAccountNumberHasBeenSet = false;

    KeyPairIds m_keyPairIds;
    bool m_keyPairIdsHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
