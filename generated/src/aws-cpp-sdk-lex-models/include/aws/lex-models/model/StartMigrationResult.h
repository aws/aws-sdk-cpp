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
    AWS_LEXMODELBUILDINGSERVICE_API StartMigrationResult() = default;
    AWS_LEXMODELBUILDINGSERVICE_API StartMigrationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LEXMODELBUILDINGSERVICE_API StartMigrationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The name of the Amazon Lex V1 bot that you are migrating to Amazon Lex
     * V2.</p>
     */
    inline const Aws::String& GetV1BotName() const { return m_v1BotName; }
    template<typename V1BotNameT = Aws::String>
    void SetV1BotName(V1BotNameT&& value) { m_v1BotNameHasBeenSet = true; m_v1BotName = std::forward<V1BotNameT>(value); }
    template<typename V1BotNameT = Aws::String>
    StartMigrationResult& WithV1BotName(V1BotNameT&& value) { SetV1BotName(std::forward<V1BotNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the bot to migrate to Amazon Lex V2. </p>
     */
    inline const Aws::String& GetV1BotVersion() const { return m_v1BotVersion; }
    template<typename V1BotVersionT = Aws::String>
    void SetV1BotVersion(V1BotVersionT&& value) { m_v1BotVersionHasBeenSet = true; m_v1BotVersion = std::forward<V1BotVersionT>(value); }
    template<typename V1BotVersionT = Aws::String>
    StartMigrationResult& WithV1BotVersion(V1BotVersionT&& value) { SetV1BotVersion(std::forward<V1BotVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The locale used for the Amazon Lex V1 bot. </p>
     */
    inline Locale GetV1BotLocale() const { return m_v1BotLocale; }
    inline void SetV1BotLocale(Locale value) { m_v1BotLocaleHasBeenSet = true; m_v1BotLocale = value; }
    inline StartMigrationResult& WithV1BotLocale(Locale value) { SetV1BotLocale(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier for the Amazon Lex V2 bot. </p>
     */
    inline const Aws::String& GetV2BotId() const { return m_v2BotId; }
    template<typename V2BotIdT = Aws::String>
    void SetV2BotId(V2BotIdT&& value) { m_v2BotIdHasBeenSet = true; m_v2BotId = std::forward<V2BotIdT>(value); }
    template<typename V2BotIdT = Aws::String>
    StartMigrationResult& WithV2BotId(V2BotIdT&& value) { SetV2BotId(std::forward<V2BotIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IAM role that Amazon Lex uses to run the Amazon Lex V2 bot.</p>
     */
    inline const Aws::String& GetV2BotRole() const { return m_v2BotRole; }
    template<typename V2BotRoleT = Aws::String>
    void SetV2BotRole(V2BotRoleT&& value) { m_v2BotRoleHasBeenSet = true; m_v2BotRole = std::forward<V2BotRoleT>(value); }
    template<typename V2BotRoleT = Aws::String>
    StartMigrationResult& WithV2BotRole(V2BotRoleT&& value) { SetV2BotRole(std::forward<V2BotRoleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier that Amazon Lex assigned to the migration.</p>
     */
    inline const Aws::String& GetMigrationId() const { return m_migrationId; }
    template<typename MigrationIdT = Aws::String>
    void SetMigrationId(MigrationIdT&& value) { m_migrationIdHasBeenSet = true; m_migrationId = std::forward<MigrationIdT>(value); }
    template<typename MigrationIdT = Aws::String>
    StartMigrationResult& WithMigrationId(MigrationIdT&& value) { SetMigrationId(std::forward<MigrationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The strategy used to conduct the migration.</p>
     */
    inline MigrationStrategy GetMigrationStrategy() const { return m_migrationStrategy; }
    inline void SetMigrationStrategy(MigrationStrategy value) { m_migrationStrategyHasBeenSet = true; m_migrationStrategy = value; }
    inline StartMigrationResult& WithMigrationStrategy(MigrationStrategy value) { SetMigrationStrategy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the migration started.</p>
     */
    inline const Aws::Utils::DateTime& GetMigrationTimestamp() const { return m_migrationTimestamp; }
    template<typename MigrationTimestampT = Aws::Utils::DateTime>
    void SetMigrationTimestamp(MigrationTimestampT&& value) { m_migrationTimestampHasBeenSet = true; m_migrationTimestamp = std::forward<MigrationTimestampT>(value); }
    template<typename MigrationTimestampT = Aws::Utils::DateTime>
    StartMigrationResult& WithMigrationTimestamp(MigrationTimestampT&& value) { SetMigrationTimestamp(std::forward<MigrationTimestampT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    StartMigrationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_v1BotName;
    bool m_v1BotNameHasBeenSet = false;

    Aws::String m_v1BotVersion;
    bool m_v1BotVersionHasBeenSet = false;

    Locale m_v1BotLocale{Locale::NOT_SET};
    bool m_v1BotLocaleHasBeenSet = false;

    Aws::String m_v2BotId;
    bool m_v2BotIdHasBeenSet = false;

    Aws::String m_v2BotRole;
    bool m_v2BotRoleHasBeenSet = false;

    Aws::String m_migrationId;
    bool m_migrationIdHasBeenSet = false;

    MigrationStrategy m_migrationStrategy{MigrationStrategy::NOT_SET};
    bool m_migrationStrategyHasBeenSet = false;

    Aws::Utils::DateTime m_migrationTimestamp{};
    bool m_migrationTimestampHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelBuildingService
} // namespace Aws
