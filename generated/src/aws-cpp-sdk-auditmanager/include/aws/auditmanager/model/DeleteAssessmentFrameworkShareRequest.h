/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/auditmanager/AuditManager_EXPORTS.h>
#include <aws/auditmanager/AuditManagerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/auditmanager/model/ShareRequestType.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace AuditManager
{
namespace Model
{

  /**
   */
  class DeleteAssessmentFrameworkShareRequest : public AuditManagerRequest
  {
  public:
    AWS_AUDITMANAGER_API DeleteAssessmentFrameworkShareRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteAssessmentFrameworkShare"; }

    AWS_AUDITMANAGER_API Aws::String SerializePayload() const override;

    AWS_AUDITMANAGER_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The unique identifier for the share request to be deleted.</p>
     */
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    /**
     * <p>The unique identifier for the share request to be deleted.</p>
     */
    inline bool RequestIdHasBeenSet() const { return m_requestIdHasBeenSet; }

    /**
     * <p>The unique identifier for the share request to be deleted.</p>
     */
    inline void SetRequestId(const Aws::String& value) { m_requestIdHasBeenSet = true; m_requestId = value; }

    /**
     * <p>The unique identifier for the share request to be deleted.</p>
     */
    inline void SetRequestId(Aws::String&& value) { m_requestIdHasBeenSet = true; m_requestId = std::move(value); }

    /**
     * <p>The unique identifier for the share request to be deleted.</p>
     */
    inline void SetRequestId(const char* value) { m_requestIdHasBeenSet = true; m_requestId.assign(value); }

    /**
     * <p>The unique identifier for the share request to be deleted.</p>
     */
    inline DeleteAssessmentFrameworkShareRequest& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    /**
     * <p>The unique identifier for the share request to be deleted.</p>
     */
    inline DeleteAssessmentFrameworkShareRequest& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the share request to be deleted.</p>
     */
    inline DeleteAssessmentFrameworkShareRequest& WithRequestId(const char* value) { SetRequestId(value); return *this;}


    /**
     * <p>Specifies whether the share request is a sent request or a received
     * request.</p>
     */
    inline const ShareRequestType& GetRequestType() const{ return m_requestType; }

    /**
     * <p>Specifies whether the share request is a sent request or a received
     * request.</p>
     */
    inline bool RequestTypeHasBeenSet() const { return m_requestTypeHasBeenSet; }

    /**
     * <p>Specifies whether the share request is a sent request or a received
     * request.</p>
     */
    inline void SetRequestType(const ShareRequestType& value) { m_requestTypeHasBeenSet = true; m_requestType = value; }

    /**
     * <p>Specifies whether the share request is a sent request or a received
     * request.</p>
     */
    inline void SetRequestType(ShareRequestType&& value) { m_requestTypeHasBeenSet = true; m_requestType = std::move(value); }

    /**
     * <p>Specifies whether the share request is a sent request or a received
     * request.</p>
     */
    inline DeleteAssessmentFrameworkShareRequest& WithRequestType(const ShareRequestType& value) { SetRequestType(value); return *this;}

    /**
     * <p>Specifies whether the share request is a sent request or a received
     * request.</p>
     */
    inline DeleteAssessmentFrameworkShareRequest& WithRequestType(ShareRequestType&& value) { SetRequestType(std::move(value)); return *this;}

  private:

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;

    ShareRequestType m_requestType;
    bool m_requestTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace AuditManager
} // namespace Aws
