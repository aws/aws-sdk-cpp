/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace EC2
{
namespace Model
{

  /**
   * <p>The options in use for server side encryption.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/VerifiedAccessSseSpecificationResponse">AWS
   * API Reference</a></p>
   */
  class VerifiedAccessSseSpecificationResponse
  {
  public:
    AWS_EC2_API VerifiedAccessSseSpecificationResponse();
    AWS_EC2_API VerifiedAccessSseSpecificationResponse(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API VerifiedAccessSseSpecificationResponse& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>Indicates whether customer managed KMS keys are in use for server side
     * encryption.</p> <p>Valid values: <code>True</code> | <code>False</code> </p>
     */
    inline bool GetCustomerManagedKeyEnabled() const{ return m_customerManagedKeyEnabled; }

    /**
     * <p>Indicates whether customer managed KMS keys are in use for server side
     * encryption.</p> <p>Valid values: <code>True</code> | <code>False</code> </p>
     */
    inline bool CustomerManagedKeyEnabledHasBeenSet() const { return m_customerManagedKeyEnabledHasBeenSet; }

    /**
     * <p>Indicates whether customer managed KMS keys are in use for server side
     * encryption.</p> <p>Valid values: <code>True</code> | <code>False</code> </p>
     */
    inline void SetCustomerManagedKeyEnabled(bool value) { m_customerManagedKeyEnabledHasBeenSet = true; m_customerManagedKeyEnabled = value; }

    /**
     * <p>Indicates whether customer managed KMS keys are in use for server side
     * encryption.</p> <p>Valid values: <code>True</code> | <code>False</code> </p>
     */
    inline VerifiedAccessSseSpecificationResponse& WithCustomerManagedKeyEnabled(bool value) { SetCustomerManagedKeyEnabled(value); return *this;}


    /**
     * <p>The ARN of the KMS key.</p>
     */
    inline const Aws::String& GetKmsKeyArn() const{ return m_kmsKeyArn; }

    /**
     * <p>The ARN of the KMS key.</p>
     */
    inline bool KmsKeyArnHasBeenSet() const { return m_kmsKeyArnHasBeenSet; }

    /**
     * <p>The ARN of the KMS key.</p>
     */
    inline void SetKmsKeyArn(const Aws::String& value) { m_kmsKeyArnHasBeenSet = true; m_kmsKeyArn = value; }

    /**
     * <p>The ARN of the KMS key.</p>
     */
    inline void SetKmsKeyArn(Aws::String&& value) { m_kmsKeyArnHasBeenSet = true; m_kmsKeyArn = std::move(value); }

    /**
     * <p>The ARN of the KMS key.</p>
     */
    inline void SetKmsKeyArn(const char* value) { m_kmsKeyArnHasBeenSet = true; m_kmsKeyArn.assign(value); }

    /**
     * <p>The ARN of the KMS key.</p>
     */
    inline VerifiedAccessSseSpecificationResponse& WithKmsKeyArn(const Aws::String& value) { SetKmsKeyArn(value); return *this;}

    /**
     * <p>The ARN of the KMS key.</p>
     */
    inline VerifiedAccessSseSpecificationResponse& WithKmsKeyArn(Aws::String&& value) { SetKmsKeyArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the KMS key.</p>
     */
    inline VerifiedAccessSseSpecificationResponse& WithKmsKeyArn(const char* value) { SetKmsKeyArn(value); return *this;}

  private:

    bool m_customerManagedKeyEnabled;
    bool m_customerManagedKeyEnabledHasBeenSet = false;

    Aws::String m_kmsKeyArn;
    bool m_kmsKeyArnHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
