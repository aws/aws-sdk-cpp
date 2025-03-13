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
  class DeleteConfiguredTableRequest : public CleanRoomsRequest
  {
  public:
    AWS_CLEANROOMS_API DeleteConfiguredTableRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteConfiguredTable"; }

    AWS_CLEANROOMS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The unique ID for the configured table to delete.</p>
     */
    inline const Aws::String& GetConfiguredTableIdentifier() const { return m_configuredTableIdentifier; }
    inline bool ConfiguredTableIdentifierHasBeenSet() const { return m_configuredTableIdentifierHasBeenSet; }
    template<typename ConfiguredTableIdentifierT = Aws::String>
    void SetConfiguredTableIdentifier(ConfiguredTableIdentifierT&& value) { m_configuredTableIdentifierHasBeenSet = true; m_configuredTableIdentifier = std::forward<ConfiguredTableIdentifierT>(value); }
    template<typename ConfiguredTableIdentifierT = Aws::String>
    DeleteConfiguredTableRequest& WithConfiguredTableIdentifier(ConfiguredTableIdentifierT&& value) { SetConfiguredTableIdentifier(std::forward<ConfiguredTableIdentifierT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_configuredTableIdentifier;
    bool m_configuredTableIdentifierHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
