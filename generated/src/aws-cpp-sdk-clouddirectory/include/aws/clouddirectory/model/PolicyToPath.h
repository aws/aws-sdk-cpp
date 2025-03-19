/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/clouddirectory/CloudDirectory_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/clouddirectory/model/PolicyAttachment.h>
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
namespace CloudDirectory
{
namespace Model
{

  /**
   * <p>Used when a regular object exists in a <a>Directory</a> and you want to find
   * all of the policies that are associated with that object and the parent to that
   * object.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/PolicyToPath">AWS
   * API Reference</a></p>
   */
  class PolicyToPath
  {
  public:
    AWS_CLOUDDIRECTORY_API PolicyToPath() = default;
    AWS_CLOUDDIRECTORY_API PolicyToPath(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDDIRECTORY_API PolicyToPath& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDDIRECTORY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The path that is referenced from the root.</p>
     */
    inline const Aws::String& GetPath() const { return m_path; }
    inline bool PathHasBeenSet() const { return m_pathHasBeenSet; }
    template<typename PathT = Aws::String>
    void SetPath(PathT&& value) { m_pathHasBeenSet = true; m_path = std::forward<PathT>(value); }
    template<typename PathT = Aws::String>
    PolicyToPath& WithPath(PathT&& value) { SetPath(std::forward<PathT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>List of policy objects.</p>
     */
    inline const Aws::Vector<PolicyAttachment>& GetPolicies() const { return m_policies; }
    inline bool PoliciesHasBeenSet() const { return m_policiesHasBeenSet; }
    template<typename PoliciesT = Aws::Vector<PolicyAttachment>>
    void SetPolicies(PoliciesT&& value) { m_policiesHasBeenSet = true; m_policies = std::forward<PoliciesT>(value); }
    template<typename PoliciesT = Aws::Vector<PolicyAttachment>>
    PolicyToPath& WithPolicies(PoliciesT&& value) { SetPolicies(std::forward<PoliciesT>(value)); return *this;}
    template<typename PoliciesT = PolicyAttachment>
    PolicyToPath& AddPolicies(PoliciesT&& value) { m_policiesHasBeenSet = true; m_policies.emplace_back(std::forward<PoliciesT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_path;
    bool m_pathHasBeenSet = false;

    Aws::Vector<PolicyAttachment> m_policies;
    bool m_policiesHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
