/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/license-manager/LicenseManager_EXPORTS.h>
#include <aws/license-manager/model/ReceivedStatus.h>
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
  class AWS_LICENSEMANAGER_API ReceivedMetadata
  {
  public:
    ReceivedMetadata();
    ReceivedMetadata(Aws::Utils::Json::JsonView jsonValue);
    ReceivedMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Received status.</p>
     */
    inline const ReceivedStatus& GetReceivedStatus() const{ return m_receivedStatus; }

    /**
     * <p>Received status.</p>
     */
    inline bool ReceivedStatusHasBeenSet() const { return m_receivedStatusHasBeenSet; }

    /**
     * <p>Received status.</p>
     */
    inline void SetReceivedStatus(const ReceivedStatus& value) { m_receivedStatusHasBeenSet = true; m_receivedStatus = value; }

    /**
     * <p>Received status.</p>
     */
    inline void SetReceivedStatus(ReceivedStatus&& value) { m_receivedStatusHasBeenSet = true; m_receivedStatus = std::move(value); }

    /**
     * <p>Received status.</p>
     */
    inline ReceivedMetadata& WithReceivedStatus(const ReceivedStatus& value) { SetReceivedStatus(value); return *this;}

    /**
     * <p>Received status.</p>
     */
    inline ReceivedMetadata& WithReceivedStatus(ReceivedStatus&& value) { SetReceivedStatus(std::move(value)); return *this;}


    /**
     * <p>Allowed operations.</p>
     */
    inline const Aws::Vector<AllowedOperation>& GetAllowedOperations() const{ return m_allowedOperations; }

    /**
     * <p>Allowed operations.</p>
     */
    inline bool AllowedOperationsHasBeenSet() const { return m_allowedOperationsHasBeenSet; }

    /**
     * <p>Allowed operations.</p>
     */
    inline void SetAllowedOperations(const Aws::Vector<AllowedOperation>& value) { m_allowedOperationsHasBeenSet = true; m_allowedOperations = value; }

    /**
     * <p>Allowed operations.</p>
     */
    inline void SetAllowedOperations(Aws::Vector<AllowedOperation>&& value) { m_allowedOperationsHasBeenSet = true; m_allowedOperations = std::move(value); }

    /**
     * <p>Allowed operations.</p>
     */
    inline ReceivedMetadata& WithAllowedOperations(const Aws::Vector<AllowedOperation>& value) { SetAllowedOperations(value); return *this;}

    /**
     * <p>Allowed operations.</p>
     */
    inline ReceivedMetadata& WithAllowedOperations(Aws::Vector<AllowedOperation>&& value) { SetAllowedOperations(std::move(value)); return *this;}

    /**
     * <p>Allowed operations.</p>
     */
    inline ReceivedMetadata& AddAllowedOperations(const AllowedOperation& value) { m_allowedOperationsHasBeenSet = true; m_allowedOperations.push_back(value); return *this; }

    /**
     * <p>Allowed operations.</p>
     */
    inline ReceivedMetadata& AddAllowedOperations(AllowedOperation&& value) { m_allowedOperationsHasBeenSet = true; m_allowedOperations.push_back(std::move(value)); return *this; }

  private:

    ReceivedStatus m_receivedStatus;
    bool m_receivedStatusHasBeenSet;

    Aws::Vector<AllowedOperation> m_allowedOperations;
    bool m_allowedOperationsHasBeenSet;
  };

} // namespace Model
} // namespace LicenseManager
} // namespace Aws
