/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/detective/Detective_EXPORTS.h>
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
namespace Detective
{
namespace Model
{

  /**
   * <p>Details tactics, techniques, and procedures (TTPs) used in a potential
   * security event. Tactics are based on <a
   * href="https://attack.mitre.org/matrices/enterprise/">MITRE ATT&amp;CK Matrix for
   * Enterprise</a>. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/detective-2018-10-26/TTPsObservedDetail">AWS
   * API Reference</a></p>
   */
  class TTPsObservedDetail
  {
  public:
    AWS_DETECTIVE_API TTPsObservedDetail() = default;
    AWS_DETECTIVE_API TTPsObservedDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_DETECTIVE_API TTPsObservedDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DETECTIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The tactic used, identified by the investigation.</p>
     */
    inline const Aws::String& GetTactic() const { return m_tactic; }
    inline bool TacticHasBeenSet() const { return m_tacticHasBeenSet; }
    template<typename TacticT = Aws::String>
    void SetTactic(TacticT&& value) { m_tacticHasBeenSet = true; m_tactic = std::forward<TacticT>(value); }
    template<typename TacticT = Aws::String>
    TTPsObservedDetail& WithTactic(TacticT&& value) { SetTactic(std::forward<TacticT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The technique used, identified by the investigation. </p>
     */
    inline const Aws::String& GetTechnique() const { return m_technique; }
    inline bool TechniqueHasBeenSet() const { return m_techniqueHasBeenSet; }
    template<typename TechniqueT = Aws::String>
    void SetTechnique(TechniqueT&& value) { m_techniqueHasBeenSet = true; m_technique = std::forward<TechniqueT>(value); }
    template<typename TechniqueT = Aws::String>
    TTPsObservedDetail& WithTechnique(TechniqueT&& value) { SetTechnique(std::forward<TechniqueT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The procedure used, identified by the investigation.</p>
     */
    inline const Aws::String& GetProcedure() const { return m_procedure; }
    inline bool ProcedureHasBeenSet() const { return m_procedureHasBeenSet; }
    template<typename ProcedureT = Aws::String>
    void SetProcedure(ProcedureT&& value) { m_procedureHasBeenSet = true; m_procedure = std::forward<ProcedureT>(value); }
    template<typename ProcedureT = Aws::String>
    TTPsObservedDetail& WithProcedure(ProcedureT&& value) { SetProcedure(std::forward<ProcedureT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IP address where the tactics, techniques, and procedure (TTP) was
     * observed.</p>
     */
    inline const Aws::String& GetIpAddress() const { return m_ipAddress; }
    inline bool IpAddressHasBeenSet() const { return m_ipAddressHasBeenSet; }
    template<typename IpAddressT = Aws::String>
    void SetIpAddress(IpAddressT&& value) { m_ipAddressHasBeenSet = true; m_ipAddress = std::forward<IpAddressT>(value); }
    template<typename IpAddressT = Aws::String>
    TTPsObservedDetail& WithIpAddress(IpAddressT&& value) { SetIpAddress(std::forward<IpAddressT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the API where the tactics, techniques, and procedure (TTP) was
     * observed.</p>
     */
    inline const Aws::String& GetAPIName() const { return m_aPIName; }
    inline bool APINameHasBeenSet() const { return m_aPINameHasBeenSet; }
    template<typename APINameT = Aws::String>
    void SetAPIName(APINameT&& value) { m_aPINameHasBeenSet = true; m_aPIName = std::forward<APINameT>(value); }
    template<typename APINameT = Aws::String>
    TTPsObservedDetail& WithAPIName(APINameT&& value) { SetAPIName(std::forward<APINameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total number of successful API requests.</p>
     */
    inline long long GetAPISuccessCount() const { return m_aPISuccessCount; }
    inline bool APISuccessCountHasBeenSet() const { return m_aPISuccessCountHasBeenSet; }
    inline void SetAPISuccessCount(long long value) { m_aPISuccessCountHasBeenSet = true; m_aPISuccessCount = value; }
    inline TTPsObservedDetail& WithAPISuccessCount(long long value) { SetAPISuccessCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total number of failed API requests.</p>
     */
    inline long long GetAPIFailureCount() const { return m_aPIFailureCount; }
    inline bool APIFailureCountHasBeenSet() const { return m_aPIFailureCountHasBeenSet; }
    inline void SetAPIFailureCount(long long value) { m_aPIFailureCountHasBeenSet = true; m_aPIFailureCount = value; }
    inline TTPsObservedDetail& WithAPIFailureCount(long long value) { SetAPIFailureCount(value); return *this;}
    ///@}
  private:

    Aws::String m_tactic;
    bool m_tacticHasBeenSet = false;

    Aws::String m_technique;
    bool m_techniqueHasBeenSet = false;

    Aws::String m_procedure;
    bool m_procedureHasBeenSet = false;

    Aws::String m_ipAddress;
    bool m_ipAddressHasBeenSet = false;

    Aws::String m_aPIName;
    bool m_aPINameHasBeenSet = false;

    long long m_aPISuccessCount{0};
    bool m_aPISuccessCountHasBeenSet = false;

    long long m_aPIFailureCount{0};
    bool m_aPIFailureCountHasBeenSet = false;
  };

} // namespace Model
} // namespace Detective
} // namespace Aws
