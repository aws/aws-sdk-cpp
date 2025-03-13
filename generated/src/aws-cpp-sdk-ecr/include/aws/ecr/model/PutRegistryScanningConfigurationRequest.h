/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecr/ECR_EXPORTS.h>
#include <aws/ecr/ECRRequest.h>
#include <aws/ecr/model/ScanType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ecr/model/RegistryScanningRule.h>
#include <utility>

namespace Aws
{
namespace ECR
{
namespace Model
{

  /**
   */
  class PutRegistryScanningConfigurationRequest : public ECRRequest
  {
  public:
    AWS_ECR_API PutRegistryScanningConfigurationRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutRegistryScanningConfiguration"; }

    AWS_ECR_API Aws::String SerializePayload() const override;

    AWS_ECR_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The scanning type to set for the registry.</p> <p>When a registry scanning
     * configuration is not defined, by default the <code>BASIC</code> scan type is
     * used. When basic scanning is used, you may specify filters to determine which
     * individual repositories, or all repositories, are scanned when new images are
     * pushed to those repositories. Alternatively, you can do manual scans of images
     * with basic scanning.</p> <p>When the <code>ENHANCED</code> scan type is set,
     * Amazon Inspector provides automated vulnerability scanning. You may choose
     * between continuous scanning or scan on push and you may specify filters to
     * determine which individual repositories, or all repositories, are scanned.</p>
     */
    inline ScanType GetScanType() const { return m_scanType; }
    inline bool ScanTypeHasBeenSet() const { return m_scanTypeHasBeenSet; }
    inline void SetScanType(ScanType value) { m_scanTypeHasBeenSet = true; m_scanType = value; }
    inline PutRegistryScanningConfigurationRequest& WithScanType(ScanType value) { SetScanType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The scanning rules to use for the registry. A scanning rule is used to
     * determine which repository filters are used and at what frequency scanning will
     * occur.</p>
     */
    inline const Aws::Vector<RegistryScanningRule>& GetRules() const { return m_rules; }
    inline bool RulesHasBeenSet() const { return m_rulesHasBeenSet; }
    template<typename RulesT = Aws::Vector<RegistryScanningRule>>
    void SetRules(RulesT&& value) { m_rulesHasBeenSet = true; m_rules = std::forward<RulesT>(value); }
    template<typename RulesT = Aws::Vector<RegistryScanningRule>>
    PutRegistryScanningConfigurationRequest& WithRules(RulesT&& value) { SetRules(std::forward<RulesT>(value)); return *this;}
    template<typename RulesT = RegistryScanningRule>
    PutRegistryScanningConfigurationRequest& AddRules(RulesT&& value) { m_rulesHasBeenSet = true; m_rules.emplace_back(std::forward<RulesT>(value)); return *this; }
    ///@}
  private:

    ScanType m_scanType{ScanType::NOT_SET};
    bool m_scanTypeHasBeenSet = false;

    Aws::Vector<RegistryScanningRule> m_rules;
    bool m_rulesHasBeenSet = false;
  };

} // namespace Model
} // namespace ECR
} // namespace Aws
