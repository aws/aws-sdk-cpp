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
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iam/model/PolicyGrantingServiceAccess.h>
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
   * <p>Contains details about the permissions policies that are attached to the
   * specified identity (user, group, or role).</p> <p>This data type is used as a
   * response element in the <a>ListPoliciesGrantingServiceAccess</a>
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/ListPoliciesGrantingServiceAccessEntry">AWS
   * API Reference</a></p>
   */
  class AWS_IAM_API ListPoliciesGrantingServiceAccessEntry
  {
  public:
    ListPoliciesGrantingServiceAccessEntry();
    ListPoliciesGrantingServiceAccessEntry(const Aws::Utils::Xml::XmlNode& xmlNode);
    ListPoliciesGrantingServiceAccessEntry& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The namespace of the service that was accessed.</p> <p>To learn the service
     * namespace of a service, go to <a
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
     * <p>The namespace of the service that was accessed.</p> <p>To learn the service
     * namespace of a service, go to <a
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
     * <p>The namespace of the service that was accessed.</p> <p>To learn the service
     * namespace of a service, go to <a
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
     * <p>The namespace of the service that was accessed.</p> <p>To learn the service
     * namespace of a service, go to <a
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
     * <p>The namespace of the service that was accessed.</p> <p>To learn the service
     * namespace of a service, go to <a
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
     * <p>The namespace of the service that was accessed.</p> <p>To learn the service
     * namespace of a service, go to <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_policies_actions-resources-contextkeys.html">Actions,
     * Resources, and Condition Keys for AWS Services</a> in the <i>IAM User Guide</i>.
     * Choose the name of the service to view details for that service. In the first
     * paragraph, find the service prefix. For example, <code>(service prefix:
     * a4b)</code>. For more information about service namespaces, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html#genref-aws-service-namespaces">AWS
     * Service Namespaces</a> in the <i>AWS General Reference</i>.</p>
     */
    inline ListPoliciesGrantingServiceAccessEntry& WithServiceNamespace(const Aws::String& value) { SetServiceNamespace(value); return *this;}

    /**
     * <p>The namespace of the service that was accessed.</p> <p>To learn the service
     * namespace of a service, go to <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_policies_actions-resources-contextkeys.html">Actions,
     * Resources, and Condition Keys for AWS Services</a> in the <i>IAM User Guide</i>.
     * Choose the name of the service to view details for that service. In the first
     * paragraph, find the service prefix. For example, <code>(service prefix:
     * a4b)</code>. For more information about service namespaces, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html#genref-aws-service-namespaces">AWS
     * Service Namespaces</a> in the <i>AWS General Reference</i>.</p>
     */
    inline ListPoliciesGrantingServiceAccessEntry& WithServiceNamespace(Aws::String&& value) { SetServiceNamespace(std::move(value)); return *this;}

    /**
     * <p>The namespace of the service that was accessed.</p> <p>To learn the service
     * namespace of a service, go to <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_policies_actions-resources-contextkeys.html">Actions,
     * Resources, and Condition Keys for AWS Services</a> in the <i>IAM User Guide</i>.
     * Choose the name of the service to view details for that service. In the first
     * paragraph, find the service prefix. For example, <code>(service prefix:
     * a4b)</code>. For more information about service namespaces, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html#genref-aws-service-namespaces">AWS
     * Service Namespaces</a> in the <i>AWS General Reference</i>.</p>
     */
    inline ListPoliciesGrantingServiceAccessEntry& WithServiceNamespace(const char* value) { SetServiceNamespace(value); return *this;}


    /**
     * <p>The <code>PoliciesGrantingServiceAccess</code> object that contains details
     * about the policy.</p>
     */
    inline const Aws::Vector<PolicyGrantingServiceAccess>& GetPolicies() const{ return m_policies; }

    /**
     * <p>The <code>PoliciesGrantingServiceAccess</code> object that contains details
     * about the policy.</p>
     */
    inline bool PoliciesHasBeenSet() const { return m_policiesHasBeenSet; }

    /**
     * <p>The <code>PoliciesGrantingServiceAccess</code> object that contains details
     * about the policy.</p>
     */
    inline void SetPolicies(const Aws::Vector<PolicyGrantingServiceAccess>& value) { m_policiesHasBeenSet = true; m_policies = value; }

    /**
     * <p>The <code>PoliciesGrantingServiceAccess</code> object that contains details
     * about the policy.</p>
     */
    inline void SetPolicies(Aws::Vector<PolicyGrantingServiceAccess>&& value) { m_policiesHasBeenSet = true; m_policies = std::move(value); }

    /**
     * <p>The <code>PoliciesGrantingServiceAccess</code> object that contains details
     * about the policy.</p>
     */
    inline ListPoliciesGrantingServiceAccessEntry& WithPolicies(const Aws::Vector<PolicyGrantingServiceAccess>& value) { SetPolicies(value); return *this;}

    /**
     * <p>The <code>PoliciesGrantingServiceAccess</code> object that contains details
     * about the policy.</p>
     */
    inline ListPoliciesGrantingServiceAccessEntry& WithPolicies(Aws::Vector<PolicyGrantingServiceAccess>&& value) { SetPolicies(std::move(value)); return *this;}

    /**
     * <p>The <code>PoliciesGrantingServiceAccess</code> object that contains details
     * about the policy.</p>
     */
    inline ListPoliciesGrantingServiceAccessEntry& AddPolicies(const PolicyGrantingServiceAccess& value) { m_policiesHasBeenSet = true; m_policies.push_back(value); return *this; }

    /**
     * <p>The <code>PoliciesGrantingServiceAccess</code> object that contains details
     * about the policy.</p>
     */
    inline ListPoliciesGrantingServiceAccessEntry& AddPolicies(PolicyGrantingServiceAccess&& value) { m_policiesHasBeenSet = true; m_policies.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_serviceNamespace;
    bool m_serviceNamespaceHasBeenSet;

    Aws::Vector<PolicyGrantingServiceAccess> m_policies;
    bool m_policiesHasBeenSet;
  };

} // namespace Model
} // namespace IAM
} // namespace Aws
