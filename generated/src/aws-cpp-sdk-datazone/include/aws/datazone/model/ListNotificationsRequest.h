/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/datazone/DataZoneRequest.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/datazone/model/TaskStatus.h>
#include <aws/datazone/model/NotificationType.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace DataZone
{
namespace Model
{

  /**
   */
  class ListNotificationsRequest : public DataZoneRequest
  {
  public:
    AWS_DATAZONE_API ListNotificationsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListNotifications"; }

    AWS_DATAZONE_API Aws::String SerializePayload() const override;

    AWS_DATAZONE_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The time after which you want to list notifications.</p>
     */
    inline const Aws::Utils::DateTime& GetAfterTimestamp() const { return m_afterTimestamp; }
    inline bool AfterTimestampHasBeenSet() const { return m_afterTimestampHasBeenSet; }
    template<typename AfterTimestampT = Aws::Utils::DateTime>
    void SetAfterTimestamp(AfterTimestampT&& value) { m_afterTimestampHasBeenSet = true; m_afterTimestamp = std::forward<AfterTimestampT>(value); }
    template<typename AfterTimestampT = Aws::Utils::DateTime>
    ListNotificationsRequest& WithAfterTimestamp(AfterTimestampT&& value) { SetAfterTimestamp(std::forward<AfterTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time before which you want to list notifications.</p>
     */
    inline const Aws::Utils::DateTime& GetBeforeTimestamp() const { return m_beforeTimestamp; }
    inline bool BeforeTimestampHasBeenSet() const { return m_beforeTimestampHasBeenSet; }
    template<typename BeforeTimestampT = Aws::Utils::DateTime>
    void SetBeforeTimestamp(BeforeTimestampT&& value) { m_beforeTimestampHasBeenSet = true; m_beforeTimestamp = std::forward<BeforeTimestampT>(value); }
    template<typename BeforeTimestampT = Aws::Utils::DateTime>
    ListNotificationsRequest& WithBeforeTimestamp(BeforeTimestampT&& value) { SetBeforeTimestamp(std::forward<BeforeTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the Amazon DataZone domain.</p>
     */
    inline const Aws::String& GetDomainIdentifier() const { return m_domainIdentifier; }
    inline bool DomainIdentifierHasBeenSet() const { return m_domainIdentifierHasBeenSet; }
    template<typename DomainIdentifierT = Aws::String>
    void SetDomainIdentifier(DomainIdentifierT&& value) { m_domainIdentifierHasBeenSet = true; m_domainIdentifier = std::forward<DomainIdentifierT>(value); }
    template<typename DomainIdentifierT = Aws::String>
    ListNotificationsRequest& WithDomainIdentifier(DomainIdentifierT&& value) { SetDomainIdentifier(std::forward<DomainIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of notifications to return in a single call to
     * <code>ListNotifications</code>. When the number of notifications to be listed is
     * greater than the value of <code>MaxResults</code>, the response contains a
     * <code>NextToken</code> value that you can use in a subsequent call to
     * <code>ListNotifications</code> to list the next set of notifications.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListNotificationsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>When the number of notifications is greater than the default value for the
     * <code>MaxResults</code> parameter, or if you explicitly specify a value for
     * <code>MaxResults</code> that is less than the number of notifications, the
     * response includes a pagination token named <code>NextToken</code>. You can
     * specify this <code>NextToken</code> value in a subsequent call to
     * <code>ListNotifications</code> to list the next set of notifications.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListNotificationsRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The subjects of notifications.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSubjects() const { return m_subjects; }
    inline bool SubjectsHasBeenSet() const { return m_subjectsHasBeenSet; }
    template<typename SubjectsT = Aws::Vector<Aws::String>>
    void SetSubjects(SubjectsT&& value) { m_subjectsHasBeenSet = true; m_subjects = std::forward<SubjectsT>(value); }
    template<typename SubjectsT = Aws::Vector<Aws::String>>
    ListNotificationsRequest& WithSubjects(SubjectsT&& value) { SetSubjects(std::forward<SubjectsT>(value)); return *this;}
    template<typename SubjectsT = Aws::String>
    ListNotificationsRequest& AddSubjects(SubjectsT&& value) { m_subjectsHasBeenSet = true; m_subjects.emplace_back(std::forward<SubjectsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The task status of notifications.</p>
     */
    inline TaskStatus GetTaskStatus() const { return m_taskStatus; }
    inline bool TaskStatusHasBeenSet() const { return m_taskStatusHasBeenSet; }
    inline void SetTaskStatus(TaskStatus value) { m_taskStatusHasBeenSet = true; m_taskStatus = value; }
    inline ListNotificationsRequest& WithTaskStatus(TaskStatus value) { SetTaskStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of notifications.</p>
     */
    inline NotificationType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(NotificationType value) { m_typeHasBeenSet = true; m_type = value; }
    inline ListNotificationsRequest& WithType(NotificationType value) { SetType(value); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_afterTimestamp{};
    bool m_afterTimestampHasBeenSet = false;

    Aws::Utils::DateTime m_beforeTimestamp{};
    bool m_beforeTimestampHasBeenSet = false;

    Aws::String m_domainIdentifier;
    bool m_domainIdentifierHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<Aws::String> m_subjects;
    bool m_subjectsHasBeenSet = false;

    TaskStatus m_taskStatus{TaskStatus::NOT_SET};
    bool m_taskStatusHasBeenSet = false;

    NotificationType m_type{NotificationType::NOT_SET};
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
