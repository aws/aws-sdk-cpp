/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fms/FMS_EXPORTS.h>
#include <aws/fms/FMSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace FMS
{
namespace Model
{

  /**
   */
  class GetAppsListRequest : public FMSRequest
  {
  public:
    AWS_FMS_API GetAppsListRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetAppsList"; }

    AWS_FMS_API Aws::String SerializePayload() const override;

    AWS_FMS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The ID of the Firewall Manager applications list that you want the details
     * for.</p>
     */
    inline const Aws::String& GetListId() const { return m_listId; }
    inline bool ListIdHasBeenSet() const { return m_listIdHasBeenSet; }
    template<typename ListIdT = Aws::String>
    void SetListId(ListIdT&& value) { m_listIdHasBeenSet = true; m_listId = std::forward<ListIdT>(value); }
    template<typename ListIdT = Aws::String>
    GetAppsListRequest& WithListId(ListIdT&& value) { SetListId(std::forward<ListIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether the list to retrieve is a default list owned by Firewall
     * Manager.</p>
     */
    inline bool GetDefaultList() const { return m_defaultList; }
    inline bool DefaultListHasBeenSet() const { return m_defaultListHasBeenSet; }
    inline void SetDefaultList(bool value) { m_defaultListHasBeenSet = true; m_defaultList = value; }
    inline GetAppsListRequest& WithDefaultList(bool value) { SetDefaultList(value); return *this;}
    ///@}
  private:

    Aws::String m_listId;
    bool m_listIdHasBeenSet = false;

    bool m_defaultList{false};
    bool m_defaultListHasBeenSet = false;
  };

} // namespace Model
} // namespace FMS
} // namespace Aws
