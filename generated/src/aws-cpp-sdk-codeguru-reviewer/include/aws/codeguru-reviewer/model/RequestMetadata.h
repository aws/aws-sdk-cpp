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
    AWS_CODEGURUREVIEWER_API RequestMetadata() = default;
    AWS_CODEGURUREVIEWER_API RequestMetadata(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEGURUREVIEWER_API RequestMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEGURUREVIEWER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the request. This is required for a pull request code review.</p>
     */
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    inline bool RequestIdHasBeenSet() const { return m_requestIdHasBeenSet; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    RequestMetadata& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An identifier, such as a name or account ID, that is associated with the
     * requester. The <code>Requester</code> is used to capture the
     * <code>author/actor</code> name of the event request.</p>
     */
    inline const Aws::String& GetRequester() const { return m_requester; }
    inline bool RequesterHasBeenSet() const { return m_requesterHasBeenSet; }
    template<typename RequesterT = Aws::String>
    void SetRequester(RequesterT&& value) { m_requesterHasBeenSet = true; m_requester = std::forward<RequesterT>(value); }
    template<typename RequesterT = Aws::String>
    RequestMetadata& WithRequester(RequesterT&& value) { SetRequester(std::forward<RequesterT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the event associated with a code review.</p>
     */
    inline const EventInfo& GetEventInfo() const { return m_eventInfo; }
    inline bool EventInfoHasBeenSet() const { return m_eventInfoHasBeenSet; }
    template<typename EventInfoT = EventInfo>
    void SetEventInfo(EventInfoT&& value) { m_eventInfoHasBeenSet = true; m_eventInfo = std::forward<EventInfoT>(value); }
    template<typename EventInfoT = EventInfo>
    RequestMetadata& WithEventInfo(EventInfoT&& value) { SetEventInfo(std::forward<EventInfoT>(value)); return *this;}
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
    inline VendorName GetVendorName() const { return m_vendorName; }
    inline bool VendorNameHasBeenSet() const { return m_vendorNameHasBeenSet; }
    inline void SetVendorName(VendorName value) { m_vendorNameHasBeenSet = true; m_vendorName = value; }
    inline RequestMetadata& WithVendorName(VendorName value) { SetVendorName(value); return *this;}
    ///@}
  private:

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;

    Aws::String m_requester;
    bool m_requesterHasBeenSet = false;

    EventInfo m_eventInfo;
    bool m_eventInfoHasBeenSet = false;

    VendorName m_vendorName{VendorName::NOT_SET};
    bool m_vendorNameHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeGuruReviewer
} // namespace Aws
