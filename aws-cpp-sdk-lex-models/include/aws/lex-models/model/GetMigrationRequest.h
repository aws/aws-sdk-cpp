/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lex-models/LexModelBuildingService_EXPORTS.h>
#include <aws/lex-models/LexModelBuildingServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace LexModelBuildingService
{
namespace Model
{

  /**
   */
  class AWS_LEXMODELBUILDINGSERVICE_API GetMigrationRequest : public LexModelBuildingServiceRequest
  {
  public:
    GetMigrationRequest();

    /**
     * Virtual Copy Constructor idiom;
     * Override in an inherited class to have overridden functions (such as GetRequestSpecificHeaders) be called by the SDK.
     * (If you are creating a child of this: don't forget to keep the original return type or (better) just use the 'override' keyword)
    */
    virtual Aws::UniquePtr<GetMigrationRequest> Clone() const
    {
      return Aws::MakeUnique<GetMigrationRequest>(GetServiceRequestName(), *this);
    }

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetMigration"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The unique identifier of the migration to view. The <code>migrationID</code>
     * is returned by the operation.</p>
     */
    inline const Aws::String& GetMigrationId() const{ return m_migrationId; }

    /**
     * <p>The unique identifier of the migration to view. The <code>migrationID</code>
     * is returned by the operation.</p>
     */
    inline bool MigrationIdHasBeenSet() const { return m_migrationIdHasBeenSet; }

    /**
     * <p>The unique identifier of the migration to view. The <code>migrationID</code>
     * is returned by the operation.</p>
     */
    inline void SetMigrationId(const Aws::String& value) { m_migrationIdHasBeenSet = true; m_migrationId = value; }

    /**
     * <p>The unique identifier of the migration to view. The <code>migrationID</code>
     * is returned by the operation.</p>
     */
    inline void SetMigrationId(Aws::String&& value) { m_migrationIdHasBeenSet = true; m_migrationId = std::move(value); }

    /**
     * <p>The unique identifier of the migration to view. The <code>migrationID</code>
     * is returned by the operation.</p>
     */
    inline void SetMigrationId(const char* value) { m_migrationIdHasBeenSet = true; m_migrationId.assign(value); }

    /**
     * <p>The unique identifier of the migration to view. The <code>migrationID</code>
     * is returned by the operation.</p>
     */
    inline GetMigrationRequest& WithMigrationId(const Aws::String& value) { SetMigrationId(value); return *this;}

    /**
     * <p>The unique identifier of the migration to view. The <code>migrationID</code>
     * is returned by the operation.</p>
     */
    inline GetMigrationRequest& WithMigrationId(Aws::String&& value) { SetMigrationId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the migration to view. The <code>migrationID</code>
     * is returned by the operation.</p>
     */
    inline GetMigrationRequest& WithMigrationId(const char* value) { SetMigrationId(value); return *this;}

  private:

    Aws::String m_migrationId;
    bool m_migrationIdHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelBuildingService
} // namespace Aws
