/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/license-manager/LicenseManager_EXPORTS.h>
#include <aws/license-manager/model/ReceivedStatus.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/license-manager/model/AllowedOperation.h>
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
   * <p>Metadata associated with received licenses and grants.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-2018-08-01/ReceivedMetadata">AWS
   * API Reference</a></p>
   */
  class ReceivedMetadata
  {
  public:
    AWS_LICENSEMANAGER_API ReceivedMetadata() = default;
    AWS_LICENSEMANAGER_API ReceivedMetadata(Aws::Utils::Json::JsonView jsonValue);
    AWS_LICENSEMANAGER_API ReceivedMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LICENSEMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Received status.</p>
     */
    inline ReceivedStatus GetReceivedStatus() const { return m_receivedStatus; }
    inline bool ReceivedStatusHasBeenSet() const { return m_receivedStatusHasBeenSet; }
    inline void SetReceivedStatus(ReceivedStatus value) { m_receivedStatusHasBeenSet = true; m_receivedStatus = value; }
    inline ReceivedMetadata& WithReceivedStatus(ReceivedStatus value) { SetReceivedStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Received status reason.</p>
     */
    inline const Aws::String& GetReceivedStatusReason() const { return m_receivedStatusReason; }
    inline bool ReceivedStatusReasonHasBeenSet() const { return m_receivedStatusReasonHasBeenSet; }
    template<typename ReceivedStatusReasonT = Aws::String>
    void SetReceivedStatusReason(ReceivedStatusReasonT&& value) { m_receivedStatusReasonHasBeenSet = true; m_receivedStatusReason = std::forward<ReceivedStatusReasonT>(value); }
    template<typename ReceivedStatusReasonT = Aws::String>
    ReceivedMetadata& WithReceivedStatusReason(ReceivedStatusReasonT&& value) { SetReceivedStatusReason(std::forward<ReceivedStatusReasonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Allowed operations.</p>
     */
    inline const Aws::Vector<AllowedOperation>& GetAllowedOperations() const { return m_allowedOperations; }
    inline bool AllowedOperationsHasBeenSet() const { return m_allowedOperationsHasBeenSet; }
    template<typename AllowedOperationsT = Aws::Vector<AllowedOperation>>
    void SetAllowedOperations(AllowedOperationsT&& value) { m_allowedOperationsHasBeenSet = true; m_allowedOperations = std::forward<AllowedOperationsT>(value); }
    template<typename AllowedOperationsT = Aws::Vector<AllowedOperation>>
    ReceivedMetadata& WithAllowedOperations(AllowedOperationsT&& value) { SetAllowedOperations(std::forward<AllowedOperationsT>(value)); return *this;}
    inline ReceivedMetadata& AddAllowedOperations(AllowedOperation value) { m_allowedOperationsHasBeenSet = true; m_allowedOperations.push_back(value); return *this; }
    ///@}
  private:

    ReceivedStatus m_receivedStatus{ReceivedStatus::NOT_SET};
    bool m_receivedStatusHasBeenSet = false;

    Aws::String m_receivedStatusReason;
    bool m_receivedStatusReasonHasBeenSet = false;

    Aws::Vector<AllowedOperation> m_allowedOperations;
    bool m_allowedOperationsHasBeenSet = false;
  };

} // namespace Model
} // namespace LicenseManager
} // namespace Aws
