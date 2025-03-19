/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ds/DirectoryService_EXPORTS.h>
#include <aws/ds/DirectoryServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ds/model/ShareTarget.h>
#include <aws/ds/model/ShareMethod.h>
#include <utility>

namespace Aws
{
namespace DirectoryService
{
namespace Model
{

  /**
   */
  class ShareDirectoryRequest : public DirectoryServiceRequest
  {
  public:
    AWS_DIRECTORYSERVICE_API ShareDirectoryRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ShareDirectory"; }

    AWS_DIRECTORYSERVICE_API Aws::String SerializePayload() const override;

    AWS_DIRECTORYSERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>Identifier of the Managed Microsoft AD directory that you want to share with
     * other Amazon Web Services accounts.</p>
     */
    inline const Aws::String& GetDirectoryId() const { return m_directoryId; }
    inline bool DirectoryIdHasBeenSet() const { return m_directoryIdHasBeenSet; }
    template<typename DirectoryIdT = Aws::String>
    void SetDirectoryId(DirectoryIdT&& value) { m_directoryIdHasBeenSet = true; m_directoryId = std::forward<DirectoryIdT>(value); }
    template<typename DirectoryIdT = Aws::String>
    ShareDirectoryRequest& WithDirectoryId(DirectoryIdT&& value) { SetDirectoryId(std::forward<DirectoryIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A directory share request that is sent by the directory owner to the
     * directory consumer. The request includes a typed message to help the directory
     * consumer administrator determine whether to approve or reject the share
     * invitation.</p>
     */
    inline const Aws::String& GetShareNotes() const { return m_shareNotes; }
    inline bool ShareNotesHasBeenSet() const { return m_shareNotesHasBeenSet; }
    template<typename ShareNotesT = Aws::String>
    void SetShareNotes(ShareNotesT&& value) { m_shareNotesHasBeenSet = true; m_shareNotes = std::forward<ShareNotesT>(value); }
    template<typename ShareNotesT = Aws::String>
    ShareDirectoryRequest& WithShareNotes(ShareNotesT&& value) { SetShareNotes(std::forward<ShareNotesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Identifier for the directory consumer account with whom the directory is to
     * be shared.</p>
     */
    inline const ShareTarget& GetShareTarget() const { return m_shareTarget; }
    inline bool ShareTargetHasBeenSet() const { return m_shareTargetHasBeenSet; }
    template<typename ShareTargetT = ShareTarget>
    void SetShareTarget(ShareTargetT&& value) { m_shareTargetHasBeenSet = true; m_shareTarget = std::forward<ShareTargetT>(value); }
    template<typename ShareTargetT = ShareTarget>
    ShareDirectoryRequest& WithShareTarget(ShareTargetT&& value) { SetShareTarget(std::forward<ShareTargetT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The method used when sharing a directory to determine whether the directory
     * should be shared within your Amazon Web Services organization
     * (<code>ORGANIZATIONS</code>) or with any Amazon Web Services account by sending
     * a directory sharing request (<code>HANDSHAKE</code>).</p>
     */
    inline ShareMethod GetShareMethod() const { return m_shareMethod; }
    inline bool ShareMethodHasBeenSet() const { return m_shareMethodHasBeenSet; }
    inline void SetShareMethod(ShareMethod value) { m_shareMethodHasBeenSet = true; m_shareMethod = value; }
    inline ShareDirectoryRequest& WithShareMethod(ShareMethod value) { SetShareMethod(value); return *this;}
    ///@}
  private:

    Aws::String m_directoryId;
    bool m_directoryIdHasBeenSet = false;

    Aws::String m_shareNotes;
    bool m_shareNotesHasBeenSet = false;

    ShareTarget m_shareTarget;
    bool m_shareTargetHasBeenSet = false;

    ShareMethod m_shareMethod{ShareMethod::NOT_SET};
    bool m_shareMethodHasBeenSet = false;
  };

} // namespace Model
} // namespace DirectoryService
} // namespace Aws
