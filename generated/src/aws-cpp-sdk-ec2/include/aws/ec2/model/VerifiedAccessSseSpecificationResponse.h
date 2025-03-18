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
    AWS_EC2_API VerifiedAccessSseSpecificationResponse() = default;
    AWS_EC2_API VerifiedAccessSseSpecificationResponse(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API VerifiedAccessSseSpecificationResponse& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>Indicates whether customer managed KMS keys are in use for server side
     * encryption.</p> <p>Valid values: <code>True</code> | <code>False</code> </p>
     */
    inline bool GetCustomerManagedKeyEnabled() const { return m_customerManagedKeyEnabled; }
    inline bool CustomerManagedKeyEnabledHasBeenSet() const { return m_customerManagedKeyEnabledHasBeenSet; }
    inline void SetCustomerManagedKeyEnabled(bool value) { m_customerManagedKeyEnabledHasBeenSet = true; m_customerManagedKeyEnabled = value; }
    inline VerifiedAccessSseSpecificationResponse& WithCustomerManagedKeyEnabled(bool value) { SetCustomerManagedKeyEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the KMS key.</p>
     */
    inline const Aws::String& GetKmsKeyArn() const { return m_kmsKeyArn; }
    inline bool KmsKeyArnHasBeenSet() const { return m_kmsKeyArnHasBeenSet; }
    template<typename KmsKeyArnT = Aws::String>
    void SetKmsKeyArn(KmsKeyArnT&& value) { m_kmsKeyArnHasBeenSet = true; m_kmsKeyArn = std::forward<KmsKeyArnT>(value); }
    template<typename KmsKeyArnT = Aws::String>
    VerifiedAccessSseSpecificationResponse& WithKmsKeyArn(KmsKeyArnT&& value) { SetKmsKeyArn(std::forward<KmsKeyArnT>(value)); return *this;}
    ///@}
  private:

    bool m_customerManagedKeyEnabled{false};
    bool m_customerManagedKeyEnabledHasBeenSet = false;

    Aws::String m_kmsKeyArn;
    bool m_kmsKeyArnHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
