/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/macie2/Macie2_EXPORTS.h>
#include <aws/macie2/Macie2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace Macie2
{
namespace Model
{

  /**
   */
  class ListClassificationScopesRequest : public Macie2Request
  {
  public:
    AWS_MACIE2_API ListClassificationScopesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListClassificationScopes"; }

    AWS_MACIE2_API Aws::String SerializePayload() const override;

    AWS_MACIE2_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The name of the classification scope to retrieve the unique identifier
     * for.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the classification scope to retrieve the unique identifier
     * for.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the classification scope to retrieve the unique identifier
     * for.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the classification scope to retrieve the unique identifier
     * for.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the classification scope to retrieve the unique identifier
     * for.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the classification scope to retrieve the unique identifier
     * for.</p>
     */
    inline ListClassificationScopesRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the classification scope to retrieve the unique identifier
     * for.</p>
     */
    inline ListClassificationScopesRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the classification scope to retrieve the unique identifier
     * for.</p>
     */
    inline ListClassificationScopesRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The nextToken string that specifies which page of results to return in a
     * paginated response.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The nextToken string that specifies which page of results to return in a
     * paginated response.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The nextToken string that specifies which page of results to return in a
     * paginated response.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The nextToken string that specifies which page of results to return in a
     * paginated response.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The nextToken string that specifies which page of results to return in a
     * paginated response.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The nextToken string that specifies which page of results to return in a
     * paginated response.</p>
     */
    inline ListClassificationScopesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The nextToken string that specifies which page of results to return in a
     * paginated response.</p>
     */
    inline ListClassificationScopesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The nextToken string that specifies which page of results to return in a
     * paginated response.</p>
     */
    inline ListClassificationScopesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
