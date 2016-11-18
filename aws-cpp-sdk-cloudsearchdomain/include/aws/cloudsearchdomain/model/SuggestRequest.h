/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/cloudsearchdomain/CloudSearchDomain_EXPORTS.h>
#include <aws/cloudsearchdomain/CloudSearchDomainRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>

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
   * <p>Container for the parameters to the <code>Suggest</code> request.</p>
   */
  class AWS_CLOUDSEARCHDOMAIN_API SuggestRequest : public CloudSearchDomainRequest
  {
  public:
    SuggestRequest();
    Aws::String SerializePayload() const override;

    void AddQueryStringParameters(Aws::Http::URI& uri) const override;

    /**
     * <p>Specifies the string for which you want to get suggestions.</p>
     */
    inline const Aws::String& GetQuery() const{ return m_query; }

    /**
     * <p>Specifies the string for which you want to get suggestions.</p>
     */
    inline void SetQuery(const Aws::String& value) { m_queryHasBeenSet = true; m_query = value; }

    /**
     * <p>Specifies the string for which you want to get suggestions.</p>
     */
    inline void SetQuery(Aws::String&& value) { m_queryHasBeenSet = true; m_query = value; }

    /**
     * <p>Specifies the string for which you want to get suggestions.</p>
     */
    inline void SetQuery(const char* value) { m_queryHasBeenSet = true; m_query.assign(value); }

    /**
     * <p>Specifies the string for which you want to get suggestions.</p>
     */
    inline SuggestRequest& WithQuery(const Aws::String& value) { SetQuery(value); return *this;}

    /**
     * <p>Specifies the string for which you want to get suggestions.</p>
     */
    inline SuggestRequest& WithQuery(Aws::String&& value) { SetQuery(value); return *this;}

    /**
     * <p>Specifies the string for which you want to get suggestions.</p>
     */
    inline SuggestRequest& WithQuery(const char* value) { SetQuery(value); return *this;}

    /**
     * <p>Specifies the name of the suggester to use to find suggested matches.</p>
     */
    inline const Aws::String& GetSuggester() const{ return m_suggester; }

    /**
     * <p>Specifies the name of the suggester to use to find suggested matches.</p>
     */
    inline void SetSuggester(const Aws::String& value) { m_suggesterHasBeenSet = true; m_suggester = value; }

    /**
     * <p>Specifies the name of the suggester to use to find suggested matches.</p>
     */
    inline void SetSuggester(Aws::String&& value) { m_suggesterHasBeenSet = true; m_suggester = value; }

    /**
     * <p>Specifies the name of the suggester to use to find suggested matches.</p>
     */
    inline void SetSuggester(const char* value) { m_suggesterHasBeenSet = true; m_suggester.assign(value); }

    /**
     * <p>Specifies the name of the suggester to use to find suggested matches.</p>
     */
    inline SuggestRequest& WithSuggester(const Aws::String& value) { SetSuggester(value); return *this;}

    /**
     * <p>Specifies the name of the suggester to use to find suggested matches.</p>
     */
    inline SuggestRequest& WithSuggester(Aws::String&& value) { SetSuggester(value); return *this;}

    /**
     * <p>Specifies the name of the suggester to use to find suggested matches.</p>
     */
    inline SuggestRequest& WithSuggester(const char* value) { SetSuggester(value); return *this;}

    /**
     * <p>Specifies the maximum number of suggestions to return. </p>
     */
    inline long long GetSize() const{ return m_size; }

    /**
     * <p>Specifies the maximum number of suggestions to return. </p>
     */
    inline void SetSize(long long value) { m_sizeHasBeenSet = true; m_size = value; }

    /**
     * <p>Specifies the maximum number of suggestions to return. </p>
     */
    inline SuggestRequest& WithSize(long long value) { SetSize(value); return *this;}

  private:
    Aws::String m_query;
    bool m_queryHasBeenSet;
    Aws::String m_suggester;
    bool m_suggesterHasBeenSet;
    long long m_size;
    bool m_sizeHasBeenSet;
  };

} // namespace Model
} // namespace CloudSearchDomain
} // namespace Aws
