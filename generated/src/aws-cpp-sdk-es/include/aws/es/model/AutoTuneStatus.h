/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/es/ElasticsearchService_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/es/model/AutoTuneState.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Provides the current status of the Auto-Tune options. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/AutoTuneStatus">AWS
   * API Reference</a></p>
   */
  class AutoTuneStatus
  {
  public:
    AWS_ELASTICSEARCHSERVICE_API AutoTuneStatus();
    AWS_ELASTICSEARCHSERVICE_API AutoTuneStatus(Aws::Utils::Json::JsonView jsonValue);
    AWS_ELASTICSEARCHSERVICE_API AutoTuneStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ELASTICSEARCHSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Timestamp which tells Auto-Tune options creation date .</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDate() const{ return m_creationDate; }

    /**
     * <p>Timestamp which tells Auto-Tune options creation date .</p>
     */
    inline bool CreationDateHasBeenSet() const { return m_creationDateHasBeenSet; }

    /**
     * <p>Timestamp which tells Auto-Tune options creation date .</p>
     */
    inline void SetCreationDate(const Aws::Utils::DateTime& value) { m_creationDateHasBeenSet = true; m_creationDate = value; }

    /**
     * <p>Timestamp which tells Auto-Tune options creation date .</p>
     */
    inline void SetCreationDate(Aws::Utils::DateTime&& value) { m_creationDateHasBeenSet = true; m_creationDate = std::move(value); }

    /**
     * <p>Timestamp which tells Auto-Tune options creation date .</p>
     */
    inline AutoTuneStatus& WithCreationDate(const Aws::Utils::DateTime& value) { SetCreationDate(value); return *this;}

    /**
     * <p>Timestamp which tells Auto-Tune options creation date .</p>
     */
    inline AutoTuneStatus& WithCreationDate(Aws::Utils::DateTime&& value) { SetCreationDate(std::move(value)); return *this;}


    /**
     * <p>Timestamp which tells Auto-Tune options last updated time.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdateDate() const{ return m_updateDate; }

    /**
     * <p>Timestamp which tells Auto-Tune options last updated time.</p>
     */
    inline bool UpdateDateHasBeenSet() const { return m_updateDateHasBeenSet; }

    /**
     * <p>Timestamp which tells Auto-Tune options last updated time.</p>
     */
    inline void SetUpdateDate(const Aws::Utils::DateTime& value) { m_updateDateHasBeenSet = true; m_updateDate = value; }

    /**
     * <p>Timestamp which tells Auto-Tune options last updated time.</p>
     */
    inline void SetUpdateDate(Aws::Utils::DateTime&& value) { m_updateDateHasBeenSet = true; m_updateDate = std::move(value); }

    /**
     * <p>Timestamp which tells Auto-Tune options last updated time.</p>
     */
    inline AutoTuneStatus& WithUpdateDate(const Aws::Utils::DateTime& value) { SetUpdateDate(value); return *this;}

    /**
     * <p>Timestamp which tells Auto-Tune options last updated time.</p>
     */
    inline AutoTuneStatus& WithUpdateDate(Aws::Utils::DateTime&& value) { SetUpdateDate(std::move(value)); return *this;}


    /**
     * <p>Specifies the Auto-Tune options latest version.</p>
     */
    inline int GetUpdateVersion() const{ return m_updateVersion; }

    /**
     * <p>Specifies the Auto-Tune options latest version.</p>
     */
    inline bool UpdateVersionHasBeenSet() const { return m_updateVersionHasBeenSet; }

    /**
     * <p>Specifies the Auto-Tune options latest version.</p>
     */
    inline void SetUpdateVersion(int value) { m_updateVersionHasBeenSet = true; m_updateVersion = value; }

    /**
     * <p>Specifies the Auto-Tune options latest version.</p>
     */
    inline AutoTuneStatus& WithUpdateVersion(int value) { SetUpdateVersion(value); return *this;}


    /**
     * <p>Specifies the <code>AutoTuneState</code> for the Elasticsearch domain.</p>
     */
    inline const AutoTuneState& GetState() const{ return m_state; }

    /**
     * <p>Specifies the <code>AutoTuneState</code> for the Elasticsearch domain.</p>
     */
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    /**
     * <p>Specifies the <code>AutoTuneState</code> for the Elasticsearch domain.</p>
     */
    inline void SetState(const AutoTuneState& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>Specifies the <code>AutoTuneState</code> for the Elasticsearch domain.</p>
     */
    inline void SetState(AutoTuneState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>Specifies the <code>AutoTuneState</code> for the Elasticsearch domain.</p>
     */
    inline AutoTuneStatus& WithState(const AutoTuneState& value) { SetState(value); return *this;}

    /**
     * <p>Specifies the <code>AutoTuneState</code> for the Elasticsearch domain.</p>
     */
    inline AutoTuneStatus& WithState(AutoTuneState&& value) { SetState(std::move(value)); return *this;}


    /**
     * <p>Specifies the error message while enabling or disabling the Auto-Tune
     * options.</p>
     */
    inline const Aws::String& GetErrorMessage() const{ return m_errorMessage; }

    /**
     * <p>Specifies the error message while enabling or disabling the Auto-Tune
     * options.</p>
     */
    inline bool ErrorMessageHasBeenSet() const { return m_errorMessageHasBeenSet; }

    /**
     * <p>Specifies the error message while enabling or disabling the Auto-Tune
     * options.</p>
     */
    inline void SetErrorMessage(const Aws::String& value) { m_errorMessageHasBeenSet = true; m_errorMessage = value; }

    /**
     * <p>Specifies the error message while enabling or disabling the Auto-Tune
     * options.</p>
     */
    inline void SetErrorMessage(Aws::String&& value) { m_errorMessageHasBeenSet = true; m_errorMessage = std::move(value); }

    /**
     * <p>Specifies the error message while enabling or disabling the Auto-Tune
     * options.</p>
     */
    inline void SetErrorMessage(const char* value) { m_errorMessageHasBeenSet = true; m_errorMessage.assign(value); }

    /**
     * <p>Specifies the error message while enabling or disabling the Auto-Tune
     * options.</p>
     */
    inline AutoTuneStatus& WithErrorMessage(const Aws::String& value) { SetErrorMessage(value); return *this;}

    /**
     * <p>Specifies the error message while enabling or disabling the Auto-Tune
     * options.</p>
     */
    inline AutoTuneStatus& WithErrorMessage(Aws::String&& value) { SetErrorMessage(std::move(value)); return *this;}

    /**
     * <p>Specifies the error message while enabling or disabling the Auto-Tune
     * options.</p>
     */
    inline AutoTuneStatus& WithErrorMessage(const char* value) { SetErrorMessage(value); return *this;}


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
    inline AutoTuneStatus& WithPendingDeletion(bool value) { SetPendingDeletion(value); return *this;}

  private:

    Aws::Utils::DateTime m_creationDate;
    bool m_creationDateHasBeenSet = false;

    Aws::Utils::DateTime m_updateDate;
    bool m_updateDateHasBeenSet = false;

    int m_updateVersion;
    bool m_updateVersionHasBeenSet = false;

    AutoTuneState m_state;
    bool m_stateHasBeenSet = false;

    Aws::String m_errorMessage;
    bool m_errorMessageHasBeenSet = false;

    bool m_pendingDeletion;
    bool m_pendingDeletionHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticsearchService
} // namespace Aws
