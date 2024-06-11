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
   * <p>The request to retrieve results from a completed archive search
   * job.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mailmanager-2023-10-17/GetArchiveSearchResultsRequest">AWS
   * API Reference</a></p>
   */
  class GetArchiveSearchResultsRequest : public MailManagerRequest
  {
  public:
    AWS_MAILMANAGER_API GetArchiveSearchResultsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetArchiveSearchResults"; }

    AWS_MAILMANAGER_API Aws::String SerializePayload() const override;

    AWS_MAILMANAGER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The identifier of the completed search job.</p>
     */
    inline const Aws::String& GetSearchId() const{ return m_searchId; }
    inline bool SearchIdHasBeenSet() const { return m_searchIdHasBeenSet; }
    inline void SetSearchId(const Aws::String& value) { m_searchIdHasBeenSet = true; m_searchId = value; }
    inline void SetSearchId(Aws::String&& value) { m_searchIdHasBeenSet = true; m_searchId = std::move(value); }
    inline void SetSearchId(const char* value) { m_searchIdHasBeenSet = true; m_searchId.assign(value); }
    inline GetArchiveSearchResultsRequest& WithSearchId(const Aws::String& value) { SetSearchId(value); return *this;}
    inline GetArchiveSearchResultsRequest& WithSearchId(Aws::String&& value) { SetSearchId(std::move(value)); return *this;}
    inline GetArchiveSearchResultsRequest& WithSearchId(const char* value) { SetSearchId(value); return *this;}
    ///@}
  private:

    Aws::String m_searchId;
    bool m_searchIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MailManager
} // namespace Aws
