/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lex-models/LexModelBuildingService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lex-models/model/Locale.h>
#include <aws/lex-models/model/MigrationStrategy.h>
#include <aws/core/utils/DateTime.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace LexModelBuildingService
{
namespace Model
{
  class StartMigrationResult
  {
  public:
    AWS_LEXMODELBUILDINGSERVICE_API StartMigrationResult();
    AWS_LEXMODELBUILDINGSERVICE_API StartMigrationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LEXMODELBUILDINGSERVICE_API StartMigrationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The name of the Amazon Lex V1 bot that you are migrating to Amazon Lex
     * V2.</p>
     */
    inline const Aws::String& GetV1BotName() const{ return m_v1BotName; }

    /**
     * <p>The name of the Amazon Lex V1 bot that you are migrating to Amazon Lex
     * V2.</p>
     */
    inline void SetV1BotName(const Aws::String& value) { m_v1BotName = value; }

    /**
     * <p>The name of the Amazon Lex V1 bot that you are migrating to Amazon Lex
     * V2.</p>
     */
    inline void SetV1BotName(Aws::String&& value) { m_v1BotName = std::move(value); }

    /**
     * <p>The name of the Amazon Lex V1 bot that you are migrating to Amazon Lex
     * V2.</p>
     */
    inline void SetV1BotName(const char* value) { m_v1BotName.assign(value); }

    /**
     * <p>The name of the Amazon Lex V1 bot that you are migrating to Amazon Lex
     * V2.</p>
     */
    inline StartMigrationResult& WithV1BotName(const Aws::String& value) { SetV1BotName(value); return *this;}

    /**
     * <p>The name of the Amazon Lex V1 bot that you are migrating to Amazon Lex
     * V2.</p>
     */
    inline StartMigrationResult& WithV1BotName(Aws::String&& value) { SetV1BotName(std::move(value)); return *this;}

    /**
     * <p>The name of the Amazon Lex V1 bot that you are migrating to Amazon Lex
     * V2.</p>
     */
    inline StartMigrationResult& WithV1BotName(const char* value) { SetV1BotName(value); return *this;}


    /**
     * <p>The version of the bot to migrate to Amazon Lex V2. </p>
     */
    inline const Aws::String& GetV1BotVersion() const{ return m_v1BotVersion; }

    /**
     * <p>The version of the bot to migrate to Amazon Lex V2. </p>
     */
    inline void SetV1BotVersion(const Aws::String& value) { m_v1BotVersion = value; }

    /**
     * <p>The version of the bot to migrate to Amazon Lex V2. </p>
     */
    inline void SetV1BotVersion(Aws::String&& value) { m_v1BotVersion = std::move(value); }

    /**
     * <p>The version of the bot to migrate to Amazon Lex V2. </p>
     */
    inline void SetV1BotVersion(const char* value) { m_v1BotVersion.assign(value); }

    /**
     * <p>The version of the bot to migrate to Amazon Lex V2. </p>
     */
    inline StartMigrationResult& WithV1BotVersion(const Aws::String& value) { SetV1BotVersion(value); return *this;}

    /**
     * <p>The version of the bot to migrate to Amazon Lex V2. </p>
     */
    inline StartMigrationResult& WithV1BotVersion(Aws::String&& value) { SetV1BotVersion(std::move(value)); return *this;}

    /**
     * <p>The version of the bot to migrate to Amazon Lex V2. </p>
     */
    inline StartMigrationResult& WithV1BotVersion(const char* value) { SetV1BotVersion(value); return *this;}


    /**
     * <p>The locale used for the Amazon Lex V1 bot. </p>
     */
    inline const Locale& GetV1BotLocale() const{ return m_v1BotLocale; }

    /**
     * <p>The locale used for the Amazon Lex V1 bot. </p>
     */
    inline void SetV1BotLocale(const Locale& value) { m_v1BotLocale = value; }

    /**
     * <p>The locale used for the Amazon Lex V1 bot. </p>
     */
    inline void SetV1BotLocale(Locale&& value) { m_v1BotLocale = std::move(value); }

    /**
     * <p>The locale used for the Amazon Lex V1 bot. </p>
     */
    inline StartMigrationResult& WithV1BotLocale(const Locale& value) { SetV1BotLocale(value); return *this;}

    /**
     * <p>The locale used for the Amazon Lex V1 bot. </p>
     */
    inline StartMigrationResult& WithV1BotLocale(Locale&& value) { SetV1BotLocale(std::move(value)); return *this;}


    /**
     * <p>The unique identifier for the Amazon Lex V2 bot. </p>
     */
    inline const Aws::String& GetV2BotId() const{ return m_v2BotId; }

    /**
     * <p>The unique identifier for the Amazon Lex V2 bot. </p>
     */
    inline void SetV2BotId(const Aws::String& value) { m_v2BotId = value; }

    /**
     * <p>The unique identifier for the Amazon Lex V2 bot. </p>
     */
    inline void SetV2BotId(Aws::String&& value) { m_v2BotId = std::move(value); }

    /**
     * <p>The unique identifier for the Amazon Lex V2 bot. </p>
     */
    inline void SetV2BotId(const char* value) { m_v2BotId.assign(value); }

    /**
     * <p>The unique identifier for the Amazon Lex V2 bot. </p>
     */
    inline StartMigrationResult& WithV2BotId(const Aws::String& value) { SetV2BotId(value); return *this;}

    /**
     * <p>The unique identifier for the Amazon Lex V2 bot. </p>
     */
    inline StartMigrationResult& WithV2BotId(Aws::String&& value) { SetV2BotId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the Amazon Lex V2 bot. </p>
     */
    inline StartMigrationResult& WithV2BotId(const char* value) { SetV2BotId(value); return *this;}


    /**
     * <p>The IAM role that Amazon Lex uses to run the Amazon Lex V2 bot.</p>
     */
    inline const Aws::String& GetV2BotRole() const{ return m_v2BotRole; }

    /**
     * <p>The IAM role that Amazon Lex uses to run the Amazon Lex V2 bot.</p>
     */
    inline void SetV2BotRole(const Aws::String& value) { m_v2BotRole = value; }

    /**
     * <p>The IAM role that Amazon Lex uses to run the Amazon Lex V2 bot.</p>
     */
    inline void SetV2BotRole(Aws::String&& value) { m_v2BotRole = std::move(value); }

    /**
     * <p>The IAM role that Amazon Lex uses to run the Amazon Lex V2 bot.</p>
     */
    inline void SetV2BotRole(const char* value) { m_v2BotRole.assign(value); }

    /**
     * <p>The IAM role that Amazon Lex uses to run the Amazon Lex V2 bot.</p>
     */
    inline StartMigrationResult& WithV2BotRole(const Aws::String& value) { SetV2BotRole(value); return *this;}

    /**
     * <p>The IAM role that Amazon Lex uses to run the Amazon Lex V2 bot.</p>
     */
    inline StartMigrationResult& WithV2BotRole(Aws::String&& value) { SetV2BotRole(std::move(value)); return *this;}

    /**
     * <p>The IAM role that Amazon Lex uses to run the Amazon Lex V2 bot.</p>
     */
    inline StartMigrationResult& WithV2BotRole(const char* value) { SetV2BotRole(value); return *this;}


    /**
     * <p>The unique identifier that Amazon Lex assigned to the migration.</p>
     */
    inline const Aws::String& GetMigrationId() const{ return m_migrationId; }

    /**
     * <p>The unique identifier that Amazon Lex assigned to the migration.</p>
     */
    inline void SetMigrationId(const Aws::String& value) { m_migrationId = value; }

    /**
     * <p>The unique identifier that Amazon Lex assigned to the migration.</p>
     */
    inline void SetMigrationId(Aws::String&& value) { m_migrationId = std::move(value); }

    /**
     * <p>The unique identifier that Amazon Lex assigned to the migration.</p>
     */
    inline void SetMigrationId(const char* value) { m_migrationId.assign(value); }

    /**
     * <p>The unique identifier that Amazon Lex assigned to the migration.</p>
     */
    inline StartMigrationResult& WithMigrationId(const Aws::String& value) { SetMigrationId(value); return *this;}

    /**
     * <p>The unique identifier that Amazon Lex assigned to the migration.</p>
     */
    inline StartMigrationResult& WithMigrationId(Aws::String&& value) { SetMigrationId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier that Amazon Lex assigned to the migration.</p>
     */
    inline StartMigrationResult& WithMigrationId(const char* value) { SetMigrationId(value); return *this;}


    /**
     * <p>The strategy used to conduct the migration.</p>
     */
    inline const MigrationStrategy& GetMigrationStrategy() const{ return m_migrationStrategy; }

    /**
     * <p>The strategy used to conduct the migration.</p>
     */
    inline void SetMigrationStrategy(const MigrationStrategy& value) { m_migrationStrategy = value; }

    /**
     * <p>The strategy used to conduct the migration.</p>
     */
    inline void SetMigrationStrategy(MigrationStrategy&& value) { m_migrationStrategy = std::move(value); }

    /**
     * <p>The strategy used to conduct the migration.</p>
     */
    inline StartMigrationResult& WithMigrationStrategy(const MigrationStrategy& value) { SetMigrationStrategy(value); return *this;}

    /**
     * <p>The strategy used to conduct the migration.</p>
     */
    inline StartMigrationResult& WithMigrationStrategy(MigrationStrategy&& value) { SetMigrationStrategy(std::move(value)); return *this;}


    /**
     * <p>The date and time that the migration started.</p>
     */
    inline const Aws::Utils::DateTime& GetMigrationTimestamp() const{ return m_migrationTimestamp; }

    /**
     * <p>The date and time that the migration started.</p>
     */
    inline void SetMigrationTimestamp(const Aws::Utils::DateTime& value) { m_migrationTimestamp = value; }

    /**
     * <p>The date and time that the migration started.</p>
     */
    inline void SetMigrationTimestamp(Aws::Utils::DateTime&& value) { m_migrationTimestamp = std::move(value); }

    /**
     * <p>The date and time that the migration started.</p>
     */
    inline StartMigrationResult& WithMigrationTimestamp(const Aws::Utils::DateTime& value) { SetMigrationTimestamp(value); return *this;}

    /**
     * <p>The date and time that the migration started.</p>
     */
    inline StartMigrationResult& WithMigrationTimestamp(Aws::Utils::DateTime&& value) { SetMigrationTimestamp(std::move(value)); return *this;}

  private:

    Aws::String m_v1BotName;

    Aws::String m_v1BotVersion;

    Locale m_v1BotLocale;

    Aws::String m_v2BotId;

    Aws::String m_v2BotRole;

    Aws::String m_migrationId;

    MigrationStrategy m_migrationStrategy;

    Aws::Utils::DateTime m_migrationTimestamp;
  };

} // namespace Model
} // namespace LexModelBuildingService
} // namespace Aws
