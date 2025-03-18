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
    AWS_LICENSEMANAGER_API LicenseOperationFailure() = default;
    AWS_LICENSEMANAGER_API LicenseOperationFailure(Aws::Utils::Json::JsonView jsonValue);
    AWS_LICENSEMANAGER_API LicenseOperationFailure& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LICENSEMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Amazon Resource Name (ARN) of the resource.</p>
     */
    inline const Aws::String& GetResourceArn() const { return m_resourceArn; }
    inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }
    template<typename ResourceArnT = Aws::String>
    void SetResourceArn(ResourceArnT&& value) { m_resourceArnHasBeenSet = true; m_resourceArn = std::forward<ResourceArnT>(value); }
    template<typename ResourceArnT = Aws::String>
    LicenseOperationFailure& WithResourceArn(ResourceArnT&& value) { SetResourceArn(std::forward<ResourceArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Resource type.</p>
     */
    inline ResourceType GetResourceType() const { return m_resourceType; }
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
    inline void SetResourceType(ResourceType value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }
    inline LicenseOperationFailure& WithResourceType(ResourceType value) { SetResourceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Error message.</p>
     */
    inline const Aws::String& GetErrorMessage() const { return m_errorMessage; }
    inline bool ErrorMessageHasBeenSet() const { return m_errorMessageHasBeenSet; }
    template<typename ErrorMessageT = Aws::String>
    void SetErrorMessage(ErrorMessageT&& value) { m_errorMessageHasBeenSet = true; m_errorMessage = std::forward<ErrorMessageT>(value); }
    template<typename ErrorMessageT = Aws::String>
    LicenseOperationFailure& WithErrorMessage(ErrorMessageT&& value) { SetErrorMessage(std::forward<ErrorMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Failure time.</p>
     */
    inline const Aws::Utils::DateTime& GetFailureTime() const { return m_failureTime; }
    inline bool FailureTimeHasBeenSet() const { return m_failureTimeHasBeenSet; }
    template<typename FailureTimeT = Aws::Utils::DateTime>
    void SetFailureTime(FailureTimeT&& value) { m_failureTimeHasBeenSet = true; m_failureTime = std::forward<FailureTimeT>(value); }
    template<typename FailureTimeT = Aws::Utils::DateTime>
    LicenseOperationFailure& WithFailureTime(FailureTimeT&& value) { SetFailureTime(std::forward<FailureTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Name of the operation.</p>
     */
    inline const Aws::String& GetOperationName() const { return m_operationName; }
    inline bool OperationNameHasBeenSet() const { return m_operationNameHasBeenSet; }
    template<typename OperationNameT = Aws::String>
    void SetOperationName(OperationNameT&& value) { m_operationNameHasBeenSet = true; m_operationName = std::forward<OperationNameT>(value); }
    template<typename OperationNameT = Aws::String>
    LicenseOperationFailure& WithOperationName(OperationNameT&& value) { SetOperationName(std::forward<OperationNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>ID of the Amazon Web Services account that owns the resource.</p>
     */
    inline const Aws::String& GetResourceOwnerId() const { return m_resourceOwnerId; }
    inline bool ResourceOwnerIdHasBeenSet() const { return m_resourceOwnerIdHasBeenSet; }
    template<typename ResourceOwnerIdT = Aws::String>
    void SetResourceOwnerId(ResourceOwnerIdT&& value) { m_resourceOwnerIdHasBeenSet = true; m_resourceOwnerId = std::forward<ResourceOwnerIdT>(value); }
    template<typename ResourceOwnerIdT = Aws::String>
    LicenseOperationFailure& WithResourceOwnerId(ResourceOwnerIdT&& value) { SetResourceOwnerId(std::forward<ResourceOwnerIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The requester is "License Manager Automated Discovery".</p>
     */
    inline const Aws::String& GetOperationRequestedBy() const { return m_operationRequestedBy; }
    inline bool OperationRequestedByHasBeenSet() const { return m_operationRequestedByHasBeenSet; }
    template<typename OperationRequestedByT = Aws::String>
    void SetOperationRequestedBy(OperationRequestedByT&& value) { m_operationRequestedByHasBeenSet = true; m_operationRequestedBy = std::forward<OperationRequestedByT>(value); }
    template<typename OperationRequestedByT = Aws::String>
    LicenseOperationFailure& WithOperationRequestedBy(OperationRequestedByT&& value) { SetOperationRequestedBy(std::forward<OperationRequestedByT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Reserved.</p>
     */
    inline const Aws::Vector<Metadata>& GetMetadataList() const { return m_metadataList; }
    inline bool MetadataListHasBeenSet() const { return m_metadataListHasBeenSet; }
    template<typename MetadataListT = Aws::Vector<Metadata>>
    void SetMetadataList(MetadataListT&& value) { m_metadataListHasBeenSet = true; m_metadataList = std::forward<MetadataListT>(value); }
    template<typename MetadataListT = Aws::Vector<Metadata>>
    LicenseOperationFailure& WithMetadataList(MetadataListT&& value) { SetMetadataList(std::forward<MetadataListT>(value)); return *this;}
    template<typename MetadataListT = Metadata>
    LicenseOperationFailure& AddMetadataList(MetadataListT&& value) { m_metadataListHasBeenSet = true; m_metadataList.emplace_back(std::forward<MetadataListT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_resourceArn;
    bool m_resourceArnHasBeenSet = false;

    ResourceType m_resourceType{ResourceType::NOT_SET};
    bool m_resourceTypeHasBeenSet = false;

    Aws::String m_errorMessage;
    bool m_errorMessageHasBeenSet = false;

    Aws::Utils::DateTime m_failureTime{};
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
