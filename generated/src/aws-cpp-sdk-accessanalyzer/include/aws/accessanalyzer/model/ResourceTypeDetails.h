/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/accessanalyzer/AccessAnalyzer_EXPORTS.h>

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
namespace AccessAnalyzer
{
namespace Model
{

  /**
   * <p>Contains information about the total number of active cross-account and
   * public findings for a resource type of an external access
   * analyzer.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/accessanalyzer-2019-11-01/ResourceTypeDetails">AWS
   * API Reference</a></p>
   */
  class ResourceTypeDetails
  {
  public:
    AWS_ACCESSANALYZER_API ResourceTypeDetails() = default;
    AWS_ACCESSANALYZER_API ResourceTypeDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACCESSANALYZER_API ResourceTypeDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACCESSANALYZER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The total number of active public findings for the resource type.</p>
     */
    inline int GetTotalActivePublic() const { return m_totalActivePublic; }
    inline bool TotalActivePublicHasBeenSet() const { return m_totalActivePublicHasBeenSet; }
    inline void SetTotalActivePublic(int value) { m_totalActivePublicHasBeenSet = true; m_totalActivePublic = value; }
    inline ResourceTypeDetails& WithTotalActivePublic(int value) { SetTotalActivePublic(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total number of active cross-account findings for the resource type.</p>
     */
    inline int GetTotalActiveCrossAccount() const { return m_totalActiveCrossAccount; }
    inline bool TotalActiveCrossAccountHasBeenSet() const { return m_totalActiveCrossAccountHasBeenSet; }
    inline void SetTotalActiveCrossAccount(int value) { m_totalActiveCrossAccountHasBeenSet = true; m_totalActiveCrossAccount = value; }
    inline ResourceTypeDetails& WithTotalActiveCrossAccount(int value) { SetTotalActiveCrossAccount(value); return *this;}
    ///@}
  private:

    int m_totalActivePublic{0};
    bool m_totalActivePublicHasBeenSet = false;

    int m_totalActiveCrossAccount{0};
    bool m_totalActiveCrossAccountHasBeenSet = false;
  };

} // namespace Model
} // namespace AccessAnalyzer
} // namespace Aws
