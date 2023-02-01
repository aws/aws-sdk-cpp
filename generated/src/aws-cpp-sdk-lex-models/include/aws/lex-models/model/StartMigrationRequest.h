/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lex-models/LexModelBuildingService_EXPORTS.h>
#include <aws/lex-models/LexModelBuildingServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lex-models/model/MigrationStrategy.h>
#include <utility>

namespace Aws
{
namespace LexModelBuildingService
{
namespace Model
{

  /**
   */
  class StartMigrationRequest : public LexModelBuildingServiceRequest
  {
  public:
    AWS_LEXMODELBUILDINGSERVICE_API StartMigrationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartMigration"; }

    AWS_LEXMODELBUILDINGSERVICE_API Aws::String SerializePayload() const override;


    /**
     * <p>The name of the Amazon Lex V1 bot that you are migrating to Amazon Lex
     * V2.</p>
     */
    inline const Aws::String& GetV1BotName() const{ return m_v1BotName; }

    /**
     * <p>The name of the Amazon Lex V1 bot that you are migrating to Amazon Lex
     * V2.</p>
     */
    inline bool V1BotNameHasBeenSet() const { return m_v1BotNameHasBeenSet; }

    /**
     * <p>The name of the Amazon Lex V1 bot that you are migrating to Amazon Lex
     * V2.</p>
     */
    inline void SetV1BotName(const Aws::String& value) { m_v1BotNameHasBeenSet = true; m_v1BotName = value; }

    /**
     * <p>The name of the Amazon Lex V1 bot that you are migrating to Amazon Lex
     * V2.</p>
     */
    inline void SetV1BotName(Aws::String&& value) { m_v1BotNameHasBeenSet = true; m_v1BotName = std::move(value); }

    /**
     * <p>The name of the Amazon Lex V1 bot that you are migrating to Amazon Lex
     * V2.</p>
     */
    inline void SetV1BotName(const char* value) { m_v1BotNameHasBeenSet = true; m_v1BotName.assign(value); }

    /**
     * <p>The name of the Amazon Lex V1 bot that you are migrating to Amazon Lex
     * V2.</p>
     */
    inline StartMigrationRequest& WithV1BotName(const Aws::String& value) { SetV1BotName(value); return *this;}

    /**
     * <p>The name of the Amazon Lex V1 bot that you are migrating to Amazon Lex
     * V2.</p>
     */
    inline StartMigrationRequest& WithV1BotName(Aws::String&& value) { SetV1BotName(std::move(value)); return *this;}

    /**
     * <p>The name of the Amazon Lex V1 bot that you are migrating to Amazon Lex
     * V2.</p>
     */
    inline StartMigrationRequest& WithV1BotName(const char* value) { SetV1BotName(value); return *this;}


    /**
     * <p>The version of the bot to migrate to Amazon Lex V2. You can migrate the
     * <code>$LATEST</code> version as well as any numbered version.</p>
     */
    inline const Aws::String& GetV1BotVersion() const{ return m_v1BotVersion; }

    /**
     * <p>The version of the bot to migrate to Amazon Lex V2. You can migrate the
     * <code>$LATEST</code> version as well as any numbered version.</p>
     */
    inline bool V1BotVersionHasBeenSet() const { return m_v1BotVersionHasBeenSet; }

    /**
     * <p>The version of the bot to migrate to Amazon Lex V2. You can migrate the
     * <code>$LATEST</code> version as well as any numbered version.</p>
     */
    inline void SetV1BotVersion(const Aws::String& value) { m_v1BotVersionHasBeenSet = true; m_v1BotVersion = value; }

    /**
     * <p>The version of the bot to migrate to Amazon Lex V2. You can migrate the
     * <code>$LATEST</code> version as well as any numbered version.</p>
     */
    inline void SetV1BotVersion(Aws::String&& value) { m_v1BotVersionHasBeenSet = true; m_v1BotVersion = std::move(value); }

    /**
     * <p>The version of the bot to migrate to Amazon Lex V2. You can migrate the
     * <code>$LATEST</code> version as well as any numbered version.</p>
     */
    inline void SetV1BotVersion(const char* value) { m_v1BotVersionHasBeenSet = true; m_v1BotVersion.assign(value); }

    /**
     * <p>The version of the bot to migrate to Amazon Lex V2. You can migrate the
     * <code>$LATEST</code> version as well as any numbered version.</p>
     */
    inline StartMigrationRequest& WithV1BotVersion(const Aws::String& value) { SetV1BotVersion(value); return *this;}

    /**
     * <p>The version of the bot to migrate to Amazon Lex V2. You can migrate the
     * <code>$LATEST</code> version as well as any numbered version.</p>
     */
    inline StartMigrationRequest& WithV1BotVersion(Aws::String&& value) { SetV1BotVersion(std::move(value)); return *this;}

    /**
     * <p>The version of the bot to migrate to Amazon Lex V2. You can migrate the
     * <code>$LATEST</code> version as well as any numbered version.</p>
     */
    inline StartMigrationRequest& WithV1BotVersion(const char* value) { SetV1BotVersion(value); return *this;}


    /**
     * <p>The name of the Amazon Lex V2 bot that you are migrating the Amazon Lex V1
     * bot to. </p> <ul> <li> <p>If the Amazon Lex V2 bot doesn't exist, you must use
     * the <code>CREATE_NEW</code> migration strategy.</p> </li> <li> <p>If the Amazon
     * Lex V2 bot exists, you must use the <code>UPDATE_EXISTING</code> migration
     * strategy to change the contents of the Amazon Lex V2 bot.</p> </li> </ul>
     */
    inline const Aws::String& GetV2BotName() const{ return m_v2BotName; }

    /**
     * <p>The name of the Amazon Lex V2 bot that you are migrating the Amazon Lex V1
     * bot to. </p> <ul> <li> <p>If the Amazon Lex V2 bot doesn't exist, you must use
     * the <code>CREATE_NEW</code> migration strategy.</p> </li> <li> <p>If the Amazon
     * Lex V2 bot exists, you must use the <code>UPDATE_EXISTING</code> migration
     * strategy to change the contents of the Amazon Lex V2 bot.</p> </li> </ul>
     */
    inline bool V2BotNameHasBeenSet() const { return m_v2BotNameHasBeenSet; }

    /**
     * <p>The name of the Amazon Lex V2 bot that you are migrating the Amazon Lex V1
     * bot to. </p> <ul> <li> <p>If the Amazon Lex V2 bot doesn't exist, you must use
     * the <code>CREATE_NEW</code> migration strategy.</p> </li> <li> <p>If the Amazon
     * Lex V2 bot exists, you must use the <code>UPDATE_EXISTING</code> migration
     * strategy to change the contents of the Amazon Lex V2 bot.</p> </li> </ul>
     */
    inline void SetV2BotName(const Aws::String& value) { m_v2BotNameHasBeenSet = true; m_v2BotName = value; }

    /**
     * <p>The name of the Amazon Lex V2 bot that you are migrating the Amazon Lex V1
     * bot to. </p> <ul> <li> <p>If the Amazon Lex V2 bot doesn't exist, you must use
     * the <code>CREATE_NEW</code> migration strategy.</p> </li> <li> <p>If the Amazon
     * Lex V2 bot exists, you must use the <code>UPDATE_EXISTING</code> migration
     * strategy to change the contents of the Amazon Lex V2 bot.</p> </li> </ul>
     */
    inline void SetV2BotName(Aws::String&& value) { m_v2BotNameHasBeenSet = true; m_v2BotName = std::move(value); }

    /**
     * <p>The name of the Amazon Lex V2 bot that you are migrating the Amazon Lex V1
     * bot to. </p> <ul> <li> <p>If the Amazon Lex V2 bot doesn't exist, you must use
     * the <code>CREATE_NEW</code> migration strategy.</p> </li> <li> <p>If the Amazon
     * Lex V2 bot exists, you must use the <code>UPDATE_EXISTING</code> migration
     * strategy to change the contents of the Amazon Lex V2 bot.</p> </li> </ul>
     */
    inline void SetV2BotName(const char* value) { m_v2BotNameHasBeenSet = true; m_v2BotName.assign(value); }

    /**
     * <p>The name of the Amazon Lex V2 bot that you are migrating the Amazon Lex V1
     * bot to. </p> <ul> <li> <p>If the Amazon Lex V2 bot doesn't exist, you must use
     * the <code>CREATE_NEW</code> migration strategy.</p> </li> <li> <p>If the Amazon
     * Lex V2 bot exists, you must use the <code>UPDATE_EXISTING</code> migration
     * strategy to change the contents of the Amazon Lex V2 bot.</p> </li> </ul>
     */
    inline StartMigrationRequest& WithV2BotName(const Aws::String& value) { SetV2BotName(value); return *this;}

    /**
     * <p>The name of the Amazon Lex V2 bot that you are migrating the Amazon Lex V1
     * bot to. </p> <ul> <li> <p>If the Amazon Lex V2 bot doesn't exist, you must use
     * the <code>CREATE_NEW</code> migration strategy.</p> </li> <li> <p>If the Amazon
     * Lex V2 bot exists, you must use the <code>UPDATE_EXISTING</code> migration
     * strategy to change the contents of the Amazon Lex V2 bot.</p> </li> </ul>
     */
    inline StartMigrationRequest& WithV2BotName(Aws::String&& value) { SetV2BotName(std::move(value)); return *this;}

    /**
     * <p>The name of the Amazon Lex V2 bot that you are migrating the Amazon Lex V1
     * bot to. </p> <ul> <li> <p>If the Amazon Lex V2 bot doesn't exist, you must use
     * the <code>CREATE_NEW</code> migration strategy.</p> </li> <li> <p>If the Amazon
     * Lex V2 bot exists, you must use the <code>UPDATE_EXISTING</code> migration
     * strategy to change the contents of the Amazon Lex V2 bot.</p> </li> </ul>
     */
    inline StartMigrationRequest& WithV2BotName(const char* value) { SetV2BotName(value); return *this;}


    /**
     * <p>The IAM role that Amazon Lex uses to run the Amazon Lex V2 bot.</p>
     */
    inline const Aws::String& GetV2BotRole() const{ return m_v2BotRole; }

    /**
     * <p>The IAM role that Amazon Lex uses to run the Amazon Lex V2 bot.</p>
     */
    inline bool V2BotRoleHasBeenSet() const { return m_v2BotRoleHasBeenSet; }

    /**
     * <p>The IAM role that Amazon Lex uses to run the Amazon Lex V2 bot.</p>
     */
    inline void SetV2BotRole(const Aws::String& value) { m_v2BotRoleHasBeenSet = true; m_v2BotRole = value; }

    /**
     * <p>The IAM role that Amazon Lex uses to run the Amazon Lex V2 bot.</p>
     */
    inline void SetV2BotRole(Aws::String&& value) { m_v2BotRoleHasBeenSet = true; m_v2BotRole = std::move(value); }

    /**
     * <p>The IAM role that Amazon Lex uses to run the Amazon Lex V2 bot.</p>
     */
    inline void SetV2BotRole(const char* value) { m_v2BotRoleHasBeenSet = true; m_v2BotRole.assign(value); }

    /**
     * <p>The IAM role that Amazon Lex uses to run the Amazon Lex V2 bot.</p>
     */
    inline StartMigrationRequest& WithV2BotRole(const Aws::String& value) { SetV2BotRole(value); return *this;}

    /**
     * <p>The IAM role that Amazon Lex uses to run the Amazon Lex V2 bot.</p>
     */
    inline StartMigrationRequest& WithV2BotRole(Aws::String&& value) { SetV2BotRole(std::move(value)); return *this;}

    /**
     * <p>The IAM role that Amazon Lex uses to run the Amazon Lex V2 bot.</p>
     */
    inline StartMigrationRequest& WithV2BotRole(const char* value) { SetV2BotRole(value); return *this;}


    /**
     * <p>The strategy used to conduct the migration.</p> <ul> <li> <p>
     * <code>CREATE_NEW</code> - Creates a new Amazon Lex V2 bot and migrates the
     * Amazon Lex V1 bot to the new bot.</p> </li> <li> <p>
     * <code>UPDATE_EXISTING</code> - Overwrites the existing Amazon Lex V2 bot
     * metadata and the locale being migrated. It doesn't change any other locales in
     * the Amazon Lex V2 bot. If the locale doesn't exist, a new locale is created in
     * the Amazon Lex V2 bot.</p> </li> </ul>
     */
    inline const MigrationStrategy& GetMigrationStrategy() const{ return m_migrationStrategy; }

    /**
     * <p>The strategy used to conduct the migration.</p> <ul> <li> <p>
     * <code>CREATE_NEW</code> - Creates a new Amazon Lex V2 bot and migrates the
     * Amazon Lex V1 bot to the new bot.</p> </li> <li> <p>
     * <code>UPDATE_EXISTING</code> - Overwrites the existing Amazon Lex V2 bot
     * metadata and the locale being migrated. It doesn't change any other locales in
     * the Amazon Lex V2 bot. If the locale doesn't exist, a new locale is created in
     * the Amazon Lex V2 bot.</p> </li> </ul>
     */
    inline bool MigrationStrategyHasBeenSet() const { return m_migrationStrategyHasBeenSet; }

    /**
     * <p>The strategy used to conduct the migration.</p> <ul> <li> <p>
     * <code>CREATE_NEW</code> - Creates a new Amazon Lex V2 bot and migrates the
     * Amazon Lex V1 bot to the new bot.</p> </li> <li> <p>
     * <code>UPDATE_EXISTING</code> - Overwrites the existing Amazon Lex V2 bot
     * metadata and the locale being migrated. It doesn't change any other locales in
     * the Amazon Lex V2 bot. If the locale doesn't exist, a new locale is created in
     * the Amazon Lex V2 bot.</p> </li> </ul>
     */
    inline void SetMigrationStrategy(const MigrationStrategy& value) { m_migrationStrategyHasBeenSet = true; m_migrationStrategy = value; }

    /**
     * <p>The strategy used to conduct the migration.</p> <ul> <li> <p>
     * <code>CREATE_NEW</code> - Creates a new Amazon Lex V2 bot and migrates the
     * Amazon Lex V1 bot to the new bot.</p> </li> <li> <p>
     * <code>UPDATE_EXISTING</code> - Overwrites the existing Amazon Lex V2 bot
     * metadata and the locale being migrated. It doesn't change any other locales in
     * the Amazon Lex V2 bot. If the locale doesn't exist, a new locale is created in
     * the Amazon Lex V2 bot.</p> </li> </ul>
     */
    inline void SetMigrationStrategy(MigrationStrategy&& value) { m_migrationStrategyHasBeenSet = true; m_migrationStrategy = std::move(value); }

    /**
     * <p>The strategy used to conduct the migration.</p> <ul> <li> <p>
     * <code>CREATE_NEW</code> - Creates a new Amazon Lex V2 bot and migrates the
     * Amazon Lex V1 bot to the new bot.</p> </li> <li> <p>
     * <code>UPDATE_EXISTING</code> - Overwrites the existing Amazon Lex V2 bot
     * metadata and the locale being migrated. It doesn't change any other locales in
     * the Amazon Lex V2 bot. If the locale doesn't exist, a new locale is created in
     * the Amazon Lex V2 bot.</p> </li> </ul>
     */
    inline StartMigrationRequest& WithMigrationStrategy(const MigrationStrategy& value) { SetMigrationStrategy(value); return *this;}

    /**
     * <p>The strategy used to conduct the migration.</p> <ul> <li> <p>
     * <code>CREATE_NEW</code> - Creates a new Amazon Lex V2 bot and migrates the
     * Amazon Lex V1 bot to the new bot.</p> </li> <li> <p>
     * <code>UPDATE_EXISTING</code> - Overwrites the existing Amazon Lex V2 bot
     * metadata and the locale being migrated. It doesn't change any other locales in
     * the Amazon Lex V2 bot. If the locale doesn't exist, a new locale is created in
     * the Amazon Lex V2 bot.</p> </li> </ul>
     */
    inline StartMigrationRequest& WithMigrationStrategy(MigrationStrategy&& value) { SetMigrationStrategy(std::move(value)); return *this;}

  private:

    Aws::String m_v1BotName;
    bool m_v1BotNameHasBeenSet = false;

    Aws::String m_v1BotVersion;
    bool m_v1BotVersionHasBeenSet = false;

    Aws::String m_v2BotName;
    bool m_v2BotNameHasBeenSet = false;

    Aws::String m_v2BotRole;
    bool m_v2BotRoleHasBeenSet = false;

    MigrationStrategy m_migrationStrategy;
    bool m_migrationStrategyHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelBuildingService
} // namespace Aws
