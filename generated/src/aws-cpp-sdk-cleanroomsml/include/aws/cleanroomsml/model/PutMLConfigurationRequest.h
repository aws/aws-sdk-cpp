/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanroomsml/CleanRoomsML_EXPORTS.h>
#include <aws/cleanroomsml/CleanRoomsMLRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cleanroomsml/model/MLOutputConfiguration.h>
#include <utility>

namespace Aws
{
namespace CleanRoomsML
{
namespace Model
{

  /**
   */
  class PutMLConfigurationRequest : public CleanRoomsMLRequest
  {
  public:
    AWS_CLEANROOMSML_API PutMLConfigurationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutMLConfiguration"; }

    AWS_CLEANROOMSML_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The membership ID of the member that is being configured.</p>
     */
    inline const Aws::String& GetMembershipIdentifier() const{ return m_membershipIdentifier; }
    inline bool MembershipIdentifierHasBeenSet() const { return m_membershipIdentifierHasBeenSet; }
    inline void SetMembershipIdentifier(const Aws::String& value) { m_membershipIdentifierHasBeenSet = true; m_membershipIdentifier = value; }
    inline void SetMembershipIdentifier(Aws::String&& value) { m_membershipIdentifierHasBeenSet = true; m_membershipIdentifier = std::move(value); }
    inline void SetMembershipIdentifier(const char* value) { m_membershipIdentifierHasBeenSet = true; m_membershipIdentifier.assign(value); }
    inline PutMLConfigurationRequest& WithMembershipIdentifier(const Aws::String& value) { SetMembershipIdentifier(value); return *this;}
    inline PutMLConfigurationRequest& WithMembershipIdentifier(Aws::String&& value) { SetMembershipIdentifier(std::move(value)); return *this;}
    inline PutMLConfigurationRequest& WithMembershipIdentifier(const char* value) { SetMembershipIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The default Amazon S3 location where ML output is stored for the specified
     * member.</p>
     */
    inline const MLOutputConfiguration& GetDefaultOutputLocation() const{ return m_defaultOutputLocation; }
    inline bool DefaultOutputLocationHasBeenSet() const { return m_defaultOutputLocationHasBeenSet; }
    inline void SetDefaultOutputLocation(const MLOutputConfiguration& value) { m_defaultOutputLocationHasBeenSet = true; m_defaultOutputLocation = value; }
    inline void SetDefaultOutputLocation(MLOutputConfiguration&& value) { m_defaultOutputLocationHasBeenSet = true; m_defaultOutputLocation = std::move(value); }
    inline PutMLConfigurationRequest& WithDefaultOutputLocation(const MLOutputConfiguration& value) { SetDefaultOutputLocation(value); return *this;}
    inline PutMLConfigurationRequest& WithDefaultOutputLocation(MLOutputConfiguration&& value) { SetDefaultOutputLocation(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_membershipIdentifier;
    bool m_membershipIdentifierHasBeenSet = false;

    MLOutputConfiguration m_defaultOutputLocation;
    bool m_defaultOutputLocationHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRoomsML
} // namespace Aws
