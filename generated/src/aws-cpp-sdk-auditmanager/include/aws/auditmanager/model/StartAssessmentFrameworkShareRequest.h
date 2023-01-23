/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/auditmanager/AuditManager_EXPORTS.h>
#include <aws/auditmanager/AuditManagerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace AuditManager
{
namespace Model
{

  /**
   */
  class StartAssessmentFrameworkShareRequest : public AuditManagerRequest
  {
  public:
    AWS_AUDITMANAGER_API StartAssessmentFrameworkShareRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartAssessmentFrameworkShare"; }

    AWS_AUDITMANAGER_API Aws::String SerializePayload() const override;


    /**
     * <p> The unique identifier for the custom framework to be shared. </p>
     */
    inline const Aws::String& GetFrameworkId() const{ return m_frameworkId; }

    /**
     * <p> The unique identifier for the custom framework to be shared. </p>
     */
    inline bool FrameworkIdHasBeenSet() const { return m_frameworkIdHasBeenSet; }

    /**
     * <p> The unique identifier for the custom framework to be shared. </p>
     */
    inline void SetFrameworkId(const Aws::String& value) { m_frameworkIdHasBeenSet = true; m_frameworkId = value; }

    /**
     * <p> The unique identifier for the custom framework to be shared. </p>
     */
    inline void SetFrameworkId(Aws::String&& value) { m_frameworkIdHasBeenSet = true; m_frameworkId = std::move(value); }

    /**
     * <p> The unique identifier for the custom framework to be shared. </p>
     */
    inline void SetFrameworkId(const char* value) { m_frameworkIdHasBeenSet = true; m_frameworkId.assign(value); }

    /**
     * <p> The unique identifier for the custom framework to be shared. </p>
     */
    inline StartAssessmentFrameworkShareRequest& WithFrameworkId(const Aws::String& value) { SetFrameworkId(value); return *this;}

    /**
     * <p> The unique identifier for the custom framework to be shared. </p>
     */
    inline StartAssessmentFrameworkShareRequest& WithFrameworkId(Aws::String&& value) { SetFrameworkId(std::move(value)); return *this;}

    /**
     * <p> The unique identifier for the custom framework to be shared. </p>
     */
    inline StartAssessmentFrameworkShareRequest& WithFrameworkId(const char* value) { SetFrameworkId(value); return *this;}


    /**
     * <p> The Amazon Web Services account of the recipient. </p>
     */
    inline const Aws::String& GetDestinationAccount() const{ return m_destinationAccount; }

    /**
     * <p> The Amazon Web Services account of the recipient. </p>
     */
    inline bool DestinationAccountHasBeenSet() const { return m_destinationAccountHasBeenSet; }

    /**
     * <p> The Amazon Web Services account of the recipient. </p>
     */
    inline void SetDestinationAccount(const Aws::String& value) { m_destinationAccountHasBeenSet = true; m_destinationAccount = value; }

    /**
     * <p> The Amazon Web Services account of the recipient. </p>
     */
    inline void SetDestinationAccount(Aws::String&& value) { m_destinationAccountHasBeenSet = true; m_destinationAccount = std::move(value); }

    /**
     * <p> The Amazon Web Services account of the recipient. </p>
     */
    inline void SetDestinationAccount(const char* value) { m_destinationAccountHasBeenSet = true; m_destinationAccount.assign(value); }

    /**
     * <p> The Amazon Web Services account of the recipient. </p>
     */
    inline StartAssessmentFrameworkShareRequest& WithDestinationAccount(const Aws::String& value) { SetDestinationAccount(value); return *this;}

    /**
     * <p> The Amazon Web Services account of the recipient. </p>
     */
    inline StartAssessmentFrameworkShareRequest& WithDestinationAccount(Aws::String&& value) { SetDestinationAccount(std::move(value)); return *this;}

    /**
     * <p> The Amazon Web Services account of the recipient. </p>
     */
    inline StartAssessmentFrameworkShareRequest& WithDestinationAccount(const char* value) { SetDestinationAccount(value); return *this;}


    /**
     * <p> The Amazon Web Services Region of the recipient. </p>
     */
    inline const Aws::String& GetDestinationRegion() const{ return m_destinationRegion; }

    /**
     * <p> The Amazon Web Services Region of the recipient. </p>
     */
    inline bool DestinationRegionHasBeenSet() const { return m_destinationRegionHasBeenSet; }

    /**
     * <p> The Amazon Web Services Region of the recipient. </p>
     */
    inline void SetDestinationRegion(const Aws::String& value) { m_destinationRegionHasBeenSet = true; m_destinationRegion = value; }

    /**
     * <p> The Amazon Web Services Region of the recipient. </p>
     */
    inline void SetDestinationRegion(Aws::String&& value) { m_destinationRegionHasBeenSet = true; m_destinationRegion = std::move(value); }

    /**
     * <p> The Amazon Web Services Region of the recipient. </p>
     */
    inline void SetDestinationRegion(const char* value) { m_destinationRegionHasBeenSet = true; m_destinationRegion.assign(value); }

    /**
     * <p> The Amazon Web Services Region of the recipient. </p>
     */
    inline StartAssessmentFrameworkShareRequest& WithDestinationRegion(const Aws::String& value) { SetDestinationRegion(value); return *this;}

    /**
     * <p> The Amazon Web Services Region of the recipient. </p>
     */
    inline StartAssessmentFrameworkShareRequest& WithDestinationRegion(Aws::String&& value) { SetDestinationRegion(std::move(value)); return *this;}

    /**
     * <p> The Amazon Web Services Region of the recipient. </p>
     */
    inline StartAssessmentFrameworkShareRequest& WithDestinationRegion(const char* value) { SetDestinationRegion(value); return *this;}


    /**
     * <p> An optional comment from the sender about the share request. </p>
     */
    inline const Aws::String& GetComment() const{ return m_comment; }

    /**
     * <p> An optional comment from the sender about the share request. </p>
     */
    inline bool CommentHasBeenSet() const { return m_commentHasBeenSet; }

    /**
     * <p> An optional comment from the sender about the share request. </p>
     */
    inline void SetComment(const Aws::String& value) { m_commentHasBeenSet = true; m_comment = value; }

    /**
     * <p> An optional comment from the sender about the share request. </p>
     */
    inline void SetComment(Aws::String&& value) { m_commentHasBeenSet = true; m_comment = std::move(value); }

    /**
     * <p> An optional comment from the sender about the share request. </p>
     */
    inline void SetComment(const char* value) { m_commentHasBeenSet = true; m_comment.assign(value); }

    /**
     * <p> An optional comment from the sender about the share request. </p>
     */
    inline StartAssessmentFrameworkShareRequest& WithComment(const Aws::String& value) { SetComment(value); return *this;}

    /**
     * <p> An optional comment from the sender about the share request. </p>
     */
    inline StartAssessmentFrameworkShareRequest& WithComment(Aws::String&& value) { SetComment(std::move(value)); return *this;}

    /**
     * <p> An optional comment from the sender about the share request. </p>
     */
    inline StartAssessmentFrameworkShareRequest& WithComment(const char* value) { SetComment(value); return *this;}

  private:

    Aws::String m_frameworkId;
    bool m_frameworkIdHasBeenSet = false;

    Aws::String m_destinationAccount;
    bool m_destinationAccountHasBeenSet = false;

    Aws::String m_destinationRegion;
    bool m_destinationRegionHasBeenSet = false;

    Aws::String m_comment;
    bool m_commentHasBeenSet = false;
  };

} // namespace Model
} // namespace AuditManager
} // namespace Aws
