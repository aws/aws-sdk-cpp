/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudsearch/CloudSearch_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/DateTime.h>
#include <aws/cloudsearch/model/OptionState.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace CloudSearch
{
namespace Model
{

  /**
   * <p>The status of domain configuration option.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudsearch-2013-01-01/OptionStatus">AWS
   * API Reference</a></p>
   */
  class OptionStatus
  {
  public:
    AWS_CLOUDSEARCH_API OptionStatus() = default;
    AWS_CLOUDSEARCH_API OptionStatus(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDSEARCH_API OptionStatus& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDSEARCH_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_CLOUDSEARCH_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>A timestamp for when this option was created.</p>
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
     * <p>A timestamp for when this option was last updated.</p>
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
     * <p>A unique integer that indicates when this option was last updated.</p>
     */
    inline int GetUpdateVersion() const { return m_updateVersion; }
    inline bool UpdateVersionHasBeenSet() const { return m_updateVersionHasBeenSet; }
    inline void SetUpdateVersion(int value) { m_updateVersionHasBeenSet = true; m_updateVersion = value; }
    inline OptionStatus& WithUpdateVersion(int value) { SetUpdateVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of processing a change to an option. Possible values:</p><ul>
     * <li><code>RequiresIndexDocuments</code>: the option's latest value will not be
     * deployed until <a>IndexDocuments</a> has been called and indexing is
     * complete.</li> <li><code>Processing</code>: the option's latest value is in the
     * process of being activated. </li> <li><code>Active</code>: the option's latest
     * value is completely deployed.</li> <li><code>FailedToValidate</code>: the option
     * value is not compatible with the domain's data and cannot be used to index the
     * data. You must either modify the option value or update or remove the
     * incompatible documents.</li> </ul>
     */
    inline OptionState GetState() const { return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(OptionState value) { m_stateHasBeenSet = true; m_state = value; }
    inline OptionStatus& WithState(OptionState value) { SetState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates that the option will be deleted once processing is complete.</p>
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
} // namespace CloudSearch
} // namespace Aws
