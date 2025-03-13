/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eks/EKS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace EKS
{
namespace Model
{

  /**
   * <p>The summary information about the Amazon EKS add-on compatibility for the
   * next Kubernetes version for an insight check in the
   * <code>UPGRADE_READINESS</code> category.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/eks-2017-11-01/AddonCompatibilityDetail">AWS
   * API Reference</a></p>
   */
  class AddonCompatibilityDetail
  {
  public:
    AWS_EKS_API AddonCompatibilityDetail() = default;
    AWS_EKS_API AddonCompatibilityDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_EKS_API AddonCompatibilityDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EKS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the Amazon EKS add-on.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    AddonCompatibilityDetail& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of compatible Amazon EKS add-on versions for the next Kubernetes
     * version.</p>
     */
    inline const Aws::Vector<Aws::String>& GetCompatibleVersions() const { return m_compatibleVersions; }
    inline bool CompatibleVersionsHasBeenSet() const { return m_compatibleVersionsHasBeenSet; }
    template<typename CompatibleVersionsT = Aws::Vector<Aws::String>>
    void SetCompatibleVersions(CompatibleVersionsT&& value) { m_compatibleVersionsHasBeenSet = true; m_compatibleVersions = std::forward<CompatibleVersionsT>(value); }
    template<typename CompatibleVersionsT = Aws::Vector<Aws::String>>
    AddonCompatibilityDetail& WithCompatibleVersions(CompatibleVersionsT&& value) { SetCompatibleVersions(std::forward<CompatibleVersionsT>(value)); return *this;}
    template<typename CompatibleVersionsT = Aws::String>
    AddonCompatibilityDetail& AddCompatibleVersions(CompatibleVersionsT&& value) { m_compatibleVersionsHasBeenSet = true; m_compatibleVersions.emplace_back(std::forward<CompatibleVersionsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<Aws::String> m_compatibleVersions;
    bool m_compatibleVersionsHasBeenSet = false;
  };

} // namespace Model
} // namespace EKS
} // namespace Aws
