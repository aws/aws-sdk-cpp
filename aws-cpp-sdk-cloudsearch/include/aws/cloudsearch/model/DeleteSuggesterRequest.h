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
#include <utility>

namespace Aws
{
namespace CloudSearch
{
namespace Model
{

  /**
   * <p>Container for the parameters to the <code><a>DeleteSuggester</a></code>
   * operation. Specifies the name of the domain you want to update and name of the
   * suggester you want to delete.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudsearch-2013-01-01/DeleteSuggesterRequest">AWS
   * API Reference</a></p>
   */
  class AWS_CLOUDSEARCH_API DeleteSuggesterRequest : public CloudSearchRequest
  {
  public:
    DeleteSuggesterRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteSuggester"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    
    inline const Aws::String& GetDomainName() const{ return m_domainName; }

    
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }

    
    inline void SetDomainName(const Aws::String& value) { m_domainNameHasBeenSet = true; m_domainName = value; }

    
    inline void SetDomainName(Aws::String&& value) { m_domainNameHasBeenSet = true; m_domainName = std::move(value); }

    
    inline void SetDomainName(const char* value) { m_domainNameHasBeenSet = true; m_domainName.assign(value); }

    
    inline DeleteSuggesterRequest& WithDomainName(const Aws::String& value) { SetDomainName(value); return *this;}

    
    inline DeleteSuggesterRequest& WithDomainName(Aws::String&& value) { SetDomainName(std::move(value)); return *this;}

    
    inline DeleteSuggesterRequest& WithDomainName(const char* value) { SetDomainName(value); return *this;}


    /**
     * <p>Specifies the name of the suggester you want to delete.</p>
     */
    inline const Aws::String& GetSuggesterName() const{ return m_suggesterName; }

    /**
     * <p>Specifies the name of the suggester you want to delete.</p>
     */
    inline bool SuggesterNameHasBeenSet() const { return m_suggesterNameHasBeenSet; }

    /**
     * <p>Specifies the name of the suggester you want to delete.</p>
     */
    inline void SetSuggesterName(const Aws::String& value) { m_suggesterNameHasBeenSet = true; m_suggesterName = value; }

    /**
     * <p>Specifies the name of the suggester you want to delete.</p>
     */
    inline void SetSuggesterName(Aws::String&& value) { m_suggesterNameHasBeenSet = true; m_suggesterName = std::move(value); }

    /**
     * <p>Specifies the name of the suggester you want to delete.</p>
     */
    inline void SetSuggesterName(const char* value) { m_suggesterNameHasBeenSet = true; m_suggesterName.assign(value); }

    /**
     * <p>Specifies the name of the suggester you want to delete.</p>
     */
    inline DeleteSuggesterRequest& WithSuggesterName(const Aws::String& value) { SetSuggesterName(value); return *this;}

    /**
     * <p>Specifies the name of the suggester you want to delete.</p>
     */
    inline DeleteSuggesterRequest& WithSuggesterName(Aws::String&& value) { SetSuggesterName(std::move(value)); return *this;}

    /**
     * <p>Specifies the name of the suggester you want to delete.</p>
     */
    inline DeleteSuggesterRequest& WithSuggesterName(const char* value) { SetSuggesterName(value); return *this;}

  private:

    Aws::String m_domainName;
    bool m_domainNameHasBeenSet;

    Aws::String m_suggesterName;
    bool m_suggesterNameHasBeenSet;
  };

} // namespace Model
} // namespace CloudSearch
} // namespace Aws
