/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/redshift/RedshiftRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/redshift/model/DeleteClusterSnapshotMessage.h>
#include <utility>

namespace Aws
{
namespace Redshift
{
namespace Model
{

  /**
   */
  class BatchDeleteClusterSnapshotsRequest : public RedshiftRequest
  {
  public:
    AWS_REDSHIFT_API BatchDeleteClusterSnapshotsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchDeleteClusterSnapshots"; }

    AWS_REDSHIFT_API Aws::String SerializePayload() const override;

  protected:
    AWS_REDSHIFT_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>A list of identifiers for the snapshots that you want to delete.</p>
     */
    inline const Aws::Vector<DeleteClusterSnapshotMessage>& GetIdentifiers() const{ return m_identifiers; }

    /**
     * <p>A list of identifiers for the snapshots that you want to delete.</p>
     */
    inline bool IdentifiersHasBeenSet() const { return m_identifiersHasBeenSet; }

    /**
     * <p>A list of identifiers for the snapshots that you want to delete.</p>
     */
    inline void SetIdentifiers(const Aws::Vector<DeleteClusterSnapshotMessage>& value) { m_identifiersHasBeenSet = true; m_identifiers = value; }

    /**
     * <p>A list of identifiers for the snapshots that you want to delete.</p>
     */
    inline void SetIdentifiers(Aws::Vector<DeleteClusterSnapshotMessage>&& value) { m_identifiersHasBeenSet = true; m_identifiers = std::move(value); }

    /**
     * <p>A list of identifiers for the snapshots that you want to delete.</p>
     */
    inline BatchDeleteClusterSnapshotsRequest& WithIdentifiers(const Aws::Vector<DeleteClusterSnapshotMessage>& value) { SetIdentifiers(value); return *this;}

    /**
     * <p>A list of identifiers for the snapshots that you want to delete.</p>
     */
    inline BatchDeleteClusterSnapshotsRequest& WithIdentifiers(Aws::Vector<DeleteClusterSnapshotMessage>&& value) { SetIdentifiers(std::move(value)); return *this;}

    /**
     * <p>A list of identifiers for the snapshots that you want to delete.</p>
     */
    inline BatchDeleteClusterSnapshotsRequest& AddIdentifiers(const DeleteClusterSnapshotMessage& value) { m_identifiersHasBeenSet = true; m_identifiers.push_back(value); return *this; }

    /**
     * <p>A list of identifiers for the snapshots that you want to delete.</p>
     */
    inline BatchDeleteClusterSnapshotsRequest& AddIdentifiers(DeleteClusterSnapshotMessage&& value) { m_identifiersHasBeenSet = true; m_identifiers.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<DeleteClusterSnapshotMessage> m_identifiers;
    bool m_identifiersHasBeenSet = false;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
