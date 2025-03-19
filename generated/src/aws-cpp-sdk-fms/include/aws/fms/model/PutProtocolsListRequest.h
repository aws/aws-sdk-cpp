/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fms/FMS_EXPORTS.h>
#include <aws/fms/FMSRequest.h>
#include <aws/fms/model/ProtocolsListData.h>
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
  class PutProtocolsListRequest : public FMSRequest
  {
  public:
    AWS_FMS_API PutProtocolsListRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutProtocolsList"; }

    AWS_FMS_API Aws::String SerializePayload() const override;

    AWS_FMS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The details of the Firewall Manager protocols list to be created.</p>
     */
    inline const ProtocolsListData& GetProtocolsList() const { return m_protocolsList; }
    inline bool ProtocolsListHasBeenSet() const { return m_protocolsListHasBeenSet; }
    template<typename ProtocolsListT = ProtocolsListData>
    void SetProtocolsList(ProtocolsListT&& value) { m_protocolsListHasBeenSet = true; m_protocolsList = std::forward<ProtocolsListT>(value); }
    template<typename ProtocolsListT = ProtocolsListData>
    PutProtocolsListRequest& WithProtocolsList(ProtocolsListT&& value) { SetProtocolsList(std::forward<ProtocolsListT>(value)); return *this;}
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
    PutProtocolsListRequest& WithTagList(TagListT&& value) { SetTagList(std::forward<TagListT>(value)); return *this;}
    template<typename TagListT = Tag>
    PutProtocolsListRequest& AddTagList(TagListT&& value) { m_tagListHasBeenSet = true; m_tagList.emplace_back(std::forward<TagListT>(value)); return *this; }
    ///@}
  private:

    ProtocolsListData m_protocolsList;
    bool m_protocolsListHasBeenSet = false;

    Aws::Vector<Tag> m_tagList;
    bool m_tagListHasBeenSet = false;
  };

} // namespace Model
} // namespace FMS
} // namespace Aws
