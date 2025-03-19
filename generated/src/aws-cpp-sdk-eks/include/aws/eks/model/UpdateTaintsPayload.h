/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eks/EKS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/eks/model/Taint.h>
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
   * <p>An object representing the details of an update to a taints payload. For more
   * information, see <a
   * href="https://docs.aws.amazon.com/eks/latest/userguide/node-taints-managed-node-groups.html">Node
   * taints on managed node groups</a> in the <i>Amazon EKS User
   * Guide</i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/eks-2017-11-01/UpdateTaintsPayload">AWS
   * API Reference</a></p>
   */
  class UpdateTaintsPayload
  {
  public:
    AWS_EKS_API UpdateTaintsPayload() = default;
    AWS_EKS_API UpdateTaintsPayload(Aws::Utils::Json::JsonView jsonValue);
    AWS_EKS_API UpdateTaintsPayload& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EKS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Kubernetes taints to be added or updated.</p>
     */
    inline const Aws::Vector<Taint>& GetAddOrUpdateTaints() const { return m_addOrUpdateTaints; }
    inline bool AddOrUpdateTaintsHasBeenSet() const { return m_addOrUpdateTaintsHasBeenSet; }
    template<typename AddOrUpdateTaintsT = Aws::Vector<Taint>>
    void SetAddOrUpdateTaints(AddOrUpdateTaintsT&& value) { m_addOrUpdateTaintsHasBeenSet = true; m_addOrUpdateTaints = std::forward<AddOrUpdateTaintsT>(value); }
    template<typename AddOrUpdateTaintsT = Aws::Vector<Taint>>
    UpdateTaintsPayload& WithAddOrUpdateTaints(AddOrUpdateTaintsT&& value) { SetAddOrUpdateTaints(std::forward<AddOrUpdateTaintsT>(value)); return *this;}
    template<typename AddOrUpdateTaintsT = Taint>
    UpdateTaintsPayload& AddAddOrUpdateTaints(AddOrUpdateTaintsT&& value) { m_addOrUpdateTaintsHasBeenSet = true; m_addOrUpdateTaints.emplace_back(std::forward<AddOrUpdateTaintsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Kubernetes taints to remove.</p>
     */
    inline const Aws::Vector<Taint>& GetRemoveTaints() const { return m_removeTaints; }
    inline bool RemoveTaintsHasBeenSet() const { return m_removeTaintsHasBeenSet; }
    template<typename RemoveTaintsT = Aws::Vector<Taint>>
    void SetRemoveTaints(RemoveTaintsT&& value) { m_removeTaintsHasBeenSet = true; m_removeTaints = std::forward<RemoveTaintsT>(value); }
    template<typename RemoveTaintsT = Aws::Vector<Taint>>
    UpdateTaintsPayload& WithRemoveTaints(RemoveTaintsT&& value) { SetRemoveTaints(std::forward<RemoveTaintsT>(value)); return *this;}
    template<typename RemoveTaintsT = Taint>
    UpdateTaintsPayload& AddRemoveTaints(RemoveTaintsT&& value) { m_removeTaintsHasBeenSet = true; m_removeTaints.emplace_back(std::forward<RemoveTaintsT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Taint> m_addOrUpdateTaints;
    bool m_addOrUpdateTaintsHasBeenSet = false;

    Aws::Vector<Taint> m_removeTaints;
    bool m_removeTaintsHasBeenSet = false;
  };

} // namespace Model
} // namespace EKS
} // namespace Aws
