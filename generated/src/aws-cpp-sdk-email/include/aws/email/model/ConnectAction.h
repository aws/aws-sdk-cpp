/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/email/SES_EXPORTS.h>
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
namespace SES
{
namespace Model
{

  /**
   * <p>When included in a receipt rule, this action parses the received message and
   * starts an email contact in Amazon Connect on your behalf.</p>  <p>When you
   * receive emails, the maximum email size (including headers) is 40 MB.
   * Additionally, emails may only have up to 10 attachments. Emails larger than 40
   * MB or with more than 10 attachments will be bounced.</p>  <p>We recommend
   * that you configure this action via Amazon Connect.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/ConnectAction">AWS
   * API Reference</a></p>
   */
  class ConnectAction
  {
  public:
    AWS_SES_API ConnectAction() = default;
    AWS_SES_API ConnectAction(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_SES_API ConnectAction& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_SES_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_SES_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for the Amazon Connect instance that Amazon
     * SES integrates with for starting email contacts.</p> <p>For more information
     * about Amazon Connect instances, see the <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/amazon-connect-instances.html">Amazon
     * Connect Administrator Guide</a> </p>
     */
    inline const Aws::String& GetInstanceARN() const { return m_instanceARN; }
    inline bool InstanceARNHasBeenSet() const { return m_instanceARNHasBeenSet; }
    template<typename InstanceARNT = Aws::String>
    void SetInstanceARN(InstanceARNT&& value) { m_instanceARNHasBeenSet = true; m_instanceARN = std::forward<InstanceARNT>(value); }
    template<typename InstanceARNT = Aws::String>
    ConnectAction& WithInstanceARN(InstanceARNT&& value) { SetInstanceARN(std::forward<InstanceARNT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The Amazon Resource Name (ARN) of the IAM role to be used by Amazon Simple
     * Email Service while starting email contacts to the Amazon Connect instance. This
     * role should have permission to invoke <code>connect:StartEmailContact</code> for
     * the given Amazon Connect instance.</p>
     */
    inline const Aws::String& GetIAMRoleARN() const { return m_iAMRoleARN; }
    inline bool IAMRoleARNHasBeenSet() const { return m_iAMRoleARNHasBeenSet; }
    template<typename IAMRoleARNT = Aws::String>
    void SetIAMRoleARN(IAMRoleARNT&& value) { m_iAMRoleARNHasBeenSet = true; m_iAMRoleARN = std::forward<IAMRoleARNT>(value); }
    template<typename IAMRoleARNT = Aws::String>
    ConnectAction& WithIAMRoleARN(IAMRoleARNT&& value) { SetIAMRoleARN(std::forward<IAMRoleARNT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_instanceARN;
    bool m_instanceARNHasBeenSet = false;

    Aws::String m_iAMRoleARN;
    bool m_iAMRoleARNHasBeenSet = false;
  };

} // namespace Model
} // namespace SES
} // namespace Aws
