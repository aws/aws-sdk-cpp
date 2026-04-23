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
#include <aws/iam/IAM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/iam/model/EntityInfo.h>
#include <aws/core/utils/DateTime.h>
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
namespace IAM
{
namespace Model
{

  /**
   * <p>An object that contains details about when the IAM entities (users or roles)
   * were last used in an attempt to access the specified AWS service.</p> <p>This
   * data type is a response element in the
   * <a>GetServiceLastAccessedDetailsWithEntities</a> operation.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/EntityDetails">AWS
   * API Reference</a></p>
   */
  class AWS_IAM_API EntityDetails
  {
  public:
    EntityDetails();
    EntityDetails(const Aws::Utils::Xml::XmlNode& xmlNode);
    EntityDetails& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The <code>EntityInfo</code> object that contains details about the entity
     * (user or role).</p>
     */
    inline const EntityInfo& GetEntityInfo() const{ return m_entityInfo; }

    /**
     * <p>The <code>EntityInfo</code> object that contains details about the entity
     * (user or role).</p>
     */
    inline bool EntityInfoHasBeenSet() const { return m_entityInfoHasBeenSet; }

    /**
     * <p>The <code>EntityInfo</code> object that contains details about the entity
     * (user or role).</p>
     */
    inline void SetEntityInfo(const EntityInfo& value) { m_entityInfoHasBeenSet = true; m_entityInfo = value; }

    /**
     * <p>The <code>EntityInfo</code> object that contains details about the entity
     * (user or role).</p>
     */
    inline void SetEntityInfo(EntityInfo&& value) { m_entityInfoHasBeenSet = true; m_entityInfo = std::move(value); }

    /**
     * <p>The <code>EntityInfo</code> object that contains details about the entity
     * (user or role).</p>
     */
    inline EntityDetails& WithEntityInfo(const EntityInfo& value) { SetEntityInfo(value); return *this;}

    /**
     * <p>The <code>EntityInfo</code> object that contains details about the entity
     * (user or role).</p>
     */
    inline EntityDetails& WithEntityInfo(EntityInfo&& value) { SetEntityInfo(std::move(value)); return *this;}


    /**
     * <p>The date and time, in <a href="http://www.iso.org/iso/iso8601">ISO 8601
     * date-time format</a>, when the authenticated entity last attempted to access
     * AWS. AWS does not report unauthenticated requests.</p> <p>This field is null if
     * no IAM entities attempted to access the service within the <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_policies_access-advisor.html#service-last-accessed-reporting-period">reporting
     * period</a>.</p>
     */
    inline const Aws::Utils::DateTime& GetLastAuthenticated() const{ return m_lastAuthenticated; }

    /**
     * <p>The date and time, in <a href="http://www.iso.org/iso/iso8601">ISO 8601
     * date-time format</a>, when the authenticated entity last attempted to access
     * AWS. AWS does not report unauthenticated requests.</p> <p>This field is null if
     * no IAM entities attempted to access the service within the <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_policies_access-advisor.html#service-last-accessed-reporting-period">reporting
     * period</a>.</p>
     */
    inline bool LastAuthenticatedHasBeenSet() const { return m_lastAuthenticatedHasBeenSet; }

    /**
     * <p>The date and time, in <a href="http://www.iso.org/iso/iso8601">ISO 8601
     * date-time format</a>, when the authenticated entity last attempted to access
     * AWS. AWS does not report unauthenticated requests.</p> <p>This field is null if
     * no IAM entities attempted to access the service within the <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_policies_access-advisor.html#service-last-accessed-reporting-period">reporting
     * period</a>.</p>
     */
    inline void SetLastAuthenticated(const Aws::Utils::DateTime& value) { m_lastAuthenticatedHasBeenSet = true; m_lastAuthenticated = value; }

    /**
     * <p>The date and time, in <a href="http://www.iso.org/iso/iso8601">ISO 8601
     * date-time format</a>, when the authenticated entity last attempted to access
     * AWS. AWS does not report unauthenticated requests.</p> <p>This field is null if
     * no IAM entities attempted to access the service within the <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_policies_access-advisor.html#service-last-accessed-reporting-period">reporting
     * period</a>.</p>
     */
    inline void SetLastAuthenticated(Aws::Utils::DateTime&& value) { m_lastAuthenticatedHasBeenSet = true; m_lastAuthenticated = std::move(value); }

    /**
     * <p>The date and time, in <a href="http://www.iso.org/iso/iso8601">ISO 8601
     * date-time format</a>, when the authenticated entity last attempted to access
     * AWS. AWS does not report unauthenticated requests.</p> <p>This field is null if
     * no IAM entities attempted to access the service within the <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_policies_access-advisor.html#service-last-accessed-reporting-period">reporting
     * period</a>.</p>
     */
    inline EntityDetails& WithLastAuthenticated(const Aws::Utils::DateTime& value) { SetLastAuthenticated(value); return *this;}

    /**
     * <p>The date and time, in <a href="http://www.iso.org/iso/iso8601">ISO 8601
     * date-time format</a>, when the authenticated entity last attempted to access
     * AWS. AWS does not report unauthenticated requests.</p> <p>This field is null if
     * no IAM entities attempted to access the service within the <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_policies_access-advisor.html#service-last-accessed-reporting-period">reporting
     * period</a>.</p>
     */
    inline EntityDetails& WithLastAuthenticated(Aws::Utils::DateTime&& value) { SetLastAuthenticated(std::move(value)); return *this;}

  private:

    EntityInfo m_entityInfo;
    bool m_entityInfoHasBeenSet;

    Aws::Utils::DateTime m_lastAuthenticated;
    bool m_lastAuthenticatedHasBeenSet;
  };

} // namespace Model
} // namespace IAM
} // namespace Aws
