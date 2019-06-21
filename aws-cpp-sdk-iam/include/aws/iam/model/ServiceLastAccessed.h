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
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Contains details about the most recent attempt to access the service.</p>
   * <p>This data type is used as a response element in the
   * <a>GetServiceLastAccessedDetails</a> operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/ServiceLastAccessed">AWS
   * API Reference</a></p>
   */
  class AWS_IAM_API ServiceLastAccessed
  {
  public:
    ServiceLastAccessed();
    ServiceLastAccessed(const Aws::Utils::Xml::XmlNode& xmlNode);
    ServiceLastAccessed& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The name of the service in which access was attempted.</p>
     */
    inline const Aws::String& GetServiceName() const{ return m_serviceName; }

    /**
     * <p>The name of the service in which access was attempted.</p>
     */
    inline bool ServiceNameHasBeenSet() const { return m_serviceNameHasBeenSet; }

    /**
     * <p>The name of the service in which access was attempted.</p>
     */
    inline void SetServiceName(const Aws::String& value) { m_serviceNameHasBeenSet = true; m_serviceName = value; }

    /**
     * <p>The name of the service in which access was attempted.</p>
     */
    inline void SetServiceName(Aws::String&& value) { m_serviceNameHasBeenSet = true; m_serviceName = std::move(value); }

    /**
     * <p>The name of the service in which access was attempted.</p>
     */
    inline void SetServiceName(const char* value) { m_serviceNameHasBeenSet = true; m_serviceName.assign(value); }

    /**
     * <p>The name of the service in which access was attempted.</p>
     */
    inline ServiceLastAccessed& WithServiceName(const Aws::String& value) { SetServiceName(value); return *this;}

    /**
     * <p>The name of the service in which access was attempted.</p>
     */
    inline ServiceLastAccessed& WithServiceName(Aws::String&& value) { SetServiceName(std::move(value)); return *this;}

    /**
     * <p>The name of the service in which access was attempted.</p>
     */
    inline ServiceLastAccessed& WithServiceName(const char* value) { SetServiceName(value); return *this;}


    /**
     * <p>The date and time, in <a href="http://www.iso.org/iso/iso8601">ISO 8601
     * date-time format</a>, when an authenticated entity most recently attempted to
     * access the service. AWS does not report unauthenticated requests.</p> <p>This
     * field is null if no IAM entities attempted to access the service within the <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_policies_access-advisor.html#service-last-accessed-reporting-period">reporting
     * period</a>.</p>
     */
    inline const Aws::Utils::DateTime& GetLastAuthenticated() const{ return m_lastAuthenticated; }

    /**
     * <p>The date and time, in <a href="http://www.iso.org/iso/iso8601">ISO 8601
     * date-time format</a>, when an authenticated entity most recently attempted to
     * access the service. AWS does not report unauthenticated requests.</p> <p>This
     * field is null if no IAM entities attempted to access the service within the <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_policies_access-advisor.html#service-last-accessed-reporting-period">reporting
     * period</a>.</p>
     */
    inline bool LastAuthenticatedHasBeenSet() const { return m_lastAuthenticatedHasBeenSet; }

    /**
     * <p>The date and time, in <a href="http://www.iso.org/iso/iso8601">ISO 8601
     * date-time format</a>, when an authenticated entity most recently attempted to
     * access the service. AWS does not report unauthenticated requests.</p> <p>This
     * field is null if no IAM entities attempted to access the service within the <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_policies_access-advisor.html#service-last-accessed-reporting-period">reporting
     * period</a>.</p>
     */
    inline void SetLastAuthenticated(const Aws::Utils::DateTime& value) { m_lastAuthenticatedHasBeenSet = true; m_lastAuthenticated = value; }

    /**
     * <p>The date and time, in <a href="http://www.iso.org/iso/iso8601">ISO 8601
     * date-time format</a>, when an authenticated entity most recently attempted to
     * access the service. AWS does not report unauthenticated requests.</p> <p>This
     * field is null if no IAM entities attempted to access the service within the <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_policies_access-advisor.html#service-last-accessed-reporting-period">reporting
     * period</a>.</p>
     */
    inline void SetLastAuthenticated(Aws::Utils::DateTime&& value) { m_lastAuthenticatedHasBeenSet = true; m_lastAuthenticated = std::move(value); }

    /**
     * <p>The date and time, in <a href="http://www.iso.org/iso/iso8601">ISO 8601
     * date-time format</a>, when an authenticated entity most recently attempted to
     * access the service. AWS does not report unauthenticated requests.</p> <p>This
     * field is null if no IAM entities attempted to access the service within the <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_policies_access-advisor.html#service-last-accessed-reporting-period">reporting
     * period</a>.</p>
     */
    inline ServiceLastAccessed& WithLastAuthenticated(const Aws::Utils::DateTime& value) { SetLastAuthenticated(value); return *this;}

    /**
     * <p>The date and time, in <a href="http://www.iso.org/iso/iso8601">ISO 8601
     * date-time format</a>, when an authenticated entity most recently attempted to
     * access the service. AWS does not report unauthenticated requests.</p> <p>This
     * field is null if no IAM entities attempted to access the service within the <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_policies_access-advisor.html#service-last-accessed-reporting-period">reporting
     * period</a>.</p>
     */
    inline ServiceLastAccessed& WithLastAuthenticated(Aws::Utils::DateTime&& value) { SetLastAuthenticated(std::move(value)); return *this;}


    /**
     * <p>The namespace of the service in which access was attempted.</p> <p>To learn
     * the service namespace of a service, go to <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_policies_actions-resources-contextkeys.html">Actions,
     * Resources, and Condition Keys for AWS Services</a> in the <i>IAM User Guide</i>.
     * Choose the name of the service to view details for that service. In the first
     * paragraph, find the service prefix. For example, <code>(service prefix:
     * a4b)</code>. For more information about service namespaces, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html#genref-aws-service-namespaces">AWS
     * Service Namespaces</a> in the <i>AWS General Reference</i>.</p>
     */
    inline const Aws::String& GetServiceNamespace() const{ return m_serviceNamespace; }

    /**
     * <p>The namespace of the service in which access was attempted.</p> <p>To learn
     * the service namespace of a service, go to <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_policies_actions-resources-contextkeys.html">Actions,
     * Resources, and Condition Keys for AWS Services</a> in the <i>IAM User Guide</i>.
     * Choose the name of the service to view details for that service. In the first
     * paragraph, find the service prefix. For example, <code>(service prefix:
     * a4b)</code>. For more information about service namespaces, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html#genref-aws-service-namespaces">AWS
     * Service Namespaces</a> in the <i>AWS General Reference</i>.</p>
     */
    inline bool ServiceNamespaceHasBeenSet() const { return m_serviceNamespaceHasBeenSet; }

    /**
     * <p>The namespace of the service in which access was attempted.</p> <p>To learn
     * the service namespace of a service, go to <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_policies_actions-resources-contextkeys.html">Actions,
     * Resources, and Condition Keys for AWS Services</a> in the <i>IAM User Guide</i>.
     * Choose the name of the service to view details for that service. In the first
     * paragraph, find the service prefix. For example, <code>(service prefix:
     * a4b)</code>. For more information about service namespaces, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html#genref-aws-service-namespaces">AWS
     * Service Namespaces</a> in the <i>AWS General Reference</i>.</p>
     */
    inline void SetServiceNamespace(const Aws::String& value) { m_serviceNamespaceHasBeenSet = true; m_serviceNamespace = value; }

    /**
     * <p>The namespace of the service in which access was attempted.</p> <p>To learn
     * the service namespace of a service, go to <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_policies_actions-resources-contextkeys.html">Actions,
     * Resources, and Condition Keys for AWS Services</a> in the <i>IAM User Guide</i>.
     * Choose the name of the service to view details for that service. In the first
     * paragraph, find the service prefix. For example, <code>(service prefix:
     * a4b)</code>. For more information about service namespaces, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html#genref-aws-service-namespaces">AWS
     * Service Namespaces</a> in the <i>AWS General Reference</i>.</p>
     */
    inline void SetServiceNamespace(Aws::String&& value) { m_serviceNamespaceHasBeenSet = true; m_serviceNamespace = std::move(value); }

    /**
     * <p>The namespace of the service in which access was attempted.</p> <p>To learn
     * the service namespace of a service, go to <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_policies_actions-resources-contextkeys.html">Actions,
     * Resources, and Condition Keys for AWS Services</a> in the <i>IAM User Guide</i>.
     * Choose the name of the service to view details for that service. In the first
     * paragraph, find the service prefix. For example, <code>(service prefix:
     * a4b)</code>. For more information about service namespaces, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html#genref-aws-service-namespaces">AWS
     * Service Namespaces</a> in the <i>AWS General Reference</i>.</p>
     */
    inline void SetServiceNamespace(const char* value) { m_serviceNamespaceHasBeenSet = true; m_serviceNamespace.assign(value); }

    /**
     * <p>The namespace of the service in which access was attempted.</p> <p>To learn
     * the service namespace of a service, go to <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_policies_actions-resources-contextkeys.html">Actions,
     * Resources, and Condition Keys for AWS Services</a> in the <i>IAM User Guide</i>.
     * Choose the name of the service to view details for that service. In the first
     * paragraph, find the service prefix. For example, <code>(service prefix:
     * a4b)</code>. For more information about service namespaces, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html#genref-aws-service-namespaces">AWS
     * Service Namespaces</a> in the <i>AWS General Reference</i>.</p>
     */
    inline ServiceLastAccessed& WithServiceNamespace(const Aws::String& value) { SetServiceNamespace(value); return *this;}

    /**
     * <p>The namespace of the service in which access was attempted.</p> <p>To learn
     * the service namespace of a service, go to <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_policies_actions-resources-contextkeys.html">Actions,
     * Resources, and Condition Keys for AWS Services</a> in the <i>IAM User Guide</i>.
     * Choose the name of the service to view details for that service. In the first
     * paragraph, find the service prefix. For example, <code>(service prefix:
     * a4b)</code>. For more information about service namespaces, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html#genref-aws-service-namespaces">AWS
     * Service Namespaces</a> in the <i>AWS General Reference</i>.</p>
     */
    inline ServiceLastAccessed& WithServiceNamespace(Aws::String&& value) { SetServiceNamespace(std::move(value)); return *this;}

    /**
     * <p>The namespace of the service in which access was attempted.</p> <p>To learn
     * the service namespace of a service, go to <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_policies_actions-resources-contextkeys.html">Actions,
     * Resources, and Condition Keys for AWS Services</a> in the <i>IAM User Guide</i>.
     * Choose the name of the service to view details for that service. In the first
     * paragraph, find the service prefix. For example, <code>(service prefix:
     * a4b)</code>. For more information about service namespaces, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html#genref-aws-service-namespaces">AWS
     * Service Namespaces</a> in the <i>AWS General Reference</i>.</p>
     */
    inline ServiceLastAccessed& WithServiceNamespace(const char* value) { SetServiceNamespace(value); return *this;}


    /**
     * <p>The ARN of the authenticated entity (user or role) that last attempted to
     * access the service. AWS does not report unauthenticated requests.</p> <p>This
     * field is null if no IAM entities attempted to access the service within the <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_policies_access-advisor.html#service-last-accessed-reporting-period">reporting
     * period</a>.</p>
     */
    inline const Aws::String& GetLastAuthenticatedEntity() const{ return m_lastAuthenticatedEntity; }

    /**
     * <p>The ARN of the authenticated entity (user or role) that last attempted to
     * access the service. AWS does not report unauthenticated requests.</p> <p>This
     * field is null if no IAM entities attempted to access the service within the <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_policies_access-advisor.html#service-last-accessed-reporting-period">reporting
     * period</a>.</p>
     */
    inline bool LastAuthenticatedEntityHasBeenSet() const { return m_lastAuthenticatedEntityHasBeenSet; }

    /**
     * <p>The ARN of the authenticated entity (user or role) that last attempted to
     * access the service. AWS does not report unauthenticated requests.</p> <p>This
     * field is null if no IAM entities attempted to access the service within the <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_policies_access-advisor.html#service-last-accessed-reporting-period">reporting
     * period</a>.</p>
     */
    inline void SetLastAuthenticatedEntity(const Aws::String& value) { m_lastAuthenticatedEntityHasBeenSet = true; m_lastAuthenticatedEntity = value; }

    /**
     * <p>The ARN of the authenticated entity (user or role) that last attempted to
     * access the service. AWS does not report unauthenticated requests.</p> <p>This
     * field is null if no IAM entities attempted to access the service within the <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_policies_access-advisor.html#service-last-accessed-reporting-period">reporting
     * period</a>.</p>
     */
    inline void SetLastAuthenticatedEntity(Aws::String&& value) { m_lastAuthenticatedEntityHasBeenSet = true; m_lastAuthenticatedEntity = std::move(value); }

    /**
     * <p>The ARN of the authenticated entity (user or role) that last attempted to
     * access the service. AWS does not report unauthenticated requests.</p> <p>This
     * field is null if no IAM entities attempted to access the service within the <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_policies_access-advisor.html#service-last-accessed-reporting-period">reporting
     * period</a>.</p>
     */
    inline void SetLastAuthenticatedEntity(const char* value) { m_lastAuthenticatedEntityHasBeenSet = true; m_lastAuthenticatedEntity.assign(value); }

    /**
     * <p>The ARN of the authenticated entity (user or role) that last attempted to
     * access the service. AWS does not report unauthenticated requests.</p> <p>This
     * field is null if no IAM entities attempted to access the service within the <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_policies_access-advisor.html#service-last-accessed-reporting-period">reporting
     * period</a>.</p>
     */
    inline ServiceLastAccessed& WithLastAuthenticatedEntity(const Aws::String& value) { SetLastAuthenticatedEntity(value); return *this;}

    /**
     * <p>The ARN of the authenticated entity (user or role) that last attempted to
     * access the service. AWS does not report unauthenticated requests.</p> <p>This
     * field is null if no IAM entities attempted to access the service within the <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_policies_access-advisor.html#service-last-accessed-reporting-period">reporting
     * period</a>.</p>
     */
    inline ServiceLastAccessed& WithLastAuthenticatedEntity(Aws::String&& value) { SetLastAuthenticatedEntity(std::move(value)); return *this;}

    /**
     * <p>The ARN of the authenticated entity (user or role) that last attempted to
     * access the service. AWS does not report unauthenticated requests.</p> <p>This
     * field is null if no IAM entities attempted to access the service within the <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_policies_access-advisor.html#service-last-accessed-reporting-period">reporting
     * period</a>.</p>
     */
    inline ServiceLastAccessed& WithLastAuthenticatedEntity(const char* value) { SetLastAuthenticatedEntity(value); return *this;}


    /**
     * <p>The total number of authenticated principals (root user, IAM users, or IAM
     * roles) that have attempted to access the service.</p> <p>This field is null if
     * no principals attempted to access the service within the <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_policies_access-advisor.html#service-last-accessed-reporting-period">reporting
     * period</a>.</p>
     */
    inline int GetTotalAuthenticatedEntities() const{ return m_totalAuthenticatedEntities; }

    /**
     * <p>The total number of authenticated principals (root user, IAM users, or IAM
     * roles) that have attempted to access the service.</p> <p>This field is null if
     * no principals attempted to access the service within the <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_policies_access-advisor.html#service-last-accessed-reporting-period">reporting
     * period</a>.</p>
     */
    inline bool TotalAuthenticatedEntitiesHasBeenSet() const { return m_totalAuthenticatedEntitiesHasBeenSet; }

    /**
     * <p>The total number of authenticated principals (root user, IAM users, or IAM
     * roles) that have attempted to access the service.</p> <p>This field is null if
     * no principals attempted to access the service within the <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_policies_access-advisor.html#service-last-accessed-reporting-period">reporting
     * period</a>.</p>
     */
    inline void SetTotalAuthenticatedEntities(int value) { m_totalAuthenticatedEntitiesHasBeenSet = true; m_totalAuthenticatedEntities = value; }

    /**
     * <p>The total number of authenticated principals (root user, IAM users, or IAM
     * roles) that have attempted to access the service.</p> <p>This field is null if
     * no principals attempted to access the service within the <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_policies_access-advisor.html#service-last-accessed-reporting-period">reporting
     * period</a>.</p>
     */
    inline ServiceLastAccessed& WithTotalAuthenticatedEntities(int value) { SetTotalAuthenticatedEntities(value); return *this;}

  private:

    Aws::String m_serviceName;
    bool m_serviceNameHasBeenSet;

    Aws::Utils::DateTime m_lastAuthenticated;
    bool m_lastAuthenticatedHasBeenSet;

    Aws::String m_serviceNamespace;
    bool m_serviceNamespaceHasBeenSet;

    Aws::String m_lastAuthenticatedEntity;
    bool m_lastAuthenticatedEntityHasBeenSet;

    int m_totalAuthenticatedEntities;
    bool m_totalAuthenticatedEntitiesHasBeenSet;
  };

} // namespace Model
} // namespace IAM
} // namespace Aws
