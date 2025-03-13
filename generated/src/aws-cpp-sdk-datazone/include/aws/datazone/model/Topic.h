/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/datazone/model/NotificationResource.h>
#include <aws/datazone/model/NotificationRole.h>
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
namespace DataZone
{
namespace Model
{

  /**
   * <p>The topic of the notification.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/Topic">AWS API
   * Reference</a></p>
   */
  class Topic
  {
  public:
    AWS_DATAZONE_API Topic() = default;
    AWS_DATAZONE_API Topic(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Topic& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const NotificationResource& GetResource() const { return m_resource; }
    inline bool ResourceHasBeenSet() const { return m_resourceHasBeenSet; }
    template<typename ResourceT = NotificationResource>
    void SetResource(ResourceT&& value) { m_resourceHasBeenSet = true; m_resource = std::forward<ResourceT>(value); }
    template<typename ResourceT = NotificationResource>
    Topic& WithResource(ResourceT&& value) { SetResource(std::forward<ResourceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The role of the resource mentioned in a notification.</p>
     */
    inline NotificationRole GetRole() const { return m_role; }
    inline bool RoleHasBeenSet() const { return m_roleHasBeenSet; }
    inline void SetRole(NotificationRole value) { m_roleHasBeenSet = true; m_role = value; }
    inline Topic& WithRole(NotificationRole value) { SetRole(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The subject of the resource mentioned in a notification.</p>
     */
    inline const Aws::String& GetSubject() const { return m_subject; }
    inline bool SubjectHasBeenSet() const { return m_subjectHasBeenSet; }
    template<typename SubjectT = Aws::String>
    void SetSubject(SubjectT&& value) { m_subjectHasBeenSet = true; m_subject = std::forward<SubjectT>(value); }
    template<typename SubjectT = Aws::String>
    Topic& WithSubject(SubjectT&& value) { SetSubject(std::forward<SubjectT>(value)); return *this;}
    ///@}
  private:

    NotificationResource m_resource;
    bool m_resourceHasBeenSet = false;

    NotificationRole m_role{NotificationRole::NOT_SET};
    bool m_roleHasBeenSet = false;

    Aws::String m_subject;
    bool m_subjectHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
