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


    /**
     * <p>Amazon Resource Name (ARN) of the resource.</p>
     */
    inline const Aws::String& GetResourceArn() const{ return m_resourceArn; }

    /**
     * <p>Amazon Resource Name (ARN) of the resource.</p>
     */
    inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }

    /**
     * <p>Amazon Resource Name (ARN) of the resource.</p>
     */
    inline void SetResourceArn(const Aws::String& value) { m_resourceArnHasBeenSet = true; m_resourceArn = value; }

    /**
     * <p>Amazon Resource Name (ARN) of the resource.</p>
     */
    inline void SetResourceArn(Aws::String&& value) { m_resourceArnHasBeenSet = true; m_resourceArn = std::move(value); }

    /**
     * <p>Amazon Resource Name (ARN) of the resource.</p>
     */
    inline void SetResourceArn(const char* value) { m_resourceArnHasBeenSet = true; m_resourceArn.assign(value); }

    /**
     * <p>Amazon Resource Name (ARN) of the resource.</p>
     */
    inline LicenseOperationFailure& WithResourceArn(const Aws::String& value) { SetResourceArn(value); return *this;}

    /**
     * <p>Amazon Resource Name (ARN) of the resource.</p>
     */
    inline LicenseOperationFailure& WithResourceArn(Aws::String&& value) { SetResourceArn(std::move(value)); return *this;}

    /**
     * <p>Amazon Resource Name (ARN) of the resource.</p>
     */
    inline LicenseOperationFailure& WithResourceArn(const char* value) { SetResourceArn(value); return *this;}


    /**
     * <p>Resource type.</p>
     */
    inline const ResourceType& GetResourceType() const{ return m_resourceType; }

    /**
     * <p>Resource type.</p>
     */
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }

    /**
     * <p>Resource type.</p>
     */
    inline void SetResourceType(const ResourceType& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }

    /**
     * <p>Resource type.</p>
     */
    inline void SetResourceType(ResourceType&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }

    /**
     * <p>Resource type.</p>
     */
    inline LicenseOperationFailure& WithResourceType(const ResourceType& value) { SetResourceType(value); return *this;}

    /**
     * <p>Resource type.</p>
     */
    inline LicenseOperationFailure& WithResourceType(ResourceType&& value) { SetResourceType(std::move(value)); return *this;}


    /**
     * <p>Error message.</p>
     */
    inline const Aws::String& GetErrorMessage() const{ return m_errorMessage; }

    /**
     * <p>Error message.</p>
     */
    inline bool ErrorMessageHasBeenSet() const { return m_errorMessageHasBeenSet; }

    /**
     * <p>Error message.</p>
     */
    inline void SetErrorMessage(const Aws::String& value) { m_errorMessageHasBeenSet = true; m_errorMessage = value; }

    /**
     * <p>Error message.</p>
     */
    inline void SetErrorMessage(Aws::String&& value) { m_errorMessageHasBeenSet = true; m_errorMessage = std::move(value); }

    /**
     * <p>Error message.</p>
     */
    inline void SetErrorMessage(const char* value) { m_errorMessageHasBeenSet = true; m_errorMessage.assign(value); }

    /**
     * <p>Error message.</p>
     */
    inline LicenseOperationFailure& WithErrorMessage(const Aws::String& value) { SetErrorMessage(value); return *this;}

    /**
     * <p>Error message.</p>
     */
    inline LicenseOperationFailure& WithErrorMessage(Aws::String&& value) { SetErrorMessage(std::move(value)); return *this;}

    /**
     * <p>Error message.</p>
     */
    inline LicenseOperationFailure& WithErrorMessage(const char* value) { SetErrorMessage(value); return *this;}


    /**
     * <p>Failure time.</p>
     */
    inline const Aws::Utils::DateTime& GetFailureTime() const{ return m_failureTime; }

    /**
     * <p>Failure time.</p>
     */
    inline bool FailureTimeHasBeenSet() const { return m_failureTimeHasBeenSet; }

    /**
     * <p>Failure time.</p>
     */
    inline void SetFailureTime(const Aws::Utils::DateTime& value) { m_failureTimeHasBeenSet = true; m_failureTime = value; }

    /**
     * <p>Failure time.</p>
     */
    inline void SetFailureTime(Aws::Utils::DateTime&& value) { m_failureTimeHasBeenSet = true; m_failureTime = std::move(value); }

    /**
     * <p>Failure time.</p>
     */
    inline LicenseOperationFailure& WithFailureTime(const Aws::Utils::DateTime& value) { SetFailureTime(value); return *this;}

    /**
     * <p>Failure time.</p>
     */
    inline LicenseOperationFailure& WithFailureTime(Aws::Utils::DateTime&& value) { SetFailureTime(std::move(value)); return *this;}


    /**
     * <p>Name of the operation.</p>
     */
    inline const Aws::String& GetOperationName() const{ return m_operationName; }

    /**
     * <p>Name of the operation.</p>
     */
    inline bool OperationNameHasBeenSet() const { return m_operationNameHasBeenSet; }

    /**
     * <p>Name of the operation.</p>
     */
    inline void SetOperationName(const Aws::String& value) { m_operationNameHasBeenSet = true; m_operationName = value; }

    /**
     * <p>Name of the operation.</p>
     */
    inline void SetOperationName(Aws::String&& value) { m_operationNameHasBeenSet = true; m_operationName = std::move(value); }

    /**
     * <p>Name of the operation.</p>
     */
    inline void SetOperationName(const char* value) { m_operationNameHasBeenSet = true; m_operationName.assign(value); }

    /**
     * <p>Name of the operation.</p>
     */
    inline LicenseOperationFailure& WithOperationName(const Aws::String& value) { SetOperationName(value); return *this;}

    /**
     * <p>Name of the operation.</p>
     */
    inline LicenseOperationFailure& WithOperationName(Aws::String&& value) { SetOperationName(std::move(value)); return *this;}

    /**
     * <p>Name of the operation.</p>
     */
    inline LicenseOperationFailure& WithOperationName(const char* value) { SetOperationName(value); return *this;}


    /**
     * <p>ID of the Amazon Web Services account that owns the resource.</p>
     */
    inline const Aws::String& GetResourceOwnerId() const{ return m_resourceOwnerId; }

    /**
     * <p>ID of the Amazon Web Services account that owns the resource.</p>
     */
    inline bool ResourceOwnerIdHasBeenSet() const { return m_resourceOwnerIdHasBeenSet; }

    /**
     * <p>ID of the Amazon Web Services account that owns the resource.</p>
     */
    inline void SetResourceOwnerId(const Aws::String& value) { m_resourceOwnerIdHasBeenSet = true; m_resourceOwnerId = value; }

    /**
     * <p>ID of the Amazon Web Services account that owns the resource.</p>
     */
    inline void SetResourceOwnerId(Aws::String&& value) { m_resourceOwnerIdHasBeenSet = true; m_resourceOwnerId = std::move(value); }

    /**
     * <p>ID of the Amazon Web Services account that owns the resource.</p>
     */
    inline void SetResourceOwnerId(const char* value) { m_resourceOwnerIdHasBeenSet = true; m_resourceOwnerId.assign(value); }

    /**
     * <p>ID of the Amazon Web Services account that owns the resource.</p>
     */
    inline LicenseOperationFailure& WithResourceOwnerId(const Aws::String& value) { SetResourceOwnerId(value); return *this;}

    /**
     * <p>ID of the Amazon Web Services account that owns the resource.</p>
     */
    inline LicenseOperationFailure& WithResourceOwnerId(Aws::String&& value) { SetResourceOwnerId(std::move(value)); return *this;}

    /**
     * <p>ID of the Amazon Web Services account that owns the resource.</p>
     */
    inline LicenseOperationFailure& WithResourceOwnerId(const char* value) { SetResourceOwnerId(value); return *this;}


    /**
     * <p>The requester is "License Manager Automated Discovery".</p>
     */
    inline const Aws::String& GetOperationRequestedBy() const{ return m_operationRequestedBy; }

    /**
     * <p>The requester is "License Manager Automated Discovery".</p>
     */
    inline bool OperationRequestedByHasBeenSet() const { return m_operationRequestedByHasBeenSet; }

    /**
     * <p>The requester is "License Manager Automated Discovery".</p>
     */
    inline void SetOperationRequestedBy(const Aws::String& value) { m_operationRequestedByHasBeenSet = true; m_operationRequestedBy = value; }

    /**
     * <p>The requester is "License Manager Automated Discovery".</p>
     */
    inline void SetOperationRequestedBy(Aws::String&& value) { m_operationRequestedByHasBeenSet = true; m_operationRequestedBy = std::move(value); }

    /**
     * <p>The requester is "License Manager Automated Discovery".</p>
     */
    inline void SetOperationRequestedBy(const char* value) { m_operationRequestedByHasBeenSet = true; m_operationRequestedBy.assign(value); }

    /**
     * <p>The requester is "License Manager Automated Discovery".</p>
     */
    inline LicenseOperationFailure& WithOperationRequestedBy(const Aws::String& value) { SetOperationRequestedBy(value); return *this;}

    /**
     * <p>The requester is "License Manager Automated Discovery".</p>
     */
    inline LicenseOperationFailure& WithOperationRequestedBy(Aws::String&& value) { SetOperationRequestedBy(std::move(value)); return *this;}

    /**
     * <p>The requester is "License Manager Automated Discovery".</p>
     */
    inline LicenseOperationFailure& WithOperationRequestedBy(const char* value) { SetOperationRequestedBy(value); return *this;}


    /**
     * <p>Reserved.</p>
     */
    inline const Aws::Vector<Metadata>& GetMetadataList() const{ return m_metadataList; }

    /**
     * <p>Reserved.</p>
     */
    inline bool MetadataListHasBeenSet() const { return m_metadataListHasBeenSet; }

    /**
     * <p>Reserved.</p>
     */
    inline void SetMetadataList(const Aws::Vector<Metadata>& value) { m_metadataListHasBeenSet = true; m_metadataList = value; }

    /**
     * <p>Reserved.</p>
     */
    inline void SetMetadataList(Aws::Vector<Metadata>&& value) { m_metadataListHasBeenSet = true; m_metadataList = std::move(value); }

    /**
     * <p>Reserved.</p>
     */
    inline LicenseOperationFailure& WithMetadataList(const Aws::Vector<Metadata>& value) { SetMetadataList(value); return *this;}

    /**
     * <p>Reserved.</p>
     */
    inline LicenseOperationFailure& WithMetadataList(Aws::Vector<Metadata>&& value) { SetMetadataList(std::move(value)); return *this;}

    /**
     * <p>Reserved.</p>
     */
    inline LicenseOperationFailure& AddMetadataList(const Metadata& value) { m_metadataListHasBeenSet = true; m_metadataList.push_back(value); return *this; }

    /**
     * <p>Reserved.</p>
     */
    inline LicenseOperationFailure& AddMetadataList(Metadata&& value) { m_metadataListHasBeenSet = true; m_metadataList.push_back(std::move(value)); return *this; }

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
