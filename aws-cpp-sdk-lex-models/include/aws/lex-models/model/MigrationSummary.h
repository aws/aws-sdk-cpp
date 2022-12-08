/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lex-models/LexModelBuildingService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lex-models/model/Locale.h>
#include <aws/lex-models/model/MigrationStatus.h>
#include <aws/lex-models/model/MigrationStrategy.h>
#include <aws/core/utils/DateTime.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace LexModelBuildingService
{
namespace Model
{

  /**
   * <p>Provides information about migrating a bot from Amazon Lex V1 to Amazon Lex
   * V2.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lex-models-2017-04-19/MigrationSummary">AWS
   * API Reference</a></p>
   */
  class MigrationSummary
  {
  public:
    AWS_LEXMODELBUILDINGSERVICE_API MigrationSummary();
    AWS_LEXMODELBUILDINGSERVICE_API MigrationSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELBUILDINGSERVICE_API MigrationSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELBUILDINGSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The unique identifier that Amazon Lex assigned to the migration.</p>
     */
    inline const Aws::String& GetMigrationId() const{ return m_migrationId; }

    /**
     * <p>The unique identifier that Amazon Lex assigned to the migration.</p>
     */
    inline bool MigrationIdHasBeenSet() const { return m_migrationIdHasBeenSet; }

    /**
     * <p>The unique identifier that Amazon Lex assigned to the migration.</p>
     */
    inline void SetMigrationId(const Aws::String& value) { m_migrationIdHasBeenSet = true; m_migrationId = value; }

    /**
     * <p>The unique identifier that Amazon Lex assigned to the migration.</p>
     */
    inline void SetMigrationId(Aws::String&& value) { m_migrationIdHasBeenSet = true; m_migrationId = std::move(value); }

    /**
     * <p>The unique identifier that Amazon Lex assigned to the migration.</p>
     */
    inline void SetMigrationId(const char* value) { m_migrationIdHasBeenSet = true; m_migrationId.assign(value); }

    /**
     * <p>The unique identifier that Amazon Lex assigned to the migration.</p>
     */
    inline MigrationSummary& WithMigrationId(const Aws::String& value) { SetMigrationId(value); return *this;}

    /**
     * <p>The unique identifier that Amazon Lex assigned to the migration.</p>
     */
    inline MigrationSummary& WithMigrationId(Aws::String&& value) { SetMigrationId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier that Amazon Lex assigned to the migration.</p>
     */
    inline MigrationSummary& WithMigrationId(const char* value) { SetMigrationId(value); return *this;}


    /**
     * <p>The name of the Amazon Lex V1 bot that is the source of the migration.</p>
     */
    inline const Aws::String& GetV1BotName() const{ return m_v1BotName; }

    /**
     * <p>The name of the Amazon Lex V1 bot that is the source of the migration.</p>
     */
    inline bool V1BotNameHasBeenSet() const { return m_v1BotNameHasBeenSet; }

    /**
     * <p>The name of the Amazon Lex V1 bot that is the source of the migration.</p>
     */
    inline void SetV1BotName(const Aws::String& value) { m_v1BotNameHasBeenSet = true; m_v1BotName = value; }

    /**
     * <p>The name of the Amazon Lex V1 bot that is the source of the migration.</p>
     */
    inline void SetV1BotName(Aws::String&& value) { m_v1BotNameHasBeenSet = true; m_v1BotName = std::move(value); }

    /**
     * <p>The name of the Amazon Lex V1 bot that is the source of the migration.</p>
     */
    inline void SetV1BotName(const char* value) { m_v1BotNameHasBeenSet = true; m_v1BotName.assign(value); }

    /**
     * <p>The name of the Amazon Lex V1 bot that is the source of the migration.</p>
     */
    inline MigrationSummary& WithV1BotName(const Aws::String& value) { SetV1BotName(value); return *this;}

    /**
     * <p>The name of the Amazon Lex V1 bot that is the source of the migration.</p>
     */
    inline MigrationSummary& WithV1BotName(Aws::String&& value) { SetV1BotName(std::move(value)); return *this;}

    /**
     * <p>The name of the Amazon Lex V1 bot that is the source of the migration.</p>
     */
    inline MigrationSummary& WithV1BotName(const char* value) { SetV1BotName(value); return *this;}


    /**
     * <p>The version of the Amazon Lex V1 bot that is the source of the migration.</p>
     */
    inline const Aws::String& GetV1BotVersion() const{ return m_v1BotVersion; }

    /**
     * <p>The version of the Amazon Lex V1 bot that is the source of the migration.</p>
     */
    inline bool V1BotVersionHasBeenSet() const { return m_v1BotVersionHasBeenSet; }

    /**
     * <p>The version of the Amazon Lex V1 bot that is the source of the migration.</p>
     */
    inline void SetV1BotVersion(const Aws::String& value) { m_v1BotVersionHasBeenSet = true; m_v1BotVersion = value; }

    /**
     * <p>The version of the Amazon Lex V1 bot that is the source of the migration.</p>
     */
    inline void SetV1BotVersion(Aws::String&& value) { m_v1BotVersionHasBeenSet = true; m_v1BotVersion = std::move(value); }

    /**
     * <p>The version of the Amazon Lex V1 bot that is the source of the migration.</p>
     */
    inline void SetV1BotVersion(const char* value) { m_v1BotVersionHasBeenSet = true; m_v1BotVersion.assign(value); }

    /**
     * <p>The version of the Amazon Lex V1 bot that is the source of the migration.</p>
     */
    inline MigrationSummary& WithV1BotVersion(const Aws::String& value) { SetV1BotVersion(value); return *this;}

    /**
     * <p>The version of the Amazon Lex V1 bot that is the source of the migration.</p>
     */
    inline MigrationSummary& WithV1BotVersion(Aws::String&& value) { SetV1BotVersion(std::move(value)); return *this;}

    /**
     * <p>The version of the Amazon Lex V1 bot that is the source of the migration.</p>
     */
    inline MigrationSummary& WithV1BotVersion(const char* value) { SetV1BotVersion(value); return *this;}


    /**
     * <p>The locale of the Amazon Lex V1 bot that is the source of the migration.</p>
     */
    inline const Locale& GetV1BotLocale() const{ return m_v1BotLocale; }

    /**
     * <p>The locale of the Amazon Lex V1 bot that is the source of the migration.</p>
     */
    inline bool V1BotLocaleHasBeenSet() const { return m_v1BotLocaleHasBeenSet; }

    /**
     * <p>The locale of the Amazon Lex V1 bot that is the source of the migration.</p>
     */
    inline void SetV1BotLocale(const Locale& value) { m_v1BotLocaleHasBeenSet = true; m_v1BotLocale = value; }

    /**
     * <p>The locale of the Amazon Lex V1 bot that is the source of the migration.</p>
     */
    inline void SetV1BotLocale(Locale&& value) { m_v1BotLocaleHasBeenSet = true; m_v1BotLocale = std::move(value); }

    /**
     * <p>The locale of the Amazon Lex V1 bot that is the source of the migration.</p>
     */
    inline MigrationSummary& WithV1BotLocale(const Locale& value) { SetV1BotLocale(value); return *this;}

    /**
     * <p>The locale of the Amazon Lex V1 bot that is the source of the migration.</p>
     */
    inline MigrationSummary& WithV1BotLocale(Locale&& value) { SetV1BotLocale(std::move(value)); return *this;}


    /**
     * <p>The unique identifier of the Amazon Lex V2 that is the destination of the
     * migration.</p>
     */
    inline const Aws::String& GetV2BotId() const{ return m_v2BotId; }

    /**
     * <p>The unique identifier of the Amazon Lex V2 that is the destination of the
     * migration.</p>
     */
    inline bool V2BotIdHasBeenSet() const { return m_v2BotIdHasBeenSet; }

    /**
     * <p>The unique identifier of the Amazon Lex V2 that is the destination of the
     * migration.</p>
     */
    inline void SetV2BotId(const Aws::String& value) { m_v2BotIdHasBeenSet = true; m_v2BotId = value; }

    /**
     * <p>The unique identifier of the Amazon Lex V2 that is the destination of the
     * migration.</p>
     */
    inline void SetV2BotId(Aws::String&& value) { m_v2BotIdHasBeenSet = true; m_v2BotId = std::move(value); }

    /**
     * <p>The unique identifier of the Amazon Lex V2 that is the destination of the
     * migration.</p>
     */
    inline void SetV2BotId(const char* value) { m_v2BotIdHasBeenSet = true; m_v2BotId.assign(value); }

    /**
     * <p>The unique identifier of the Amazon Lex V2 that is the destination of the
     * migration.</p>
     */
    inline MigrationSummary& WithV2BotId(const Aws::String& value) { SetV2BotId(value); return *this;}

    /**
     * <p>The unique identifier of the Amazon Lex V2 that is the destination of the
     * migration.</p>
     */
    inline MigrationSummary& WithV2BotId(Aws::String&& value) { SetV2BotId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the Amazon Lex V2 that is the destination of the
     * migration.</p>
     */
    inline MigrationSummary& WithV2BotId(const char* value) { SetV2BotId(value); return *this;}


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
    inline MigrationSummary& WithV2BotRole(const Aws::String& value) { SetV2BotRole(value); return *this;}

    /**
     * <p>The IAM role that Amazon Lex uses to run the Amazon Lex V2 bot.</p>
     */
    inline MigrationSummary& WithV2BotRole(Aws::String&& value) { SetV2BotRole(std::move(value)); return *this;}

    /**
     * <p>The IAM role that Amazon Lex uses to run the Amazon Lex V2 bot.</p>
     */
    inline MigrationSummary& WithV2BotRole(const char* value) { SetV2BotRole(value); return *this;}


    /**
     * <p>The status of the operation. When the status is <code>COMPLETE</code> the bot
     * is available in Amazon Lex V2. There may be alerts and warnings that need to be
     * resolved to complete the migration.</p>
     */
    inline const MigrationStatus& GetMigrationStatus() const{ return m_migrationStatus; }

    /**
     * <p>The status of the operation. When the status is <code>COMPLETE</code> the bot
     * is available in Amazon Lex V2. There may be alerts and warnings that need to be
     * resolved to complete the migration.</p>
     */
    inline bool MigrationStatusHasBeenSet() const { return m_migrationStatusHasBeenSet; }

    /**
     * <p>The status of the operation. When the status is <code>COMPLETE</code> the bot
     * is available in Amazon Lex V2. There may be alerts and warnings that need to be
     * resolved to complete the migration.</p>
     */
    inline void SetMigrationStatus(const MigrationStatus& value) { m_migrationStatusHasBeenSet = true; m_migrationStatus = value; }

    /**
     * <p>The status of the operation. When the status is <code>COMPLETE</code> the bot
     * is available in Amazon Lex V2. There may be alerts and warnings that need to be
     * resolved to complete the migration.</p>
     */
    inline void SetMigrationStatus(MigrationStatus&& value) { m_migrationStatusHasBeenSet = true; m_migrationStatus = std::move(value); }

    /**
     * <p>The status of the operation. When the status is <code>COMPLETE</code> the bot
     * is available in Amazon Lex V2. There may be alerts and warnings that need to be
     * resolved to complete the migration.</p>
     */
    inline MigrationSummary& WithMigrationStatus(const MigrationStatus& value) { SetMigrationStatus(value); return *this;}

    /**
     * <p>The status of the operation. When the status is <code>COMPLETE</code> the bot
     * is available in Amazon Lex V2. There may be alerts and warnings that need to be
     * resolved to complete the migration.</p>
     */
    inline MigrationSummary& WithMigrationStatus(MigrationStatus&& value) { SetMigrationStatus(std::move(value)); return *this;}


    /**
     * <p>The strategy used to conduct the migration.</p>
     */
    inline const MigrationStrategy& GetMigrationStrategy() const{ return m_migrationStrategy; }

    /**
     * <p>The strategy used to conduct the migration.</p>
     */
    inline bool MigrationStrategyHasBeenSet() const { return m_migrationStrategyHasBeenSet; }

    /**
     * <p>The strategy used to conduct the migration.</p>
     */
    inline void SetMigrationStrategy(const MigrationStrategy& value) { m_migrationStrategyHasBeenSet = true; m_migrationStrategy = value; }

    /**
     * <p>The strategy used to conduct the migration.</p>
     */
    inline void SetMigrationStrategy(MigrationStrategy&& value) { m_migrationStrategyHasBeenSet = true; m_migrationStrategy = std::move(value); }

    /**
     * <p>The strategy used to conduct the migration.</p>
     */
    inline MigrationSummary& WithMigrationStrategy(const MigrationStrategy& value) { SetMigrationStrategy(value); return *this;}

    /**
     * <p>The strategy used to conduct the migration.</p>
     */
    inline MigrationSummary& WithMigrationStrategy(MigrationStrategy&& value) { SetMigrationStrategy(std::move(value)); return *this;}


    /**
     * <p>The date and time that the migration started.</p>
     */
    inline const Aws::Utils::DateTime& GetMigrationTimestamp() const{ return m_migrationTimestamp; }

    /**
     * <p>The date and time that the migration started.</p>
     */
    inline bool MigrationTimestampHasBeenSet() const { return m_migrationTimestampHasBeenSet; }

    /**
     * <p>The date and time that the migration started.</p>
     */
    inline void SetMigrationTimestamp(const Aws::Utils::DateTime& value) { m_migrationTimestampHasBeenSet = true; m_migrationTimestamp = value; }

    /**
     * <p>The date and time that the migration started.</p>
     */
    inline void SetMigrationTimestamp(Aws::Utils::DateTime&& value) { m_migrationTimestampHasBeenSet = true; m_migrationTimestamp = std::move(value); }

    /**
     * <p>The date and time that the migration started.</p>
     */
    inline MigrationSummary& WithMigrationTimestamp(const Aws::Utils::DateTime& value) { SetMigrationTimestamp(value); return *this;}

    /**
     * <p>The date and time that the migration started.</p>
     */
    inline MigrationSummary& WithMigrationTimestamp(Aws::Utils::DateTime&& value) { SetMigrationTimestamp(std::move(value)); return *this;}

  private:

    Aws::String m_migrationId;
    bool m_migrationIdHasBeenSet = false;

    Aws::String m_v1BotName;
    bool m_v1BotNameHasBeenSet = false;

    Aws::String m_v1BotVersion;
    bool m_v1BotVersionHasBeenSet = false;

    Locale m_v1BotLocale;
    bool m_v1BotLocaleHasBeenSet = false;

    Aws::String m_v2BotId;
    bool m_v2BotIdHasBeenSet = false;

    Aws::String m_v2BotRole;
    bool m_v2BotRoleHasBeenSet = false;

    MigrationStatus m_migrationStatus;
    bool m_migrationStatusHasBeenSet = false;

    MigrationStrategy m_migrationStrategy;
    bool m_migrationStrategyHasBeenSet = false;

    Aws::Utils::DateTime m_migrationTimestamp;
    bool m_migrationTimestampHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelBuildingService
} // namespace Aws
