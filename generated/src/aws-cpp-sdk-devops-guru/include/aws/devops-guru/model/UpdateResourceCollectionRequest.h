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
    AWS_DEVOPSGURU_API UpdateResourceCollectionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateResourceCollection"; }

    AWS_DEVOPSGURU_API Aws::String SerializePayload() const override;


    /**
     * <p> Specifies if the resource collection in the request is added or deleted to
     * the resource collection. </p>
     */
    inline const UpdateResourceCollectionAction& GetAction() const{ return m_action; }

    /**
     * <p> Specifies if the resource collection in the request is added or deleted to
     * the resource collection. </p>
     */
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }

    /**
     * <p> Specifies if the resource collection in the request is added or deleted to
     * the resource collection. </p>
     */
    inline void SetAction(const UpdateResourceCollectionAction& value) { m_actionHasBeenSet = true; m_action = value; }

    /**
     * <p> Specifies if the resource collection in the request is added or deleted to
     * the resource collection. </p>
     */
    inline void SetAction(UpdateResourceCollectionAction&& value) { m_actionHasBeenSet = true; m_action = std::move(value); }

    /**
     * <p> Specifies if the resource collection in the request is added or deleted to
     * the resource collection. </p>
     */
    inline UpdateResourceCollectionRequest& WithAction(const UpdateResourceCollectionAction& value) { SetAction(value); return *this;}

    /**
     * <p> Specifies if the resource collection in the request is added or deleted to
     * the resource collection. </p>
     */
    inline UpdateResourceCollectionRequest& WithAction(UpdateResourceCollectionAction&& value) { SetAction(std::move(value)); return *this;}


    
    inline const UpdateResourceCollectionFilter& GetResourceCollection() const{ return m_resourceCollection; }

    
    inline bool ResourceCollectionHasBeenSet() const { return m_resourceCollectionHasBeenSet; }

    
    inline void SetResourceCollection(const UpdateResourceCollectionFilter& value) { m_resourceCollectionHasBeenSet = true; m_resourceCollection = value; }

    
    inline void SetResourceCollection(UpdateResourceCollectionFilter&& value) { m_resourceCollectionHasBeenSet = true; m_resourceCollection = std::move(value); }

    
    inline UpdateResourceCollectionRequest& WithResourceCollection(const UpdateResourceCollectionFilter& value) { SetResourceCollection(value); return *this;}

    
    inline UpdateResourceCollectionRequest& WithResourceCollection(UpdateResourceCollectionFilter&& value) { SetResourceCollection(std::move(value)); return *this;}

  private:

    UpdateResourceCollectionAction m_action;
    bool m_actionHasBeenSet = false;

    UpdateResourceCollectionFilter m_resourceCollection;
    bool m_resourceCollectionHasBeenSet = false;
  };

} // namespace Model
} // namespace DevOpsGuru
} // namespace Aws
