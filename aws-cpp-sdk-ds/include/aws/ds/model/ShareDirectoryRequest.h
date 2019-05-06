/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_DIRECTORYSERVICE_API ShareDirectoryRequest : public DirectoryServiceRequest
  {
  public:
    ShareDirectoryRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ShareDirectory"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Identifier of the AWS Managed Microsoft AD directory that you want to share
     * with other AWS accounts.</p>
     */
    inline const Aws::String& GetDirectoryId() const{ return m_directoryId; }

    /**
     * <p>Identifier of the AWS Managed Microsoft AD directory that you want to share
     * with other AWS accounts.</p>
     */
    inline bool DirectoryIdHasBeenSet() const { return m_directoryIdHasBeenSet; }

    /**
     * <p>Identifier of the AWS Managed Microsoft AD directory that you want to share
     * with other AWS accounts.</p>
     */
    inline void SetDirectoryId(const Aws::String& value) { m_directoryIdHasBeenSet = true; m_directoryId = value; }

    /**
     * <p>Identifier of the AWS Managed Microsoft AD directory that you want to share
     * with other AWS accounts.</p>
     */
    inline void SetDirectoryId(Aws::String&& value) { m_directoryIdHasBeenSet = true; m_directoryId = std::move(value); }

    /**
     * <p>Identifier of the AWS Managed Microsoft AD directory that you want to share
     * with other AWS accounts.</p>
     */
    inline void SetDirectoryId(const char* value) { m_directoryIdHasBeenSet = true; m_directoryId.assign(value); }

    /**
     * <p>Identifier of the AWS Managed Microsoft AD directory that you want to share
     * with other AWS accounts.</p>
     */
    inline ShareDirectoryRequest& WithDirectoryId(const Aws::String& value) { SetDirectoryId(value); return *this;}

    /**
     * <p>Identifier of the AWS Managed Microsoft AD directory that you want to share
     * with other AWS accounts.</p>
     */
    inline ShareDirectoryRequest& WithDirectoryId(Aws::String&& value) { SetDirectoryId(std::move(value)); return *this;}

    /**
     * <p>Identifier of the AWS Managed Microsoft AD directory that you want to share
     * with other AWS accounts.</p>
     */
    inline ShareDirectoryRequest& WithDirectoryId(const char* value) { SetDirectoryId(value); return *this;}


    /**
     * <p>A directory share request that is sent by the directory owner to the
     * directory consumer. The request includes a typed message to help the directory
     * consumer administrator determine whether to approve or reject the share
     * invitation.</p>
     */
    inline const Aws::String& GetShareNotes() const{ return m_shareNotes; }

    /**
     * <p>A directory share request that is sent by the directory owner to the
     * directory consumer. The request includes a typed message to help the directory
     * consumer administrator determine whether to approve or reject the share
     * invitation.</p>
     */
    inline bool ShareNotesHasBeenSet() const { return m_shareNotesHasBeenSet; }

    /**
     * <p>A directory share request that is sent by the directory owner to the
     * directory consumer. The request includes a typed message to help the directory
     * consumer administrator determine whether to approve or reject the share
     * invitation.</p>
     */
    inline void SetShareNotes(const Aws::String& value) { m_shareNotesHasBeenSet = true; m_shareNotes = value; }

    /**
     * <p>A directory share request that is sent by the directory owner to the
     * directory consumer. The request includes a typed message to help the directory
     * consumer administrator determine whether to approve or reject the share
     * invitation.</p>
     */
    inline void SetShareNotes(Aws::String&& value) { m_shareNotesHasBeenSet = true; m_shareNotes = std::move(value); }

    /**
     * <p>A directory share request that is sent by the directory owner to the
     * directory consumer. The request includes a typed message to help the directory
     * consumer administrator determine whether to approve or reject the share
     * invitation.</p>
     */
    inline void SetShareNotes(const char* value) { m_shareNotesHasBeenSet = true; m_shareNotes.assign(value); }

    /**
     * <p>A directory share request that is sent by the directory owner to the
     * directory consumer. The request includes a typed message to help the directory
     * consumer administrator determine whether to approve or reject the share
     * invitation.</p>
     */
    inline ShareDirectoryRequest& WithShareNotes(const Aws::String& value) { SetShareNotes(value); return *this;}

    /**
     * <p>A directory share request that is sent by the directory owner to the
     * directory consumer. The request includes a typed message to help the directory
     * consumer administrator determine whether to approve or reject the share
     * invitation.</p>
     */
    inline ShareDirectoryRequest& WithShareNotes(Aws::String&& value) { SetShareNotes(std::move(value)); return *this;}

    /**
     * <p>A directory share request that is sent by the directory owner to the
     * directory consumer. The request includes a typed message to help the directory
     * consumer administrator determine whether to approve or reject the share
     * invitation.</p>
     */
    inline ShareDirectoryRequest& WithShareNotes(const char* value) { SetShareNotes(value); return *this;}


    /**
     * <p>Identifier for the directory consumer account with whom the directory is to
     * be shared.</p>
     */
    inline const ShareTarget& GetShareTarget() const{ return m_shareTarget; }

    /**
     * <p>Identifier for the directory consumer account with whom the directory is to
     * be shared.</p>
     */
    inline bool ShareTargetHasBeenSet() const { return m_shareTargetHasBeenSet; }

    /**
     * <p>Identifier for the directory consumer account with whom the directory is to
     * be shared.</p>
     */
    inline void SetShareTarget(const ShareTarget& value) { m_shareTargetHasBeenSet = true; m_shareTarget = value; }

    /**
     * <p>Identifier for the directory consumer account with whom the directory is to
     * be shared.</p>
     */
    inline void SetShareTarget(ShareTarget&& value) { m_shareTargetHasBeenSet = true; m_shareTarget = std::move(value); }

    /**
     * <p>Identifier for the directory consumer account with whom the directory is to
     * be shared.</p>
     */
    inline ShareDirectoryRequest& WithShareTarget(const ShareTarget& value) { SetShareTarget(value); return *this;}

    /**
     * <p>Identifier for the directory consumer account with whom the directory is to
     * be shared.</p>
     */
    inline ShareDirectoryRequest& WithShareTarget(ShareTarget&& value) { SetShareTarget(std::move(value)); return *this;}


    /**
     * <p>The method used when sharing a directory to determine whether the directory
     * should be shared within your AWS organization (<code>ORGANIZATIONS</code>) or
     * with any AWS account by sending a directory sharing request
     * (<code>HANDSHAKE</code>).</p>
     */
    inline const ShareMethod& GetShareMethod() const{ return m_shareMethod; }

    /**
     * <p>The method used when sharing a directory to determine whether the directory
     * should be shared within your AWS organization (<code>ORGANIZATIONS</code>) or
     * with any AWS account by sending a directory sharing request
     * (<code>HANDSHAKE</code>).</p>
     */
    inline bool ShareMethodHasBeenSet() const { return m_shareMethodHasBeenSet; }

    /**
     * <p>The method used when sharing a directory to determine whether the directory
     * should be shared within your AWS organization (<code>ORGANIZATIONS</code>) or
     * with any AWS account by sending a directory sharing request
     * (<code>HANDSHAKE</code>).</p>
     */
    inline void SetShareMethod(const ShareMethod& value) { m_shareMethodHasBeenSet = true; m_shareMethod = value; }

    /**
     * <p>The method used when sharing a directory to determine whether the directory
     * should be shared within your AWS organization (<code>ORGANIZATIONS</code>) or
     * with any AWS account by sending a directory sharing request
     * (<code>HANDSHAKE</code>).</p>
     */
    inline void SetShareMethod(ShareMethod&& value) { m_shareMethodHasBeenSet = true; m_shareMethod = std::move(value); }

    /**
     * <p>The method used when sharing a directory to determine whether the directory
     * should be shared within your AWS organization (<code>ORGANIZATIONS</code>) or
     * with any AWS account by sending a directory sharing request
     * (<code>HANDSHAKE</code>).</p>
     */
    inline ShareDirectoryRequest& WithShareMethod(const ShareMethod& value) { SetShareMethod(value); return *this;}

    /**
     * <p>The method used when sharing a directory to determine whether the directory
     * should be shared within your AWS organization (<code>ORGANIZATIONS</code>) or
     * with any AWS account by sending a directory sharing request
     * (<code>HANDSHAKE</code>).</p>
     */
    inline ShareDirectoryRequest& WithShareMethod(ShareMethod&& value) { SetShareMethod(std::move(value)); return *this;}

  private:

    Aws::String m_directoryId;
    bool m_directoryIdHasBeenSet;

    Aws::String m_shareNotes;
    bool m_shareNotesHasBeenSet;

    ShareTarget m_shareTarget;
    bool m_shareTargetHasBeenSet;

    ShareMethod m_shareMethod;
    bool m_shareMethodHasBeenSet;
  };

} // namespace Model
} // namespace DirectoryService
} // namespace Aws
