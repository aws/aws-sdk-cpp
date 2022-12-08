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
    AWS_FMS_API PutProtocolsListRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutProtocolsList"; }

    AWS_FMS_API Aws::String SerializePayload() const override;

    AWS_FMS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The details of the Firewall Manager protocols list to be created.</p>
     */
    inline const ProtocolsListData& GetProtocolsList() const{ return m_protocolsList; }

    /**
     * <p>The details of the Firewall Manager protocols list to be created.</p>
     */
    inline bool ProtocolsListHasBeenSet() const { return m_protocolsListHasBeenSet; }

    /**
     * <p>The details of the Firewall Manager protocols list to be created.</p>
     */
    inline void SetProtocolsList(const ProtocolsListData& value) { m_protocolsListHasBeenSet = true; m_protocolsList = value; }

    /**
     * <p>The details of the Firewall Manager protocols list to be created.</p>
     */
    inline void SetProtocolsList(ProtocolsListData&& value) { m_protocolsListHasBeenSet = true; m_protocolsList = std::move(value); }

    /**
     * <p>The details of the Firewall Manager protocols list to be created.</p>
     */
    inline PutProtocolsListRequest& WithProtocolsList(const ProtocolsListData& value) { SetProtocolsList(value); return *this;}

    /**
     * <p>The details of the Firewall Manager protocols list to be created.</p>
     */
    inline PutProtocolsListRequest& WithProtocolsList(ProtocolsListData&& value) { SetProtocolsList(std::move(value)); return *this;}


    /**
     * <p>The tags associated with the resource.</p>
     */
    inline const Aws::Vector<Tag>& GetTagList() const{ return m_tagList; }

    /**
     * <p>The tags associated with the resource.</p>
     */
    inline bool TagListHasBeenSet() const { return m_tagListHasBeenSet; }

    /**
     * <p>The tags associated with the resource.</p>
     */
    inline void SetTagList(const Aws::Vector<Tag>& value) { m_tagListHasBeenSet = true; m_tagList = value; }

    /**
     * <p>The tags associated with the resource.</p>
     */
    inline void SetTagList(Aws::Vector<Tag>&& value) { m_tagListHasBeenSet = true; m_tagList = std::move(value); }

    /**
     * <p>The tags associated with the resource.</p>
     */
    inline PutProtocolsListRequest& WithTagList(const Aws::Vector<Tag>& value) { SetTagList(value); return *this;}

    /**
     * <p>The tags associated with the resource.</p>
     */
    inline PutProtocolsListRequest& WithTagList(Aws::Vector<Tag>&& value) { SetTagList(std::move(value)); return *this;}

    /**
     * <p>The tags associated with the resource.</p>
     */
    inline PutProtocolsListRequest& AddTagList(const Tag& value) { m_tagListHasBeenSet = true; m_tagList.push_back(value); return *this; }

    /**
     * <p>The tags associated with the resource.</p>
     */
    inline PutProtocolsListRequest& AddTagList(Tag&& value) { m_tagListHasBeenSet = true; m_tagList.push_back(std::move(value)); return *this; }

  private:

    ProtocolsListData m_protocolsList;
    bool m_protocolsListHasBeenSet = false;

    Aws::Vector<Tag> m_tagList;
    bool m_tagListHasBeenSet = false;
  };

} // namespace Model
} // namespace FMS
} // namespace Aws
