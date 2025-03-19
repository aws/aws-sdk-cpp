/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mailmanager/MailManager_EXPORTS.h>
#include <aws/mailmanager/MailManagerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace MailManager
{
namespace Model
{

  /**
   * <p>The request to retrieve details of a specific archive search
   * job.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mailmanager-2023-10-17/GetArchiveSearchRequest">AWS
   * API Reference</a></p>
   */
  class GetArchiveSearchRequest : public MailManagerRequest
  {
  public:
    AWS_MAILMANAGER_API GetArchiveSearchRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetArchiveSearch"; }

    AWS_MAILMANAGER_API Aws::String SerializePayload() const override;

    AWS_MAILMANAGER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The identifier of the search job to get details for.</p>
     */
    inline const Aws::String& GetSearchId() const { return m_searchId; }
    inline bool SearchIdHasBeenSet() const { return m_searchIdHasBeenSet; }
    template<typename SearchIdT = Aws::String>
    void SetSearchId(SearchIdT&& value) { m_searchIdHasBeenSet = true; m_searchId = std::forward<SearchIdT>(value); }
    template<typename SearchIdT = Aws::String>
    GetArchiveSearchRequest& WithSearchId(SearchIdT&& value) { SetSearchId(std::forward<SearchIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_searchId;
    bool m_searchIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MailManager
} // namespace Aws
