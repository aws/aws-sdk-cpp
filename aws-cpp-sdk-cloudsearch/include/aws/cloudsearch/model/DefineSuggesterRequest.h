/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudsearch/CloudSearch_EXPORTS.h>
#include <aws/cloudsearch/CloudSearchRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cloudsearch/model/Suggester.h>
#include <utility>

namespace Aws
{
namespace CloudSearch
{
namespace Model
{

  /**
   * <p>Container for the parameters to the <code><a>DefineSuggester</a></code>
   * operation. Specifies the name of the domain you want to update and the suggester
   * configuration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudsearch-2013-01-01/DefineSuggesterRequest">AWS
   * API Reference</a></p>
   */
  class DefineSuggesterRequest : public CloudSearchRequest
  {
  public:
    AWS_CLOUDSEARCH_API DefineSuggesterRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DefineSuggester"; }

    AWS_CLOUDSEARCH_API Aws::String SerializePayload() const override;

  protected:
    AWS_CLOUDSEARCH_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    
    inline const Aws::String& GetDomainName() const{ return m_domainName; }

    
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }

    
    inline void SetDomainName(const Aws::String& value) { m_domainNameHasBeenSet = true; m_domainName = value; }

    
    inline void SetDomainName(Aws::String&& value) { m_domainNameHasBeenSet = true; m_domainName = std::move(value); }

    
    inline void SetDomainName(const char* value) { m_domainNameHasBeenSet = true; m_domainName.assign(value); }

    
    inline DefineSuggesterRequest& WithDomainName(const Aws::String& value) { SetDomainName(value); return *this;}

    
    inline DefineSuggesterRequest& WithDomainName(Aws::String&& value) { SetDomainName(std::move(value)); return *this;}

    
    inline DefineSuggesterRequest& WithDomainName(const char* value) { SetDomainName(value); return *this;}


    
    inline const Suggester& GetSuggester() const{ return m_suggester; }

    
    inline bool SuggesterHasBeenSet() const { return m_suggesterHasBeenSet; }

    
    inline void SetSuggester(const Suggester& value) { m_suggesterHasBeenSet = true; m_suggester = value; }

    
    inline void SetSuggester(Suggester&& value) { m_suggesterHasBeenSet = true; m_suggester = std::move(value); }

    
    inline DefineSuggesterRequest& WithSuggester(const Suggester& value) { SetSuggester(value); return *this;}

    
    inline DefineSuggesterRequest& WithSuggester(Suggester&& value) { SetSuggester(std::move(value)); return *this;}

  private:

    Aws::String m_domainName;
    bool m_domainNameHasBeenSet = false;

    Suggester m_suggester;
    bool m_suggesterHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudSearch
} // namespace Aws
