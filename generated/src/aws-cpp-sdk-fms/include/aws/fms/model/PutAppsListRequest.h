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
    AWS_FMS_API PutAppsListRequest();

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
    inline const AppsListData& GetAppsList() const{ return m_appsList; }
    inline bool AppsListHasBeenSet() const { return m_appsListHasBeenSet; }
    inline void SetAppsList(const AppsListData& value) { m_appsListHasBeenSet = true; m_appsList = value; }
    inline void SetAppsList(AppsListData&& value) { m_appsListHasBeenSet = true; m_appsList = std::move(value); }
    inline PutAppsListRequest& WithAppsList(const AppsListData& value) { SetAppsList(value); return *this;}
    inline PutAppsListRequest& WithAppsList(AppsListData&& value) { SetAppsList(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags associated with the resource.</p>
     */
    inline const Aws::Vector<Tag>& GetTagList() const{ return m_tagList; }
    inline bool TagListHasBeenSet() const { return m_tagListHasBeenSet; }
    inline void SetTagList(const Aws::Vector<Tag>& value) { m_tagListHasBeenSet = true; m_tagList = value; }
    inline void SetTagList(Aws::Vector<Tag>&& value) { m_tagListHasBeenSet = true; m_tagList = std::move(value); }
    inline PutAppsListRequest& WithTagList(const Aws::Vector<Tag>& value) { SetTagList(value); return *this;}
    inline PutAppsListRequest& WithTagList(Aws::Vector<Tag>&& value) { SetTagList(std::move(value)); return *this;}
    inline PutAppsListRequest& AddTagList(const Tag& value) { m_tagListHasBeenSet = true; m_tagList.push_back(value); return *this; }
    inline PutAppsListRequest& AddTagList(Tag&& value) { m_tagListHasBeenSet = true; m_tagList.push_back(std::move(value)); return *this; }
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
