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
  class AWS_CLOUDSEARCH_API OptionStatus
  {
  public:
    OptionStatus();
    OptionStatus(const Aws::Utils::Xml::XmlNode& xmlNode);
    OptionStatus& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>A timestamp for when this option was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDate() const{ return m_creationDate; }

    /**
     * <p>A timestamp for when this option was created.</p>
     */
    inline bool CreationDateHasBeenSet() const { return m_creationDateHasBeenSet; }

    /**
     * <p>A timestamp for when this option was created.</p>
     */
    inline void SetCreationDate(const Aws::Utils::DateTime& value) { m_creationDateHasBeenSet = true; m_creationDate = value; }

    /**
     * <p>A timestamp for when this option was created.</p>
     */
    inline void SetCreationDate(Aws::Utils::DateTime&& value) { m_creationDateHasBeenSet = true; m_creationDate = std::move(value); }

    /**
     * <p>A timestamp for when this option was created.</p>
     */
    inline OptionStatus& WithCreationDate(const Aws::Utils::DateTime& value) { SetCreationDate(value); return *this;}

    /**
     * <p>A timestamp for when this option was created.</p>
     */
    inline OptionStatus& WithCreationDate(Aws::Utils::DateTime&& value) { SetCreationDate(std::move(value)); return *this;}


    /**
     * <p>A timestamp for when this option was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdateDate() const{ return m_updateDate; }

    /**
     * <p>A timestamp for when this option was last updated.</p>
     */
    inline bool UpdateDateHasBeenSet() const { return m_updateDateHasBeenSet; }

    /**
     * <p>A timestamp for when this option was last updated.</p>
     */
    inline void SetUpdateDate(const Aws::Utils::DateTime& value) { m_updateDateHasBeenSet = true; m_updateDate = value; }

    /**
     * <p>A timestamp for when this option was last updated.</p>
     */
    inline void SetUpdateDate(Aws::Utils::DateTime&& value) { m_updateDateHasBeenSet = true; m_updateDate = std::move(value); }

    /**
     * <p>A timestamp for when this option was last updated.</p>
     */
    inline OptionStatus& WithUpdateDate(const Aws::Utils::DateTime& value) { SetUpdateDate(value); return *this;}

    /**
     * <p>A timestamp for when this option was last updated.</p>
     */
    inline OptionStatus& WithUpdateDate(Aws::Utils::DateTime&& value) { SetUpdateDate(std::move(value)); return *this;}


    /**
     * <p>A unique integer that indicates when this option was last updated.</p>
     */
    inline int GetUpdateVersion() const{ return m_updateVersion; }

    /**
     * <p>A unique integer that indicates when this option was last updated.</p>
     */
    inline bool UpdateVersionHasBeenSet() const { return m_updateVersionHasBeenSet; }

    /**
     * <p>A unique integer that indicates when this option was last updated.</p>
     */
    inline void SetUpdateVersion(int value) { m_updateVersionHasBeenSet = true; m_updateVersion = value; }

    /**
     * <p>A unique integer that indicates when this option was last updated.</p>
     */
    inline OptionStatus& WithUpdateVersion(int value) { SetUpdateVersion(value); return *this;}


    /**
     * <p>The state of processing a change to an option. Possible values:</p> <ul> <li>
     * <code>RequiresIndexDocuments</code>: the option's latest value will not be
     * deployed until <a>IndexDocuments</a> has been called and indexing is
     * complete.</li> <li> <code>Processing</code>: the option's latest value is in the
     * process of being activated. </li> <li> <code>Active</code>: the option's latest
     * value is completely deployed.</li> <li> <code>FailedToValidate</code>: the
     * option value is not compatible with the domain's data and cannot be used to
     * index the data. You must either modify the option value or update or remove the
     * incompatible documents.</li> </ul>
     */
    inline const OptionState& GetState() const{ return m_state; }

    /**
     * <p>The state of processing a change to an option. Possible values:</p> <ul> <li>
     * <code>RequiresIndexDocuments</code>: the option's latest value will not be
     * deployed until <a>IndexDocuments</a> has been called and indexing is
     * complete.</li> <li> <code>Processing</code>: the option's latest value is in the
     * process of being activated. </li> <li> <code>Active</code>: the option's latest
     * value is completely deployed.</li> <li> <code>FailedToValidate</code>: the
     * option value is not compatible with the domain's data and cannot be used to
     * index the data. You must either modify the option value or update or remove the
     * incompatible documents.</li> </ul>
     */
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    /**
     * <p>The state of processing a change to an option. Possible values:</p> <ul> <li>
     * <code>RequiresIndexDocuments</code>: the option's latest value will not be
     * deployed until <a>IndexDocuments</a> has been called and indexing is
     * complete.</li> <li> <code>Processing</code>: the option's latest value is in the
     * process of being activated. </li> <li> <code>Active</code>: the option's latest
     * value is completely deployed.</li> <li> <code>FailedToValidate</code>: the
     * option value is not compatible with the domain's data and cannot be used to
     * index the data. You must either modify the option value or update or remove the
     * incompatible documents.</li> </ul>
     */
    inline void SetState(const OptionState& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>The state of processing a change to an option. Possible values:</p> <ul> <li>
     * <code>RequiresIndexDocuments</code>: the option's latest value will not be
     * deployed until <a>IndexDocuments</a> has been called and indexing is
     * complete.</li> <li> <code>Processing</code>: the option's latest value is in the
     * process of being activated. </li> <li> <code>Active</code>: the option's latest
     * value is completely deployed.</li> <li> <code>FailedToValidate</code>: the
     * option value is not compatible with the domain's data and cannot be used to
     * index the data. You must either modify the option value or update or remove the
     * incompatible documents.</li> </ul>
     */
    inline void SetState(OptionState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>The state of processing a change to an option. Possible values:</p> <ul> <li>
     * <code>RequiresIndexDocuments</code>: the option's latest value will not be
     * deployed until <a>IndexDocuments</a> has been called and indexing is
     * complete.</li> <li> <code>Processing</code>: the option's latest value is in the
     * process of being activated. </li> <li> <code>Active</code>: the option's latest
     * value is completely deployed.</li> <li> <code>FailedToValidate</code>: the
     * option value is not compatible with the domain's data and cannot be used to
     * index the data. You must either modify the option value or update or remove the
     * incompatible documents.</li> </ul>
     */
    inline OptionStatus& WithState(const OptionState& value) { SetState(value); return *this;}

    /**
     * <p>The state of processing a change to an option. Possible values:</p> <ul> <li>
     * <code>RequiresIndexDocuments</code>: the option's latest value will not be
     * deployed until <a>IndexDocuments</a> has been called and indexing is
     * complete.</li> <li> <code>Processing</code>: the option's latest value is in the
     * process of being activated. </li> <li> <code>Active</code>: the option's latest
     * value is completely deployed.</li> <li> <code>FailedToValidate</code>: the
     * option value is not compatible with the domain's data and cannot be used to
     * index the data. You must either modify the option value or update or remove the
     * incompatible documents.</li> </ul>
     */
    inline OptionStatus& WithState(OptionState&& value) { SetState(std::move(value)); return *this;}


    /**
     * <p>Indicates that the option will be deleted once processing is complete.</p>
     */
    inline bool GetPendingDeletion() const{ return m_pendingDeletion; }

    /**
     * <p>Indicates that the option will be deleted once processing is complete.</p>
     */
    inline bool PendingDeletionHasBeenSet() const { return m_pendingDeletionHasBeenSet; }

    /**
     * <p>Indicates that the option will be deleted once processing is complete.</p>
     */
    inline void SetPendingDeletion(bool value) { m_pendingDeletionHasBeenSet = true; m_pendingDeletion = value; }

    /**
     * <p>Indicates that the option will be deleted once processing is complete.</p>
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
} // namespace CloudSearch
} // namespace Aws
