/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/docdb/DocDB_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/docdb/model/PendingMaintenanceAction.h>
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
namespace DocDB
{
namespace Model
{

  /**
   * <p>Represents the output of <a>ApplyPendingMaintenanceAction</a>. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/docdb-2014-10-31/ResourcePendingMaintenanceActions">AWS
   * API Reference</a></p>
   */
  class ResourcePendingMaintenanceActions
  {
  public:
    AWS_DOCDB_API ResourcePendingMaintenanceActions();
    AWS_DOCDB_API ResourcePendingMaintenanceActions(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_DOCDB_API ResourcePendingMaintenanceActions& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_DOCDB_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_DOCDB_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The Amazon Resource Name (ARN) of the resource that has pending maintenance
     * actions.</p>
     */
    inline const Aws::String& GetResourceIdentifier() const{ return m_resourceIdentifier; }

    /**
     * <p>The Amazon Resource Name (ARN) of the resource that has pending maintenance
     * actions.</p>
     */
    inline bool ResourceIdentifierHasBeenSet() const { return m_resourceIdentifierHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the resource that has pending maintenance
     * actions.</p>
     */
    inline void SetResourceIdentifier(const Aws::String& value) { m_resourceIdentifierHasBeenSet = true; m_resourceIdentifier = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the resource that has pending maintenance
     * actions.</p>
     */
    inline void SetResourceIdentifier(Aws::String&& value) { m_resourceIdentifierHasBeenSet = true; m_resourceIdentifier = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the resource that has pending maintenance
     * actions.</p>
     */
    inline void SetResourceIdentifier(const char* value) { m_resourceIdentifierHasBeenSet = true; m_resourceIdentifier.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the resource that has pending maintenance
     * actions.</p>
     */
    inline ResourcePendingMaintenanceActions& WithResourceIdentifier(const Aws::String& value) { SetResourceIdentifier(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the resource that has pending maintenance
     * actions.</p>
     */
    inline ResourcePendingMaintenanceActions& WithResourceIdentifier(Aws::String&& value) { SetResourceIdentifier(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the resource that has pending maintenance
     * actions.</p>
     */
    inline ResourcePendingMaintenanceActions& WithResourceIdentifier(const char* value) { SetResourceIdentifier(value); return *this;}


    /**
     * <p>A list that provides details about the pending maintenance actions for the
     * resource.</p>
     */
    inline const Aws::Vector<PendingMaintenanceAction>& GetPendingMaintenanceActionDetails() const{ return m_pendingMaintenanceActionDetails; }

    /**
     * <p>A list that provides details about the pending maintenance actions for the
     * resource.</p>
     */
    inline bool PendingMaintenanceActionDetailsHasBeenSet() const { return m_pendingMaintenanceActionDetailsHasBeenSet; }

    /**
     * <p>A list that provides details about the pending maintenance actions for the
     * resource.</p>
     */
    inline void SetPendingMaintenanceActionDetails(const Aws::Vector<PendingMaintenanceAction>& value) { m_pendingMaintenanceActionDetailsHasBeenSet = true; m_pendingMaintenanceActionDetails = value; }

    /**
     * <p>A list that provides details about the pending maintenance actions for the
     * resource.</p>
     */
    inline void SetPendingMaintenanceActionDetails(Aws::Vector<PendingMaintenanceAction>&& value) { m_pendingMaintenanceActionDetailsHasBeenSet = true; m_pendingMaintenanceActionDetails = std::move(value); }

    /**
     * <p>A list that provides details about the pending maintenance actions for the
     * resource.</p>
     */
    inline ResourcePendingMaintenanceActions& WithPendingMaintenanceActionDetails(const Aws::Vector<PendingMaintenanceAction>& value) { SetPendingMaintenanceActionDetails(value); return *this;}

    /**
     * <p>A list that provides details about the pending maintenance actions for the
     * resource.</p>
     */
    inline ResourcePendingMaintenanceActions& WithPendingMaintenanceActionDetails(Aws::Vector<PendingMaintenanceAction>&& value) { SetPendingMaintenanceActionDetails(std::move(value)); return *this;}

    /**
     * <p>A list that provides details about the pending maintenance actions for the
     * resource.</p>
     */
    inline ResourcePendingMaintenanceActions& AddPendingMaintenanceActionDetails(const PendingMaintenanceAction& value) { m_pendingMaintenanceActionDetailsHasBeenSet = true; m_pendingMaintenanceActionDetails.push_back(value); return *this; }

    /**
     * <p>A list that provides details about the pending maintenance actions for the
     * resource.</p>
     */
    inline ResourcePendingMaintenanceActions& AddPendingMaintenanceActionDetails(PendingMaintenanceAction&& value) { m_pendingMaintenanceActionDetailsHasBeenSet = true; m_pendingMaintenanceActionDetails.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_resourceIdentifier;
    bool m_resourceIdentifierHasBeenSet = false;

    Aws::Vector<PendingMaintenanceAction> m_pendingMaintenanceActionDetails;
    bool m_pendingMaintenanceActionDetailsHasBeenSet = false;
  };

} // namespace Model
} // namespace DocDB
} // namespace Aws
