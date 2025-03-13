/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fms/FMS_EXPORTS.h>
#include <aws/fms/FMSRequest.h>
#include <aws/fms/model/AppsListData.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/fms/model/Tag.h>
#include <utility>

namespace Aws
{
namespace FMS
{
namespace Model
{

  /**
   */
  class PutAppsListRequest : public FMSRequest
  {
  public:
    AWS_FMS_API PutAppsListRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutAppsList"; }

    AWS_FMS_API Aws::String SerializePayload() const override;

    AWS_FMS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The details of the Firewall Manager applications list to be created.</p>
     */
    inline const AppsListData& GetAppsList() const { return m_appsList; }
    inline bool AppsListHasBeenSet() const { return m_appsListHasBeenSet; }
    template<typename AppsListT = AppsListData>
    void SetAppsList(AppsListT&& value) { m_appsListHasBeenSet = true; m_appsList = std::forward<AppsListT>(value); }
    template<typename AppsListT = AppsListData>
    PutAppsListRequest& WithAppsList(AppsListT&& value) { SetAppsList(std::forward<AppsListT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags associated with the resource.</p>
     */
    inline const Aws::Vector<Tag>& GetTagList() const { return m_tagList; }
    inline bool TagListHasBeenSet() const { return m_tagListHasBeenSet; }
    template<typename TagListT = Aws::Vector<Tag>>
    void SetTagList(TagListT&& value) { m_tagListHasBeenSet = true; m_tagList = std::forward<TagListT>(value); }
    template<typename TagListT = Aws::Vector<Tag>>
    PutAppsListRequest& WithTagList(TagListT&& value) { SetTagList(std::forward<TagListT>(value)); return *this;}
    template<typename TagListT = Tag>
    PutAppsListRequest& AddTagList(TagListT&& value) { m_tagListHasBeenSet = true; m_tagList.emplace_back(std::forward<TagListT>(value)); return *this; }
    ///@}
  private:

    AppsListData m_appsList;
    bool m_appsListHasBeenSet = false;

    Aws::Vector<Tag> m_tagList;
    bool m_tagListHasBeenSet = false;
  };

} // namespace Model
} // namespace FMS
} // namespace Aws
