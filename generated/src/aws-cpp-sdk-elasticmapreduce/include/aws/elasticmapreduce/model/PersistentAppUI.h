/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticmapreduce/EMR_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <aws/elasticmapreduce/model/PersistentAppUIType.h>
#include <aws/elasticmapreduce/model/Tag.h>
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
namespace EMR
{
namespace Model
{

  /**
   * <p>Holds persistent application user interface information. Applications
   * installed on the Amazon EMR cluster publish user interfaces as web sites to
   * monitor cluster activity.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/PersistentAppUI">AWS
   * API Reference</a></p>
   */
  class PersistentAppUI
  {
  public:
    AWS_EMR_API PersistentAppUI() = default;
    AWS_EMR_API PersistentAppUI(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMR_API PersistentAppUI& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifier for the persistent application user interface object.</p>
     */
    inline const Aws::String& GetPersistentAppUIId() const { return m_persistentAppUIId; }
    inline bool PersistentAppUIIdHasBeenSet() const { return m_persistentAppUIIdHasBeenSet; }
    template<typename PersistentAppUIIdT = Aws::String>
    void SetPersistentAppUIId(PersistentAppUIIdT&& value) { m_persistentAppUIIdHasBeenSet = true; m_persistentAppUIId = std::forward<PersistentAppUIIdT>(value); }
    template<typename PersistentAppUIIdT = Aws::String>
    PersistentAppUI& WithPersistentAppUIId(PersistentAppUIIdT&& value) { SetPersistentAppUIId(std::forward<PersistentAppUIIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type list for the persistent application user interface object. Valid
     * values include SHS, YTS, or TEZ.</p>
     */
    inline const Aws::Vector<PersistentAppUIType>& GetPersistentAppUITypeList() const { return m_persistentAppUITypeList; }
    inline bool PersistentAppUITypeListHasBeenSet() const { return m_persistentAppUITypeListHasBeenSet; }
    template<typename PersistentAppUITypeListT = Aws::Vector<PersistentAppUIType>>
    void SetPersistentAppUITypeList(PersistentAppUITypeListT&& value) { m_persistentAppUITypeListHasBeenSet = true; m_persistentAppUITypeList = std::forward<PersistentAppUITypeListT>(value); }
    template<typename PersistentAppUITypeListT = Aws::Vector<PersistentAppUIType>>
    PersistentAppUI& WithPersistentAppUITypeList(PersistentAppUITypeListT&& value) { SetPersistentAppUITypeList(std::forward<PersistentAppUITypeListT>(value)); return *this;}
    inline PersistentAppUI& AddPersistentAppUITypeList(PersistentAppUIType value) { m_persistentAppUITypeListHasBeenSet = true; m_persistentAppUITypeList.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The status for the persistent application user interface object.</p>
     */
    inline const Aws::String& GetPersistentAppUIStatus() const { return m_persistentAppUIStatus; }
    inline bool PersistentAppUIStatusHasBeenSet() const { return m_persistentAppUIStatusHasBeenSet; }
    template<typename PersistentAppUIStatusT = Aws::String>
    void SetPersistentAppUIStatus(PersistentAppUIStatusT&& value) { m_persistentAppUIStatusHasBeenSet = true; m_persistentAppUIStatus = std::forward<PersistentAppUIStatusT>(value); }
    template<typename PersistentAppUIStatusT = Aws::String>
    PersistentAppUI& WithPersistentAppUIStatus(PersistentAppUIStatusT&& value) { SetPersistentAppUIStatus(std::forward<PersistentAppUIStatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The author ID for the persistent application user interface object.</p>
     */
    inline const Aws::String& GetAuthorId() const { return m_authorId; }
    inline bool AuthorIdHasBeenSet() const { return m_authorIdHasBeenSet; }
    template<typename AuthorIdT = Aws::String>
    void SetAuthorId(AuthorIdT&& value) { m_authorIdHasBeenSet = true; m_authorId = std::forward<AuthorIdT>(value); }
    template<typename AuthorIdT = Aws::String>
    PersistentAppUI& WithAuthorId(AuthorIdT&& value) { SetAuthorId(std::forward<AuthorIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The creation date and time for the persistent application user interface
     * object.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    PersistentAppUI& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time the persistent application user interface object was last
     * changed.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const { return m_lastModifiedTime; }
    inline bool LastModifiedTimeHasBeenSet() const { return m_lastModifiedTimeHasBeenSet; }
    template<typename LastModifiedTimeT = Aws::Utils::DateTime>
    void SetLastModifiedTime(LastModifiedTimeT&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::forward<LastModifiedTimeT>(value); }
    template<typename LastModifiedTimeT = Aws::Utils::DateTime>
    PersistentAppUI& WithLastModifiedTime(LastModifiedTimeT&& value) { SetLastModifiedTime(std::forward<LastModifiedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reason the persistent application user interface object was last
     * changed.</p>
     */
    inline const Aws::String& GetLastStateChangeReason() const { return m_lastStateChangeReason; }
    inline bool LastStateChangeReasonHasBeenSet() const { return m_lastStateChangeReasonHasBeenSet; }
    template<typename LastStateChangeReasonT = Aws::String>
    void SetLastStateChangeReason(LastStateChangeReasonT&& value) { m_lastStateChangeReasonHasBeenSet = true; m_lastStateChangeReason = std::forward<LastStateChangeReasonT>(value); }
    template<typename LastStateChangeReasonT = Aws::String>
    PersistentAppUI& WithLastStateChangeReason(LastStateChangeReasonT&& value) { SetLastStateChangeReason(std::forward<LastStateChangeReasonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A collection of tags for the persistent application user interface
     * object.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    PersistentAppUI& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    PersistentAppUI& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_persistentAppUIId;
    bool m_persistentAppUIIdHasBeenSet = false;

    Aws::Vector<PersistentAppUIType> m_persistentAppUITypeList;
    bool m_persistentAppUITypeListHasBeenSet = false;

    Aws::String m_persistentAppUIStatus;
    bool m_persistentAppUIStatusHasBeenSet = false;

    Aws::String m_authorId;
    bool m_authorIdHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedTime{};
    bool m_lastModifiedTimeHasBeenSet = false;

    Aws::String m_lastStateChangeReason;
    bool m_lastStateChangeReasonHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
