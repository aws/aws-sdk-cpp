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
#include <aws/lex-models/LexModelBuildingService_EXPORTS.h>
#include <aws/lex-models/LexModelBuildingServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace LexModelBuildingService
{
namespace Model
{

  /**
   */
  class AWS_LEXMODELBUILDINGSERVICE_API GetIntentVersionsRequest : public LexModelBuildingServiceRequest
  {
  public:
    GetIntentVersionsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetIntentVersions"; }

    Aws::String SerializePayload() const override;

    void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The name of the intent for which versions should be returned.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the intent for which versions should be returned.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the intent for which versions should be returned.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the intent for which versions should be returned.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the intent for which versions should be returned.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the intent for which versions should be returned.</p>
     */
    inline GetIntentVersionsRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the intent for which versions should be returned.</p>
     */
    inline GetIntentVersionsRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the intent for which versions should be returned.</p>
     */
    inline GetIntentVersionsRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>A pagination token for fetching the next page of intent versions. If the
     * response to this call is truncated, Amazon Lex returns a pagination token in the
     * response. To fetch the next page of versions, specify the pagination token in
     * the next request. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A pagination token for fetching the next page of intent versions. If the
     * response to this call is truncated, Amazon Lex returns a pagination token in the
     * response. To fetch the next page of versions, specify the pagination token in
     * the next request. </p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>A pagination token for fetching the next page of intent versions. If the
     * response to this call is truncated, Amazon Lex returns a pagination token in the
     * response. To fetch the next page of versions, specify the pagination token in
     * the next request. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>A pagination token for fetching the next page of intent versions. If the
     * response to this call is truncated, Amazon Lex returns a pagination token in the
     * response. To fetch the next page of versions, specify the pagination token in
     * the next request. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>A pagination token for fetching the next page of intent versions. If the
     * response to this call is truncated, Amazon Lex returns a pagination token in the
     * response. To fetch the next page of versions, specify the pagination token in
     * the next request. </p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>A pagination token for fetching the next page of intent versions. If the
     * response to this call is truncated, Amazon Lex returns a pagination token in the
     * response. To fetch the next page of versions, specify the pagination token in
     * the next request. </p>
     */
    inline GetIntentVersionsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A pagination token for fetching the next page of intent versions. If the
     * response to this call is truncated, Amazon Lex returns a pagination token in the
     * response. To fetch the next page of versions, specify the pagination token in
     * the next request. </p>
     */
    inline GetIntentVersionsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A pagination token for fetching the next page of intent versions. If the
     * response to this call is truncated, Amazon Lex returns a pagination token in the
     * response. To fetch the next page of versions, specify the pagination token in
     * the next request. </p>
     */
    inline GetIntentVersionsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The maximum number of intent versions to return in the response. The default
     * is 10.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of intent versions to return in the response. The default
     * is 10.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of intent versions to return in the response. The default
     * is 10.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of intent versions to return in the response. The default
     * is 10.</p>
     */
    inline GetIntentVersionsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;

    int m_maxResults;
    bool m_maxResultsHasBeenSet;
  };

} // namespace Model
} // namespace LexModelBuildingService
} // namespace Aws
