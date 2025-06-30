/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iam/IAM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iam/model/TrackedActionLastAccessed.h>
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
   * <p>This data type is used as a response element in the <a
   * href="https://docs.aws.amazon.com/IAM/latest/APIReference/API_GetServiceLastAccessedDetails.html">GetServiceLastAccessedDetails</a>
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/ServiceLastAccessed">AWS
   * API Reference</a></p>
   */
  class ServiceLastAccessed
  {
  public:
    AWS_IAM_API ServiceLastAccessed() = default;
    AWS_IAM_API ServiceLastAccessed(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_IAM_API ServiceLastAccessed& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_IAM_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_IAM_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The name of the service in which access was attempted.</p>
     */
    inline const Aws::String& GetServiceName() const { return m_serviceName; }
    inline bool ServiceNameHasBeenSet() const { return m_serviceNameHasBeenSet; }
    template<typename ServiceNameT = Aws::String>
    void SetServiceName(ServiceNameT&& value) { m_serviceNameHasBeenSet = true; m_serviceName = std::forward<ServiceNameT>(value); }
    template<typename ServiceNameT = Aws::String>
    ServiceLastAccessed& WithServiceName(ServiceNameT&& value) { SetServiceName(std::forward<ServiceNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time, in <a href="http://www.iso.org/iso/iso8601">ISO 8601
     * date-time format</a>, when an authenticated entity most recently attempted to
     * access the service. Amazon Web Services does not report unauthenticated
     * requests.</p> <p>This field is null if no IAM entities attempted to access the
     * service within the <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_policies_access-advisor.html#service-last-accessed-reporting-period">tracking
     * period</a>.</p>
     */
    inline const Aws::Utils::DateTime& GetLastAuthenticated() const { return m_lastAuthenticated; }
    inline bool LastAuthenticatedHasBeenSet() const { return m_lastAuthenticatedHasBeenSet; }
    template<typename LastAuthenticatedT = Aws::Utils::DateTime>
    void SetLastAuthenticated(LastAuthenticatedT&& value) { m_lastAuthenticatedHasBeenSet = true; m_lastAuthenticated = std::forward<LastAuthenticatedT>(value); }
    template<typename LastAuthenticatedT = Aws::Utils::DateTime>
    ServiceLastAccessed& WithLastAuthenticated(LastAuthenticatedT&& value) { SetLastAuthenticated(std::forward<LastAuthenticatedT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The namespace of the service in which access was attempted.</p> <p>To learn
     * the service namespace of a service, see <a
     * href="https://docs.aws.amazon.com/service-authorization/latest/reference/reference_policies_actions-resources-contextkeys.html">Actions,
     * resources, and condition keys for Amazon Web Services services</a> in the
     * <i>Service Authorization Reference</i>. Choose the name of the service to view
     * details for that service. In the first paragraph, find the service prefix. For
     * example, <code>(service prefix: a4b)</code>. For more information about service
     * namespaces, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html#genref-aws-service-namespaces">Amazon
     * Web Services Service Namespaces</a> in the <i>Amazon Web Services General
     * Reference</i>.</p>
     */
    inline const Aws::String& GetServiceNamespace() const { return m_serviceNamespace; }
    inline bool ServiceNamespaceHasBeenSet() const { return m_serviceNamespaceHasBeenSet; }
    template<typename ServiceNamespaceT = Aws::String>
    void SetServiceNamespace(ServiceNamespaceT&& value) { m_serviceNamespaceHasBeenSet = true; m_serviceNamespace = std::forward<ServiceNamespaceT>(value); }
    template<typename ServiceNamespaceT = Aws::String>
    ServiceLastAccessed& WithServiceNamespace(ServiceNamespaceT&& value) { SetServiceNamespace(std::forward<ServiceNamespaceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the authenticated entity (user or role) that last attempted to
     * access the service. Amazon Web Services does not report unauthenticated
     * requests.</p> <p>This field is null if no IAM entities attempted to access the
     * service within the <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_policies_access-advisor.html#service-last-accessed-reporting-period">tracking
     * period</a>.</p>
     */
    inline const Aws::String& GetLastAuthenticatedEntity() const { return m_lastAuthenticatedEntity; }
    inline bool LastAuthenticatedEntityHasBeenSet() const { return m_lastAuthenticatedEntityHasBeenSet; }
    template<typename LastAuthenticatedEntityT = Aws::String>
    void SetLastAuthenticatedEntity(LastAuthenticatedEntityT&& value) { m_lastAuthenticatedEntityHasBeenSet = true; m_lastAuthenticatedEntity = std::forward<LastAuthenticatedEntityT>(value); }
    template<typename LastAuthenticatedEntityT = Aws::String>
    ServiceLastAccessed& WithLastAuthenticatedEntity(LastAuthenticatedEntityT&& value) { SetLastAuthenticatedEntity(std::forward<LastAuthenticatedEntityT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Region from which the authenticated entity (user or role) last attempted
     * to access the service. Amazon Web Services does not report unauthenticated
     * requests.</p> <p>This field is null if no IAM entities attempted to access the
     * service within the <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_policies_access-advisor.html#service-last-accessed-reporting-period">tracking
     * period</a>.</p>
     */
    inline const Aws::String& GetLastAuthenticatedRegion() const { return m_lastAuthenticatedRegion; }
    inline bool LastAuthenticatedRegionHasBeenSet() const { return m_lastAuthenticatedRegionHasBeenSet; }
    template<typename LastAuthenticatedRegionT = Aws::String>
    void SetLastAuthenticatedRegion(LastAuthenticatedRegionT&& value) { m_lastAuthenticatedRegionHasBeenSet = true; m_lastAuthenticatedRegion = std::forward<LastAuthenticatedRegionT>(value); }
    template<typename LastAuthenticatedRegionT = Aws::String>
    ServiceLastAccessed& WithLastAuthenticatedRegion(LastAuthenticatedRegionT&& value) { SetLastAuthenticatedRegion(std::forward<LastAuthenticatedRegionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total number of authenticated principals (root user, IAM users, or IAM
     * roles) that have attempted to access the service.</p> <p>This field is null if
     * no principals attempted to access the service within the <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_policies_access-advisor.html#service-last-accessed-reporting-period">tracking
     * period</a>.</p>
     */
    inline int GetTotalAuthenticatedEntities() const { return m_totalAuthenticatedEntities; }
    inline bool TotalAuthenticatedEntitiesHasBeenSet() const { return m_totalAuthenticatedEntitiesHasBeenSet; }
    inline void SetTotalAuthenticatedEntities(int value) { m_totalAuthenticatedEntitiesHasBeenSet = true; m_totalAuthenticatedEntities = value; }
    inline ServiceLastAccessed& WithTotalAuthenticatedEntities(int value) { SetTotalAuthenticatedEntities(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that contains details about the most recent attempt to access a
     * tracked action within the service.</p> <p>This field is null if there no tracked
     * actions or if the principal did not use the tracked actions within the <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_policies_access-advisor.html#service-last-accessed-reporting-period">tracking
     * period</a>. This field is also null if the report was generated at the service
     * level and not the action level. For more information, see the
     * <code>Granularity</code> field in <a
     * href="https://docs.aws.amazon.com/IAM/latest/APIReference/API_GenerateServiceLastAccessedDetails.html">GenerateServiceLastAccessedDetails</a>.</p>
     */
    inline const Aws::Vector<TrackedActionLastAccessed>& GetTrackedActionsLastAccessed() const { return m_trackedActionsLastAccessed; }
    inline bool TrackedActionsLastAccessedHasBeenSet() const { return m_trackedActionsLastAccessedHasBeenSet; }
    template<typename TrackedActionsLastAccessedT = Aws::Vector<TrackedActionLastAccessed>>
    void SetTrackedActionsLastAccessed(TrackedActionsLastAccessedT&& value) { m_trackedActionsLastAccessedHasBeenSet = true; m_trackedActionsLastAccessed = std::forward<TrackedActionsLastAccessedT>(value); }
    template<typename TrackedActionsLastAccessedT = Aws::Vector<TrackedActionLastAccessed>>
    ServiceLastAccessed& WithTrackedActionsLastAccessed(TrackedActionsLastAccessedT&& value) { SetTrackedActionsLastAccessed(std::forward<TrackedActionsLastAccessedT>(value)); return *this;}
    template<typename TrackedActionsLastAccessedT = TrackedActionLastAccessed>
    ServiceLastAccessed& AddTrackedActionsLastAccessed(TrackedActionsLastAccessedT&& value) { m_trackedActionsLastAccessedHasBeenSet = true; m_trackedActionsLastAccessed.emplace_back(std::forward<TrackedActionsLastAccessedT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_serviceName;
    bool m_serviceNameHasBeenSet = false;

    Aws::Utils::DateTime m_lastAuthenticated{};
    bool m_lastAuthenticatedHasBeenSet = false;

    Aws::String m_serviceNamespace;
    bool m_serviceNamespaceHasBeenSet = false;

    Aws::String m_lastAuthenticatedEntity;
    bool m_lastAuthenticatedEntityHasBeenSet = false;

    Aws::String m_lastAuthenticatedRegion;
    bool m_lastAuthenticatedRegionHasBeenSet = false;

    int m_totalAuthenticatedEntities{0};
    bool m_totalAuthenticatedEntitiesHasBeenSet = false;

    Aws::Vector<TrackedActionLastAccessed> m_trackedActionsLastAccessed;
    bool m_trackedActionsLastAccessedHasBeenSet = false;
  };

} // namespace Model
} // namespace IAM
} // namespace Aws
