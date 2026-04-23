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
#include <aws/es/ElasticsearchService_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/es/model/OptionState.h>
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
namespace ElasticsearchService
{
namespace Model
{

  /**
   * <p>Provides the current status of the entity.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/OptionStatus">AWS API
   * Reference</a></p>
   */
  class AWS_ELASTICSEARCHSERVICE_API OptionStatus
  {
  public:
    OptionStatus();
    OptionStatus(Aws::Utils::Json::JsonView jsonValue);
    OptionStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Timestamp which tells the creation date for the entity.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDate() const{ return m_creationDate; }

    /**
     * <p>Timestamp which tells the creation date for the entity.</p>
     */
    inline bool CreationDateHasBeenSet() const { return m_creationDateHasBeenSet; }

    /**
     * <p>Timestamp which tells the creation date for the entity.</p>
     */
    inline void SetCreationDate(const Aws::Utils::DateTime& value) { m_creationDateHasBeenSet = true; m_creationDate = value; }

    /**
     * <p>Timestamp which tells the creation date for the entity.</p>
     */
    inline void SetCreationDate(Aws::Utils::DateTime&& value) { m_creationDateHasBeenSet = true; m_creationDate = std::move(value); }

    /**
     * <p>Timestamp which tells the creation date for the entity.</p>
     */
    inline OptionStatus& WithCreationDate(const Aws::Utils::DateTime& value) { SetCreationDate(value); return *this;}

    /**
     * <p>Timestamp which tells the creation date for the entity.</p>
     */
    inline OptionStatus& WithCreationDate(Aws::Utils::DateTime&& value) { SetCreationDate(std::move(value)); return *this;}


    /**
     * <p>Timestamp which tells the last updated time for the entity.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdateDate() const{ return m_updateDate; }

    /**
     * <p>Timestamp which tells the last updated time for the entity.</p>
     */
    inline bool UpdateDateHasBeenSet() const { return m_updateDateHasBeenSet; }

    /**
     * <p>Timestamp which tells the last updated time for the entity.</p>
     */
    inline void SetUpdateDate(const Aws::Utils::DateTime& value) { m_updateDateHasBeenSet = true; m_updateDate = value; }

    /**
     * <p>Timestamp which tells the last updated time for the entity.</p>
     */
    inline void SetUpdateDate(Aws::Utils::DateTime&& value) { m_updateDateHasBeenSet = true; m_updateDate = std::move(value); }

    /**
     * <p>Timestamp which tells the last updated time for the entity.</p>
     */
    inline OptionStatus& WithUpdateDate(const Aws::Utils::DateTime& value) { SetUpdateDate(value); return *this;}

    /**
     * <p>Timestamp which tells the last updated time for the entity.</p>
     */
    inline OptionStatus& WithUpdateDate(Aws::Utils::DateTime&& value) { SetUpdateDate(std::move(value)); return *this;}


    /**
     * <p>Specifies the latest version for the entity.</p>
     */
    inline int GetUpdateVersion() const{ return m_updateVersion; }

    /**
     * <p>Specifies the latest version for the entity.</p>
     */
    inline bool UpdateVersionHasBeenSet() const { return m_updateVersionHasBeenSet; }

    /**
     * <p>Specifies the latest version for the entity.</p>
     */
    inline void SetUpdateVersion(int value) { m_updateVersionHasBeenSet = true; m_updateVersion = value; }

    /**
     * <p>Specifies the latest version for the entity.</p>
     */
    inline OptionStatus& WithUpdateVersion(int value) { SetUpdateVersion(value); return *this;}


    /**
     * <p>Provides the <code>OptionState</code> for the Elasticsearch domain.</p>
     */
    inline const OptionState& GetState() const{ return m_state; }

    /**
     * <p>Provides the <code>OptionState</code> for the Elasticsearch domain.</p>
     */
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    /**
     * <p>Provides the <code>OptionState</code> for the Elasticsearch domain.</p>
     */
    inline void SetState(const OptionState& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>Provides the <code>OptionState</code> for the Elasticsearch domain.</p>
     */
    inline void SetState(OptionState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>Provides the <code>OptionState</code> for the Elasticsearch domain.</p>
     */
    inline OptionStatus& WithState(const OptionState& value) { SetState(value); return *this;}

    /**
     * <p>Provides the <code>OptionState</code> for the Elasticsearch domain.</p>
     */
    inline OptionStatus& WithState(OptionState&& value) { SetState(std::move(value)); return *this;}


    /**
     * <p>Indicates whether the Elasticsearch domain is being deleted.</p>
     */
    inline bool GetPendingDeletion() const{ return m_pendingDeletion; }

    /**
     * <p>Indicates whether the Elasticsearch domain is being deleted.</p>
     */
    inline bool PendingDeletionHasBeenSet() const { return m_pendingDeletionHasBeenSet; }

    /**
     * <p>Indicates whether the Elasticsearch domain is being deleted.</p>
     */
    inline void SetPendingDeletion(bool value) { m_pendingDeletionHasBeenSet = true; m_pendingDeletion = value; }

    /**
     * <p>Indicates whether the Elasticsearch domain is being deleted.</p>
     */
    inline OptionStatus& WithPendingDeletion(bool value) { SetPendingDeletion(value); return *this;}

  private:

    Aws::Utils::DateTime m_creationDate;
    bool m_creationDateHasBeenSet;

    Aws::Utils::DateTime m_updateDate;
    bool m_updateDateHasBeenSet;

    int m_updateVersion;
    bool m_updateVersionHasBeenSet;

    OptionState m_state;
    bool m_stateHasBeenSet;

    bool m_pendingDeletion;
    bool m_pendingDeletionHasBeenSet;
  };

} // namespace Model
} // namespace ElasticsearchService
} // namespace Aws
