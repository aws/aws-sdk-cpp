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
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/ssm/model/PatchFilterKey.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace SSM
{
namespace Model
{

  /**
   * <p>Defines a patch filter.</p> <p>A patch filter consists of key/value pairs,
   * but not all keys are valid for all operating system types. For example, the key
   * <code>PRODUCT</code> is valid for all supported operating system types. The key
   * <code>MSRC_SEVERITY</code>, however, is valid only for Windows operating
   * systems, and the key <code>SECTION</code> is valid only for Ubuntu operating
   * systems.</p> <p>Refer to the following sections for information about which keys
   * may be used with each major operating system, and which values are valid for
   * each key.</p> <p> <b>Windows Operating Systems</b> </p> <p>The supported keys
   * for Windows operating systems are <code>PRODUCT</code>,
   * <code>CLASSIFICATION</code>, and <code>MSRC_SEVERITY</code>. See the following
   * lists for valid values for each of these keys.</p> <p> <i>Supported key:</i>
   * <code>PRODUCT</code> </p> <p> <i>Supported values:</i> </p> <ul> <li> <p>
   * <code>Windows7</code> </p> </li> <li> <p> <code>Windows8</code> </p> </li> <li>
   * <p> <code>Windows8.1</code> </p> </li> <li> <p> <code>Windows8Embedded</code>
   * </p> </li> <li> <p> <code>Windows10</code> </p> </li> <li> <p>
   * <code>Windows10LTSB</code> </p> </li> <li> <p> <code>WindowsServer2008</code>
   * </p> </li> <li> <p> <code>WindowsServer2008R2</code> </p> </li> <li> <p>
   * <code>WindowsServer2012</code> </p> </li> <li> <p>
   * <code>WindowsServer2012R2</code> </p> </li> <li> <p>
   * <code>WindowsServer2016</code> </p> </li> <li> <p>
   * <code>WindowsServer2019</code> </p> </li> <li> <p> <code>*</code> </p> <p>
   * <i>Use a wildcard character (*) to target all supported operating system
   * versions.</i> </p> </li> </ul> <p> <i>Supported key:</i>
   * <code>CLASSIFICATION</code> </p> <p> <i>Supported values:</i> </p> <ul> <li> <p>
   * <code>CriticalUpdates</code> </p> </li> <li> <p> <code>DefinitionUpdates</code>
   * </p> </li> <li> <p> <code>Drivers</code> </p> </li> <li> <p>
   * <code>FeaturePacks</code> </p> </li> <li> <p> <code>SecurityUpdates</code> </p>
   * </li> <li> <p> <code>ServicePacks</code> </p> </li> <li> <p> <code>Tools</code>
   * </p> </li> <li> <p> <code>UpdateRollups</code> </p> </li> <li> <p>
   * <code>Updates</code> </p> </li> <li> <p> <code>Upgrades</code> </p> </li> </ul>
   * <p> <i>Supported key:</i> <code>MSRC_SEVERITY</code> </p> <p> <i>Supported
   * values:</i> </p> <ul> <li> <p> <code>Critical</code> </p> </li> <li> <p>
   * <code>Important</code> </p> </li> <li> <p> <code>Moderate</code> </p> </li> <li>
   * <p> <code>Low</code> </p> </li> <li> <p> <code>Unspecified</code> </p> </li>
   * </ul> <p> <b>Ubuntu Operating Systems</b> </p> <p>The supported keys for Ubuntu
   * operating systems are <code>PRODUCT</code>, <code>PRIORITY</code>, and
   * <code>SECTION</code>. See the following lists for valid values for each of these
   * keys.</p> <p> <i>Supported key:</i> <code>PRODUCT</code> </p> <p> <i>Supported
   * values:</i> </p> <ul> <li> <p> <code>Ubuntu14.04</code> </p> </li> <li> <p>
   * <code>Ubuntu16.04</code> </p> </li> <li> <p> <code>*</code> </p> <p> <i>Use a
   * wildcard character (*) to target all supported operating system versions.</i>
   * </p> </li> </ul> <p> <i>Supported key:</i> <code>PRIORITY</code> </p> <p>
   * <i>Supported values:</i> </p> <ul> <li> <p> <code>Required</code> </p> </li>
   * <li> <p> <code>Important</code> </p> </li> <li> <p> <code>Standard</code> </p>
   * </li> <li> <p> <code>Optional</code> </p> </li> <li> <p> <code>Extra</code> </p>
   * </li> </ul> <p> <i>Supported key:</i> <code>SECTION</code> </p> <p>Only the
   * length of the key value is validated. Minimum length is 1. Maximum length is
   * 64.</p> <p> <b>Amazon Linux Operating Systems</b> </p> <p>The supported keys for
   * Amazon Linux operating systems are <code>PRODUCT</code>,
   * <code>CLASSIFICATION</code>, and <code>SEVERITY</code>. See the following lists
   * for valid values for each of these keys.</p> <p> <i>Supported key:</i>
   * <code>PRODUCT</code> </p> <p> <i>Supported values:</i> </p> <ul> <li> <p>
   * <code>AmazonLinux2012.03</code> </p> </li> <li> <p>
   * <code>AmazonLinux2012.09</code> </p> </li> <li> <p>
   * <code>AmazonLinux2013.03</code> </p> </li> <li> <p>
   * <code>AmazonLinux2013.09</code> </p> </li> <li> <p>
   * <code>AmazonLinux2014.03</code> </p> </li> <li> <p>
   * <code>AmazonLinux2014.09</code> </p> </li> <li> <p>
   * <code>AmazonLinux2015.03</code> </p> </li> <li> <p>
   * <code>AmazonLinux2015.09</code> </p> </li> <li> <p>
   * <code>AmazonLinux2016.03</code> </p> </li> <li> <p>
   * <code>AmazonLinux2016.09</code> </p> </li> <li> <p>
   * <code>AmazonLinux2017.03</code> </p> </li> <li> <p>
   * <code>AmazonLinux2017.09</code> </p> </li> <li> <p> <code>*</code> </p> <p>
   * <i>Use a wildcard character (*) to target all supported operating system
   * versions.</i> </p> </li> </ul> <p> <i>Supported key:</i>
   * <code>CLASSIFICATION</code> </p> <p> <i>Supported values:</i> </p> <ul> <li> <p>
   * <code>Security</code> </p> </li> <li> <p> <code>Bugfix</code> </p> </li> <li>
   * <p> <code>Enhancement</code> </p> </li> <li> <p> <code>Recommended</code> </p>
   * </li> <li> <p> <code>Newpackage</code> </p> </li> </ul> <p> <i>Supported
   * key:</i> <code>SEVERITY</code> </p> <p> <i>Supported values:</i> </p> <ul> <li>
   * <p> <code>Critical</code> </p> </li> <li> <p> <code>Important</code> </p> </li>
   * <li> <p> <code>Medium</code> </p> </li> <li> <p> <code>Low</code> </p> </li>
   * </ul> <p> <b>Amazon Linux 2 Operating Systems</b> </p> <p>The supported keys for
   * Amazon Linux 2 operating systems are <code>PRODUCT</code>,
   * <code>CLASSIFICATION</code>, and <code>SEVERITY</code>. See the following lists
   * for valid values for each of these keys.</p> <p> <i>Supported key:</i>
   * <code>PRODUCT</code> </p> <p> <i>Supported values:</i> </p> <ul> <li> <p>
   * <code>AmazonLinux2</code> </p> </li> <li> <p> <code>AmazonLinux2.0</code> </p>
   * </li> <li> <p> <code>*</code> </p> <p> <i>Use a wildcard character (*) to target
   * all supported operating system versions.</i> </p> </li> </ul> <p> <i>Supported
   * key:</i> <code>CLASSIFICATION</code> </p> <p> <i>Supported values:</i> </p> <ul>
   * <li> <p> <code>Security</code> </p> </li> <li> <p> <code>Bugfix</code> </p>
   * </li> <li> <p> <code>Enhancement</code> </p> </li> <li> <p>
   * <code>Recommended</code> </p> </li> <li> <p> <code>Newpackage</code> </p> </li>
   * </ul> <p> <i>Supported key:</i> <code>SEVERITY</code> </p> <p> <i>Supported
   * values:</i> </p> <ul> <li> <p> <code>Critical</code> </p> </li> <li> <p>
   * <code>Important</code> </p> </li> <li> <p> <code>Medium</code> </p> </li> <li>
   * <p> <code>Low</code> </p> </li> </ul> <p> <b>RedHat Enterprise Linux (RHEL)
   * Operating Systems</b> </p> <p>The supported keys for RedHat Enterprise Linux
   * operating systems are <code>PRODUCT</code>, <code>CLASSIFICATION</code>, and
   * <code>SEVERITY</code>. See the following lists for valid values for each of
   * these keys.</p> <p> <i>Supported key:</i> <code>PRODUCT</code> </p> <p>
   * <i>Supported values:</i> </p> <ul> <li> <p>
   * <code>RedhatEnterpriseLinux6.5</code> </p> </li> <li> <p>
   * <code>RedhatEnterpriseLinux6.6</code> </p> </li> <li> <p>
   * <code>RedhatEnterpriseLinux6.7</code> </p> </li> <li> <p>
   * <code>RedhatEnterpriseLinux6.8</code> </p> </li> <li> <p>
   * <code>RedhatEnterpriseLinux6.9</code> </p> </li> <li> <p>
   * <code>RedhatEnterpriseLinux7.0</code> </p> </li> <li> <p>
   * <code>RedhatEnterpriseLinux7.1</code> </p> </li> <li> <p>
   * <code>RedhatEnterpriseLinux7.2</code> </p> </li> <li> <p>
   * <code>RedhatEnterpriseLinux7.3</code> </p> </li> <li> <p>
   * <code>RedhatEnterpriseLinux7.4</code> </p> </li> <li> <p>
   * <code>RedhatEnterpriseLinux7.5</code> </p> </li> <li> <p>
   * <code>RedhatEnterpriseLinux7.6</code> </p> </li> <li> <p> <code>*</code> </p>
   * <p> <i>Use a wildcard character (*) to target all supported operating system
   * versions.</i> </p> </li> </ul> <p> <i>Supported key:</i>
   * <code>CLASSIFICATION</code> </p> <p> <i>Supported values:</i> </p> <ul> <li> <p>
   * <code>Security</code> </p> </li> <li> <p> <code>Bugfix</code> </p> </li> <li>
   * <p> <code>Enhancement</code> </p> </li> <li> <p> <code>Recommended</code> </p>
   * </li> <li> <p> <code>Newpackage</code> </p> </li> </ul> <p> <i>Supported
   * key:</i> <code>SEVERITY</code> </p> <p> <i>Supported values:</i> </p> <ul> <li>
   * <p> <code>Critical</code> </p> </li> <li> <p> <code>Important</code> </p> </li>
   * <li> <p> <code>Medium</code> </p> </li> <li> <p> <code>Low</code> </p> </li>
   * </ul> <p> <b>SUSE Linux Enterprise Server (SLES) Operating Systems</b> </p>
   * <p>The supported keys for SLES operating systems are <code>PRODUCT</code>,
   * <code>CLASSIFICATION</code>, and <code>SEVERITY</code>. See the following lists
   * for valid values for each of these keys.</p> <p> <i>Supported key:</i>
   * <code>PRODUCT</code> </p> <p> <i>Supported values:</i> </p> <ul> <li> <p>
   * <code>Suse12.0</code> </p> </li> <li> <p> <code>Suse12.1</code> </p> </li> <li>
   * <p> <code>Suse12.2</code> </p> </li> <li> <p> <code>Suse12.3</code> </p> </li>
   * <li> <p> <code>Suse12.4</code> </p> </li> <li> <p> <code>Suse12.5</code> </p>
   * </li> <li> <p> <code>Suse12.6</code> </p> </li> <li> <p> <code>Suse12.7</code>
   * </p> </li> <li> <p> <code>Suse12.8</code> </p> </li> <li> <p>
   * <code>Suse12.9</code> </p> </li> <li> <p> <code>*</code> </p> <p> <i>Use a
   * wildcard character (*) to target all supported operating system versions.</i>
   * </p> </li> </ul> <p> <i>Supported key:</i> <code>CLASSIFICATION</code> </p> <p>
   * <i>Supported values:</i> </p> <ul> <li> <p> <code>Security</code> </p> </li>
   * <li> <p> <code>Recommended</code> </p> </li> <li> <p> <code>Optional</code> </p>
   * </li> <li> <p> <code>Feature</code> </p> </li> <li> <p> <code>Document</code>
   * </p> </li> <li> <p> <code>Yast</code> </p> </li> </ul> <p> <i>Supported key:</i>
   * <code>SEVERITY</code> </p> <p> <i>Supported values:</i> </p> <ul> <li> <p>
   * <code>Critical</code> </p> </li> <li> <p> <code>Important</code> </p> </li> <li>
   * <p> <code>Moderate</code> </p> </li> <li> <p> <code>Low</code> </p> </li> </ul>
   * <p> <b>CentOS Operating Systems</b> </p> <p>The supported keys for CentOS
   * operating systems are <code>PRODUCT</code>, <code>CLASSIFICATION</code>, and
   * <code>SEVERITY</code>. See the following lists for valid values for each of
   * these keys.</p> <p> <i>Supported key:</i> <code>PRODUCT</code> </p> <p>
   * <i>Supported values:</i> </p> <ul> <li> <p> <code>CentOS6.5</code> </p> </li>
   * <li> <p> <code>CentOS6.6</code> </p> </li> <li> <p> <code>CentOS6.7</code> </p>
   * </li> <li> <p> <code>CentOS6.8</code> </p> </li> <li> <p> <code>CentOS6.9</code>
   * </p> </li> <li> <p> <code>CentOS7.0</code> </p> </li> <li> <p>
   * <code>CentOS7.1</code> </p> </li> <li> <p> <code>CentOS7.2</code> </p> </li>
   * <li> <p> <code>CentOS7.3</code> </p> </li> <li> <p> <code>CentOS7.4</code> </p>
   * </li> <li> <p> <code>CentOS7.5</code> </p> </li> <li> <p> <code>CentOS7.6</code>
   * </p> </li> <li> <p> <code>*</code> </p> <p> <i>Use a wildcard character (*) to
   * target all supported operating system versions.</i> </p> </li> </ul> <p>
   * <i>Supported key:</i> <code>CLASSIFICATION</code> </p> <p> <i>Supported
   * values:</i> </p> <ul> <li> <p> <code>Security</code> </p> </li> <li> <p>
   * <code>Bugfix</code> </p> </li> <li> <p> <code>Enhancement</code> </p> </li> <li>
   * <p> <code>Recommended</code> </p> </li> <li> <p> <code>Newpackage</code> </p>
   * </li> </ul> <p> <i>Supported key:</i> <code>SEVERITY</code> </p> <p>
   * <i>Supported values:</i> </p> <ul> <li> <p> <code>Critical</code> </p> </li>
   * <li> <p> <code>Important</code> </p> </li> <li> <p> <code>Medium</code> </p>
   * </li> <li> <p> <code>Low</code> </p> </li> </ul><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/PatchFilter">AWS API
   * Reference</a></p>
   */
  class AWS_SSM_API PatchFilter
  {
  public:
    PatchFilter();
    PatchFilter(Aws::Utils::Json::JsonView jsonValue);
    PatchFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The key for the filter.</p> <p>See <a>PatchFilter</a> for lists of valid keys
     * for each operating system type.</p>
     */
    inline const PatchFilterKey& GetKey() const{ return m_key; }

    /**
     * <p>The key for the filter.</p> <p>See <a>PatchFilter</a> for lists of valid keys
     * for each operating system type.</p>
     */
    inline void SetKey(const PatchFilterKey& value) { m_keyHasBeenSet = true; m_key = value; }

    /**
     * <p>The key for the filter.</p> <p>See <a>PatchFilter</a> for lists of valid keys
     * for each operating system type.</p>
     */
    inline void SetKey(PatchFilterKey&& value) { m_keyHasBeenSet = true; m_key = std::move(value); }

    /**
     * <p>The key for the filter.</p> <p>See <a>PatchFilter</a> for lists of valid keys
     * for each operating system type.</p>
     */
    inline PatchFilter& WithKey(const PatchFilterKey& value) { SetKey(value); return *this;}

    /**
     * <p>The key for the filter.</p> <p>See <a>PatchFilter</a> for lists of valid keys
     * for each operating system type.</p>
     */
    inline PatchFilter& WithKey(PatchFilterKey&& value) { SetKey(std::move(value)); return *this;}


    /**
     * <p>The value for the filter key.</p> <p>See <a>PatchFilter</a> for lists of
     * valid values for each key based on operating system type.</p>
     */
    inline const Aws::Vector<Aws::String>& GetValues() const{ return m_values; }

    /**
     * <p>The value for the filter key.</p> <p>See <a>PatchFilter</a> for lists of
     * valid values for each key based on operating system type.</p>
     */
    inline void SetValues(const Aws::Vector<Aws::String>& value) { m_valuesHasBeenSet = true; m_values = value; }

    /**
     * <p>The value for the filter key.</p> <p>See <a>PatchFilter</a> for lists of
     * valid values for each key based on operating system type.</p>
     */
    inline void SetValues(Aws::Vector<Aws::String>&& value) { m_valuesHasBeenSet = true; m_values = std::move(value); }

    /**
     * <p>The value for the filter key.</p> <p>See <a>PatchFilter</a> for lists of
     * valid values for each key based on operating system type.</p>
     */
    inline PatchFilter& WithValues(const Aws::Vector<Aws::String>& value) { SetValues(value); return *this;}

    /**
     * <p>The value for the filter key.</p> <p>See <a>PatchFilter</a> for lists of
     * valid values for each key based on operating system type.</p>
     */
    inline PatchFilter& WithValues(Aws::Vector<Aws::String>&& value) { SetValues(std::move(value)); return *this;}

    /**
     * <p>The value for the filter key.</p> <p>See <a>PatchFilter</a> for lists of
     * valid values for each key based on operating system type.</p>
     */
    inline PatchFilter& AddValues(const Aws::String& value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }

    /**
     * <p>The value for the filter key.</p> <p>See <a>PatchFilter</a> for lists of
     * valid values for each key based on operating system type.</p>
     */
    inline PatchFilter& AddValues(Aws::String&& value) { m_valuesHasBeenSet = true; m_values.push_back(std::move(value)); return *this; }

    /**
     * <p>The value for the filter key.</p> <p>See <a>PatchFilter</a> for lists of
     * valid values for each key based on operating system type.</p>
     */
    inline PatchFilter& AddValues(const char* value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }

  private:

    PatchFilterKey m_key;
    bool m_keyHasBeenSet;

    Aws::Vector<Aws::String> m_values;
    bool m_valuesHasBeenSet;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
