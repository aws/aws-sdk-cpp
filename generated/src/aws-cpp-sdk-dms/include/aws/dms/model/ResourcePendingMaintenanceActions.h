/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dms/DatabaseMigrationService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/dms/model/PendingMaintenanceAction.h>
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
namespace DatabaseMigrationService
{
namespace Model
{

  /**
   * <p>Identifies an DMS resource and any pending actions for it.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/ResourcePendingMaintenanceActions">AWS
   * API Reference</a></p>
   */
  class ResourcePendingMaintenanceActions
  {
  public:
    AWS_DATABASEMIGRATIONSERVICE_API ResourcePendingMaintenanceActions();
    AWS_DATABASEMIGRATIONSERVICE_API ResourcePendingMaintenanceActions(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATABASEMIGRATIONSERVICE_API ResourcePendingMaintenanceActions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATABASEMIGRATIONSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of the DMS resource that the pending
     * maintenance action applies to. For information about creating an ARN, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Introduction.AWS.ARN.html">
     * Constructing an Amazon Resource Name (ARN) for DMS</a> in the DMS
     * documentation.</p>
     */
    inline const Aws::String& GetResourceIdentifier() const{ return m_resourceIdentifier; }

    /**
     * <p>The Amazon Resource Name (ARN) of the DMS resource that the pending
     * maintenance action applies to. For information about creating an ARN, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Introduction.AWS.ARN.html">
     * Constructing an Amazon Resource Name (ARN) for DMS</a> in the DMS
     * documentation.</p>
     */
    inline bool ResourceIdentifierHasBeenSet() const { return m_resourceIdentifierHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the DMS resource that the pending
     * maintenance action applies to. For information about creating an ARN, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Introduction.AWS.ARN.html">
     * Constructing an Amazon Resource Name (ARN) for DMS</a> in the DMS
     * documentation.</p>
     */
    inline void SetResourceIdentifier(const Aws::String& value) { m_resourceIdentifierHasBeenSet = true; m_resourceIdentifier = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the DMS resource that the pending
     * maintenance action applies to. For information about creating an ARN, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Introduction.AWS.ARN.html">
     * Constructing an Amazon Resource Name (ARN) for DMS</a> in the DMS
     * documentation.</p>
     */
    inline void SetResourceIdentifier(Aws::String&& value) { m_resourceIdentifierHasBeenSet = true; m_resourceIdentifier = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the DMS resource that the pending
     * maintenance action applies to. For information about creating an ARN, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Introduction.AWS.ARN.html">
     * Constructing an Amazon Resource Name (ARN) for DMS</a> in the DMS
     * documentation.</p>
     */
    inline void SetResourceIdentifier(const char* value) { m_resourceIdentifierHasBeenSet = true; m_resourceIdentifier.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the DMS resource that the pending
     * maintenance action applies to. For information about creating an ARN, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Introduction.AWS.ARN.html">
     * Constructing an Amazon Resource Name (ARN) for DMS</a> in the DMS
     * documentation.</p>
     */
    inline ResourcePendingMaintenanceActions& WithResourceIdentifier(const Aws::String& value) { SetResourceIdentifier(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the DMS resource that the pending
     * maintenance action applies to. For information about creating an ARN, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Introduction.AWS.ARN.html">
     * Constructing an Amazon Resource Name (ARN) for DMS</a> in the DMS
     * documentation.</p>
     */
    inline ResourcePendingMaintenanceActions& WithResourceIdentifier(Aws::String&& value) { SetResourceIdentifier(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the DMS resource that the pending
     * maintenance action applies to. For information about creating an ARN, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Introduction.AWS.ARN.html">
     * Constructing an Amazon Resource Name (ARN) for DMS</a> in the DMS
     * documentation.</p>
     */
    inline ResourcePendingMaintenanceActions& WithResourceIdentifier(const char* value) { SetResourceIdentifier(value); return *this;}


    /**
     * <p>Detailed information about the pending maintenance action.</p>
     */
    inline const Aws::Vector<PendingMaintenanceAction>& GetPendingMaintenanceActionDetails() const{ return m_pendingMaintenanceActionDetails; }

    /**
     * <p>Detailed information about the pending maintenance action.</p>
     */
    inline bool PendingMaintenanceActionDetailsHasBeenSet() const { return m_pendingMaintenanceActionDetailsHasBeenSet; }

    /**
     * <p>Detailed information about the pending maintenance action.</p>
     */
    inline void SetPendingMaintenanceActionDetails(const Aws::Vector<PendingMaintenanceAction>& value) { m_pendingMaintenanceActionDetailsHasBeenSet = true; m_pendingMaintenanceActionDetails = value; }

    /**
     * <p>Detailed information about the pending maintenance action.</p>
     */
    inline void SetPendingMaintenanceActionDetails(Aws::Vector<PendingMaintenanceAction>&& value) { m_pendingMaintenanceActionDetailsHasBeenSet = true; m_pendingMaintenanceActionDetails = std::move(value); }

    /**
     * <p>Detailed information about the pending maintenance action.</p>
     */
    inline ResourcePendingMaintenanceActions& WithPendingMaintenanceActionDetails(const Aws::Vector<PendingMaintenanceAction>& value) { SetPendingMaintenanceActionDetails(value); return *this;}

    /**
     * <p>Detailed information about the pending maintenance action.</p>
     */
    inline ResourcePendingMaintenanceActions& WithPendingMaintenanceActionDetails(Aws::Vector<PendingMaintenanceAction>&& value) { SetPendingMaintenanceActionDetails(std::move(value)); return *this;}

    /**
     * <p>Detailed information about the pending maintenance action.</p>
     */
    inline ResourcePendingMaintenanceActions& AddPendingMaintenanceActionDetails(const PendingMaintenanceAction& value) { m_pendingMaintenanceActionDetailsHasBeenSet = true; m_pendingMaintenanceActionDetails.push_back(value); return *this; }

    /**
     * <p>Detailed information about the pending maintenance action.</p>
     */
    inline ResourcePendingMaintenanceActions& AddPendingMaintenanceActionDetails(PendingMaintenanceAction&& value) { m_pendingMaintenanceActionDetailsHasBeenSet = true; m_pendingMaintenanceActionDetails.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_resourceIdentifier;
    bool m_resourceIdentifierHasBeenSet = false;

    Aws::Vector<PendingMaintenanceAction> m_pendingMaintenanceActionDetails;
    bool m_pendingMaintenanceActionDetailsHasBeenSet = false;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
