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
   * <p>An object representing a Kubernetes label change for a managed node
   * group.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/eks-2017-11-01/UpdateLabelsPayload">AWS
   * API Reference</a></p>
   */
  class UpdateLabelsPayload
  {
  public:
    AWS_EKS_API UpdateLabelsPayload();
    AWS_EKS_API UpdateLabelsPayload(Aws::Utils::Json::JsonView jsonValue);
    AWS_EKS_API UpdateLabelsPayload& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EKS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Kubernetes labels to be added or updated.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetAddOrUpdateLabels() const{ return m_addOrUpdateLabels; }

    /**
     * <p>Kubernetes labels to be added or updated.</p>
     */
    inline bool AddOrUpdateLabelsHasBeenSet() const { return m_addOrUpdateLabelsHasBeenSet; }

    /**
     * <p>Kubernetes labels to be added or updated.</p>
     */
    inline void SetAddOrUpdateLabels(const Aws::Map<Aws::String, Aws::String>& value) { m_addOrUpdateLabelsHasBeenSet = true; m_addOrUpdateLabels = value; }

    /**
     * <p>Kubernetes labels to be added or updated.</p>
     */
    inline void SetAddOrUpdateLabels(Aws::Map<Aws::String, Aws::String>&& value) { m_addOrUpdateLabelsHasBeenSet = true; m_addOrUpdateLabels = std::move(value); }

    /**
     * <p>Kubernetes labels to be added or updated.</p>
     */
    inline UpdateLabelsPayload& WithAddOrUpdateLabels(const Aws::Map<Aws::String, Aws::String>& value) { SetAddOrUpdateLabels(value); return *this;}

    /**
     * <p>Kubernetes labels to be added or updated.</p>
     */
    inline UpdateLabelsPayload& WithAddOrUpdateLabels(Aws::Map<Aws::String, Aws::String>&& value) { SetAddOrUpdateLabels(std::move(value)); return *this;}

    /**
     * <p>Kubernetes labels to be added or updated.</p>
     */
    inline UpdateLabelsPayload& AddAddOrUpdateLabels(const Aws::String& key, const Aws::String& value) { m_addOrUpdateLabelsHasBeenSet = true; m_addOrUpdateLabels.emplace(key, value); return *this; }

    /**
     * <p>Kubernetes labels to be added or updated.</p>
     */
    inline UpdateLabelsPayload& AddAddOrUpdateLabels(Aws::String&& key, const Aws::String& value) { m_addOrUpdateLabelsHasBeenSet = true; m_addOrUpdateLabels.emplace(std::move(key), value); return *this; }

    /**
     * <p>Kubernetes labels to be added or updated.</p>
     */
    inline UpdateLabelsPayload& AddAddOrUpdateLabels(const Aws::String& key, Aws::String&& value) { m_addOrUpdateLabelsHasBeenSet = true; m_addOrUpdateLabels.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Kubernetes labels to be added or updated.</p>
     */
    inline UpdateLabelsPayload& AddAddOrUpdateLabels(Aws::String&& key, Aws::String&& value) { m_addOrUpdateLabelsHasBeenSet = true; m_addOrUpdateLabels.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Kubernetes labels to be added or updated.</p>
     */
    inline UpdateLabelsPayload& AddAddOrUpdateLabels(const char* key, Aws::String&& value) { m_addOrUpdateLabelsHasBeenSet = true; m_addOrUpdateLabels.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Kubernetes labels to be added or updated.</p>
     */
    inline UpdateLabelsPayload& AddAddOrUpdateLabels(Aws::String&& key, const char* value) { m_addOrUpdateLabelsHasBeenSet = true; m_addOrUpdateLabels.emplace(std::move(key), value); return *this; }

    /**
     * <p>Kubernetes labels to be added or updated.</p>
     */
    inline UpdateLabelsPayload& AddAddOrUpdateLabels(const char* key, const char* value) { m_addOrUpdateLabelsHasBeenSet = true; m_addOrUpdateLabels.emplace(key, value); return *this; }


    /**
     * <p>Kubernetes labels to be removed.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRemoveLabels() const{ return m_removeLabels; }

    /**
     * <p>Kubernetes labels to be removed.</p>
     */
    inline bool RemoveLabelsHasBeenSet() const { return m_removeLabelsHasBeenSet; }

    /**
     * <p>Kubernetes labels to be removed.</p>
     */
    inline void SetRemoveLabels(const Aws::Vector<Aws::String>& value) { m_removeLabelsHasBeenSet = true; m_removeLabels = value; }

    /**
     * <p>Kubernetes labels to be removed.</p>
     */
    inline void SetRemoveLabels(Aws::Vector<Aws::String>&& value) { m_removeLabelsHasBeenSet = true; m_removeLabels = std::move(value); }

    /**
     * <p>Kubernetes labels to be removed.</p>
     */
    inline UpdateLabelsPayload& WithRemoveLabels(const Aws::Vector<Aws::String>& value) { SetRemoveLabels(value); return *this;}

    /**
     * <p>Kubernetes labels to be removed.</p>
     */
    inline UpdateLabelsPayload& WithRemoveLabels(Aws::Vector<Aws::String>&& value) { SetRemoveLabels(std::move(value)); return *this;}

    /**
     * <p>Kubernetes labels to be removed.</p>
     */
    inline UpdateLabelsPayload& AddRemoveLabels(const Aws::String& value) { m_removeLabelsHasBeenSet = true; m_removeLabels.push_back(value); return *this; }

    /**
     * <p>Kubernetes labels to be removed.</p>
     */
    inline UpdateLabelsPayload& AddRemoveLabels(Aws::String&& value) { m_removeLabelsHasBeenSet = true; m_removeLabels.push_back(std::move(value)); return *this; }

    /**
     * <p>Kubernetes labels to be removed.</p>
     */
    inline UpdateLabelsPayload& AddRemoveLabels(const char* value) { m_removeLabelsHasBeenSet = true; m_removeLabels.push_back(value); return *this; }

  private:

    Aws::Map<Aws::String, Aws::String> m_addOrUpdateLabels;
    bool m_addOrUpdateLabelsHasBeenSet = false;

    Aws::Vector<Aws::String> m_removeLabels;
    bool m_removeLabelsHasBeenSet = false;
  };

} // namespace Model
} // namespace EKS
} // namespace Aws
