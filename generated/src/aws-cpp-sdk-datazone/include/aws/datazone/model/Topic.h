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
    AWS_DATAZONE_API Topic();
    AWS_DATAZONE_API Topic(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Topic& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const NotificationResource& GetResource() const{ return m_resource; }

    
    inline bool ResourceHasBeenSet() const { return m_resourceHasBeenSet; }

    
    inline void SetResource(const NotificationResource& value) { m_resourceHasBeenSet = true; m_resource = value; }

    
    inline void SetResource(NotificationResource&& value) { m_resourceHasBeenSet = true; m_resource = std::move(value); }

    
    inline Topic& WithResource(const NotificationResource& value) { SetResource(value); return *this;}

    
    inline Topic& WithResource(NotificationResource&& value) { SetResource(std::move(value)); return *this;}


    /**
     * <p>The role of the resource mentioned in a notification.</p>
     */
    inline const NotificationRole& GetRole() const{ return m_role; }

    /**
     * <p>The role of the resource mentioned in a notification.</p>
     */
    inline bool RoleHasBeenSet() const { return m_roleHasBeenSet; }

    /**
     * <p>The role of the resource mentioned in a notification.</p>
     */
    inline void SetRole(const NotificationRole& value) { m_roleHasBeenSet = true; m_role = value; }

    /**
     * <p>The role of the resource mentioned in a notification.</p>
     */
    inline void SetRole(NotificationRole&& value) { m_roleHasBeenSet = true; m_role = std::move(value); }

    /**
     * <p>The role of the resource mentioned in a notification.</p>
     */
    inline Topic& WithRole(const NotificationRole& value) { SetRole(value); return *this;}

    /**
     * <p>The role of the resource mentioned in a notification.</p>
     */
    inline Topic& WithRole(NotificationRole&& value) { SetRole(std::move(value)); return *this;}


    /**
     * <p>The subject of the resource mentioned in a notification.</p>
     */
    inline const Aws::String& GetSubject() const{ return m_subject; }

    /**
     * <p>The subject of the resource mentioned in a notification.</p>
     */
    inline bool SubjectHasBeenSet() const { return m_subjectHasBeenSet; }

    /**
     * <p>The subject of the resource mentioned in a notification.</p>
     */
    inline void SetSubject(const Aws::String& value) { m_subjectHasBeenSet = true; m_subject = value; }

    /**
     * <p>The subject of the resource mentioned in a notification.</p>
     */
    inline void SetSubject(Aws::String&& value) { m_subjectHasBeenSet = true; m_subject = std::move(value); }

    /**
     * <p>The subject of the resource mentioned in a notification.</p>
     */
    inline void SetSubject(const char* value) { m_subjectHasBeenSet = true; m_subject.assign(value); }

    /**
     * <p>The subject of the resource mentioned in a notification.</p>
     */
    inline Topic& WithSubject(const Aws::String& value) { SetSubject(value); return *this;}

    /**
     * <p>The subject of the resource mentioned in a notification.</p>
     */
    inline Topic& WithSubject(Aws::String&& value) { SetSubject(std::move(value)); return *this;}

    /**
     * <p>The subject of the resource mentioned in a notification.</p>
     */
    inline Topic& WithSubject(const char* value) { SetSubject(value); return *this;}

  private:

    NotificationResource m_resource;
    bool m_resourceHasBeenSet = false;

    NotificationRole m_role;
    bool m_roleHasBeenSet = false;

    Aws::String m_subject;
    bool m_subjectHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
