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
    AWS_CLOUDFRONT_API Signer();
    AWS_CLOUDFRONT_API Signer(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDFRONT_API Signer& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDFRONT_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    /**
     * <p>An Amazon Web Services account number that contains active CloudFront key
     * pairs that CloudFront can use to verify the signatures of signed URLs and signed
     * cookies. If the Amazon Web Services account that owns the key pairs is the same
     * account that owns the CloudFront distribution, the value of this field is
     * <code>self</code>.</p>
     */
    inline const Aws::String& GetAwsAccountNumber() const{ return m_awsAccountNumber; }

    /**
     * <p>An Amazon Web Services account number that contains active CloudFront key
     * pairs that CloudFront can use to verify the signatures of signed URLs and signed
     * cookies. If the Amazon Web Services account that owns the key pairs is the same
     * account that owns the CloudFront distribution, the value of this field is
     * <code>self</code>.</p>
     */
    inline bool AwsAccountNumberHasBeenSet() const { return m_awsAccountNumberHasBeenSet; }

    /**
     * <p>An Amazon Web Services account number that contains active CloudFront key
     * pairs that CloudFront can use to verify the signatures of signed URLs and signed
     * cookies. If the Amazon Web Services account that owns the key pairs is the same
     * account that owns the CloudFront distribution, the value of this field is
     * <code>self</code>.</p>
     */
    inline void SetAwsAccountNumber(const Aws::String& value) { m_awsAccountNumberHasBeenSet = true; m_awsAccountNumber = value; }

    /**
     * <p>An Amazon Web Services account number that contains active CloudFront key
     * pairs that CloudFront can use to verify the signatures of signed URLs and signed
     * cookies. If the Amazon Web Services account that owns the key pairs is the same
     * account that owns the CloudFront distribution, the value of this field is
     * <code>self</code>.</p>
     */
    inline void SetAwsAccountNumber(Aws::String&& value) { m_awsAccountNumberHasBeenSet = true; m_awsAccountNumber = std::move(value); }

    /**
     * <p>An Amazon Web Services account number that contains active CloudFront key
     * pairs that CloudFront can use to verify the signatures of signed URLs and signed
     * cookies. If the Amazon Web Services account that owns the key pairs is the same
     * account that owns the CloudFront distribution, the value of this field is
     * <code>self</code>.</p>
     */
    inline void SetAwsAccountNumber(const char* value) { m_awsAccountNumberHasBeenSet = true; m_awsAccountNumber.assign(value); }

    /**
     * <p>An Amazon Web Services account number that contains active CloudFront key
     * pairs that CloudFront can use to verify the signatures of signed URLs and signed
     * cookies. If the Amazon Web Services account that owns the key pairs is the same
     * account that owns the CloudFront distribution, the value of this field is
     * <code>self</code>.</p>
     */
    inline Signer& WithAwsAccountNumber(const Aws::String& value) { SetAwsAccountNumber(value); return *this;}

    /**
     * <p>An Amazon Web Services account number that contains active CloudFront key
     * pairs that CloudFront can use to verify the signatures of signed URLs and signed
     * cookies. If the Amazon Web Services account that owns the key pairs is the same
     * account that owns the CloudFront distribution, the value of this field is
     * <code>self</code>.</p>
     */
    inline Signer& WithAwsAccountNumber(Aws::String&& value) { SetAwsAccountNumber(std::move(value)); return *this;}

    /**
     * <p>An Amazon Web Services account number that contains active CloudFront key
     * pairs that CloudFront can use to verify the signatures of signed URLs and signed
     * cookies. If the Amazon Web Services account that owns the key pairs is the same
     * account that owns the CloudFront distribution, the value of this field is
     * <code>self</code>.</p>
     */
    inline Signer& WithAwsAccountNumber(const char* value) { SetAwsAccountNumber(value); return *this;}


    /**
     * <p>A list of CloudFront key pair identifiers.</p>
     */
    inline const KeyPairIds& GetKeyPairIds() const{ return m_keyPairIds; }

    /**
     * <p>A list of CloudFront key pair identifiers.</p>
     */
    inline bool KeyPairIdsHasBeenSet() const { return m_keyPairIdsHasBeenSet; }

    /**
     * <p>A list of CloudFront key pair identifiers.</p>
     */
    inline void SetKeyPairIds(const KeyPairIds& value) { m_keyPairIdsHasBeenSet = true; m_keyPairIds = value; }

    /**
     * <p>A list of CloudFront key pair identifiers.</p>
     */
    inline void SetKeyPairIds(KeyPairIds&& value) { m_keyPairIdsHasBeenSet = true; m_keyPairIds = std::move(value); }

    /**
     * <p>A list of CloudFront key pair identifiers.</p>
     */
    inline Signer& WithKeyPairIds(const KeyPairIds& value) { SetKeyPairIds(value); return *this;}

    /**
     * <p>A list of CloudFront key pair identifiers.</p>
     */
    inline Signer& WithKeyPairIds(KeyPairIds&& value) { SetKeyPairIds(std::move(value)); return *this;}

  private:

    Aws::String m_awsAccountNumber;
    bool m_awsAccountNumberHasBeenSet = false;

    KeyPairIds m_keyPairIds;
    bool m_keyPairIdsHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
