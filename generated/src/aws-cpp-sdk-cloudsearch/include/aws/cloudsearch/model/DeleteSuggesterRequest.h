/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class DeleteSuggesterRequest : public CloudSearchRequest
  {
  public:
    AWS_CLOUDSEARCH_API DeleteSuggesterRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteSuggester"; }

    AWS_CLOUDSEARCH_API Aws::String SerializePayload() const override;

  protected:
    AWS_CLOUDSEARCH_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    
    inline const Aws::String& GetDomainName() const { return m_domainName; }
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }
    template<typename DomainNameT = Aws::String>
    void SetDomainName(DomainNameT&& value) { m_domainNameHasBeenSet = true; m_domainName = std::forward<DomainNameT>(value); }
    template<typename DomainNameT = Aws::String>
    DeleteSuggesterRequest& WithDomainName(DomainNameT&& value) { SetDomainName(std::forward<DomainNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the name of the suggester you want to delete.</p>
     */
    inline const Aws::String& GetSuggesterName() const { return m_suggesterName; }
    inline bool SuggesterNameHasBeenSet() const { return m_suggesterNameHasBeenSet; }
    template<typename SuggesterNameT = Aws::String>
    void SetSuggesterName(SuggesterNameT&& value) { m_suggesterNameHasBeenSet = true; m_suggesterName = std::forward<SuggesterNameT>(value); }
    template<typename SuggesterNameT = Aws::String>
    DeleteSuggesterRequest& WithSuggesterName(SuggesterNameT&& value) { SetSuggesterName(std::forward<SuggesterNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_domainName;
    bool m_domainNameHasBeenSet = false;

    Aws::String m_suggesterName;
    bool m_suggesterNameHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudSearch
} // namespace Aws
