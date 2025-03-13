/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/macie2/Macie2_EXPORTS.h>
#include <aws/macie2/Macie2Request.h>
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
  class GetSensitiveDataOccurrencesRequest : public Macie2Request
  {
  public:
    AWS_MACIE2_API GetSensitiveDataOccurrencesRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetSensitiveDataOccurrences"; }

    AWS_MACIE2_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The unique identifier for the finding.</p>
     */
    inline const Aws::String& GetFindingId() const { return m_findingId; }
    inline bool FindingIdHasBeenSet() const { return m_findingIdHasBeenSet; }
    template<typename FindingIdT = Aws::String>
    void SetFindingId(FindingIdT&& value) { m_findingIdHasBeenSet = true; m_findingId = std::forward<FindingIdT>(value); }
    template<typename FindingIdT = Aws::String>
    GetSensitiveDataOccurrencesRequest& WithFindingId(FindingIdT&& value) { SetFindingId(std::forward<FindingIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_findingId;
    bool m_findingIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
