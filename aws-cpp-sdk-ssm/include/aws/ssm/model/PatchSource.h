/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
   * <p>Information about the patches to use to update the managed nodes, including
   * target operating systems and source repository. Applies to Linux managed nodes
   * only.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/PatchSource">AWS API
   * Reference</a></p>
   */
  class PatchSource
  {
  public:
    AWS_SSM_API PatchSource();
    AWS_SSM_API PatchSource(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API PatchSource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name specified to identify the patch source.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name specified to identify the patch source.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

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
    inline bool ProductsHasBeenSet() const { return m_productsHasBeenSet; }

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
     * <code>[main]</code> </p> <p> <code>name=MyCustomRepository</code> </p> <p>
     * <code>baseurl=https://my-custom-repository</code> </p> <p>
     * <code>enabled=1</code> </p>  <p>For information about other options
     * available for your yum repository configuration, see <a
     * href="https://man7.org/linux/man-pages/man5/dnf.conf.5.html">dnf.conf(5)</a>.</p>
     * 
     */
    inline const Aws::String& GetConfiguration() const{ return m_configuration; }

    /**
     * <p>The value of the yum repo configuration. For example:</p> <p>
     * <code>[main]</code> </p> <p> <code>name=MyCustomRepository</code> </p> <p>
     * <code>baseurl=https://my-custom-repository</code> </p> <p>
     * <code>enabled=1</code> </p>  <p>For information about other options
     * available for your yum repository configuration, see <a
     * href="https://man7.org/linux/man-pages/man5/dnf.conf.5.html">dnf.conf(5)</a>.</p>
     * 
     */
    inline bool ConfigurationHasBeenSet() const { return m_configurationHasBeenSet; }

    /**
     * <p>The value of the yum repo configuration. For example:</p> <p>
     * <code>[main]</code> </p> <p> <code>name=MyCustomRepository</code> </p> <p>
     * <code>baseurl=https://my-custom-repository</code> </p> <p>
     * <code>enabled=1</code> </p>  <p>For information about other options
     * available for your yum repository configuration, see <a
     * href="https://man7.org/linux/man-pages/man5/dnf.conf.5.html">dnf.conf(5)</a>.</p>
     * 
     */
    inline void SetConfiguration(const Aws::String& value) { m_configurationHasBeenSet = true; m_configuration = value; }

    /**
     * <p>The value of the yum repo configuration. For example:</p> <p>
     * <code>[main]</code> </p> <p> <code>name=MyCustomRepository</code> </p> <p>
     * <code>baseurl=https://my-custom-repository</code> </p> <p>
     * <code>enabled=1</code> </p>  <p>For information about other options
     * available for your yum repository configuration, see <a
     * href="https://man7.org/linux/man-pages/man5/dnf.conf.5.html">dnf.conf(5)</a>.</p>
     * 
     */
    inline void SetConfiguration(Aws::String&& value) { m_configurationHasBeenSet = true; m_configuration = std::move(value); }

    /**
     * <p>The value of the yum repo configuration. For example:</p> <p>
     * <code>[main]</code> </p> <p> <code>name=MyCustomRepository</code> </p> <p>
     * <code>baseurl=https://my-custom-repository</code> </p> <p>
     * <code>enabled=1</code> </p>  <p>For information about other options
     * available for your yum repository configuration, see <a
     * href="https://man7.org/linux/man-pages/man5/dnf.conf.5.html">dnf.conf(5)</a>.</p>
     * 
     */
    inline void SetConfiguration(const char* value) { m_configurationHasBeenSet = true; m_configuration.assign(value); }

    /**
     * <p>The value of the yum repo configuration. For example:</p> <p>
     * <code>[main]</code> </p> <p> <code>name=MyCustomRepository</code> </p> <p>
     * <code>baseurl=https://my-custom-repository</code> </p> <p>
     * <code>enabled=1</code> </p>  <p>For information about other options
     * available for your yum repository configuration, see <a
     * href="https://man7.org/linux/man-pages/man5/dnf.conf.5.html">dnf.conf(5)</a>.</p>
     * 
     */
    inline PatchSource& WithConfiguration(const Aws::String& value) { SetConfiguration(value); return *this;}

    /**
     * <p>The value of the yum repo configuration. For example:</p> <p>
     * <code>[main]</code> </p> <p> <code>name=MyCustomRepository</code> </p> <p>
     * <code>baseurl=https://my-custom-repository</code> </p> <p>
     * <code>enabled=1</code> </p>  <p>For information about other options
     * available for your yum repository configuration, see <a
     * href="https://man7.org/linux/man-pages/man5/dnf.conf.5.html">dnf.conf(5)</a>.</p>
     * 
     */
    inline PatchSource& WithConfiguration(Aws::String&& value) { SetConfiguration(std::move(value)); return *this;}

    /**
     * <p>The value of the yum repo configuration. For example:</p> <p>
     * <code>[main]</code> </p> <p> <code>name=MyCustomRepository</code> </p> <p>
     * <code>baseurl=https://my-custom-repository</code> </p> <p>
     * <code>enabled=1</code> </p>  <p>For information about other options
     * available for your yum repository configuration, see <a
     * href="https://man7.org/linux/man-pages/man5/dnf.conf.5.html">dnf.conf(5)</a>.</p>
     * 
     */
    inline PatchSource& WithConfiguration(const char* value) { SetConfiguration(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<Aws::String> m_products;
    bool m_productsHasBeenSet = false;

    Aws::String m_configuration;
    bool m_configurationHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
