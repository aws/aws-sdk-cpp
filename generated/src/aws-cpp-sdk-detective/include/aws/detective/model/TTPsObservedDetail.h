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
    AWS_DETECTIVE_API TTPsObservedDetail();
    AWS_DETECTIVE_API TTPsObservedDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_DETECTIVE_API TTPsObservedDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DETECTIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The tactic used, identified by the investigation.</p>
     */
    inline const Aws::String& GetTactic() const{ return m_tactic; }
    inline bool TacticHasBeenSet() const { return m_tacticHasBeenSet; }
    inline void SetTactic(const Aws::String& value) { m_tacticHasBeenSet = true; m_tactic = value; }
    inline void SetTactic(Aws::String&& value) { m_tacticHasBeenSet = true; m_tactic = std::move(value); }
    inline void SetTactic(const char* value) { m_tacticHasBeenSet = true; m_tactic.assign(value); }
    inline TTPsObservedDetail& WithTactic(const Aws::String& value) { SetTactic(value); return *this;}
    inline TTPsObservedDetail& WithTactic(Aws::String&& value) { SetTactic(std::move(value)); return *this;}
    inline TTPsObservedDetail& WithTactic(const char* value) { SetTactic(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The technique used, identified by the investigation. </p>
     */
    inline const Aws::String& GetTechnique() const{ return m_technique; }
    inline bool TechniqueHasBeenSet() const { return m_techniqueHasBeenSet; }
    inline void SetTechnique(const Aws::String& value) { m_techniqueHasBeenSet = true; m_technique = value; }
    inline void SetTechnique(Aws::String&& value) { m_techniqueHasBeenSet = true; m_technique = std::move(value); }
    inline void SetTechnique(const char* value) { m_techniqueHasBeenSet = true; m_technique.assign(value); }
    inline TTPsObservedDetail& WithTechnique(const Aws::String& value) { SetTechnique(value); return *this;}
    inline TTPsObservedDetail& WithTechnique(Aws::String&& value) { SetTechnique(std::move(value)); return *this;}
    inline TTPsObservedDetail& WithTechnique(const char* value) { SetTechnique(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The procedure used, identified by the investigation.</p>
     */
    inline const Aws::String& GetProcedure() const{ return m_procedure; }
    inline bool ProcedureHasBeenSet() const { return m_procedureHasBeenSet; }
    inline void SetProcedure(const Aws::String& value) { m_procedureHasBeenSet = true; m_procedure = value; }
    inline void SetProcedure(Aws::String&& value) { m_procedureHasBeenSet = true; m_procedure = std::move(value); }
    inline void SetProcedure(const char* value) { m_procedureHasBeenSet = true; m_procedure.assign(value); }
    inline TTPsObservedDetail& WithProcedure(const Aws::String& value) { SetProcedure(value); return *this;}
    inline TTPsObservedDetail& WithProcedure(Aws::String&& value) { SetProcedure(std::move(value)); return *this;}
    inline TTPsObservedDetail& WithProcedure(const char* value) { SetProcedure(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IP address where the tactics, techniques, and procedure (TTP) was
     * observed.</p>
     */
    inline const Aws::String& GetIpAddress() const{ return m_ipAddress; }
    inline bool IpAddressHasBeenSet() const { return m_ipAddressHasBeenSet; }
    inline void SetIpAddress(const Aws::String& value) { m_ipAddressHasBeenSet = true; m_ipAddress = value; }
    inline void SetIpAddress(Aws::String&& value) { m_ipAddressHasBeenSet = true; m_ipAddress = std::move(value); }
    inline void SetIpAddress(const char* value) { m_ipAddressHasBeenSet = true; m_ipAddress.assign(value); }
    inline TTPsObservedDetail& WithIpAddress(const Aws::String& value) { SetIpAddress(value); return *this;}
    inline TTPsObservedDetail& WithIpAddress(Aws::String&& value) { SetIpAddress(std::move(value)); return *this;}
    inline TTPsObservedDetail& WithIpAddress(const char* value) { SetIpAddress(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the API where the tactics, techniques, and procedure (TTP) was
     * observed.</p>
     */
    inline const Aws::String& GetAPIName() const{ return m_aPIName; }
    inline bool APINameHasBeenSet() const { return m_aPINameHasBeenSet; }
    inline void SetAPIName(const Aws::String& value) { m_aPINameHasBeenSet = true; m_aPIName = value; }
    inline void SetAPIName(Aws::String&& value) { m_aPINameHasBeenSet = true; m_aPIName = std::move(value); }
    inline void SetAPIName(const char* value) { m_aPINameHasBeenSet = true; m_aPIName.assign(value); }
    inline TTPsObservedDetail& WithAPIName(const Aws::String& value) { SetAPIName(value); return *this;}
    inline TTPsObservedDetail& WithAPIName(Aws::String&& value) { SetAPIName(std::move(value)); return *this;}
    inline TTPsObservedDetail& WithAPIName(const char* value) { SetAPIName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total number of successful API requests.</p>
     */
    inline long long GetAPISuccessCount() const{ return m_aPISuccessCount; }
    inline bool APISuccessCountHasBeenSet() const { return m_aPISuccessCountHasBeenSet; }
    inline void SetAPISuccessCount(long long value) { m_aPISuccessCountHasBeenSet = true; m_aPISuccessCount = value; }
    inline TTPsObservedDetail& WithAPISuccessCount(long long value) { SetAPISuccessCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total number of failed API requests.</p>
     */
    inline long long GetAPIFailureCount() const{ return m_aPIFailureCount; }
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

    long long m_aPISuccessCount;
    bool m_aPISuccessCountHasBeenSet = false;

    long long m_aPIFailureCount;
    bool m_aPIFailureCountHasBeenSet = false;
  };

} // namespace Model
} // namespace Detective
} // namespace Aws
