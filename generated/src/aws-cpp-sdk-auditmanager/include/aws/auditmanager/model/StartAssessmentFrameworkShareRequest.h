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
    AWS_AUDITMANAGER_API StartAssessmentFrameworkShareRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartAssessmentFrameworkShare"; }

    AWS_AUDITMANAGER_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p> The unique identifier for the custom framework to be shared. </p>
     */
    inline const Aws::String& GetFrameworkId() const { return m_frameworkId; }
    inline bool FrameworkIdHasBeenSet() const { return m_frameworkIdHasBeenSet; }
    template<typename FrameworkIdT = Aws::String>
    void SetFrameworkId(FrameworkIdT&& value) { m_frameworkIdHasBeenSet = true; m_frameworkId = std::forward<FrameworkIdT>(value); }
    template<typename FrameworkIdT = Aws::String>
    StartAssessmentFrameworkShareRequest& WithFrameworkId(FrameworkIdT&& value) { SetFrameworkId(std::forward<FrameworkIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The Amazon Web Services account of the recipient. </p>
     */
    inline const Aws::String& GetDestinationAccount() const { return m_destinationAccount; }
    inline bool DestinationAccountHasBeenSet() const { return m_destinationAccountHasBeenSet; }
    template<typename DestinationAccountT = Aws::String>
    void SetDestinationAccount(DestinationAccountT&& value) { m_destinationAccountHasBeenSet = true; m_destinationAccount = std::forward<DestinationAccountT>(value); }
    template<typename DestinationAccountT = Aws::String>
    StartAssessmentFrameworkShareRequest& WithDestinationAccount(DestinationAccountT&& value) { SetDestinationAccount(std::forward<DestinationAccountT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The Amazon Web Services Region of the recipient. </p>
     */
    inline const Aws::String& GetDestinationRegion() const { return m_destinationRegion; }
    inline bool DestinationRegionHasBeenSet() const { return m_destinationRegionHasBeenSet; }
    template<typename DestinationRegionT = Aws::String>
    void SetDestinationRegion(DestinationRegionT&& value) { m_destinationRegionHasBeenSet = true; m_destinationRegion = std::forward<DestinationRegionT>(value); }
    template<typename DestinationRegionT = Aws::String>
    StartAssessmentFrameworkShareRequest& WithDestinationRegion(DestinationRegionT&& value) { SetDestinationRegion(std::forward<DestinationRegionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> An optional comment from the sender about the share request. </p>
     */
    inline const Aws::String& GetComment() const { return m_comment; }
    inline bool CommentHasBeenSet() const { return m_commentHasBeenSet; }
    template<typename CommentT = Aws::String>
    void SetComment(CommentT&& value) { m_commentHasBeenSet = true; m_comment = std::forward<CommentT>(value); }
    template<typename CommentT = Aws::String>
    StartAssessmentFrameworkShareRequest& WithComment(CommentT&& value) { SetComment(std::forward<CommentT>(value)); return *this;}
    ///@}
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
