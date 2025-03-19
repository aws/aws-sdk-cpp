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
    AWS_CLEANROOMSML_API PutMLConfigurationRequest() = default;

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
    inline const Aws::String& GetMembershipIdentifier() const { return m_membershipIdentifier; }
    inline bool MembershipIdentifierHasBeenSet() const { return m_membershipIdentifierHasBeenSet; }
    template<typename MembershipIdentifierT = Aws::String>
    void SetMembershipIdentifier(MembershipIdentifierT&& value) { m_membershipIdentifierHasBeenSet = true; m_membershipIdentifier = std::forward<MembershipIdentifierT>(value); }
    template<typename MembershipIdentifierT = Aws::String>
    PutMLConfigurationRequest& WithMembershipIdentifier(MembershipIdentifierT&& value) { SetMembershipIdentifier(std::forward<MembershipIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The default Amazon S3 location where ML output is stored for the specified
     * member.</p>
     */
    inline const MLOutputConfiguration& GetDefaultOutputLocation() const { return m_defaultOutputLocation; }
    inline bool DefaultOutputLocationHasBeenSet() const { return m_defaultOutputLocationHasBeenSet; }
    template<typename DefaultOutputLocationT = MLOutputConfiguration>
    void SetDefaultOutputLocation(DefaultOutputLocationT&& value) { m_defaultOutputLocationHasBeenSet = true; m_defaultOutputLocation = std::forward<DefaultOutputLocationT>(value); }
    template<typename DefaultOutputLocationT = MLOutputConfiguration>
    PutMLConfigurationRequest& WithDefaultOutputLocation(DefaultOutputLocationT&& value) { SetDefaultOutputLocation(std::forward<DefaultOutputLocationT>(value)); return *this;}
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
