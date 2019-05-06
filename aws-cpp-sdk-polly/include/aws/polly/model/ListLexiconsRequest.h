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
#include <aws/polly/Polly_EXPORTS.h>
#include <aws/polly/PollyRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace Polly
{
namespace Model
{

  /**
   */
  class AWS_POLLY_API ListLexiconsRequest : public PollyRequest
  {
  public:
    ListLexiconsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListLexicons"; }

    Aws::String SerializePayload() const override;

    void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>An opaque pagination token returned from previous <code>ListLexicons</code>
     * operation. If present, indicates where to continue the list of lexicons.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>An opaque pagination token returned from previous <code>ListLexicons</code>
     * operation. If present, indicates where to continue the list of lexicons.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>An opaque pagination token returned from previous <code>ListLexicons</code>
     * operation. If present, indicates where to continue the list of lexicons.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>An opaque pagination token returned from previous <code>ListLexicons</code>
     * operation. If present, indicates where to continue the list of lexicons.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>An opaque pagination token returned from previous <code>ListLexicons</code>
     * operation. If present, indicates where to continue the list of lexicons.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>An opaque pagination token returned from previous <code>ListLexicons</code>
     * operation. If present, indicates where to continue the list of lexicons.</p>
     */
    inline ListLexiconsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>An opaque pagination token returned from previous <code>ListLexicons</code>
     * operation. If present, indicates where to continue the list of lexicons.</p>
     */
    inline ListLexiconsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>An opaque pagination token returned from previous <code>ListLexicons</code>
     * operation. If present, indicates where to continue the list of lexicons.</p>
     */
    inline ListLexiconsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;
  };

} // namespace Model
} // namespace Polly
} // namespace Aws
