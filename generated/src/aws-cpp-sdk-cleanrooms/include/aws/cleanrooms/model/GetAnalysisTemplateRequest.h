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
  class GetAnalysisTemplateRequest : public CleanRoomsRequest
  {
  public:
    AWS_CLEANROOMS_API GetAnalysisTemplateRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetAnalysisTemplate"; }

    AWS_CLEANROOMS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The identifier for a membership resource.</p>
     */
    inline const Aws::String& GetMembershipIdentifier() const{ return m_membershipIdentifier; }
    inline bool MembershipIdentifierHasBeenSet() const { return m_membershipIdentifierHasBeenSet; }
    inline void SetMembershipIdentifier(const Aws::String& value) { m_membershipIdentifierHasBeenSet = true; m_membershipIdentifier = value; }
    inline void SetMembershipIdentifier(Aws::String&& value) { m_membershipIdentifierHasBeenSet = true; m_membershipIdentifier = std::move(value); }
    inline void SetMembershipIdentifier(const char* value) { m_membershipIdentifierHasBeenSet = true; m_membershipIdentifier.assign(value); }
    inline GetAnalysisTemplateRequest& WithMembershipIdentifier(const Aws::String& value) { SetMembershipIdentifier(value); return *this;}
    inline GetAnalysisTemplateRequest& WithMembershipIdentifier(Aws::String&& value) { SetMembershipIdentifier(std::move(value)); return *this;}
    inline GetAnalysisTemplateRequest& WithMembershipIdentifier(const char* value) { SetMembershipIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier for the analysis template resource.</p>
     */
    inline const Aws::String& GetAnalysisTemplateIdentifier() const{ return m_analysisTemplateIdentifier; }
    inline bool AnalysisTemplateIdentifierHasBeenSet() const { return m_analysisTemplateIdentifierHasBeenSet; }
    inline void SetAnalysisTemplateIdentifier(const Aws::String& value) { m_analysisTemplateIdentifierHasBeenSet = true; m_analysisTemplateIdentifier = value; }
    inline void SetAnalysisTemplateIdentifier(Aws::String&& value) { m_analysisTemplateIdentifierHasBeenSet = true; m_analysisTemplateIdentifier = std::move(value); }
    inline void SetAnalysisTemplateIdentifier(const char* value) { m_analysisTemplateIdentifierHasBeenSet = true; m_analysisTemplateIdentifier.assign(value); }
    inline GetAnalysisTemplateRequest& WithAnalysisTemplateIdentifier(const Aws::String& value) { SetAnalysisTemplateIdentifier(value); return *this;}
    inline GetAnalysisTemplateRequest& WithAnalysisTemplateIdentifier(Aws::String&& value) { SetAnalysisTemplateIdentifier(std::move(value)); return *this;}
    inline GetAnalysisTemplateRequest& WithAnalysisTemplateIdentifier(const char* value) { SetAnalysisTemplateIdentifier(value); return *this;}
    ///@}
  private:

    Aws::String m_membershipIdentifier;
    bool m_membershipIdentifierHasBeenSet = false;

    Aws::String m_analysisTemplateIdentifier;
    bool m_analysisTemplateIdentifierHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
