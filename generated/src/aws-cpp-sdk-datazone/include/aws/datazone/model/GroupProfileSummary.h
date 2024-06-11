/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/datazone/model/GroupProfileStatus.h>
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
namespace DataZone
{
namespace Model
{

  /**
   * <p>The details of a group profile.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/GroupProfileSummary">AWS
   * API Reference</a></p>
   */
  class GroupProfileSummary
  {
  public:
    AWS_DATAZONE_API GroupProfileSummary();
    AWS_DATAZONE_API GroupProfileSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API GroupProfileSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the Amazon DataZone domain of a group profile.</p>
     */
    inline const Aws::String& GetDomainId() const{ return m_domainId; }
    inline bool DomainIdHasBeenSet() const { return m_domainIdHasBeenSet; }
    inline void SetDomainId(const Aws::String& value) { m_domainIdHasBeenSet = true; m_domainId = value; }
    inline void SetDomainId(Aws::String&& value) { m_domainIdHasBeenSet = true; m_domainId = std::move(value); }
    inline void SetDomainId(const char* value) { m_domainIdHasBeenSet = true; m_domainId.assign(value); }
    inline GroupProfileSummary& WithDomainId(const Aws::String& value) { SetDomainId(value); return *this;}
    inline GroupProfileSummary& WithDomainId(Aws::String&& value) { SetDomainId(std::move(value)); return *this;}
    inline GroupProfileSummary& WithDomainId(const char* value) { SetDomainId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The group name of a group profile.</p>
     */
    inline const Aws::String& GetGroupName() const{ return m_groupName; }
    inline bool GroupNameHasBeenSet() const { return m_groupNameHasBeenSet; }
    inline void SetGroupName(const Aws::String& value) { m_groupNameHasBeenSet = true; m_groupName = value; }
    inline void SetGroupName(Aws::String&& value) { m_groupNameHasBeenSet = true; m_groupName = std::move(value); }
    inline void SetGroupName(const char* value) { m_groupNameHasBeenSet = true; m_groupName.assign(value); }
    inline GroupProfileSummary& WithGroupName(const Aws::String& value) { SetGroupName(value); return *this;}
    inline GroupProfileSummary& WithGroupName(Aws::String&& value) { SetGroupName(std::move(value)); return *this;}
    inline GroupProfileSummary& WithGroupName(const char* value) { SetGroupName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of a group profile.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline GroupProfileSummary& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline GroupProfileSummary& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline GroupProfileSummary& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of a group profile.</p>
     */
    inline const GroupProfileStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const GroupProfileStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(GroupProfileStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline GroupProfileSummary& WithStatus(const GroupProfileStatus& value) { SetStatus(value); return *this;}
    inline GroupProfileSummary& WithStatus(GroupProfileStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_domainId;
    bool m_domainIdHasBeenSet = false;

    Aws::String m_groupName;
    bool m_groupNameHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    GroupProfileStatus m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
