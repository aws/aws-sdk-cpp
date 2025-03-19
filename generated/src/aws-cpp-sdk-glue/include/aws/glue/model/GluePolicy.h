/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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
namespace Glue
{
namespace Model
{

  /**
   * <p>A structure for returning a resource policy.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GluePolicy">AWS API
   * Reference</a></p>
   */
  class GluePolicy
  {
  public:
    AWS_GLUE_API GluePolicy() = default;
    AWS_GLUE_API GluePolicy(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API GluePolicy& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Contains the requested policy document, in JSON format.</p>
     */
    inline const Aws::String& GetPolicyInJson() const { return m_policyInJson; }
    inline bool PolicyInJsonHasBeenSet() const { return m_policyInJsonHasBeenSet; }
    template<typename PolicyInJsonT = Aws::String>
    void SetPolicyInJson(PolicyInJsonT&& value) { m_policyInJsonHasBeenSet = true; m_policyInJson = std::forward<PolicyInJsonT>(value); }
    template<typename PolicyInJsonT = Aws::String>
    GluePolicy& WithPolicyInJson(PolicyInJsonT&& value) { SetPolicyInJson(std::forward<PolicyInJsonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains the hash value associated with this policy.</p>
     */
    inline const Aws::String& GetPolicyHash() const { return m_policyHash; }
    inline bool PolicyHashHasBeenSet() const { return m_policyHashHasBeenSet; }
    template<typename PolicyHashT = Aws::String>
    void SetPolicyHash(PolicyHashT&& value) { m_policyHashHasBeenSet = true; m_policyHash = std::forward<PolicyHashT>(value); }
    template<typename PolicyHashT = Aws::String>
    GluePolicy& WithPolicyHash(PolicyHashT&& value) { SetPolicyHash(std::forward<PolicyHashT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time at which the policy was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreateTime() const { return m_createTime; }
    inline bool CreateTimeHasBeenSet() const { return m_createTimeHasBeenSet; }
    template<typename CreateTimeT = Aws::Utils::DateTime>
    void SetCreateTime(CreateTimeT&& value) { m_createTimeHasBeenSet = true; m_createTime = std::forward<CreateTimeT>(value); }
    template<typename CreateTimeT = Aws::Utils::DateTime>
    GluePolicy& WithCreateTime(CreateTimeT&& value) { SetCreateTime(std::forward<CreateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time at which the policy was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdateTime() const { return m_updateTime; }
    inline bool UpdateTimeHasBeenSet() const { return m_updateTimeHasBeenSet; }
    template<typename UpdateTimeT = Aws::Utils::DateTime>
    void SetUpdateTime(UpdateTimeT&& value) { m_updateTimeHasBeenSet = true; m_updateTime = std::forward<UpdateTimeT>(value); }
    template<typename UpdateTimeT = Aws::Utils::DateTime>
    GluePolicy& WithUpdateTime(UpdateTimeT&& value) { SetUpdateTime(std::forward<UpdateTimeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_policyInJson;
    bool m_policyInJsonHasBeenSet = false;

    Aws::String m_policyHash;
    bool m_policyHashHasBeenSet = false;

    Aws::Utils::DateTime m_createTime{};
    bool m_createTimeHasBeenSet = false;

    Aws::Utils::DateTime m_updateTime{};
    bool m_updateTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
