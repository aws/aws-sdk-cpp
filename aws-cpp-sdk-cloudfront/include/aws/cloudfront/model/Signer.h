/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
   * <p>A complex type that lists the AWS accounts that were included in the
   * <code>TrustedSigners</code> complex type, as well as their active CloudFront key
   * pair IDs, if any. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2019-03-26/Signer">AWS
   * API Reference</a></p>
   */
  class AWS_CLOUDFRONT_API Signer
  {
  public:
    Signer();
    Signer(const Aws::Utils::Xml::XmlNode& xmlNode);
    Signer& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    /**
     * <p>An AWS account that is included in the <code>TrustedSigners</code> complex
     * type for this distribution. Valid values include:</p> <ul> <li> <p>
     * <code>self</code>, which is the AWS account used to create the distribution.</p>
     * </li> <li> <p>An AWS account number.</p> </li> </ul>
     */
    inline const Aws::String& GetAwsAccountNumber() const{ return m_awsAccountNumber; }

    /**
     * <p>An AWS account that is included in the <code>TrustedSigners</code> complex
     * type for this distribution. Valid values include:</p> <ul> <li> <p>
     * <code>self</code>, which is the AWS account used to create the distribution.</p>
     * </li> <li> <p>An AWS account number.</p> </li> </ul>
     */
    inline bool AwsAccountNumberHasBeenSet() const { return m_awsAccountNumberHasBeenSet; }

    /**
     * <p>An AWS account that is included in the <code>TrustedSigners</code> complex
     * type for this distribution. Valid values include:</p> <ul> <li> <p>
     * <code>self</code>, which is the AWS account used to create the distribution.</p>
     * </li> <li> <p>An AWS account number.</p> </li> </ul>
     */
    inline void SetAwsAccountNumber(const Aws::String& value) { m_awsAccountNumberHasBeenSet = true; m_awsAccountNumber = value; }

    /**
     * <p>An AWS account that is included in the <code>TrustedSigners</code> complex
     * type for this distribution. Valid values include:</p> <ul> <li> <p>
     * <code>self</code>, which is the AWS account used to create the distribution.</p>
     * </li> <li> <p>An AWS account number.</p> </li> </ul>
     */
    inline void SetAwsAccountNumber(Aws::String&& value) { m_awsAccountNumberHasBeenSet = true; m_awsAccountNumber = std::move(value); }

    /**
     * <p>An AWS account that is included in the <code>TrustedSigners</code> complex
     * type for this distribution. Valid values include:</p> <ul> <li> <p>
     * <code>self</code>, which is the AWS account used to create the distribution.</p>
     * </li> <li> <p>An AWS account number.</p> </li> </ul>
     */
    inline void SetAwsAccountNumber(const char* value) { m_awsAccountNumberHasBeenSet = true; m_awsAccountNumber.assign(value); }

    /**
     * <p>An AWS account that is included in the <code>TrustedSigners</code> complex
     * type for this distribution. Valid values include:</p> <ul> <li> <p>
     * <code>self</code>, which is the AWS account used to create the distribution.</p>
     * </li> <li> <p>An AWS account number.</p> </li> </ul>
     */
    inline Signer& WithAwsAccountNumber(const Aws::String& value) { SetAwsAccountNumber(value); return *this;}

    /**
     * <p>An AWS account that is included in the <code>TrustedSigners</code> complex
     * type for this distribution. Valid values include:</p> <ul> <li> <p>
     * <code>self</code>, which is the AWS account used to create the distribution.</p>
     * </li> <li> <p>An AWS account number.</p> </li> </ul>
     */
    inline Signer& WithAwsAccountNumber(Aws::String&& value) { SetAwsAccountNumber(std::move(value)); return *this;}

    /**
     * <p>An AWS account that is included in the <code>TrustedSigners</code> complex
     * type for this distribution. Valid values include:</p> <ul> <li> <p>
     * <code>self</code>, which is the AWS account used to create the distribution.</p>
     * </li> <li> <p>An AWS account number.</p> </li> </ul>
     */
    inline Signer& WithAwsAccountNumber(const char* value) { SetAwsAccountNumber(value); return *this;}


    /**
     * <p>A complex type that lists the active CloudFront key pairs, if any, that are
     * associated with <code>AwsAccountNumber</code>.</p>
     */
    inline const KeyPairIds& GetKeyPairIds() const{ return m_keyPairIds; }

    /**
     * <p>A complex type that lists the active CloudFront key pairs, if any, that are
     * associated with <code>AwsAccountNumber</code>.</p>
     */
    inline bool KeyPairIdsHasBeenSet() const { return m_keyPairIdsHasBeenSet; }

    /**
     * <p>A complex type that lists the active CloudFront key pairs, if any, that are
     * associated with <code>AwsAccountNumber</code>.</p>
     */
    inline void SetKeyPairIds(const KeyPairIds& value) { m_keyPairIdsHasBeenSet = true; m_keyPairIds = value; }

    /**
     * <p>A complex type that lists the active CloudFront key pairs, if any, that are
     * associated with <code>AwsAccountNumber</code>.</p>
     */
    inline void SetKeyPairIds(KeyPairIds&& value) { m_keyPairIdsHasBeenSet = true; m_keyPairIds = std::move(value); }

    /**
     * <p>A complex type that lists the active CloudFront key pairs, if any, that are
     * associated with <code>AwsAccountNumber</code>.</p>
     */
    inline Signer& WithKeyPairIds(const KeyPairIds& value) { SetKeyPairIds(value); return *this;}

    /**
     * <p>A complex type that lists the active CloudFront key pairs, if any, that are
     * associated with <code>AwsAccountNumber</code>.</p>
     */
    inline Signer& WithKeyPairIds(KeyPairIds&& value) { SetKeyPairIds(std::move(value)); return *this;}

  private:

    Aws::String m_awsAccountNumber;
    bool m_awsAccountNumberHasBeenSet;

    KeyPairIds m_keyPairIds;
    bool m_keyPairIdsHasBeenSet;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
