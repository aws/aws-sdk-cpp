/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devops-guru/DevOpsGuru_EXPORTS.h>
#include <aws/devops-guru/DevOpsGuruRequest.h>
#include <aws/devops-guru/model/UpdateResourceCollectionAction.h>
#include <aws/devops-guru/model/UpdateResourceCollectionFilter.h>
#include <utility>

namespace Aws
{
namespace DevOpsGuru
{
namespace Model
{

  /**
   */
  class UpdateResourceCollectionRequest : public DevOpsGuruRequest
  {
  public:
    AWS_DEVOPSGURU_API UpdateResourceCollectionRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateResourceCollection"; }

    AWS_DEVOPSGURU_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p> Specifies if the resource collection in the request is added or deleted to
     * the resource collection. </p>
     */
    inline UpdateResourceCollectionAction GetAction() const { return m_action; }
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }
    inline void SetAction(UpdateResourceCollectionAction value) { m_actionHasBeenSet = true; m_action = value; }
    inline UpdateResourceCollectionRequest& WithAction(UpdateResourceCollectionAction value) { SetAction(value); return *this;}
    ///@}

    ///@{
    
    inline const UpdateResourceCollectionFilter& GetResourceCollection() const { return m_resourceCollection; }
    inline bool ResourceCollectionHasBeenSet() const { return m_resourceCollectionHasBeenSet; }
    template<typename ResourceCollectionT = UpdateResourceCollectionFilter>
    void SetResourceCollection(ResourceCollectionT&& value) { m_resourceCollectionHasBeenSet = true; m_resourceCollection = std::forward<ResourceCollectionT>(value); }
    template<typename ResourceCollectionT = UpdateResourceCollectionFilter>
    UpdateResourceCollectionRequest& WithResourceCollection(ResourceCollectionT&& value) { SetResourceCollection(std::forward<ResourceCollectionT>(value)); return *this;}
    ///@}
  private:

    UpdateResourceCollectionAction m_action{UpdateResourceCollectionAction::NOT_SET};
    bool m_actionHasBeenSet = false;

    UpdateResourceCollectionFilter m_resourceCollection;
    bool m_resourceCollectionHasBeenSet = false;
  };

} // namespace Model
} // namespace DevOpsGuru
} // namespace Aws
