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
#include <aws/organizations/Organizations_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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
namespace Organizations
{
namespace Model
{

  /**
   * <p>A structure that contains details of a service principal that is enabled to
   * integrate with AWS Organizations.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/EnabledServicePrincipal">AWS
   * API Reference</a></p>
   */
  class AWS_ORGANIZATIONS_API EnabledServicePrincipal
  {
  public:
    EnabledServicePrincipal();
    EnabledServicePrincipal(Aws::Utils::Json::JsonView jsonValue);
    EnabledServicePrincipal& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the service principal. This is typically in the form of a URL,
     * such as: <code> <i>servicename</i>.amazonaws.com</code>.</p>
     */
    inline const Aws::String& GetServicePrincipal() const{ return m_servicePrincipal; }

    /**
     * <p>The name of the service principal. This is typically in the form of a URL,
     * such as: <code> <i>servicename</i>.amazonaws.com</code>.</p>
     */
    inline bool ServicePrincipalHasBeenSet() const { return m_servicePrincipalHasBeenSet; }

    /**
     * <p>The name of the service principal. This is typically in the form of a URL,
     * such as: <code> <i>servicename</i>.amazonaws.com</code>.</p>
     */
    inline void SetServicePrincipal(const Aws::String& value) { m_servicePrincipalHasBeenSet = true; m_servicePrincipal = value; }

    /**
     * <p>The name of the service principal. This is typically in the form of a URL,
     * such as: <code> <i>servicename</i>.amazonaws.com</code>.</p>
     */
    inline void SetServicePrincipal(Aws::String&& value) { m_servicePrincipalHasBeenSet = true; m_servicePrincipal = std::move(value); }

    /**
     * <p>The name of the service principal. This is typically in the form of a URL,
     * such as: <code> <i>servicename</i>.amazonaws.com</code>.</p>
     */
    inline void SetServicePrincipal(const char* value) { m_servicePrincipalHasBeenSet = true; m_servicePrincipal.assign(value); }

    /**
     * <p>The name of the service principal. This is typically in the form of a URL,
     * such as: <code> <i>servicename</i>.amazonaws.com</code>.</p>
     */
    inline EnabledServicePrincipal& WithServicePrincipal(const Aws::String& value) { SetServicePrincipal(value); return *this;}

    /**
     * <p>The name of the service principal. This is typically in the form of a URL,
     * such as: <code> <i>servicename</i>.amazonaws.com</code>.</p>
     */
    inline EnabledServicePrincipal& WithServicePrincipal(Aws::String&& value) { SetServicePrincipal(std::move(value)); return *this;}

    /**
     * <p>The name of the service principal. This is typically in the form of a URL,
     * such as: <code> <i>servicename</i>.amazonaws.com</code>.</p>
     */
    inline EnabledServicePrincipal& WithServicePrincipal(const char* value) { SetServicePrincipal(value); return *this;}


    /**
     * <p>The date that the service principal was enabled for integration with AWS
     * Organizations.</p>
     */
    inline const Aws::Utils::DateTime& GetDateEnabled() const{ return m_dateEnabled; }

    /**
     * <p>The date that the service principal was enabled for integration with AWS
     * Organizations.</p>
     */
    inline bool DateEnabledHasBeenSet() const { return m_dateEnabledHasBeenSet; }

    /**
     * <p>The date that the service principal was enabled for integration with AWS
     * Organizations.</p>
     */
    inline void SetDateEnabled(const Aws::Utils::DateTime& value) { m_dateEnabledHasBeenSet = true; m_dateEnabled = value; }

    /**
     * <p>The date that the service principal was enabled for integration with AWS
     * Organizations.</p>
     */
    inline void SetDateEnabled(Aws::Utils::DateTime&& value) { m_dateEnabledHasBeenSet = true; m_dateEnabled = std::move(value); }

    /**
     * <p>The date that the service principal was enabled for integration with AWS
     * Organizations.</p>
     */
    inline EnabledServicePrincipal& WithDateEnabled(const Aws::Utils::DateTime& value) { SetDateEnabled(value); return *this;}

    /**
     * <p>The date that the service principal was enabled for integration with AWS
     * Organizations.</p>
     */
    inline EnabledServicePrincipal& WithDateEnabled(Aws::Utils::DateTime&& value) { SetDateEnabled(std::move(value)); return *this;}

  private:

    Aws::String m_servicePrincipal;
    bool m_servicePrincipalHasBeenSet;

    Aws::Utils::DateTime m_dateEnabled;
    bool m_dateEnabledHasBeenSet;
  };

} // namespace Model
} // namespace Organizations
} // namespace Aws
