/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/license-manager/LicenseManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/license-manager/model/ResourceType.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/license-manager/model/Metadata.h>
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
namespace LicenseManager
{
namespace Model
{

  /**
   * <p>Describes the failure of a license operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-2018-08-01/LicenseOperationFailure">AWS
   * API Reference</a></p>
   */
  class LicenseOperationFailure
  {
  public:
    AWS_LICENSEMANAGER_API LicenseOperationFailure();
    AWS_LICENSEMANAGER_API LicenseOperationFailure(Aws::Utils::Json::JsonView jsonValue);
    AWS_LICENSEMANAGER_API LicenseOperationFailure& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LICENSEMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Amazon Resource Name (ARN) of the resource.</p>
     */
    inline const Aws::String& GetResourceArn() const{ return m_resourceArn; }
    inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }
    inline void SetResourceArn(const Aws::String& value) { m_resourceArnHasBeenSet = true; m_resourceArn = value; }
    inline void SetResourceArn(Aws::String&& value) { m_resourceArnHasBeenSet = true; m_resourceArn = std::move(value); }
    inline void SetResourceArn(const char* value) { m_resourceArnHasBeenSet = true; m_resourceArn.assign(value); }
    inline LicenseOperationFailure& WithResourceArn(const Aws::String& value) { SetResourceArn(value); return *this;}
    inline LicenseOperationFailure& WithResourceArn(Aws::String&& value) { SetResourceArn(std::move(value)); return *this;}
    inline LicenseOperationFailure& WithResourceArn(const char* value) { SetResourceArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Resource type.</p>
     */
    inline const ResourceType& GetResourceType() const{ return m_resourceType; }
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
    inline void SetResourceType(const ResourceType& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }
    inline void SetResourceType(ResourceType&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }
    inline LicenseOperationFailure& WithResourceType(const ResourceType& value) { SetResourceType(value); return *this;}
    inline LicenseOperationFailure& WithResourceType(ResourceType&& value) { SetResourceType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Error message.</p>
     */
    inline const Aws::String& GetErrorMessage() const{ return m_errorMessage; }
    inline bool ErrorMessageHasBeenSet() const { return m_errorMessageHasBeenSet; }
    inline void SetErrorMessage(const Aws::String& value) { m_errorMessageHasBeenSet = true; m_errorMessage = value; }
    inline void SetErrorMessage(Aws::String&& value) { m_errorMessageHasBeenSet = true; m_errorMessage = std::move(value); }
    inline void SetErrorMessage(const char* value) { m_errorMessageHasBeenSet = true; m_errorMessage.assign(value); }
    inline LicenseOperationFailure& WithErrorMessage(const Aws::String& value) { SetErrorMessage(value); return *this;}
    inline LicenseOperationFailure& WithErrorMessage(Aws::String&& value) { SetErrorMessage(std::move(value)); return *this;}
    inline LicenseOperationFailure& WithErrorMessage(const char* value) { SetErrorMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Failure time.</p>
     */
    inline const Aws::Utils::DateTime& GetFailureTime() const{ return m_failureTime; }
    inline bool FailureTimeHasBeenSet() const { return m_failureTimeHasBeenSet; }
    inline void SetFailureTime(const Aws::Utils::DateTime& value) { m_failureTimeHasBeenSet = true; m_failureTime = value; }
    inline void SetFailureTime(Aws::Utils::DateTime&& value) { m_failureTimeHasBeenSet = true; m_failureTime = std::move(value); }
    inline LicenseOperationFailure& WithFailureTime(const Aws::Utils::DateTime& value) { SetFailureTime(value); return *this;}
    inline LicenseOperationFailure& WithFailureTime(Aws::Utils::DateTime&& value) { SetFailureTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Name of the operation.</p>
     */
    inline const Aws::String& GetOperationName() const{ return m_operationName; }
    inline bool OperationNameHasBeenSet() const { return m_operationNameHasBeenSet; }
    inline void SetOperationName(const Aws::String& value) { m_operationNameHasBeenSet = true; m_operationName = value; }
    inline void SetOperationName(Aws::String&& value) { m_operationNameHasBeenSet = true; m_operationName = std::move(value); }
    inline void SetOperationName(const char* value) { m_operationNameHasBeenSet = true; m_operationName.assign(value); }
    inline LicenseOperationFailure& WithOperationName(const Aws::String& value) { SetOperationName(value); return *this;}
    inline LicenseOperationFailure& WithOperationName(Aws::String&& value) { SetOperationName(std::move(value)); return *this;}
    inline LicenseOperationFailure& WithOperationName(const char* value) { SetOperationName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>ID of the Amazon Web Services account that owns the resource.</p>
     */
    inline const Aws::String& GetResourceOwnerId() const{ return m_resourceOwnerId; }
    inline bool ResourceOwnerIdHasBeenSet() const { return m_resourceOwnerIdHasBeenSet; }
    inline void SetResourceOwnerId(const Aws::String& value) { m_resourceOwnerIdHasBeenSet = true; m_resourceOwnerId = value; }
    inline void SetResourceOwnerId(Aws::String&& value) { m_resourceOwnerIdHasBeenSet = true; m_resourceOwnerId = std::move(value); }
    inline void SetResourceOwnerId(const char* value) { m_resourceOwnerIdHasBeenSet = true; m_resourceOwnerId.assign(value); }
    inline LicenseOperationFailure& WithResourceOwnerId(const Aws::String& value) { SetResourceOwnerId(value); return *this;}
    inline LicenseOperationFailure& WithResourceOwnerId(Aws::String&& value) { SetResourceOwnerId(std::move(value)); return *this;}
    inline LicenseOperationFailure& WithResourceOwnerId(const char* value) { SetResourceOwnerId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The requester is "License Manager Automated Discovery".</p>
     */
    inline const Aws::String& GetOperationRequestedBy() const{ return m_operationRequestedBy; }
    inline bool OperationRequestedByHasBeenSet() const { return m_operationRequestedByHasBeenSet; }
    inline void SetOperationRequestedBy(const Aws::String& value) { m_operationRequestedByHasBeenSet = true; m_operationRequestedBy = value; }
    inline void SetOperationRequestedBy(Aws::String&& value) { m_operationRequestedByHasBeenSet = true; m_operationRequestedBy = std::move(value); }
    inline void SetOperationRequestedBy(const char* value) { m_operationRequestedByHasBeenSet = true; m_operationRequestedBy.assign(value); }
    inline LicenseOperationFailure& WithOperationRequestedBy(const Aws::String& value) { SetOperationRequestedBy(value); return *this;}
    inline LicenseOperationFailure& WithOperationRequestedBy(Aws::String&& value) { SetOperationRequestedBy(std::move(value)); return *this;}
    inline LicenseOperationFailure& WithOperationRequestedBy(const char* value) { SetOperationRequestedBy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Reserved.</p>
     */
    inline const Aws::Vector<Metadata>& GetMetadataList() const{ return m_metadataList; }
    inline bool MetadataListHasBeenSet() const { return m_metadataListHasBeenSet; }
    inline void SetMetadataList(const Aws::Vector<Metadata>& value) { m_metadataListHasBeenSet = true; m_metadataList = value; }
    inline void SetMetadataList(Aws::Vector<Metadata>&& value) { m_metadataListHasBeenSet = true; m_metadataList = std::move(value); }
    inline LicenseOperationFailure& WithMetadataList(const Aws::Vector<Metadata>& value) { SetMetadataList(value); return *this;}
    inline LicenseOperationFailure& WithMetadataList(Aws::Vector<Metadata>&& value) { SetMetadataList(std::move(value)); return *this;}
    inline LicenseOperationFailure& AddMetadataList(const Metadata& value) { m_metadataListHasBeenSet = true; m_metadataList.push_back(value); return *this; }
    inline LicenseOperationFailure& AddMetadataList(Metadata&& value) { m_metadataListHasBeenSet = true; m_metadataList.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_resourceArn;
    bool m_resourceArnHasBeenSet = false;

    ResourceType m_resourceType;
    bool m_resourceTypeHasBeenSet = false;

    Aws::String m_errorMessage;
    bool m_errorMessageHasBeenSet = false;

    Aws::Utils::DateTime m_failureTime;
    bool m_failureTimeHasBeenSet = false;

    Aws::String m_operationName;
    bool m_operationNameHasBeenSet = false;

    Aws::String m_resourceOwnerId;
    bool m_resourceOwnerIdHasBeenSet = false;

    Aws::String m_operationRequestedBy;
    bool m_operationRequestedByHasBeenSet = false;

    Aws::Vector<Metadata> m_metadataList;
    bool m_metadataListHasBeenSet = false;
  };

} // namespace Model
} // namespace LicenseManager
} // namespace Aws
