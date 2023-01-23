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
  class UpdateConfiguredTableRequest : public CleanRoomsRequest
  {
  public:
    AWS_CLEANROOMS_API UpdateConfiguredTableRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateConfiguredTable"; }

    AWS_CLEANROOMS_API Aws::String SerializePayload() const override;


    /**
     * <p>The identifier for the configured table to update. Currently accepts the
     * configured table ID.</p>
     */
    inline const Aws::String& GetConfiguredTableIdentifier() const{ return m_configuredTableIdentifier; }

    /**
     * <p>The identifier for the configured table to update. Currently accepts the
     * configured table ID.</p>
     */
    inline bool ConfiguredTableIdentifierHasBeenSet() const { return m_configuredTableIdentifierHasBeenSet; }

    /**
     * <p>The identifier for the configured table to update. Currently accepts the
     * configured table ID.</p>
     */
    inline void SetConfiguredTableIdentifier(const Aws::String& value) { m_configuredTableIdentifierHasBeenSet = true; m_configuredTableIdentifier = value; }

    /**
     * <p>The identifier for the configured table to update. Currently accepts the
     * configured table ID.</p>
     */
    inline void SetConfiguredTableIdentifier(Aws::String&& value) { m_configuredTableIdentifierHasBeenSet = true; m_configuredTableIdentifier = std::move(value); }

    /**
     * <p>The identifier for the configured table to update. Currently accepts the
     * configured table ID.</p>
     */
    inline void SetConfiguredTableIdentifier(const char* value) { m_configuredTableIdentifierHasBeenSet = true; m_configuredTableIdentifier.assign(value); }

    /**
     * <p>The identifier for the configured table to update. Currently accepts the
     * configured table ID.</p>
     */
    inline UpdateConfiguredTableRequest& WithConfiguredTableIdentifier(const Aws::String& value) { SetConfiguredTableIdentifier(value); return *this;}

    /**
     * <p>The identifier for the configured table to update. Currently accepts the
     * configured table ID.</p>
     */
    inline UpdateConfiguredTableRequest& WithConfiguredTableIdentifier(Aws::String&& value) { SetConfiguredTableIdentifier(std::move(value)); return *this;}

    /**
     * <p>The identifier for the configured table to update. Currently accepts the
     * configured table ID.</p>
     */
    inline UpdateConfiguredTableRequest& WithConfiguredTableIdentifier(const char* value) { SetConfiguredTableIdentifier(value); return *this;}


    /**
     * <p>A new name for the configured table.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>A new name for the configured table.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>A new name for the configured table.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>A new name for the configured table.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>A new name for the configured table.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>A new name for the configured table.</p>
     */
    inline UpdateConfiguredTableRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>A new name for the configured table.</p>
     */
    inline UpdateConfiguredTableRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>A new name for the configured table.</p>
     */
    inline UpdateConfiguredTableRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>A new description for the configured table.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A new description for the configured table.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A new description for the configured table.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A new description for the configured table.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A new description for the configured table.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A new description for the configured table.</p>
     */
    inline UpdateConfiguredTableRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A new description for the configured table.</p>
     */
    inline UpdateConfiguredTableRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A new description for the configured table.</p>
     */
    inline UpdateConfiguredTableRequest& WithDescription(const char* value) { SetDescription(value); return *this;}

  private:

    Aws::String m_configuredTableIdentifier;
    bool m_configuredTableIdentifierHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
