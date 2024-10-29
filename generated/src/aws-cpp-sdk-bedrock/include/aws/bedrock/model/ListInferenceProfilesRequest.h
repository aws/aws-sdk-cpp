/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/bedrock/BedrockRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock/model/InferenceProfileType.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace Bedrock
{
namespace Model
{

  /**
   */
  class ListInferenceProfilesRequest : public BedrockRequest
  {
  public:
    AWS_BEDROCK_API ListInferenceProfilesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListInferenceProfiles"; }

    AWS_BEDROCK_API Aws::String SerializePayload() const override;

    AWS_BEDROCK_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The maximum number of results to return in the response. If the total number
     * of results is greater than this value, use the token returned in the response in
     * the <code>nextToken</code> field when making another request to return the next
     * batch of results.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListInferenceProfilesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the total number of results is greater than the <code>maxResults</code>
     * value provided in the request, enter the token returned in the
     * <code>nextToken</code> field in the response in this field to return the next
     * batch of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline ListInferenceProfilesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListInferenceProfilesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListInferenceProfilesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Filters for inference profiles that match the type you specify.</p> <ul> <li>
     * <p> <code>SYSTEM_DEFINED</code> – The inference profile is defined by Amazon
     * Bedrock. You can route inference requests across regions with these inference
     * profiles.</p> </li> <li> <p> <code>APPLICATION</code> – The inference profile
     * was created by a user. This type of inference profile can track metrics and
     * costs when invoking the model in it. The inference profile may route requests to
     * one or multiple regions.</p> </li> </ul>
     */
    inline const InferenceProfileType& GetTypeEquals() const{ return m_typeEquals; }
    inline bool TypeEqualsHasBeenSet() const { return m_typeEqualsHasBeenSet; }
    inline void SetTypeEquals(const InferenceProfileType& value) { m_typeEqualsHasBeenSet = true; m_typeEquals = value; }
    inline void SetTypeEquals(InferenceProfileType&& value) { m_typeEqualsHasBeenSet = true; m_typeEquals = std::move(value); }
    inline ListInferenceProfilesRequest& WithTypeEquals(const InferenceProfileType& value) { SetTypeEquals(value); return *this;}
    inline ListInferenceProfilesRequest& WithTypeEquals(InferenceProfileType&& value) { SetTypeEquals(std::move(value)); return *this;}
    ///@}
  private:

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    InferenceProfileType m_typeEquals;
    bool m_typeEqualsHasBeenSet = false;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
