/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eks/EKS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace EKS
{
namespace Model
{

  /**
   * <p>An object representing a Kubernetes <code>label</code> change for a managed
   * node group.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/eks-2017-11-01/UpdateLabelsPayload">AWS
   * API Reference</a></p>
   */
  class UpdateLabelsPayload
  {
  public:
    AWS_EKS_API UpdateLabelsPayload() = default;
    AWS_EKS_API UpdateLabelsPayload(Aws::Utils::Json::JsonView jsonValue);
    AWS_EKS_API UpdateLabelsPayload& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EKS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Kubernetes <code>labels</code> to add or update.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetAddOrUpdateLabels() const { return m_addOrUpdateLabels; }
    inline bool AddOrUpdateLabelsHasBeenSet() const { return m_addOrUpdateLabelsHasBeenSet; }
    template<typename AddOrUpdateLabelsT = Aws::Map<Aws::String, Aws::String>>
    void SetAddOrUpdateLabels(AddOrUpdateLabelsT&& value) { m_addOrUpdateLabelsHasBeenSet = true; m_addOrUpdateLabels = std::forward<AddOrUpdateLabelsT>(value); }
    template<typename AddOrUpdateLabelsT = Aws::Map<Aws::String, Aws::String>>
    UpdateLabelsPayload& WithAddOrUpdateLabels(AddOrUpdateLabelsT&& value) { SetAddOrUpdateLabels(std::forward<AddOrUpdateLabelsT>(value)); return *this;}
    template<typename AddOrUpdateLabelsKeyT = Aws::String, typename AddOrUpdateLabelsValueT = Aws::String>
    UpdateLabelsPayload& AddAddOrUpdateLabels(AddOrUpdateLabelsKeyT&& key, AddOrUpdateLabelsValueT&& value) {
      m_addOrUpdateLabelsHasBeenSet = true; m_addOrUpdateLabels.emplace(std::forward<AddOrUpdateLabelsKeyT>(key), std::forward<AddOrUpdateLabelsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The Kubernetes <code>labels</code> to remove.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRemoveLabels() const { return m_removeLabels; }
    inline bool RemoveLabelsHasBeenSet() const { return m_removeLabelsHasBeenSet; }
    template<typename RemoveLabelsT = Aws::Vector<Aws::String>>
    void SetRemoveLabels(RemoveLabelsT&& value) { m_removeLabelsHasBeenSet = true; m_removeLabels = std::forward<RemoveLabelsT>(value); }
    template<typename RemoveLabelsT = Aws::Vector<Aws::String>>
    UpdateLabelsPayload& WithRemoveLabels(RemoveLabelsT&& value) { SetRemoveLabels(std::forward<RemoveLabelsT>(value)); return *this;}
    template<typename RemoveLabelsT = Aws::String>
    UpdateLabelsPayload& AddRemoveLabels(RemoveLabelsT&& value) { m_removeLabelsHasBeenSet = true; m_removeLabels.emplace_back(std::forward<RemoveLabelsT>(value)); return *this; }
    ///@}
  private:

    Aws::Map<Aws::String, Aws::String> m_addOrUpdateLabels;
    bool m_addOrUpdateLabelsHasBeenSet = false;

    Aws::Vector<Aws::String> m_removeLabels;
    bool m_removeLabelsHasBeenSet = false;
  };

} // namespace Model
} // namespace EKS
} // namespace Aws
