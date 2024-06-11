/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeguru-reviewer/CodeGuruReviewer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codeguru-reviewer/model/EventInfo.h>
#include <aws/codeguru-reviewer/model/VendorName.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace CodeGuruReviewer
{
namespace Model
{

  /**
   * <p>Metadata that is associated with a code review. This applies to both pull
   * request and repository analysis code reviews.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codeguru-reviewer-2019-09-19/RequestMetadata">AWS
   * API Reference</a></p>
   */
  class RequestMetadata
  {
  public:
    AWS_CODEGURUREVIEWER_API RequestMetadata();
    AWS_CODEGURUREVIEWER_API RequestMetadata(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEGURUREVIEWER_API RequestMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEGURUREVIEWER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the request. This is required for a pull request code review.</p>
     */
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline bool RequestIdHasBeenSet() const { return m_requestIdHasBeenSet; }
    inline void SetRequestId(const Aws::String& value) { m_requestIdHasBeenSet = true; m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestIdHasBeenSet = true; m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestIdHasBeenSet = true; m_requestId.assign(value); }
    inline RequestMetadata& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline RequestMetadata& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline RequestMetadata& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An identifier, such as a name or account ID, that is associated with the
     * requester. The <code>Requester</code> is used to capture the
     * <code>author/actor</code> name of the event request.</p>
     */
    inline const Aws::String& GetRequester() const{ return m_requester; }
    inline bool RequesterHasBeenSet() const { return m_requesterHasBeenSet; }
    inline void SetRequester(const Aws::String& value) { m_requesterHasBeenSet = true; m_requester = value; }
    inline void SetRequester(Aws::String&& value) { m_requesterHasBeenSet = true; m_requester = std::move(value); }
    inline void SetRequester(const char* value) { m_requesterHasBeenSet = true; m_requester.assign(value); }
    inline RequestMetadata& WithRequester(const Aws::String& value) { SetRequester(value); return *this;}
    inline RequestMetadata& WithRequester(Aws::String&& value) { SetRequester(std::move(value)); return *this;}
    inline RequestMetadata& WithRequester(const char* value) { SetRequester(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the event associated with a code review.</p>
     */
    inline const EventInfo& GetEventInfo() const{ return m_eventInfo; }
    inline bool EventInfoHasBeenSet() const { return m_eventInfoHasBeenSet; }
    inline void SetEventInfo(const EventInfo& value) { m_eventInfoHasBeenSet = true; m_eventInfo = value; }
    inline void SetEventInfo(EventInfo&& value) { m_eventInfoHasBeenSet = true; m_eventInfo = std::move(value); }
    inline RequestMetadata& WithEventInfo(const EventInfo& value) { SetEventInfo(value); return *this;}
    inline RequestMetadata& WithEventInfo(EventInfo&& value) { SetEventInfo(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the repository vendor used to upload code to an S3 bucket for a
     * CI/CD code review. For example, if code and artifacts are uploaded to an S3
     * bucket for a CI/CD code review by GitHub scripts from a GitHub repository, then
     * the repository association's <code>ProviderType</code> is <code>S3Bucket</code>
     * and the CI/CD repository vendor name is GitHub. For more information, see the
     * definition for <code>ProviderType</code> in <a
     * href="https://docs.aws.amazon.com/codeguru/latest/reviewer-api/API_RepositoryAssociation.html">RepositoryAssociation</a>.</p>
     */
    inline const VendorName& GetVendorName() const{ return m_vendorName; }
    inline bool VendorNameHasBeenSet() const { return m_vendorNameHasBeenSet; }
    inline void SetVendorName(const VendorName& value) { m_vendorNameHasBeenSet = true; m_vendorName = value; }
    inline void SetVendorName(VendorName&& value) { m_vendorNameHasBeenSet = true; m_vendorName = std::move(value); }
    inline RequestMetadata& WithVendorName(const VendorName& value) { SetVendorName(value); return *this;}
    inline RequestMetadata& WithVendorName(VendorName&& value) { SetVendorName(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;

    Aws::String m_requester;
    bool m_requesterHasBeenSet = false;

    EventInfo m_eventInfo;
    bool m_eventInfoHasBeenSet = false;

    VendorName m_vendorName;
    bool m_vendorNameHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeGuruReviewer
} // namespace Aws
