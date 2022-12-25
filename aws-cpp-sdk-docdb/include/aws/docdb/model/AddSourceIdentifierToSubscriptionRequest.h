/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/docdb/DocDB_EXPORTS.h>
#include <aws/docdb/DocDBRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace DocDB
{
namespace Model
{

  /**
   * <p>Represents the input to <a>AddSourceIdentifierToSubscription</a>.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/docdb-2014-10-31/AddSourceIdentifierToSubscriptionMessage">AWS
   * API Reference</a></p>
   */
  class AddSourceIdentifierToSubscriptionRequest : public DocDBRequest
  {
  public:
    AWS_DOCDB_API AddSourceIdentifierToSubscriptionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AddSourceIdentifierToSubscription"; }

    AWS_DOCDB_API Aws::String SerializePayload() const override;

  protected:
    AWS_DOCDB_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The name of the Amazon DocumentDB event notification subscription that you
     * want to add a source identifier to.</p>
     */
    inline const Aws::String& GetSubscriptionName() const{ return m_subscriptionName; }

    /**
     * <p>The name of the Amazon DocumentDB event notification subscription that you
     * want to add a source identifier to.</p>
     */
    inline bool SubscriptionNameHasBeenSet() const { return m_subscriptionNameHasBeenSet; }

    /**
     * <p>The name of the Amazon DocumentDB event notification subscription that you
     * want to add a source identifier to.</p>
     */
    inline void SetSubscriptionName(const Aws::String& value) { m_subscriptionNameHasBeenSet = true; m_subscriptionName = value; }

    /**
     * <p>The name of the Amazon DocumentDB event notification subscription that you
     * want to add a source identifier to.</p>
     */
    inline void SetSubscriptionName(Aws::String&& value) { m_subscriptionNameHasBeenSet = true; m_subscriptionName = std::move(value); }

    /**
     * <p>The name of the Amazon DocumentDB event notification subscription that you
     * want to add a source identifier to.</p>
     */
    inline void SetSubscriptionName(const char* value) { m_subscriptionNameHasBeenSet = true; m_subscriptionName.assign(value); }

    /**
     * <p>The name of the Amazon DocumentDB event notification subscription that you
     * want to add a source identifier to.</p>
     */
    inline AddSourceIdentifierToSubscriptionRequest& WithSubscriptionName(const Aws::String& value) { SetSubscriptionName(value); return *this;}

    /**
     * <p>The name of the Amazon DocumentDB event notification subscription that you
     * want to add a source identifier to.</p>
     */
    inline AddSourceIdentifierToSubscriptionRequest& WithSubscriptionName(Aws::String&& value) { SetSubscriptionName(std::move(value)); return *this;}

    /**
     * <p>The name of the Amazon DocumentDB event notification subscription that you
     * want to add a source identifier to.</p>
     */
    inline AddSourceIdentifierToSubscriptionRequest& WithSubscriptionName(const char* value) { SetSubscriptionName(value); return *this;}


    /**
     * <p>The identifier of the event source to be added:</p> <ul> <li> <p>If the
     * source type is an instance, a <code>DBInstanceIdentifier</code> must be
     * provided.</p> </li> <li> <p>If the source type is a security group, a
     * <code>DBSecurityGroupName</code> must be provided.</p> </li> <li> <p>If the
     * source type is a parameter group, a <code>DBParameterGroupName</code> must be
     * provided.</p> </li> <li> <p>If the source type is a snapshot, a
     * <code>DBSnapshotIdentifier</code> must be provided.</p> </li> </ul>
     */
    inline const Aws::String& GetSourceIdentifier() const{ return m_sourceIdentifier; }

    /**
     * <p>The identifier of the event source to be added:</p> <ul> <li> <p>If the
     * source type is an instance, a <code>DBInstanceIdentifier</code> must be
     * provided.</p> </li> <li> <p>If the source type is a security group, a
     * <code>DBSecurityGroupName</code> must be provided.</p> </li> <li> <p>If the
     * source type is a parameter group, a <code>DBParameterGroupName</code> must be
     * provided.</p> </li> <li> <p>If the source type is a snapshot, a
     * <code>DBSnapshotIdentifier</code> must be provided.</p> </li> </ul>
     */
    inline bool SourceIdentifierHasBeenSet() const { return m_sourceIdentifierHasBeenSet; }

    /**
     * <p>The identifier of the event source to be added:</p> <ul> <li> <p>If the
     * source type is an instance, a <code>DBInstanceIdentifier</code> must be
     * provided.</p> </li> <li> <p>If the source type is a security group, a
     * <code>DBSecurityGroupName</code> must be provided.</p> </li> <li> <p>If the
     * source type is a parameter group, a <code>DBParameterGroupName</code> must be
     * provided.</p> </li> <li> <p>If the source type is a snapshot, a
     * <code>DBSnapshotIdentifier</code> must be provided.</p> </li> </ul>
     */
    inline void SetSourceIdentifier(const Aws::String& value) { m_sourceIdentifierHasBeenSet = true; m_sourceIdentifier = value; }

    /**
     * <p>The identifier of the event source to be added:</p> <ul> <li> <p>If the
     * source type is an instance, a <code>DBInstanceIdentifier</code> must be
     * provided.</p> </li> <li> <p>If the source type is a security group, a
     * <code>DBSecurityGroupName</code> must be provided.</p> </li> <li> <p>If the
     * source type is a parameter group, a <code>DBParameterGroupName</code> must be
     * provided.</p> </li> <li> <p>If the source type is a snapshot, a
     * <code>DBSnapshotIdentifier</code> must be provided.</p> </li> </ul>
     */
    inline void SetSourceIdentifier(Aws::String&& value) { m_sourceIdentifierHasBeenSet = true; m_sourceIdentifier = std::move(value); }

    /**
     * <p>The identifier of the event source to be added:</p> <ul> <li> <p>If the
     * source type is an instance, a <code>DBInstanceIdentifier</code> must be
     * provided.</p> </li> <li> <p>If the source type is a security group, a
     * <code>DBSecurityGroupName</code> must be provided.</p> </li> <li> <p>If the
     * source type is a parameter group, a <code>DBParameterGroupName</code> must be
     * provided.</p> </li> <li> <p>If the source type is a snapshot, a
     * <code>DBSnapshotIdentifier</code> must be provided.</p> </li> </ul>
     */
    inline void SetSourceIdentifier(const char* value) { m_sourceIdentifierHasBeenSet = true; m_sourceIdentifier.assign(value); }

    /**
     * <p>The identifier of the event source to be added:</p> <ul> <li> <p>If the
     * source type is an instance, a <code>DBInstanceIdentifier</code> must be
     * provided.</p> </li> <li> <p>If the source type is a security group, a
     * <code>DBSecurityGroupName</code> must be provided.</p> </li> <li> <p>If the
     * source type is a parameter group, a <code>DBParameterGroupName</code> must be
     * provided.</p> </li> <li> <p>If the source type is a snapshot, a
     * <code>DBSnapshotIdentifier</code> must be provided.</p> </li> </ul>
     */
    inline AddSourceIdentifierToSubscriptionRequest& WithSourceIdentifier(const Aws::String& value) { SetSourceIdentifier(value); return *this;}

    /**
     * <p>The identifier of the event source to be added:</p> <ul> <li> <p>If the
     * source type is an instance, a <code>DBInstanceIdentifier</code> must be
     * provided.</p> </li> <li> <p>If the source type is a security group, a
     * <code>DBSecurityGroupName</code> must be provided.</p> </li> <li> <p>If the
     * source type is a parameter group, a <code>DBParameterGroupName</code> must be
     * provided.</p> </li> <li> <p>If the source type is a snapshot, a
     * <code>DBSnapshotIdentifier</code> must be provided.</p> </li> </ul>
     */
    inline AddSourceIdentifierToSubscriptionRequest& WithSourceIdentifier(Aws::String&& value) { SetSourceIdentifier(std::move(value)); return *this;}

    /**
     * <p>The identifier of the event source to be added:</p> <ul> <li> <p>If the
     * source type is an instance, a <code>DBInstanceIdentifier</code> must be
     * provided.</p> </li> <li> <p>If the source type is a security group, a
     * <code>DBSecurityGroupName</code> must be provided.</p> </li> <li> <p>If the
     * source type is a parameter group, a <code>DBParameterGroupName</code> must be
     * provided.</p> </li> <li> <p>If the source type is a snapshot, a
     * <code>DBSnapshotIdentifier</code> must be provided.</p> </li> </ul>
     */
    inline AddSourceIdentifierToSubscriptionRequest& WithSourceIdentifier(const char* value) { SetSourceIdentifier(value); return *this;}

  private:

    Aws::String m_subscriptionName;
    bool m_subscriptionNameHasBeenSet = false;

    Aws::String m_sourceIdentifier;
    bool m_sourceIdentifierHasBeenSet = false;
  };

} // namespace Model
} // namespace DocDB
} // namespace Aws
