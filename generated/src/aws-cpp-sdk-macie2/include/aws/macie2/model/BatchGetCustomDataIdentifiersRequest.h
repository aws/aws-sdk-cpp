/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/macie2/Macie2_EXPORTS.h>
#include <aws/macie2/Macie2Request.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Macie2
{
namespace Model
{

  /**
   */
  class BatchGetCustomDataIdentifiersRequest : public Macie2Request
  {
  public:
    AWS_MACIE2_API BatchGetCustomDataIdentifiersRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchGetCustomDataIdentifiers"; }

    AWS_MACIE2_API Aws::String SerializePayload() const override;


    /**
     * <p>An array of custom data identifier IDs, one for each custom data identifier
     * to retrieve information about.</p>
     */
    inline const Aws::Vector<Aws::String>& GetIds() const{ return m_ids; }

    /**
     * <p>An array of custom data identifier IDs, one for each custom data identifier
     * to retrieve information about.</p>
     */
    inline bool IdsHasBeenSet() const { return m_idsHasBeenSet; }

    /**
     * <p>An array of custom data identifier IDs, one for each custom data identifier
     * to retrieve information about.</p>
     */
    inline void SetIds(const Aws::Vector<Aws::String>& value) { m_idsHasBeenSet = true; m_ids = value; }

    /**
     * <p>An array of custom data identifier IDs, one for each custom data identifier
     * to retrieve information about.</p>
     */
    inline void SetIds(Aws::Vector<Aws::String>&& value) { m_idsHasBeenSet = true; m_ids = std::move(value); }

    /**
     * <p>An array of custom data identifier IDs, one for each custom data identifier
     * to retrieve information about.</p>
     */
    inline BatchGetCustomDataIdentifiersRequest& WithIds(const Aws::Vector<Aws::String>& value) { SetIds(value); return *this;}

    /**
     * <p>An array of custom data identifier IDs, one for each custom data identifier
     * to retrieve information about.</p>
     */
    inline BatchGetCustomDataIdentifiersRequest& WithIds(Aws::Vector<Aws::String>&& value) { SetIds(std::move(value)); return *this;}

    /**
     * <p>An array of custom data identifier IDs, one for each custom data identifier
     * to retrieve information about.</p>
     */
    inline BatchGetCustomDataIdentifiersRequest& AddIds(const Aws::String& value) { m_idsHasBeenSet = true; m_ids.push_back(value); return *this; }

    /**
     * <p>An array of custom data identifier IDs, one for each custom data identifier
     * to retrieve information about.</p>
     */
    inline BatchGetCustomDataIdentifiersRequest& AddIds(Aws::String&& value) { m_idsHasBeenSet = true; m_ids.push_back(std::move(value)); return *this; }

    /**
     * <p>An array of custom data identifier IDs, one for each custom data identifier
     * to retrieve information about.</p>
     */
    inline BatchGetCustomDataIdentifiersRequest& AddIds(const char* value) { m_idsHasBeenSet = true; m_ids.push_back(value); return *this; }

  private:

    Aws::Vector<Aws::String> m_ids;
    bool m_idsHasBeenSet = false;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
