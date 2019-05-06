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
#include <aws/email/SES_EXPORTS.h>
#include <aws/email/SESRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace SES
{
namespace Model
{

  /**
   * <p>Represents a request to list the existing custom verification email templates
   * for your account.</p> <p>For more information about custom verification email
   * templates, see <a
   * href="ses/latest/DeveloperGuide/custom-verification-emails.html">Using Custom
   * Verification Email Templates</a> in the <i>Amazon SES Developer
   * Guide</i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/ListCustomVerificationEmailTemplatesRequest">AWS
   * API Reference</a></p>
   */
  class AWS_SES_API ListCustomVerificationEmailTemplatesRequest : public SESRequest
  {
  public:
    ListCustomVerificationEmailTemplatesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListCustomVerificationEmailTemplates"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>An array the contains the name and creation time stamp for each template in
     * your Amazon SES account.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>An array the contains the name and creation time stamp for each template in
     * your Amazon SES account.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>An array the contains the name and creation time stamp for each template in
     * your Amazon SES account.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>An array the contains the name and creation time stamp for each template in
     * your Amazon SES account.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>An array the contains the name and creation time stamp for each template in
     * your Amazon SES account.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>An array the contains the name and creation time stamp for each template in
     * your Amazon SES account.</p>
     */
    inline ListCustomVerificationEmailTemplatesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>An array the contains the name and creation time stamp for each template in
     * your Amazon SES account.</p>
     */
    inline ListCustomVerificationEmailTemplatesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>An array the contains the name and creation time stamp for each template in
     * your Amazon SES account.</p>
     */
    inline ListCustomVerificationEmailTemplatesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The maximum number of custom verification email templates to return. This
     * value must be at least 1 and less than or equal to 50. If you do not specify a
     * value, or if you specify a value less than 1 or greater than 50, the operation
     * will return up to 50 results.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of custom verification email templates to return. This
     * value must be at least 1 and less than or equal to 50. If you do not specify a
     * value, or if you specify a value less than 1 or greater than 50, the operation
     * will return up to 50 results.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of custom verification email templates to return. This
     * value must be at least 1 and less than or equal to 50. If you do not specify a
     * value, or if you specify a value less than 1 or greater than 50, the operation
     * will return up to 50 results.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of custom verification email templates to return. This
     * value must be at least 1 and less than or equal to 50. If you do not specify a
     * value, or if you specify a value less than 1 or greater than 50, the operation
     * will return up to 50 results.</p>
     */
    inline ListCustomVerificationEmailTemplatesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}

  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;

    int m_maxResults;
    bool m_maxResultsHasBeenSet;
  };

} // namespace Model
} // namespace SES
} // namespace Aws
