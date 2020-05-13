/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_MACIE2_API UnarchiveFindingsRequest : public Macie2Request
  {
  public:
    UnarchiveFindingsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UnarchiveFindings"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>An array of strings that lists the unique identifiers for the findings to
     * reactivate.</p>
     */
    inline const Aws::Vector<Aws::String>& GetFindingIds() const{ return m_findingIds; }

    /**
     * <p>An array of strings that lists the unique identifiers for the findings to
     * reactivate.</p>
     */
    inline bool FindingIdsHasBeenSet() const { return m_findingIdsHasBeenSet; }

    /**
     * <p>An array of strings that lists the unique identifiers for the findings to
     * reactivate.</p>
     */
    inline void SetFindingIds(const Aws::Vector<Aws::String>& value) { m_findingIdsHasBeenSet = true; m_findingIds = value; }

    /**
     * <p>An array of strings that lists the unique identifiers for the findings to
     * reactivate.</p>
     */
    inline void SetFindingIds(Aws::Vector<Aws::String>&& value) { m_findingIdsHasBeenSet = true; m_findingIds = std::move(value); }

    /**
     * <p>An array of strings that lists the unique identifiers for the findings to
     * reactivate.</p>
     */
    inline UnarchiveFindingsRequest& WithFindingIds(const Aws::Vector<Aws::String>& value) { SetFindingIds(value); return *this;}

    /**
     * <p>An array of strings that lists the unique identifiers for the findings to
     * reactivate.</p>
     */
    inline UnarchiveFindingsRequest& WithFindingIds(Aws::Vector<Aws::String>&& value) { SetFindingIds(std::move(value)); return *this;}

    /**
     * <p>An array of strings that lists the unique identifiers for the findings to
     * reactivate.</p>
     */
    inline UnarchiveFindingsRequest& AddFindingIds(const Aws::String& value) { m_findingIdsHasBeenSet = true; m_findingIds.push_back(value); return *this; }

    /**
     * <p>An array of strings that lists the unique identifiers for the findings to
     * reactivate.</p>
     */
    inline UnarchiveFindingsRequest& AddFindingIds(Aws::String&& value) { m_findingIdsHasBeenSet = true; m_findingIds.push_back(std::move(value)); return *this; }

    /**
     * <p>An array of strings that lists the unique identifiers for the findings to
     * reactivate.</p>
     */
    inline UnarchiveFindingsRequest& AddFindingIds(const char* value) { m_findingIdsHasBeenSet = true; m_findingIds.push_back(value); return *this; }

  private:

    Aws::Vector<Aws::String> m_findingIds;
    bool m_findingIdsHasBeenSet;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
