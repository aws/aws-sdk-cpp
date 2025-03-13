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
    AWS_LEXMODELBUILDINGSERVICE_API StartMigrationRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartMigration"; }

    AWS_LEXMODELBUILDINGSERVICE_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The name of the Amazon Lex V1 bot that you are migrating to Amazon Lex
     * V2.</p>
     */
    inline const Aws::String& GetV1BotName() const { return m_v1BotName; }
    inline bool V1BotNameHasBeenSet() const { return m_v1BotNameHasBeenSet; }
    template<typename V1BotNameT = Aws::String>
    void SetV1BotName(V1BotNameT&& value) { m_v1BotNameHasBeenSet = true; m_v1BotName = std::forward<V1BotNameT>(value); }
    template<typename V1BotNameT = Aws::String>
    StartMigrationRequest& WithV1BotName(V1BotNameT&& value) { SetV1BotName(std::forward<V1BotNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the bot to migrate to Amazon Lex V2. You can migrate the
     * <code>$LATEST</code> version as well as any numbered version.</p>
     */
    inline const Aws::String& GetV1BotVersion() const { return m_v1BotVersion; }
    inline bool V1BotVersionHasBeenSet() const { return m_v1BotVersionHasBeenSet; }
    template<typename V1BotVersionT = Aws::String>
    void SetV1BotVersion(V1BotVersionT&& value) { m_v1BotVersionHasBeenSet = true; m_v1BotVersion = std::forward<V1BotVersionT>(value); }
    template<typename V1BotVersionT = Aws::String>
    StartMigrationRequest& WithV1BotVersion(V1BotVersionT&& value) { SetV1BotVersion(std::forward<V1BotVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the Amazon Lex V2 bot that you are migrating the Amazon Lex V1
     * bot to. </p> <ul> <li> <p>If the Amazon Lex V2 bot doesn't exist, you must use
     * the <code>CREATE_NEW</code> migration strategy.</p> </li> <li> <p>If the Amazon
     * Lex V2 bot exists, you must use the <code>UPDATE_EXISTING</code> migration
     * strategy to change the contents of the Amazon Lex V2 bot.</p> </li> </ul>
     */
    inline const Aws::String& GetV2BotName() const { return m_v2BotName; }
    inline bool V2BotNameHasBeenSet() const { return m_v2BotNameHasBeenSet; }
    template<typename V2BotNameT = Aws::String>
    void SetV2BotName(V2BotNameT&& value) { m_v2BotNameHasBeenSet = true; m_v2BotName = std::forward<V2BotNameT>(value); }
    template<typename V2BotNameT = Aws::String>
    StartMigrationRequest& WithV2BotName(V2BotNameT&& value) { SetV2BotName(std::forward<V2BotNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IAM role that Amazon Lex uses to run the Amazon Lex V2 bot.</p>
     */
    inline const Aws::String& GetV2BotRole() const { return m_v2BotRole; }
    inline bool V2BotRoleHasBeenSet() const { return m_v2BotRoleHasBeenSet; }
    template<typename V2BotRoleT = Aws::String>
    void SetV2BotRole(V2BotRoleT&& value) { m_v2BotRoleHasBeenSet = true; m_v2BotRole = std::forward<V2BotRoleT>(value); }
    template<typename V2BotRoleT = Aws::String>
    StartMigrationRequest& WithV2BotRole(V2BotRoleT&& value) { SetV2BotRole(std::forward<V2BotRoleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The strategy used to conduct the migration.</p> <ul> <li> <p>
     * <code>CREATE_NEW</code> - Creates a new Amazon Lex V2 bot and migrates the
     * Amazon Lex V1 bot to the new bot.</p> </li> <li> <p>
     * <code>UPDATE_EXISTING</code> - Overwrites the existing Amazon Lex V2 bot
     * metadata and the locale being migrated. It doesn't change any other locales in
     * the Amazon Lex V2 bot. If the locale doesn't exist, a new locale is created in
     * the Amazon Lex V2 bot.</p> </li> </ul>
     */
    inline MigrationStrategy GetMigrationStrategy() const { return m_migrationStrategy; }
    inline bool MigrationStrategyHasBeenSet() const { return m_migrationStrategyHasBeenSet; }
    inline void SetMigrationStrategy(MigrationStrategy value) { m_migrationStrategyHasBeenSet = true; m_migrationStrategy = value; }
    inline StartMigrationRequest& WithMigrationStrategy(MigrationStrategy value) { SetMigrationStrategy(value); return *this;}
    ///@}
  private:

    Aws::String m_v1BotName;
    bool m_v1BotNameHasBeenSet = false;

    Aws::String m_v1BotVersion;
    bool m_v1BotVersionHasBeenSet = false;

    Aws::String m_v2BotName;
    bool m_v2BotNameHasBeenSet = false;

    Aws::String m_v2BotRole;
    bool m_v2BotRoleHasBeenSet = false;

    MigrationStrategy m_migrationStrategy{MigrationStrategy::NOT_SET};
    bool m_migrationStrategyHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelBuildingService
} // namespace Aws
