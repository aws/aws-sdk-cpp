/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/lex-models/LexModelBuildingService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class AWS_LEXMODELBUILDINGSERVICE_API GetBotAliasResult
  {
  public:
    GetBotAliasResult();
    GetBotAliasResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetBotAliasResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The name of the bot alias.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the bot alias.</p>
     */
    inline void SetName(const Aws::String& value) { m_name = value; }

    /**
     * <p>The name of the bot alias.</p>
     */
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }

    /**
     * <p>The name of the bot alias.</p>
     */
    inline void SetName(const char* value) { m_name.assign(value); }

    /**
     * <p>The name of the bot alias.</p>
     */
    inline GetBotAliasResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the bot alias.</p>
     */
    inline GetBotAliasResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the bot alias.</p>
     */
    inline GetBotAliasResult& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>A description of the bot alias.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description of the bot alias.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_description = value; }

    /**
     * <p>A description of the bot alias.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }

    /**
     * <p>A description of the bot alias.</p>
     */
    inline void SetDescription(const char* value) { m_description.assign(value); }

    /**
     * <p>A description of the bot alias.</p>
     */
    inline GetBotAliasResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description of the bot alias.</p>
     */
    inline GetBotAliasResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description of the bot alias.</p>
     */
    inline GetBotAliasResult& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The version of the bot that the alias points to.</p>
     */
    inline const Aws::String& GetBotVersion() const{ return m_botVersion; }

    /**
     * <p>The version of the bot that the alias points to.</p>
     */
    inline void SetBotVersion(const Aws::String& value) { m_botVersion = value; }

    /**
     * <p>The version of the bot that the alias points to.</p>
     */
    inline void SetBotVersion(Aws::String&& value) { m_botVersion = std::move(value); }

    /**
     * <p>The version of the bot that the alias points to.</p>
     */
    inline void SetBotVersion(const char* value) { m_botVersion.assign(value); }

    /**
     * <p>The version of the bot that the alias points to.</p>
     */
    inline GetBotAliasResult& WithBotVersion(const Aws::String& value) { SetBotVersion(value); return *this;}

    /**
     * <p>The version of the bot that the alias points to.</p>
     */
    inline GetBotAliasResult& WithBotVersion(Aws::String&& value) { SetBotVersion(std::move(value)); return *this;}

    /**
     * <p>The version of the bot that the alias points to.</p>
     */
    inline GetBotAliasResult& WithBotVersion(const char* value) { SetBotVersion(value); return *this;}


    /**
     * <p>The name of the bot that the alias points to.</p>
     */
    inline const Aws::String& GetBotName() const{ return m_botName; }

    /**
     * <p>The name of the bot that the alias points to.</p>
     */
    inline void SetBotName(const Aws::String& value) { m_botName = value; }

    /**
     * <p>The name of the bot that the alias points to.</p>
     */
    inline void SetBotName(Aws::String&& value) { m_botName = std::move(value); }

    /**
     * <p>The name of the bot that the alias points to.</p>
     */
    inline void SetBotName(const char* value) { m_botName.assign(value); }

    /**
     * <p>The name of the bot that the alias points to.</p>
     */
    inline GetBotAliasResult& WithBotName(const Aws::String& value) { SetBotName(value); return *this;}

    /**
     * <p>The name of the bot that the alias points to.</p>
     */
    inline GetBotAliasResult& WithBotName(Aws::String&& value) { SetBotName(std::move(value)); return *this;}

    /**
     * <p>The name of the bot that the alias points to.</p>
     */
    inline GetBotAliasResult& WithBotName(const char* value) { SetBotName(value); return *this;}


    /**
     * <p>The date that the bot alias was updated. When you create a resource, the
     * creation date and the last updated date are the same.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedDate() const{ return m_lastUpdatedDate; }

    /**
     * <p>The date that the bot alias was updated. When you create a resource, the
     * creation date and the last updated date are the same.</p>
     */
    inline void SetLastUpdatedDate(const Aws::Utils::DateTime& value) { m_lastUpdatedDate = value; }

    /**
     * <p>The date that the bot alias was updated. When you create a resource, the
     * creation date and the last updated date are the same.</p>
     */
    inline void SetLastUpdatedDate(Aws::Utils::DateTime&& value) { m_lastUpdatedDate = std::move(value); }

    /**
     * <p>The date that the bot alias was updated. When you create a resource, the
     * creation date and the last updated date are the same.</p>
     */
    inline GetBotAliasResult& WithLastUpdatedDate(const Aws::Utils::DateTime& value) { SetLastUpdatedDate(value); return *this;}

    /**
     * <p>The date that the bot alias was updated. When you create a resource, the
     * creation date and the last updated date are the same.</p>
     */
    inline GetBotAliasResult& WithLastUpdatedDate(Aws::Utils::DateTime&& value) { SetLastUpdatedDate(std::move(value)); return *this;}


    /**
     * <p>The date that the bot alias was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedDate() const{ return m_createdDate; }

    /**
     * <p>The date that the bot alias was created.</p>
     */
    inline void SetCreatedDate(const Aws::Utils::DateTime& value) { m_createdDate = value; }

    /**
     * <p>The date that the bot alias was created.</p>
     */
    inline void SetCreatedDate(Aws::Utils::DateTime&& value) { m_createdDate = std::move(value); }

    /**
     * <p>The date that the bot alias was created.</p>
     */
    inline GetBotAliasResult& WithCreatedDate(const Aws::Utils::DateTime& value) { SetCreatedDate(value); return *this;}

    /**
     * <p>The date that the bot alias was created.</p>
     */
    inline GetBotAliasResult& WithCreatedDate(Aws::Utils::DateTime&& value) { SetCreatedDate(std::move(value)); return *this;}


    /**
     * <p>Checksum of the bot alias.</p>
     */
    inline const Aws::String& GetChecksum() const{ return m_checksum; }

    /**
     * <p>Checksum of the bot alias.</p>
     */
    inline void SetChecksum(const Aws::String& value) { m_checksum = value; }

    /**
     * <p>Checksum of the bot alias.</p>
     */
    inline void SetChecksum(Aws::String&& value) { m_checksum = std::move(value); }

    /**
     * <p>Checksum of the bot alias.</p>
     */
    inline void SetChecksum(const char* value) { m_checksum.assign(value); }

    /**
     * <p>Checksum of the bot alias.</p>
     */
    inline GetBotAliasResult& WithChecksum(const Aws::String& value) { SetChecksum(value); return *this;}

    /**
     * <p>Checksum of the bot alias.</p>
     */
    inline GetBotAliasResult& WithChecksum(Aws::String&& value) { SetChecksum(std::move(value)); return *this;}

    /**
     * <p>Checksum of the bot alias.</p>
     */
    inline GetBotAliasResult& WithChecksum(const char* value) { SetChecksum(value); return *this;}

  private:

    Aws::String m_name;

    Aws::String m_description;

    Aws::String m_botVersion;

    Aws::String m_botName;

    Aws::Utils::DateTime m_lastUpdatedDate;

    Aws::Utils::DateTime m_createdDate;

    Aws::String m_checksum;
  };

} // namespace Model
} // namespace LexModelBuildingService
} // namespace Aws
