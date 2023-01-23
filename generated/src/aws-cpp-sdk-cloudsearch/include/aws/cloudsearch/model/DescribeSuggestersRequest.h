/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudsearch/CloudSearch_EXPORTS.h>
#include <aws/cloudsearch/CloudSearchRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace CloudSearch
{
namespace Model
{

  /**
   * <p>Container for the parameters to the <code><a>DescribeSuggester</a></code>
   * operation. Specifies the name of the domain you want to describe. To restrict
   * the response to particular suggesters, specify the names of the suggesters you
   * want to describe. To show the active configuration and exclude any pending
   * changes, set the <code>Deployed</code> option to
   * <code>true</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudsearch-2013-01-01/DescribeSuggestersRequest">AWS
   * API Reference</a></p>
   */
  class DescribeSuggestersRequest : public CloudSearchRequest
  {
  public:
    AWS_CLOUDSEARCH_API DescribeSuggestersRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeSuggesters"; }

    AWS_CLOUDSEARCH_API Aws::String SerializePayload() const override;

  protected:
    AWS_CLOUDSEARCH_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The name of the domain you want to describe.</p>
     */
    inline const Aws::String& GetDomainName() const{ return m_domainName; }

    /**
     * <p>The name of the domain you want to describe.</p>
     */
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }

    /**
     * <p>The name of the domain you want to describe.</p>
     */
    inline void SetDomainName(const Aws::String& value) { m_domainNameHasBeenSet = true; m_domainName = value; }

    /**
     * <p>The name of the domain you want to describe.</p>
     */
    inline void SetDomainName(Aws::String&& value) { m_domainNameHasBeenSet = true; m_domainName = std::move(value); }

    /**
     * <p>The name of the domain you want to describe.</p>
     */
    inline void SetDomainName(const char* value) { m_domainNameHasBeenSet = true; m_domainName.assign(value); }

    /**
     * <p>The name of the domain you want to describe.</p>
     */
    inline DescribeSuggestersRequest& WithDomainName(const Aws::String& value) { SetDomainName(value); return *this;}

    /**
     * <p>The name of the domain you want to describe.</p>
     */
    inline DescribeSuggestersRequest& WithDomainName(Aws::String&& value) { SetDomainName(std::move(value)); return *this;}

    /**
     * <p>The name of the domain you want to describe.</p>
     */
    inline DescribeSuggestersRequest& WithDomainName(const char* value) { SetDomainName(value); return *this;}


    /**
     * <p>The suggesters you want to describe.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSuggesterNames() const{ return m_suggesterNames; }

    /**
     * <p>The suggesters you want to describe.</p>
     */
    inline bool SuggesterNamesHasBeenSet() const { return m_suggesterNamesHasBeenSet; }

    /**
     * <p>The suggesters you want to describe.</p>
     */
    inline void SetSuggesterNames(const Aws::Vector<Aws::String>& value) { m_suggesterNamesHasBeenSet = true; m_suggesterNames = value; }

    /**
     * <p>The suggesters you want to describe.</p>
     */
    inline void SetSuggesterNames(Aws::Vector<Aws::String>&& value) { m_suggesterNamesHasBeenSet = true; m_suggesterNames = std::move(value); }

    /**
     * <p>The suggesters you want to describe.</p>
     */
    inline DescribeSuggestersRequest& WithSuggesterNames(const Aws::Vector<Aws::String>& value) { SetSuggesterNames(value); return *this;}

    /**
     * <p>The suggesters you want to describe.</p>
     */
    inline DescribeSuggestersRequest& WithSuggesterNames(Aws::Vector<Aws::String>&& value) { SetSuggesterNames(std::move(value)); return *this;}

    /**
     * <p>The suggesters you want to describe.</p>
     */
    inline DescribeSuggestersRequest& AddSuggesterNames(const Aws::String& value) { m_suggesterNamesHasBeenSet = true; m_suggesterNames.push_back(value); return *this; }

    /**
     * <p>The suggesters you want to describe.</p>
     */
    inline DescribeSuggestersRequest& AddSuggesterNames(Aws::String&& value) { m_suggesterNamesHasBeenSet = true; m_suggesterNames.push_back(std::move(value)); return *this; }

    /**
     * <p>The suggesters you want to describe.</p>
     */
    inline DescribeSuggestersRequest& AddSuggesterNames(const char* value) { m_suggesterNamesHasBeenSet = true; m_suggesterNames.push_back(value); return *this; }


    /**
     * <p>Whether to display the deployed configuration (<code>true</code>) or include
     * any pending changes (<code>false</code>). Defaults to <code>false</code>.</p>
     */
    inline bool GetDeployed() const{ return m_deployed; }

    /**
     * <p>Whether to display the deployed configuration (<code>true</code>) or include
     * any pending changes (<code>false</code>). Defaults to <code>false</code>.</p>
     */
    inline bool DeployedHasBeenSet() const { return m_deployedHasBeenSet; }

    /**
     * <p>Whether to display the deployed configuration (<code>true</code>) or include
     * any pending changes (<code>false</code>). Defaults to <code>false</code>.</p>
     */
    inline void SetDeployed(bool value) { m_deployedHasBeenSet = true; m_deployed = value; }

    /**
     * <p>Whether to display the deployed configuration (<code>true</code>) or include
     * any pending changes (<code>false</code>). Defaults to <code>false</code>.</p>
     */
    inline DescribeSuggestersRequest& WithDeployed(bool value) { SetDeployed(value); return *this;}

  private:

    Aws::String m_domainName;
    bool m_domainNameHasBeenSet = false;

    Aws::Vector<Aws::String> m_suggesterNames;
    bool m_suggesterNamesHasBeenSet = false;

    bool m_deployed;
    bool m_deployedHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudSearch
} // namespace Aws
