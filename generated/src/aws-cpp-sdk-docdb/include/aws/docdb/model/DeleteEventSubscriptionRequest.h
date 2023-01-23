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
   * <p>Represents the input to <a>DeleteEventSubscription</a>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/docdb-2014-10-31/DeleteEventSubscriptionMessage">AWS
   * API Reference</a></p>
   */
  class DeleteEventSubscriptionRequest : public DocDBRequest
  {
  public:
    AWS_DOCDB_API DeleteEventSubscriptionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteEventSubscription"; }

    AWS_DOCDB_API Aws::String SerializePayload() const override;

  protected:
    AWS_DOCDB_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The name of the Amazon DocumentDB event notification subscription that you
     * want to delete.</p>
     */
    inline const Aws::String& GetSubscriptionName() const{ return m_subscriptionName; }

    /**
     * <p>The name of the Amazon DocumentDB event notification subscription that you
     * want to delete.</p>
     */
    inline bool SubscriptionNameHasBeenSet() const { return m_subscriptionNameHasBeenSet; }

    /**
     * <p>The name of the Amazon DocumentDB event notification subscription that you
     * want to delete.</p>
     */
    inline void SetSubscriptionName(const Aws::String& value) { m_subscriptionNameHasBeenSet = true; m_subscriptionName = value; }

    /**
     * <p>The name of the Amazon DocumentDB event notification subscription that you
     * want to delete.</p>
     */
    inline void SetSubscriptionName(Aws::String&& value) { m_subscriptionNameHasBeenSet = true; m_subscriptionName = std::move(value); }

    /**
     * <p>The name of the Amazon DocumentDB event notification subscription that you
     * want to delete.</p>
     */
    inline void SetSubscriptionName(const char* value) { m_subscriptionNameHasBeenSet = true; m_subscriptionName.assign(value); }

    /**
     * <p>The name of the Amazon DocumentDB event notification subscription that you
     * want to delete.</p>
     */
    inline DeleteEventSubscriptionRequest& WithSubscriptionName(const Aws::String& value) { SetSubscriptionName(value); return *this;}

    /**
     * <p>The name of the Amazon DocumentDB event notification subscription that you
     * want to delete.</p>
     */
    inline DeleteEventSubscriptionRequest& WithSubscriptionName(Aws::String&& value) { SetSubscriptionName(std::move(value)); return *this;}

    /**
     * <p>The name of the Amazon DocumentDB event notification subscription that you
     * want to delete.</p>
     */
    inline DeleteEventSubscriptionRequest& WithSubscriptionName(const char* value) { SetSubscriptionName(value); return *this;}

  private:

    Aws::String m_subscriptionName;
    bool m_subscriptionNameHasBeenSet = false;
  };

} // namespace Model
} // namespace DocDB
} // namespace Aws
