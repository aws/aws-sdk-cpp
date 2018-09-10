﻿/*
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
#include <aws/secretsmanager/SecretsManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace SecretsManager
{
namespace Model
{

  /**
   * <p>A structure that contains information about one version of a
   * secret.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/secretsmanager-2017-10-17/SecretVersionsListEntry">AWS
   * API Reference</a></p>
   */
  class AWS_SECRETSMANAGER_API SecretVersionsListEntry
  {
  public:
    SecretVersionsListEntry();
    SecretVersionsListEntry(Aws::Utils::Json::JsonView jsonValue);
    SecretVersionsListEntry& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The unique version identifier of this version of the secret.</p>
     */
    inline const Aws::String& GetVersionId() const{ return m_versionId; }

    /**
     * <p>The unique version identifier of this version of the secret.</p>
     */
    inline void SetVersionId(const Aws::String& value) { m_versionIdHasBeenSet = true; m_versionId = value; }

    /**
     * <p>The unique version identifier of this version of the secret.</p>
     */
    inline void SetVersionId(Aws::String&& value) { m_versionIdHasBeenSet = true; m_versionId = std::move(value); }

    /**
     * <p>The unique version identifier of this version of the secret.</p>
     */
    inline void SetVersionId(const char* value) { m_versionIdHasBeenSet = true; m_versionId.assign(value); }

    /**
     * <p>The unique version identifier of this version of the secret.</p>
     */
    inline SecretVersionsListEntry& WithVersionId(const Aws::String& value) { SetVersionId(value); return *this;}

    /**
     * <p>The unique version identifier of this version of the secret.</p>
     */
    inline SecretVersionsListEntry& WithVersionId(Aws::String&& value) { SetVersionId(std::move(value)); return *this;}

    /**
     * <p>The unique version identifier of this version of the secret.</p>
     */
    inline SecretVersionsListEntry& WithVersionId(const char* value) { SetVersionId(value); return *this;}


    /**
     * <p>An array of staging labels that are currently associated with this version of
     * the secret.</p>
     */
    inline const Aws::Vector<Aws::String>& GetVersionStages() const{ return m_versionStages; }

    /**
     * <p>An array of staging labels that are currently associated with this version of
     * the secret.</p>
     */
    inline void SetVersionStages(const Aws::Vector<Aws::String>& value) { m_versionStagesHasBeenSet = true; m_versionStages = value; }

    /**
     * <p>An array of staging labels that are currently associated with this version of
     * the secret.</p>
     */
    inline void SetVersionStages(Aws::Vector<Aws::String>&& value) { m_versionStagesHasBeenSet = true; m_versionStages = std::move(value); }

    /**
     * <p>An array of staging labels that are currently associated with this version of
     * the secret.</p>
     */
    inline SecretVersionsListEntry& WithVersionStages(const Aws::Vector<Aws::String>& value) { SetVersionStages(value); return *this;}

    /**
     * <p>An array of staging labels that are currently associated with this version of
     * the secret.</p>
     */
    inline SecretVersionsListEntry& WithVersionStages(Aws::Vector<Aws::String>&& value) { SetVersionStages(std::move(value)); return *this;}

    /**
     * <p>An array of staging labels that are currently associated with this version of
     * the secret.</p>
     */
    inline SecretVersionsListEntry& AddVersionStages(const Aws::String& value) { m_versionStagesHasBeenSet = true; m_versionStages.push_back(value); return *this; }

    /**
     * <p>An array of staging labels that are currently associated with this version of
     * the secret.</p>
     */
    inline SecretVersionsListEntry& AddVersionStages(Aws::String&& value) { m_versionStagesHasBeenSet = true; m_versionStages.push_back(std::move(value)); return *this; }

    /**
     * <p>An array of staging labels that are currently associated with this version of
     * the secret.</p>
     */
    inline SecretVersionsListEntry& AddVersionStages(const char* value) { m_versionStagesHasBeenSet = true; m_versionStages.push_back(value); return *this; }


    /**
     * <p>The date that this version of the secret was last accessed. Note that the
     * resolution of this field is at the date level and does not include the time.</p>
     */
    inline const Aws::Utils::DateTime& GetLastAccessedDate() const{ return m_lastAccessedDate; }

    /**
     * <p>The date that this version of the secret was last accessed. Note that the
     * resolution of this field is at the date level and does not include the time.</p>
     */
    inline void SetLastAccessedDate(const Aws::Utils::DateTime& value) { m_lastAccessedDateHasBeenSet = true; m_lastAccessedDate = value; }

    /**
     * <p>The date that this version of the secret was last accessed. Note that the
     * resolution of this field is at the date level and does not include the time.</p>
     */
    inline void SetLastAccessedDate(Aws::Utils::DateTime&& value) { m_lastAccessedDateHasBeenSet = true; m_lastAccessedDate = std::move(value); }

    /**
     * <p>The date that this version of the secret was last accessed. Note that the
     * resolution of this field is at the date level and does not include the time.</p>
     */
    inline SecretVersionsListEntry& WithLastAccessedDate(const Aws::Utils::DateTime& value) { SetLastAccessedDate(value); return *this;}

    /**
     * <p>The date that this version of the secret was last accessed. Note that the
     * resolution of this field is at the date level and does not include the time.</p>
     */
    inline SecretVersionsListEntry& WithLastAccessedDate(Aws::Utils::DateTime&& value) { SetLastAccessedDate(std::move(value)); return *this;}


    /**
     * <p>The date and time this version of the secret was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedDate() const{ return m_createdDate; }

    /**
     * <p>The date and time this version of the secret was created.</p>
     */
    inline void SetCreatedDate(const Aws::Utils::DateTime& value) { m_createdDateHasBeenSet = true; m_createdDate = value; }

    /**
     * <p>The date and time this version of the secret was created.</p>
     */
    inline void SetCreatedDate(Aws::Utils::DateTime&& value) { m_createdDateHasBeenSet = true; m_createdDate = std::move(value); }

    /**
     * <p>The date and time this version of the secret was created.</p>
     */
    inline SecretVersionsListEntry& WithCreatedDate(const Aws::Utils::DateTime& value) { SetCreatedDate(value); return *this;}

    /**
     * <p>The date and time this version of the secret was created.</p>
     */
    inline SecretVersionsListEntry& WithCreatedDate(Aws::Utils::DateTime&& value) { SetCreatedDate(std::move(value)); return *this;}

  private:

    Aws::String m_versionId;
    bool m_versionIdHasBeenSet;

    Aws::Vector<Aws::String> m_versionStages;
    bool m_versionStagesHasBeenSet;

    Aws::Utils::DateTime m_lastAccessedDate;
    bool m_lastAccessedDateHasBeenSet;

    Aws::Utils::DateTime m_createdDate;
    bool m_createdDateHasBeenSet;
  };

} // namespace Model
} // namespace SecretsManager
} // namespace Aws
