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
  class AWS_CLOUDSEARCH_API DefineSuggesterRequest : public CloudSearchRequest
  {
  public:
    DefineSuggesterRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DefineSuggester"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

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
    bool m_domainNameHasBeenSet;

    Suggester m_suggester;
    bool m_suggesterHasBeenSet;
  };

} // namespace Model
} // namespace CloudSearch
} // namespace Aws
