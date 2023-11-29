/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/cleanrooms/CleanRoomsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace CleanRooms
{
namespace Model
{

  /**
   */
  class GetCollaborationPrivacyBudgetTemplateRequest : public CleanRoomsRequest
  {
  public:
    AWS_CLEANROOMS_API GetCollaborationPrivacyBudgetTemplateRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetCollaborationPrivacyBudgetTemplate"; }

    AWS_CLEANROOMS_API Aws::String SerializePayload() const override;


    /**
     * <p>A unique identifier for one of your collaborations.</p>
     */
    inline const Aws::String& GetCollaborationIdentifier() const{ return m_collaborationIdentifier; }

    /**
     * <p>A unique identifier for one of your collaborations.</p>
     */
    inline bool CollaborationIdentifierHasBeenSet() const { return m_collaborationIdentifierHasBeenSet; }

    /**
     * <p>A unique identifier for one of your collaborations.</p>
     */
    inline void SetCollaborationIdentifier(const Aws::String& value) { m_collaborationIdentifierHasBeenSet = true; m_collaborationIdentifier = value; }

    /**
     * <p>A unique identifier for one of your collaborations.</p>
     */
    inline void SetCollaborationIdentifier(Aws::String&& value) { m_collaborationIdentifierHasBeenSet = true; m_collaborationIdentifier = std::move(value); }

    /**
     * <p>A unique identifier for one of your collaborations.</p>
     */
    inline void SetCollaborationIdentifier(const char* value) { m_collaborationIdentifierHasBeenSet = true; m_collaborationIdentifier.assign(value); }

    /**
     * <p>A unique identifier for one of your collaborations.</p>
     */
    inline GetCollaborationPrivacyBudgetTemplateRequest& WithCollaborationIdentifier(const Aws::String& value) { SetCollaborationIdentifier(value); return *this;}

    /**
     * <p>A unique identifier for one of your collaborations.</p>
     */
    inline GetCollaborationPrivacyBudgetTemplateRequest& WithCollaborationIdentifier(Aws::String&& value) { SetCollaborationIdentifier(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for one of your collaborations.</p>
     */
    inline GetCollaborationPrivacyBudgetTemplateRequest& WithCollaborationIdentifier(const char* value) { SetCollaborationIdentifier(value); return *this;}


    /**
     * <p>A unique identifier for one of your privacy budget templates.</p>
     */
    inline const Aws::String& GetPrivacyBudgetTemplateIdentifier() const{ return m_privacyBudgetTemplateIdentifier; }

    /**
     * <p>A unique identifier for one of your privacy budget templates.</p>
     */
    inline bool PrivacyBudgetTemplateIdentifierHasBeenSet() const { return m_privacyBudgetTemplateIdentifierHasBeenSet; }

    /**
     * <p>A unique identifier for one of your privacy budget templates.</p>
     */
    inline void SetPrivacyBudgetTemplateIdentifier(const Aws::String& value) { m_privacyBudgetTemplateIdentifierHasBeenSet = true; m_privacyBudgetTemplateIdentifier = value; }

    /**
     * <p>A unique identifier for one of your privacy budget templates.</p>
     */
    inline void SetPrivacyBudgetTemplateIdentifier(Aws::String&& value) { m_privacyBudgetTemplateIdentifierHasBeenSet = true; m_privacyBudgetTemplateIdentifier = std::move(value); }

    /**
     * <p>A unique identifier for one of your privacy budget templates.</p>
     */
    inline void SetPrivacyBudgetTemplateIdentifier(const char* value) { m_privacyBudgetTemplateIdentifierHasBeenSet = true; m_privacyBudgetTemplateIdentifier.assign(value); }

    /**
     * <p>A unique identifier for one of your privacy budget templates.</p>
     */
    inline GetCollaborationPrivacyBudgetTemplateRequest& WithPrivacyBudgetTemplateIdentifier(const Aws::String& value) { SetPrivacyBudgetTemplateIdentifier(value); return *this;}

    /**
     * <p>A unique identifier for one of your privacy budget templates.</p>
     */
    inline GetCollaborationPrivacyBudgetTemplateRequest& WithPrivacyBudgetTemplateIdentifier(Aws::String&& value) { SetPrivacyBudgetTemplateIdentifier(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for one of your privacy budget templates.</p>
     */
    inline GetCollaborationPrivacyBudgetTemplateRequest& WithPrivacyBudgetTemplateIdentifier(const char* value) { SetPrivacyBudgetTemplateIdentifier(value); return *this;}

  private:

    Aws::String m_collaborationIdentifier;
    bool m_collaborationIdentifierHasBeenSet = false;

    Aws::String m_privacyBudgetTemplateIdentifier;
    bool m_privacyBudgetTemplateIdentifierHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
