﻿/**
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
    AWS_CLOUDSEARCHDOMAIN_API SuggestRequest();

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
    inline const Aws::String& GetQuery() const{ return m_query; }
    inline bool QueryHasBeenSet() const { return m_queryHasBeenSet; }
    inline void SetQuery(const Aws::String& value) { m_queryHasBeenSet = true; m_query = value; }
    inline void SetQuery(Aws::String&& value) { m_queryHasBeenSet = true; m_query = std::move(value); }
    inline void SetQuery(const char* value) { m_queryHasBeenSet = true; m_query.assign(value); }
    inline SuggestRequest& WithQuery(const Aws::String& value) { SetQuery(value); return *this;}
    inline SuggestRequest& WithQuery(Aws::String&& value) { SetQuery(std::move(value)); return *this;}
    inline SuggestRequest& WithQuery(const char* value) { SetQuery(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the name of the suggester to use to find suggested matches.</p>
     */
    inline const Aws::String& GetSuggester() const{ return m_suggester; }
    inline bool SuggesterHasBeenSet() const { return m_suggesterHasBeenSet; }
    inline void SetSuggester(const Aws::String& value) { m_suggesterHasBeenSet = true; m_suggester = value; }
    inline void SetSuggester(Aws::String&& value) { m_suggesterHasBeenSet = true; m_suggester = std::move(value); }
    inline void SetSuggester(const char* value) { m_suggesterHasBeenSet = true; m_suggester.assign(value); }
    inline SuggestRequest& WithSuggester(const Aws::String& value) { SetSuggester(value); return *this;}
    inline SuggestRequest& WithSuggester(Aws::String&& value) { SetSuggester(std::move(value)); return *this;}
    inline SuggestRequest& WithSuggester(const char* value) { SetSuggester(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the maximum number of suggestions to return. </p>
     */
    inline long long GetSize() const{ return m_size; }
    inline bool SizeHasBeenSet() const { return m_sizeHasBeenSet; }
    inline void SetSize(long long value) { m_sizeHasBeenSet = true; m_size = value; }
    inline SuggestRequest& WithSize(long long value) { SetSize(value); return *this;}
    ///@}
  private:

    Aws::String m_query;
    bool m_queryHasBeenSet = false;

    Aws::String m_suggester;
    bool m_suggesterHasBeenSet = false;

    long long m_size;
    bool m_sizeHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudSearchDomain
} // namespace Aws
