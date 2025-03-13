/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudsearchdomain/CloudSearchDomain_EXPORTS.h>
#include <aws/cloudsearchdomain/CloudSearchDomainRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace CloudSearchDomain
{
namespace Model
{

  /**
   * <p>Container for the parameters to the <code>Suggest</code>
   * request.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudsearchdomain-2013-01-01/SuggestRequest">AWS
   * API Reference</a></p>
   */
  class SuggestRequest : public CloudSearchDomainRequest
  {
  public:
    AWS_CLOUDSEARCHDOMAIN_API SuggestRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "Suggest"; }

    AWS_CLOUDSEARCHDOMAIN_API Aws::String SerializePayload() const override;

    AWS_CLOUDSEARCHDOMAIN_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>Specifies the string for which you want to get suggestions.</p>
     */
    inline const Aws::String& GetQuery() const { return m_query; }
    inline bool QueryHasBeenSet() const { return m_queryHasBeenSet; }
    template<typename QueryT = Aws::String>
    void SetQuery(QueryT&& value) { m_queryHasBeenSet = true; m_query = std::forward<QueryT>(value); }
    template<typename QueryT = Aws::String>
    SuggestRequest& WithQuery(QueryT&& value) { SetQuery(std::forward<QueryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the name of the suggester to use to find suggested matches.</p>
     */
    inline const Aws::String& GetSuggester() const { return m_suggester; }
    inline bool SuggesterHasBeenSet() const { return m_suggesterHasBeenSet; }
    template<typename SuggesterT = Aws::String>
    void SetSuggester(SuggesterT&& value) { m_suggesterHasBeenSet = true; m_suggester = std::forward<SuggesterT>(value); }
    template<typename SuggesterT = Aws::String>
    SuggestRequest& WithSuggester(SuggesterT&& value) { SetSuggester(std::forward<SuggesterT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the maximum number of suggestions to return. </p>
     */
    inline long long GetSize() const { return m_size; }
    inline bool SizeHasBeenSet() const { return m_sizeHasBeenSet; }
    inline void SetSize(long long value) { m_sizeHasBeenSet = true; m_size = value; }
    inline SuggestRequest& WithSize(long long value) { SetSize(value); return *this;}
    ///@}
  private:

    Aws::String m_query;
    bool m_queryHasBeenSet = false;

    Aws::String m_suggester;
    bool m_suggesterHasBeenSet = false;

    long long m_size{0};
    bool m_sizeHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudSearchDomain
} // namespace Aws
