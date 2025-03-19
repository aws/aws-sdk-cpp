/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class OptionStatus
  {
  public:
    AWS_ELASTICSEARCHSERVICE_API OptionStatus() = default;
    AWS_ELASTICSEARCHSERVICE_API OptionStatus(Aws::Utils::Json::JsonView jsonValue);
    AWS_ELASTICSEARCHSERVICE_API OptionStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ELASTICSEARCHSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Timestamp which tells the creation date for the entity.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDate() const { return m_creationDate; }
    inline bool CreationDateHasBeenSet() const { return m_creationDateHasBeenSet; }
    template<typename CreationDateT = Aws::Utils::DateTime>
    void SetCreationDate(CreationDateT&& value) { m_creationDateHasBeenSet = true; m_creationDate = std::forward<CreationDateT>(value); }
    template<typename CreationDateT = Aws::Utils::DateTime>
    OptionStatus& WithCreationDate(CreationDateT&& value) { SetCreationDate(std::forward<CreationDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Timestamp which tells the last updated time for the entity.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdateDate() const { return m_updateDate; }
    inline bool UpdateDateHasBeenSet() const { return m_updateDateHasBeenSet; }
    template<typename UpdateDateT = Aws::Utils::DateTime>
    void SetUpdateDate(UpdateDateT&& value) { m_updateDateHasBeenSet = true; m_updateDate = std::forward<UpdateDateT>(value); }
    template<typename UpdateDateT = Aws::Utils::DateTime>
    OptionStatus& WithUpdateDate(UpdateDateT&& value) { SetUpdateDate(std::forward<UpdateDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the latest version for the entity.</p>
     */
    inline int GetUpdateVersion() const { return m_updateVersion; }
    inline bool UpdateVersionHasBeenSet() const { return m_updateVersionHasBeenSet; }
    inline void SetUpdateVersion(int value) { m_updateVersionHasBeenSet = true; m_updateVersion = value; }
    inline OptionStatus& WithUpdateVersion(int value) { SetUpdateVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides the <code>OptionState</code> for the Elasticsearch domain.</p>
     */
    inline OptionState GetState() const { return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(OptionState value) { m_stateHasBeenSet = true; m_state = value; }
    inline OptionStatus& WithState(OptionState value) { SetState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the Elasticsearch domain is being deleted.</p>
     */
    inline bool GetPendingDeletion() const { return m_pendingDeletion; }
    inline bool PendingDeletionHasBeenSet() const { return m_pendingDeletionHasBeenSet; }
    inline void SetPendingDeletion(bool value) { m_pendingDeletionHasBeenSet = true; m_pendingDeletion = value; }
    inline OptionStatus& WithPendingDeletion(bool value) { SetPendingDeletion(value); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_creationDate{};
    bool m_creationDateHasBeenSet = false;

    Aws::Utils::DateTime m_updateDate{};
    bool m_updateDateHasBeenSet = false;

    int m_updateVersion{0};
    bool m_updateVersionHasBeenSet = false;

    OptionState m_state{OptionState::NOT_SET};
    bool m_stateHasBeenSet = false;

    bool m_pendingDeletion{false};
    bool m_pendingDeletionHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticsearchService
} // namespace Aws
