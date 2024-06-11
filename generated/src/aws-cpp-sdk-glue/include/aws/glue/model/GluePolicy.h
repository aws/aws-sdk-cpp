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
    AWS_GLUE_API GluePolicy();
    AWS_GLUE_API GluePolicy(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API GluePolicy& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Contains the requested policy document, in JSON format.</p>
     */
    inline const Aws::String& GetPolicyInJson() const{ return m_policyInJson; }
    inline bool PolicyInJsonHasBeenSet() const { return m_policyInJsonHasBeenSet; }
    inline void SetPolicyInJson(const Aws::String& value) { m_policyInJsonHasBeenSet = true; m_policyInJson = value; }
    inline void SetPolicyInJson(Aws::String&& value) { m_policyInJsonHasBeenSet = true; m_policyInJson = std::move(value); }
    inline void SetPolicyInJson(const char* value) { m_policyInJsonHasBeenSet = true; m_policyInJson.assign(value); }
    inline GluePolicy& WithPolicyInJson(const Aws::String& value) { SetPolicyInJson(value); return *this;}
    inline GluePolicy& WithPolicyInJson(Aws::String&& value) { SetPolicyInJson(std::move(value)); return *this;}
    inline GluePolicy& WithPolicyInJson(const char* value) { SetPolicyInJson(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains the hash value associated with this policy.</p>
     */
    inline const Aws::String& GetPolicyHash() const{ return m_policyHash; }
    inline bool PolicyHashHasBeenSet() const { return m_policyHashHasBeenSet; }
    inline void SetPolicyHash(const Aws::String& value) { m_policyHashHasBeenSet = true; m_policyHash = value; }
    inline void SetPolicyHash(Aws::String&& value) { m_policyHashHasBeenSet = true; m_policyHash = std::move(value); }
    inline void SetPolicyHash(const char* value) { m_policyHashHasBeenSet = true; m_policyHash.assign(value); }
    inline GluePolicy& WithPolicyHash(const Aws::String& value) { SetPolicyHash(value); return *this;}
    inline GluePolicy& WithPolicyHash(Aws::String&& value) { SetPolicyHash(std::move(value)); return *this;}
    inline GluePolicy& WithPolicyHash(const char* value) { SetPolicyHash(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time at which the policy was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreateTime() const{ return m_createTime; }
    inline bool CreateTimeHasBeenSet() const { return m_createTimeHasBeenSet; }
    inline void SetCreateTime(const Aws::Utils::DateTime& value) { m_createTimeHasBeenSet = true; m_createTime = value; }
    inline void SetCreateTime(Aws::Utils::DateTime&& value) { m_createTimeHasBeenSet = true; m_createTime = std::move(value); }
    inline GluePolicy& WithCreateTime(const Aws::Utils::DateTime& value) { SetCreateTime(value); return *this;}
    inline GluePolicy& WithCreateTime(Aws::Utils::DateTime&& value) { SetCreateTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time at which the policy was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdateTime() const{ return m_updateTime; }
    inline bool UpdateTimeHasBeenSet() const { return m_updateTimeHasBeenSet; }
    inline void SetUpdateTime(const Aws::Utils::DateTime& value) { m_updateTimeHasBeenSet = true; m_updateTime = value; }
    inline void SetUpdateTime(Aws::Utils::DateTime&& value) { m_updateTimeHasBeenSet = true; m_updateTime = std::move(value); }
    inline GluePolicy& WithUpdateTime(const Aws::Utils::DateTime& value) { SetUpdateTime(value); return *this;}
    inline GluePolicy& WithUpdateTime(Aws::Utils::DateTime&& value) { SetUpdateTime(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_policyInJson;
    bool m_policyInJsonHasBeenSet = false;

    Aws::String m_policyHash;
    bool m_policyHashHasBeenSet = false;

    Aws::Utils::DateTime m_createTime;
    bool m_createTimeHasBeenSet = false;

    Aws::Utils::DateTime m_updateTime;
    bool m_updateTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
