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
#include <aws/sts/STS_EXPORTS.h>
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
namespace STS
{
namespace Model
{

  /**
   * <p>Identifiers for the federated user that is associated with the
   * credentials.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sts-2011-06-15/FederatedUser">AWS
   * API Reference</a></p>
   */
  class AWS_STS_API FederatedUser
  {
  public:
    FederatedUser();
    FederatedUser(const Aws::Utils::Xml::XmlNode& xmlNode);
    FederatedUser& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The string that identifies the federated user associated with the
     * credentials, similar to the unique ID of an IAM user.</p>
     */
    inline const Aws::String& GetFederatedUserId() const{ return m_federatedUserId; }

    /**
     * <p>The string that identifies the federated user associated with the
     * credentials, similar to the unique ID of an IAM user.</p>
     */
    inline bool FederatedUserIdHasBeenSet() const { return m_federatedUserIdHasBeenSet; }

    /**
     * <p>The string that identifies the federated user associated with the
     * credentials, similar to the unique ID of an IAM user.</p>
     */
    inline void SetFederatedUserId(const Aws::String& value) { m_federatedUserIdHasBeenSet = true; m_federatedUserId = value; }

    /**
     * <p>The string that identifies the federated user associated with the
     * credentials, similar to the unique ID of an IAM user.</p>
     */
    inline void SetFederatedUserId(Aws::String&& value) { m_federatedUserIdHasBeenSet = true; m_federatedUserId = std::move(value); }

    /**
     * <p>The string that identifies the federated user associated with the
     * credentials, similar to the unique ID of an IAM user.</p>
     */
    inline void SetFederatedUserId(const char* value) { m_federatedUserIdHasBeenSet = true; m_federatedUserId.assign(value); }

    /**
     * <p>The string that identifies the federated user associated with the
     * credentials, similar to the unique ID of an IAM user.</p>
     */
    inline FederatedUser& WithFederatedUserId(const Aws::String& value) { SetFederatedUserId(value); return *this;}

    /**
     * <p>The string that identifies the federated user associated with the
     * credentials, similar to the unique ID of an IAM user.</p>
     */
    inline FederatedUser& WithFederatedUserId(Aws::String&& value) { SetFederatedUserId(std::move(value)); return *this;}

    /**
     * <p>The string that identifies the federated user associated with the
     * credentials, similar to the unique ID of an IAM user.</p>
     */
    inline FederatedUser& WithFederatedUserId(const char* value) { SetFederatedUserId(value); return *this;}


    /**
     * <p>The ARN that specifies the federated user that is associated with the
     * credentials. For more information about ARNs and how to use them in policies,
     * see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_identifiers.html">IAM
     * Identifiers</a> in <i>Using IAM</i>. </p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The ARN that specifies the federated user that is associated with the
     * credentials. For more information about ARNs and how to use them in policies,
     * see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_identifiers.html">IAM
     * Identifiers</a> in <i>Using IAM</i>. </p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The ARN that specifies the federated user that is associated with the
     * credentials. For more information about ARNs and how to use them in policies,
     * see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_identifiers.html">IAM
     * Identifiers</a> in <i>Using IAM</i>. </p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The ARN that specifies the federated user that is associated with the
     * credentials. For more information about ARNs and how to use them in policies,
     * see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_identifiers.html">IAM
     * Identifiers</a> in <i>Using IAM</i>. </p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The ARN that specifies the federated user that is associated with the
     * credentials. For more information about ARNs and how to use them in policies,
     * see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_identifiers.html">IAM
     * Identifiers</a> in <i>Using IAM</i>. </p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The ARN that specifies the federated user that is associated with the
     * credentials. For more information about ARNs and how to use them in policies,
     * see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_identifiers.html">IAM
     * Identifiers</a> in <i>Using IAM</i>. </p>
     */
    inline FederatedUser& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The ARN that specifies the federated user that is associated with the
     * credentials. For more information about ARNs and how to use them in policies,
     * see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_identifiers.html">IAM
     * Identifiers</a> in <i>Using IAM</i>. </p>
     */
    inline FederatedUser& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The ARN that specifies the federated user that is associated with the
     * credentials. For more information about ARNs and how to use them in policies,
     * see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_identifiers.html">IAM
     * Identifiers</a> in <i>Using IAM</i>. </p>
     */
    inline FederatedUser& WithArn(const char* value) { SetArn(value); return *this;}

  private:

    Aws::String m_federatedUserId;
    bool m_federatedUserIdHasBeenSet;

    Aws::String m_arn;
    bool m_arnHasBeenSet;
  };

} // namespace Model
} // namespace STS
} // namespace Aws
