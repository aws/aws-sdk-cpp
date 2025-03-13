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
   * <p>The request to initiate deletion of an email archive.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mailmanager-2023-10-17/DeleteArchiveRequest">AWS
   * API Reference</a></p>
   */
  class DeleteArchiveRequest : public MailManagerRequest
  {
  public:
    AWS_MAILMANAGER_API DeleteArchiveRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteArchive"; }

    AWS_MAILMANAGER_API Aws::String SerializePayload() const override;

    AWS_MAILMANAGER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The identifier of the archive to delete.</p>
     */
    inline const Aws::String& GetArchiveId() const { return m_archiveId; }
    inline bool ArchiveIdHasBeenSet() const { return m_archiveIdHasBeenSet; }
    template<typename ArchiveIdT = Aws::String>
    void SetArchiveId(ArchiveIdT&& value) { m_archiveIdHasBeenSet = true; m_archiveId = std::forward<ArchiveIdT>(value); }
    template<typename ArchiveIdT = Aws::String>
    DeleteArchiveRequest& WithArchiveId(ArchiveIdT&& value) { SetArchiveId(std::forward<ArchiveIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_archiveId;
    bool m_archiveIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MailManager
} // namespace Aws
