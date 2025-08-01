/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ds/DirectoryService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ds/model/AssessmentValidation.h>
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
namespace DirectoryService
{
namespace Model
{

  /**
   * <p>Contains the results of validation tests performed against a specific domain
   * controller during a directory assessment.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/AssessmentReport">AWS
   * API Reference</a></p>
   */
  class AssessmentReport
  {
  public:
    AWS_DIRECTORYSERVICE_API AssessmentReport() = default;
    AWS_DIRECTORYSERVICE_API AssessmentReport(Aws::Utils::Json::JsonView jsonValue);
    AWS_DIRECTORYSERVICE_API AssessmentReport& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DIRECTORYSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The IP address of the domain controller that was tested during the
     * assessment.</p>
     */
    inline const Aws::String& GetDomainControllerIp() const { return m_domainControllerIp; }
    inline bool DomainControllerIpHasBeenSet() const { return m_domainControllerIpHasBeenSet; }
    template<typename DomainControllerIpT = Aws::String>
    void SetDomainControllerIp(DomainControllerIpT&& value) { m_domainControllerIpHasBeenSet = true; m_domainControllerIp = std::forward<DomainControllerIpT>(value); }
    template<typename DomainControllerIpT = Aws::String>
    AssessmentReport& WithDomainControllerIp(DomainControllerIpT&& value) { SetDomainControllerIp(std::forward<DomainControllerIpT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of validation results for different test categories performed against
     * this domain controller.</p>
     */
    inline const Aws::Vector<AssessmentValidation>& GetValidations() const { return m_validations; }
    inline bool ValidationsHasBeenSet() const { return m_validationsHasBeenSet; }
    template<typename ValidationsT = Aws::Vector<AssessmentValidation>>
    void SetValidations(ValidationsT&& value) { m_validationsHasBeenSet = true; m_validations = std::forward<ValidationsT>(value); }
    template<typename ValidationsT = Aws::Vector<AssessmentValidation>>
    AssessmentReport& WithValidations(ValidationsT&& value) { SetValidations(std::forward<ValidationsT>(value)); return *this;}
    template<typename ValidationsT = AssessmentValidation>
    AssessmentReport& AddValidations(ValidationsT&& value) { m_validationsHasBeenSet = true; m_validations.emplace_back(std::forward<ValidationsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_domainControllerIp;
    bool m_domainControllerIpHasBeenSet = false;

    Aws::Vector<AssessmentValidation> m_validations;
    bool m_validationsHasBeenSet = false;
  };

} // namespace Model
} // namespace DirectoryService
} // namespace Aws
