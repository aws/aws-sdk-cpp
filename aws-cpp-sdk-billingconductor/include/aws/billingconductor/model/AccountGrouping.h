/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/billingconductor/BillingConductor_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace BillingConductor
{
namespace Model
{

  /**
   * <p> The set of accounts that will be under the billing group. The set of
   * accounts resemble the linked accounts in a consolidated family. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/billingconductor-2021-07-30/AccountGrouping">AWS
   * API Reference</a></p>
   */
  class AccountGrouping
  {
  public:
    AWS_BILLINGCONDUCTOR_API AccountGrouping();
    AWS_BILLINGCONDUCTOR_API AccountGrouping(Aws::Utils::Json::JsonView jsonValue);
    AWS_BILLINGCONDUCTOR_API AccountGrouping& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BILLINGCONDUCTOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The account IDs that make up the billing group. Account IDs must be a part
     * of the consolidated billing family, and not associated with another billing
     * group. </p>
     */
    inline const Aws::Vector<Aws::String>& GetLinkedAccountIds() const{ return m_linkedAccountIds; }

    /**
     * <p> The account IDs that make up the billing group. Account IDs must be a part
     * of the consolidated billing family, and not associated with another billing
     * group. </p>
     */
    inline bool LinkedAccountIdsHasBeenSet() const { return m_linkedAccountIdsHasBeenSet; }

    /**
     * <p> The account IDs that make up the billing group. Account IDs must be a part
     * of the consolidated billing family, and not associated with another billing
     * group. </p>
     */
    inline void SetLinkedAccountIds(const Aws::Vector<Aws::String>& value) { m_linkedAccountIdsHasBeenSet = true; m_linkedAccountIds = value; }

    /**
     * <p> The account IDs that make up the billing group. Account IDs must be a part
     * of the consolidated billing family, and not associated with another billing
     * group. </p>
     */
    inline void SetLinkedAccountIds(Aws::Vector<Aws::String>&& value) { m_linkedAccountIdsHasBeenSet = true; m_linkedAccountIds = std::move(value); }

    /**
     * <p> The account IDs that make up the billing group. Account IDs must be a part
     * of the consolidated billing family, and not associated with another billing
     * group. </p>
     */
    inline AccountGrouping& WithLinkedAccountIds(const Aws::Vector<Aws::String>& value) { SetLinkedAccountIds(value); return *this;}

    /**
     * <p> The account IDs that make up the billing group. Account IDs must be a part
     * of the consolidated billing family, and not associated with another billing
     * group. </p>
     */
    inline AccountGrouping& WithLinkedAccountIds(Aws::Vector<Aws::String>&& value) { SetLinkedAccountIds(std::move(value)); return *this;}

    /**
     * <p> The account IDs that make up the billing group. Account IDs must be a part
     * of the consolidated billing family, and not associated with another billing
     * group. </p>
     */
    inline AccountGrouping& AddLinkedAccountIds(const Aws::String& value) { m_linkedAccountIdsHasBeenSet = true; m_linkedAccountIds.push_back(value); return *this; }

    /**
     * <p> The account IDs that make up the billing group. Account IDs must be a part
     * of the consolidated billing family, and not associated with another billing
     * group. </p>
     */
    inline AccountGrouping& AddLinkedAccountIds(Aws::String&& value) { m_linkedAccountIdsHasBeenSet = true; m_linkedAccountIds.push_back(std::move(value)); return *this; }

    /**
     * <p> The account IDs that make up the billing group. Account IDs must be a part
     * of the consolidated billing family, and not associated with another billing
     * group. </p>
     */
    inline AccountGrouping& AddLinkedAccountIds(const char* value) { m_linkedAccountIdsHasBeenSet = true; m_linkedAccountIds.push_back(value); return *this; }

  private:

    Aws::Vector<Aws::String> m_linkedAccountIds;
    bool m_linkedAccountIdsHasBeenSet = false;
  };

} // namespace Model
} // namespace BillingConductor
} // namespace Aws
