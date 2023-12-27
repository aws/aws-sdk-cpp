/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/cleanrooms/CleanRoomsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cleanrooms/model/PreviewPrivacyImpactParametersInput.h>
#include <utility>

namespace Aws
{
namespace CleanRooms
{
namespace Model
{

  /**
   */
  class PreviewPrivacyImpactRequest : public CleanRoomsRequest
  {
  public:
    AWS_CLEANROOMS_API PreviewPrivacyImpactRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PreviewPrivacyImpact"; }

    AWS_CLEANROOMS_API Aws::String SerializePayload() const override;


    /**
     * <p>A unique identifier for one of your memberships for a collaboration. Accepts
     * a membership ID.</p>
     */
    inline const Aws::String& GetMembershipIdentifier() const{ return m_membershipIdentifier; }

    /**
     * <p>A unique identifier for one of your memberships for a collaboration. Accepts
     * a membership ID.</p>
     */
    inline bool MembershipIdentifierHasBeenSet() const { return m_membershipIdentifierHasBeenSet; }

    /**
     * <p>A unique identifier for one of your memberships for a collaboration. Accepts
     * a membership ID.</p>
     */
    inline void SetMembershipIdentifier(const Aws::String& value) { m_membershipIdentifierHasBeenSet = true; m_membershipIdentifier = value; }

    /**
     * <p>A unique identifier for one of your memberships for a collaboration. Accepts
     * a membership ID.</p>
     */
    inline void SetMembershipIdentifier(Aws::String&& value) { m_membershipIdentifierHasBeenSet = true; m_membershipIdentifier = std::move(value); }

    /**
     * <p>A unique identifier for one of your memberships for a collaboration. Accepts
     * a membership ID.</p>
     */
    inline void SetMembershipIdentifier(const char* value) { m_membershipIdentifierHasBeenSet = true; m_membershipIdentifier.assign(value); }

    /**
     * <p>A unique identifier for one of your memberships for a collaboration. Accepts
     * a membership ID.</p>
     */
    inline PreviewPrivacyImpactRequest& WithMembershipIdentifier(const Aws::String& value) { SetMembershipIdentifier(value); return *this;}

    /**
     * <p>A unique identifier for one of your memberships for a collaboration. Accepts
     * a membership ID.</p>
     */
    inline PreviewPrivacyImpactRequest& WithMembershipIdentifier(Aws::String&& value) { SetMembershipIdentifier(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for one of your memberships for a collaboration. Accepts
     * a membership ID.</p>
     */
    inline PreviewPrivacyImpactRequest& WithMembershipIdentifier(const char* value) { SetMembershipIdentifier(value); return *this;}


    /**
     * <p>Specifies the desired epsilon and noise parameters to preview.</p>
     */
    inline const PreviewPrivacyImpactParametersInput& GetParameters() const{ return m_parameters; }

    /**
     * <p>Specifies the desired epsilon and noise parameters to preview.</p>
     */
    inline bool ParametersHasBeenSet() const { return m_parametersHasBeenSet; }

    /**
     * <p>Specifies the desired epsilon and noise parameters to preview.</p>
     */
    inline void SetParameters(const PreviewPrivacyImpactParametersInput& value) { m_parametersHasBeenSet = true; m_parameters = value; }

    /**
     * <p>Specifies the desired epsilon and noise parameters to preview.</p>
     */
    inline void SetParameters(PreviewPrivacyImpactParametersInput&& value) { m_parametersHasBeenSet = true; m_parameters = std::move(value); }

    /**
     * <p>Specifies the desired epsilon and noise parameters to preview.</p>
     */
    inline PreviewPrivacyImpactRequest& WithParameters(const PreviewPrivacyImpactParametersInput& value) { SetParameters(value); return *this;}

    /**
     * <p>Specifies the desired epsilon and noise parameters to preview.</p>
     */
    inline PreviewPrivacyImpactRequest& WithParameters(PreviewPrivacyImpactParametersInput&& value) { SetParameters(std::move(value)); return *this;}

  private:

    Aws::String m_membershipIdentifier;
    bool m_membershipIdentifierHasBeenSet = false;

    PreviewPrivacyImpactParametersInput m_parameters;
    bool m_parametersHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
