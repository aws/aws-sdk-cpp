﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudformation/CloudFormation_EXPORTS.h>
#include <aws/cloudformation/CloudFormationRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace CloudFormation
{
namespace Model
{

  /**
   */
  class RegisterPublisherRequest : public CloudFormationRequest
  {
  public:
    AWS_CLOUDFORMATION_API RegisterPublisherRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RegisterPublisher"; }

    AWS_CLOUDFORMATION_API Aws::String SerializePayload() const override;

  protected:
    AWS_CLOUDFORMATION_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>Whether you accept the <a
     * href="https://cloudformation-registry-documents.s3.amazonaws.com/Terms_and_Conditions_for_AWS_CloudFormation_Registry_Publishers.pdf">Terms
     * and Conditions</a> for publishing extensions in the CloudFormation registry. You
     * must accept the terms and conditions in order to register to publish public
     * extensions to the CloudFormation registry.</p> <p>The default is
     * <code>false</code>.</p>
     */
    inline bool GetAcceptTermsAndConditions() const { return m_acceptTermsAndConditions; }
    inline bool AcceptTermsAndConditionsHasBeenSet() const { return m_acceptTermsAndConditionsHasBeenSet; }
    inline void SetAcceptTermsAndConditions(bool value) { m_acceptTermsAndConditionsHasBeenSet = true; m_acceptTermsAndConditions = value; }
    inline RegisterPublisherRequest& WithAcceptTermsAndConditions(bool value) { SetAcceptTermsAndConditions(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If you are using a Bitbucket or GitHub account for identity verification, the
     * Amazon Resource Name (ARN) for your connection to that account.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/cloudformation-cli/latest/userguide/publish-extension.html#publish-extension-prereqs">Prerequisite:
     * Registering your account to publish CloudFormation extensions</a> in the
     * <i>CloudFormation Command Line Interface (CLI) User Guide</i>.</p>
     */
    inline const Aws::String& GetConnectionArn() const { return m_connectionArn; }
    inline bool ConnectionArnHasBeenSet() const { return m_connectionArnHasBeenSet; }
    template<typename ConnectionArnT = Aws::String>
    void SetConnectionArn(ConnectionArnT&& value) { m_connectionArnHasBeenSet = true; m_connectionArn = std::forward<ConnectionArnT>(value); }
    template<typename ConnectionArnT = Aws::String>
    RegisterPublisherRequest& WithConnectionArn(ConnectionArnT&& value) { SetConnectionArn(std::forward<ConnectionArnT>(value)); return *this;}
    ///@}
  private:

    bool m_acceptTermsAndConditions{false};
    bool m_acceptTermsAndConditionsHasBeenSet = false;

    Aws::String m_connectionArn;
    bool m_connectionArnHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
