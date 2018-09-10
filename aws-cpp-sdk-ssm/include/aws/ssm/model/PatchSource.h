﻿/*
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
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p>Information about the patches to use to update the instances, including
   * target operating systems and source repository. Applies to Linux instances
   * only.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/PatchSource">AWS API
   * Reference</a></p>
   */
  class AWS_SSM_API PatchSource
  {
  public:
    PatchSource();
    PatchSource(Aws::Utils::Json::JsonView jsonValue);
    PatchSource& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name specified to identify the patch source.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name specified to identify the patch source.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name specified to identify the patch source.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name specified to identify the patch source.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name specified to identify the patch source.</p>
     */
    inline PatchSource& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name specified to identify the patch source.</p>
     */
    inline PatchSource& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name specified to identify the patch source.</p>
     */
    inline PatchSource& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The specific operating system versions a patch repository applies to, such as
     * "Ubuntu16.04", "AmazonLinux2016.09", "RedhatEnterpriseLinux7.2" or "Suse12.7".
     * For lists of supported product values, see <a>PatchFilter</a>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetProducts() const{ return m_products; }

    /**
     * <p>The specific operating system versions a patch repository applies to, such as
     * "Ubuntu16.04", "AmazonLinux2016.09", "RedhatEnterpriseLinux7.2" or "Suse12.7".
     * For lists of supported product values, see <a>PatchFilter</a>.</p>
     */
    inline void SetProducts(const Aws::Vector<Aws::String>& value) { m_productsHasBeenSet = true; m_products = value; }

    /**
     * <p>The specific operating system versions a patch repository applies to, such as
     * "Ubuntu16.04", "AmazonLinux2016.09", "RedhatEnterpriseLinux7.2" or "Suse12.7".
     * For lists of supported product values, see <a>PatchFilter</a>.</p>
     */
    inline void SetProducts(Aws::Vector<Aws::String>&& value) { m_productsHasBeenSet = true; m_products = std::move(value); }

    /**
     * <p>The specific operating system versions a patch repository applies to, such as
     * "Ubuntu16.04", "AmazonLinux2016.09", "RedhatEnterpriseLinux7.2" or "Suse12.7".
     * For lists of supported product values, see <a>PatchFilter</a>.</p>
     */
    inline PatchSource& WithProducts(const Aws::Vector<Aws::String>& value) { SetProducts(value); return *this;}

    /**
     * <p>The specific operating system versions a patch repository applies to, such as
     * "Ubuntu16.04", "AmazonLinux2016.09", "RedhatEnterpriseLinux7.2" or "Suse12.7".
     * For lists of supported product values, see <a>PatchFilter</a>.</p>
     */
    inline PatchSource& WithProducts(Aws::Vector<Aws::String>&& value) { SetProducts(std::move(value)); return *this;}

    /**
     * <p>The specific operating system versions a patch repository applies to, such as
     * "Ubuntu16.04", "AmazonLinux2016.09", "RedhatEnterpriseLinux7.2" or "Suse12.7".
     * For lists of supported product values, see <a>PatchFilter</a>.</p>
     */
    inline PatchSource& AddProducts(const Aws::String& value) { m_productsHasBeenSet = true; m_products.push_back(value); return *this; }

    /**
     * <p>The specific operating system versions a patch repository applies to, such as
     * "Ubuntu16.04", "AmazonLinux2016.09", "RedhatEnterpriseLinux7.2" or "Suse12.7".
     * For lists of supported product values, see <a>PatchFilter</a>.</p>
     */
    inline PatchSource& AddProducts(Aws::String&& value) { m_productsHasBeenSet = true; m_products.push_back(std::move(value)); return *this; }

    /**
     * <p>The specific operating system versions a patch repository applies to, such as
     * "Ubuntu16.04", "AmazonLinux2016.09", "RedhatEnterpriseLinux7.2" or "Suse12.7".
     * For lists of supported product values, see <a>PatchFilter</a>.</p>
     */
    inline PatchSource& AddProducts(const char* value) { m_productsHasBeenSet = true; m_products.push_back(value); return *this; }


    /**
     * <p>The value of the yum repo configuration. For example:</p> <p>
     * <code>cachedir=/var/cache/yum/$basesearch</code> </p> <p>
     * <code>$releasever</code> </p> <p> <code>keepcache=0</code> </p> <p>
     * <code>debuglevel=2</code> </p>
     */
    inline const Aws::String& GetConfiguration() const{ return m_configuration; }

    /**
     * <p>The value of the yum repo configuration. For example:</p> <p>
     * <code>cachedir=/var/cache/yum/$basesearch</code> </p> <p>
     * <code>$releasever</code> </p> <p> <code>keepcache=0</code> </p> <p>
     * <code>debuglevel=2</code> </p>
     */
    inline void SetConfiguration(const Aws::String& value) { m_configurationHasBeenSet = true; m_configuration = value; }

    /**
     * <p>The value of the yum repo configuration. For example:</p> <p>
     * <code>cachedir=/var/cache/yum/$basesearch</code> </p> <p>
     * <code>$releasever</code> </p> <p> <code>keepcache=0</code> </p> <p>
     * <code>debuglevel=2</code> </p>
     */
    inline void SetConfiguration(Aws::String&& value) { m_configurationHasBeenSet = true; m_configuration = std::move(value); }

    /**
     * <p>The value of the yum repo configuration. For example:</p> <p>
     * <code>cachedir=/var/cache/yum/$basesearch</code> </p> <p>
     * <code>$releasever</code> </p> <p> <code>keepcache=0</code> </p> <p>
     * <code>debuglevel=2</code> </p>
     */
    inline void SetConfiguration(const char* value) { m_configurationHasBeenSet = true; m_configuration.assign(value); }

    /**
     * <p>The value of the yum repo configuration. For example:</p> <p>
     * <code>cachedir=/var/cache/yum/$basesearch</code> </p> <p>
     * <code>$releasever</code> </p> <p> <code>keepcache=0</code> </p> <p>
     * <code>debuglevel=2</code> </p>
     */
    inline PatchSource& WithConfiguration(const Aws::String& value) { SetConfiguration(value); return *this;}

    /**
     * <p>The value of the yum repo configuration. For example:</p> <p>
     * <code>cachedir=/var/cache/yum/$basesearch</code> </p> <p>
     * <code>$releasever</code> </p> <p> <code>keepcache=0</code> </p> <p>
     * <code>debuglevel=2</code> </p>
     */
    inline PatchSource& WithConfiguration(Aws::String&& value) { SetConfiguration(std::move(value)); return *this;}

    /**
     * <p>The value of the yum repo configuration. For example:</p> <p>
     * <code>cachedir=/var/cache/yum/$basesearch</code> </p> <p>
     * <code>$releasever</code> </p> <p> <code>keepcache=0</code> </p> <p>
     * <code>debuglevel=2</code> </p>
     */
    inline PatchSource& WithConfiguration(const char* value) { SetConfiguration(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::Vector<Aws::String> m_products;
    bool m_productsHasBeenSet;

    Aws::String m_configuration;
    bool m_configurationHasBeenSet;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
