/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dms/DatabaseMigrationService_EXPORTS.h>
#include <aws/dms/DatabaseMigrationServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace DatabaseMigrationService
{
namespace Model
{

  /**
   */
  class DeleteInstanceProfileRequest : public DatabaseMigrationServiceRequest
  {
  public:
    AWS_DATABASEMIGRATIONSERVICE_API DeleteInstanceProfileRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteInstanceProfile"; }

    AWS_DATABASEMIGRATIONSERVICE_API Aws::String SerializePayload() const override;

    AWS_DATABASEMIGRATIONSERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The identifier of the instance profile to delete.</p>
     */
    inline const Aws::String& GetInstanceProfileIdentifier() const{ return m_instanceProfileIdentifier; }

    /**
     * <p>The identifier of the instance profile to delete.</p>
     */
    inline bool InstanceProfileIdentifierHasBeenSet() const { return m_instanceProfileIdentifierHasBeenSet; }

    /**
     * <p>The identifier of the instance profile to delete.</p>
     */
    inline void SetInstanceProfileIdentifier(const Aws::String& value) { m_instanceProfileIdentifierHasBeenSet = true; m_instanceProfileIdentifier = value; }

    /**
     * <p>The identifier of the instance profile to delete.</p>
     */
    inline void SetInstanceProfileIdentifier(Aws::String&& value) { m_instanceProfileIdentifierHasBeenSet = true; m_instanceProfileIdentifier = std::move(value); }

    /**
     * <p>The identifier of the instance profile to delete.</p>
     */
    inline void SetInstanceProfileIdentifier(const char* value) { m_instanceProfileIdentifierHasBeenSet = true; m_instanceProfileIdentifier.assign(value); }

    /**
     * <p>The identifier of the instance profile to delete.</p>
     */
    inline DeleteInstanceProfileRequest& WithInstanceProfileIdentifier(const Aws::String& value) { SetInstanceProfileIdentifier(value); return *this;}

    /**
     * <p>The identifier of the instance profile to delete.</p>
     */
    inline DeleteInstanceProfileRequest& WithInstanceProfileIdentifier(Aws::String&& value) { SetInstanceProfileIdentifier(std::move(value)); return *this;}

    /**
     * <p>The identifier of the instance profile to delete.</p>
     */
    inline DeleteInstanceProfileRequest& WithInstanceProfileIdentifier(const char* value) { SetInstanceProfileIdentifier(value); return *this;}

  private:

    Aws::String m_instanceProfileIdentifier;
    bool m_instanceProfileIdentifierHasBeenSet = false;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
