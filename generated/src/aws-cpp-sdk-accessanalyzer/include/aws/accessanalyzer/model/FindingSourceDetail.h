/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/accessanalyzer/AccessAnalyzer_EXPORTS.h>
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
namespace AccessAnalyzer
{
namespace Model
{

  /**
   * <p>Includes details about how the access that generated the finding is granted.
   * This is populated for Amazon S3 bucket findings.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/accessanalyzer-2019-11-01/FindingSourceDetail">AWS
   * API Reference</a></p>
   */
  class FindingSourceDetail
  {
  public:
    AWS_ACCESSANALYZER_API FindingSourceDetail() = default;
    AWS_ACCESSANALYZER_API FindingSourceDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACCESSANALYZER_API FindingSourceDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACCESSANALYZER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN of the access point that generated the finding. The ARN format
     * depends on whether the ARN represents an access point or a multi-region access
     * point.</p>
     */
    inline const Aws::String& GetAccessPointArn() const { return m_accessPointArn; }
    inline bool AccessPointArnHasBeenSet() const { return m_accessPointArnHasBeenSet; }
    template<typename AccessPointArnT = Aws::String>
    void SetAccessPointArn(AccessPointArnT&& value) { m_accessPointArnHasBeenSet = true; m_accessPointArn = std::forward<AccessPointArnT>(value); }
    template<typename AccessPointArnT = Aws::String>
    FindingSourceDetail& WithAccessPointArn(AccessPointArnT&& value) { SetAccessPointArn(std::forward<AccessPointArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The account of the cross-account access point that generated the finding.</p>
     */
    inline const Aws::String& GetAccessPointAccount() const { return m_accessPointAccount; }
    inline bool AccessPointAccountHasBeenSet() const { return m_accessPointAccountHasBeenSet; }
    template<typename AccessPointAccountT = Aws::String>
    void SetAccessPointAccount(AccessPointAccountT&& value) { m_accessPointAccountHasBeenSet = true; m_accessPointAccount = std::forward<AccessPointAccountT>(value); }
    template<typename AccessPointAccountT = Aws::String>
    FindingSourceDetail& WithAccessPointAccount(AccessPointAccountT&& value) { SetAccessPointAccount(std::forward<AccessPointAccountT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_accessPointArn;
    bool m_accessPointArnHasBeenSet = false;

    Aws::String m_accessPointAccount;
    bool m_accessPointAccountHasBeenSet = false;
  };

} // namespace Model
} // namespace AccessAnalyzer
} // namespace Aws
