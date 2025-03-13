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
   * <p>The request to get the textual content of a specific email message stored in
   * an archive.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mailmanager-2023-10-17/GetArchiveMessageContentRequest">AWS
   * API Reference</a></p>
   */
  class GetArchiveMessageContentRequest : public MailManagerRequest
  {
  public:
    AWS_MAILMANAGER_API GetArchiveMessageContentRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetArchiveMessageContent"; }

    AWS_MAILMANAGER_API Aws::String SerializePayload() const override;

    AWS_MAILMANAGER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The unique identifier of the archived email message.</p>
     */
    inline const Aws::String& GetArchivedMessageId() const { return m_archivedMessageId; }
    inline bool ArchivedMessageIdHasBeenSet() const { return m_archivedMessageIdHasBeenSet; }
    template<typename ArchivedMessageIdT = Aws::String>
    void SetArchivedMessageId(ArchivedMessageIdT&& value) { m_archivedMessageIdHasBeenSet = true; m_archivedMessageId = std::forward<ArchivedMessageIdT>(value); }
    template<typename ArchivedMessageIdT = Aws::String>
    GetArchiveMessageContentRequest& WithArchivedMessageId(ArchivedMessageIdT&& value) { SetArchivedMessageId(std::forward<ArchivedMessageIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_archivedMessageId;
    bool m_archivedMessageIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MailManager
} // namespace Aws
