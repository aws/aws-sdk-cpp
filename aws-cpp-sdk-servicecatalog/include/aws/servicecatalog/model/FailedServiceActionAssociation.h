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
#include <aws/servicecatalog/ServiceCatalog_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/servicecatalog/model/ServiceActionAssociationErrorCode.h>
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
namespace ServiceCatalog
{
namespace Model
{

  /**
   * <p>An object containing information about the error, along with identifying
   * information about the self-service action and its associations.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/FailedServiceActionAssociation">AWS
   * API Reference</a></p>
   */
  class AWS_SERVICECATALOG_API FailedServiceActionAssociation
  {
  public:
    FailedServiceActionAssociation();
    FailedServiceActionAssociation(Aws::Utils::Json::JsonView jsonValue);
    FailedServiceActionAssociation& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The self-service action identifier. For example,
     * <code>act-fs7abcd89wxyz</code>.</p>
     */
    inline const Aws::String& GetServiceActionId() const{ return m_serviceActionId; }

    /**
     * <p>The self-service action identifier. For example,
     * <code>act-fs7abcd89wxyz</code>.</p>
     */
    inline bool ServiceActionIdHasBeenSet() const { return m_serviceActionIdHasBeenSet; }

    /**
     * <p>The self-service action identifier. For example,
     * <code>act-fs7abcd89wxyz</code>.</p>
     */
    inline void SetServiceActionId(const Aws::String& value) { m_serviceActionIdHasBeenSet = true; m_serviceActionId = value; }

    /**
     * <p>The self-service action identifier. For example,
     * <code>act-fs7abcd89wxyz</code>.</p>
     */
    inline void SetServiceActionId(Aws::String&& value) { m_serviceActionIdHasBeenSet = true; m_serviceActionId = std::move(value); }

    /**
     * <p>The self-service action identifier. For example,
     * <code>act-fs7abcd89wxyz</code>.</p>
     */
    inline void SetServiceActionId(const char* value) { m_serviceActionIdHasBeenSet = true; m_serviceActionId.assign(value); }

    /**
     * <p>The self-service action identifier. For example,
     * <code>act-fs7abcd89wxyz</code>.</p>
     */
    inline FailedServiceActionAssociation& WithServiceActionId(const Aws::String& value) { SetServiceActionId(value); return *this;}

    /**
     * <p>The self-service action identifier. For example,
     * <code>act-fs7abcd89wxyz</code>.</p>
     */
    inline FailedServiceActionAssociation& WithServiceActionId(Aws::String&& value) { SetServiceActionId(std::move(value)); return *this;}

    /**
     * <p>The self-service action identifier. For example,
     * <code>act-fs7abcd89wxyz</code>.</p>
     */
    inline FailedServiceActionAssociation& WithServiceActionId(const char* value) { SetServiceActionId(value); return *this;}


    /**
     * <p>The product identifier. For example, <code>prod-abcdzk7xy33qa</code>.</p>
     */
    inline const Aws::String& GetProductId() const{ return m_productId; }

    /**
     * <p>The product identifier. For example, <code>prod-abcdzk7xy33qa</code>.</p>
     */
    inline bool ProductIdHasBeenSet() const { return m_productIdHasBeenSet; }

    /**
     * <p>The product identifier. For example, <code>prod-abcdzk7xy33qa</code>.</p>
     */
    inline void SetProductId(const Aws::String& value) { m_productIdHasBeenSet = true; m_productId = value; }

    /**
     * <p>The product identifier. For example, <code>prod-abcdzk7xy33qa</code>.</p>
     */
    inline void SetProductId(Aws::String&& value) { m_productIdHasBeenSet = true; m_productId = std::move(value); }

    /**
     * <p>The product identifier. For example, <code>prod-abcdzk7xy33qa</code>.</p>
     */
    inline void SetProductId(const char* value) { m_productIdHasBeenSet = true; m_productId.assign(value); }

    /**
     * <p>The product identifier. For example, <code>prod-abcdzk7xy33qa</code>.</p>
     */
    inline FailedServiceActionAssociation& WithProductId(const Aws::String& value) { SetProductId(value); return *this;}

    /**
     * <p>The product identifier. For example, <code>prod-abcdzk7xy33qa</code>.</p>
     */
    inline FailedServiceActionAssociation& WithProductId(Aws::String&& value) { SetProductId(std::move(value)); return *this;}

    /**
     * <p>The product identifier. For example, <code>prod-abcdzk7xy33qa</code>.</p>
     */
    inline FailedServiceActionAssociation& WithProductId(const char* value) { SetProductId(value); return *this;}


    /**
     * <p>The identifier of the provisioning artifact. For example,
     * <code>pa-4abcdjnxjj6ne</code>.</p>
     */
    inline const Aws::String& GetProvisioningArtifactId() const{ return m_provisioningArtifactId; }

    /**
     * <p>The identifier of the provisioning artifact. For example,
     * <code>pa-4abcdjnxjj6ne</code>.</p>
     */
    inline bool ProvisioningArtifactIdHasBeenSet() const { return m_provisioningArtifactIdHasBeenSet; }

    /**
     * <p>The identifier of the provisioning artifact. For example,
     * <code>pa-4abcdjnxjj6ne</code>.</p>
     */
    inline void SetProvisioningArtifactId(const Aws::String& value) { m_provisioningArtifactIdHasBeenSet = true; m_provisioningArtifactId = value; }

    /**
     * <p>The identifier of the provisioning artifact. For example,
     * <code>pa-4abcdjnxjj6ne</code>.</p>
     */
    inline void SetProvisioningArtifactId(Aws::String&& value) { m_provisioningArtifactIdHasBeenSet = true; m_provisioningArtifactId = std::move(value); }

    /**
     * <p>The identifier of the provisioning artifact. For example,
     * <code>pa-4abcdjnxjj6ne</code>.</p>
     */
    inline void SetProvisioningArtifactId(const char* value) { m_provisioningArtifactIdHasBeenSet = true; m_provisioningArtifactId.assign(value); }

    /**
     * <p>The identifier of the provisioning artifact. For example,
     * <code>pa-4abcdjnxjj6ne</code>.</p>
     */
    inline FailedServiceActionAssociation& WithProvisioningArtifactId(const Aws::String& value) { SetProvisioningArtifactId(value); return *this;}

    /**
     * <p>The identifier of the provisioning artifact. For example,
     * <code>pa-4abcdjnxjj6ne</code>.</p>
     */
    inline FailedServiceActionAssociation& WithProvisioningArtifactId(Aws::String&& value) { SetProvisioningArtifactId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the provisioning artifact. For example,
     * <code>pa-4abcdjnxjj6ne</code>.</p>
     */
    inline FailedServiceActionAssociation& WithProvisioningArtifactId(const char* value) { SetProvisioningArtifactId(value); return *this;}


    /**
     * <p>The error code. Valid values are listed below.</p>
     */
    inline const ServiceActionAssociationErrorCode& GetErrorCode() const{ return m_errorCode; }

    /**
     * <p>The error code. Valid values are listed below.</p>
     */
    inline bool ErrorCodeHasBeenSet() const { return m_errorCodeHasBeenSet; }

    /**
     * <p>The error code. Valid values are listed below.</p>
     */
    inline void SetErrorCode(const ServiceActionAssociationErrorCode& value) { m_errorCodeHasBeenSet = true; m_errorCode = value; }

    /**
     * <p>The error code. Valid values are listed below.</p>
     */
    inline void SetErrorCode(ServiceActionAssociationErrorCode&& value) { m_errorCodeHasBeenSet = true; m_errorCode = std::move(value); }

    /**
     * <p>The error code. Valid values are listed below.</p>
     */
    inline FailedServiceActionAssociation& WithErrorCode(const ServiceActionAssociationErrorCode& value) { SetErrorCode(value); return *this;}

    /**
     * <p>The error code. Valid values are listed below.</p>
     */
    inline FailedServiceActionAssociation& WithErrorCode(ServiceActionAssociationErrorCode&& value) { SetErrorCode(std::move(value)); return *this;}


    /**
     * <p>A text description of the error.</p>
     */
    inline const Aws::String& GetErrorMessage() const{ return m_errorMessage; }

    /**
     * <p>A text description of the error.</p>
     */
    inline bool ErrorMessageHasBeenSet() const { return m_errorMessageHasBeenSet; }

    /**
     * <p>A text description of the error.</p>
     */
    inline void SetErrorMessage(const Aws::String& value) { m_errorMessageHasBeenSet = true; m_errorMessage = value; }

    /**
     * <p>A text description of the error.</p>
     */
    inline void SetErrorMessage(Aws::String&& value) { m_errorMessageHasBeenSet = true; m_errorMessage = std::move(value); }

    /**
     * <p>A text description of the error.</p>
     */
    inline void SetErrorMessage(const char* value) { m_errorMessageHasBeenSet = true; m_errorMessage.assign(value); }

    /**
     * <p>A text description of the error.</p>
     */
    inline FailedServiceActionAssociation& WithErrorMessage(const Aws::String& value) { SetErrorMessage(value); return *this;}

    /**
     * <p>A text description of the error.</p>
     */
    inline FailedServiceActionAssociation& WithErrorMessage(Aws::String&& value) { SetErrorMessage(std::move(value)); return *this;}

    /**
     * <p>A text description of the error.</p>
     */
    inline FailedServiceActionAssociation& WithErrorMessage(const char* value) { SetErrorMessage(value); return *this;}

  private:

    Aws::String m_serviceActionId;
    bool m_serviceActionIdHasBeenSet;

    Aws::String m_productId;
    bool m_productIdHasBeenSet;

    Aws::String m_provisioningArtifactId;
    bool m_provisioningArtifactIdHasBeenSet;

    ServiceActionAssociationErrorCode m_errorCode;
    bool m_errorCodeHasBeenSet;

    Aws::String m_errorMessage;
    bool m_errorMessageHasBeenSet;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
