/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cloudfront/model/KeyPairIds.h>

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
   * A complex type that lists the AWS accounts that were included in the
   * TrustedSigners complex type, as well as their active CloudFront key pair IDs, if
   * any.
   */
  class AWS_CLOUDFRONT_API Signer
  {
  public:
    Signer();
    Signer(const Aws::Utils::Xml::XmlNode& xmlNode);
    Signer& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;

    /**
     * Specifies an AWS account that can create signed URLs. Values: self, which
     * indicates that the AWS account that was used to create the distribution can
     * created signed URLs, or an AWS account number. Omit the dashes in the account
     * number.
     */
    inline const Aws::String& GetAwsAccountNumber() const{ return m_awsAccountNumber; }

    /**
     * Specifies an AWS account that can create signed URLs. Values: self, which
     * indicates that the AWS account that was used to create the distribution can
     * created signed URLs, or an AWS account number. Omit the dashes in the account
     * number.
     */
    inline void SetAwsAccountNumber(const Aws::String& value) { m_awsAccountNumberHasBeenSet = true; m_awsAccountNumber = value; }

    /**
     * Specifies an AWS account that can create signed URLs. Values: self, which
     * indicates that the AWS account that was used to create the distribution can
     * created signed URLs, or an AWS account number. Omit the dashes in the account
     * number.
     */
    inline void SetAwsAccountNumber(Aws::String&& value) { m_awsAccountNumberHasBeenSet = true; m_awsAccountNumber = value; }

    /**
     * Specifies an AWS account that can create signed URLs. Values: self, which
     * indicates that the AWS account that was used to create the distribution can
     * created signed URLs, or an AWS account number. Omit the dashes in the account
     * number.
     */
    inline void SetAwsAccountNumber(const char* value) { m_awsAccountNumberHasBeenSet = true; m_awsAccountNumber.assign(value); }

    /**
     * Specifies an AWS account that can create signed URLs. Values: self, which
     * indicates that the AWS account that was used to create the distribution can
     * created signed URLs, or an AWS account number. Omit the dashes in the account
     * number.
     */
    inline Signer& WithAwsAccountNumber(const Aws::String& value) { SetAwsAccountNumber(value); return *this;}

    /**
     * Specifies an AWS account that can create signed URLs. Values: self, which
     * indicates that the AWS account that was used to create the distribution can
     * created signed URLs, or an AWS account number. Omit the dashes in the account
     * number.
     */
    inline Signer& WithAwsAccountNumber(Aws::String&& value) { SetAwsAccountNumber(value); return *this;}

    /**
     * Specifies an AWS account that can create signed URLs. Values: self, which
     * indicates that the AWS account that was used to create the distribution can
     * created signed URLs, or an AWS account number. Omit the dashes in the account
     * number.
     */
    inline Signer& WithAwsAccountNumber(const char* value) { SetAwsAccountNumber(value); return *this;}

    /**
     * A complex type that lists the active CloudFront key pairs, if any, that are
     * associated with AwsAccountNumber.
     */
    inline const KeyPairIds& GetKeyPairIds() const{ return m_keyPairIds; }

    /**
     * A complex type that lists the active CloudFront key pairs, if any, that are
     * associated with AwsAccountNumber.
     */
    inline void SetKeyPairIds(const KeyPairIds& value) { m_keyPairIdsHasBeenSet = true; m_keyPairIds = value; }

    /**
     * A complex type that lists the active CloudFront key pairs, if any, that are
     * associated with AwsAccountNumber.
     */
    inline void SetKeyPairIds(KeyPairIds&& value) { m_keyPairIdsHasBeenSet = true; m_keyPairIds = value; }

    /**
     * A complex type that lists the active CloudFront key pairs, if any, that are
     * associated with AwsAccountNumber.
     */
    inline Signer& WithKeyPairIds(const KeyPairIds& value) { SetKeyPairIds(value); return *this;}

    /**
     * A complex type that lists the active CloudFront key pairs, if any, that are
     * associated with AwsAccountNumber.
     */
    inline Signer& WithKeyPairIds(KeyPairIds&& value) { SetKeyPairIds(value); return *this;}

  private:
    Aws::String m_awsAccountNumber;
    bool m_awsAccountNumberHasBeenSet;
    KeyPairIds m_keyPairIds;
    bool m_keyPairIdsHasBeenSet;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
