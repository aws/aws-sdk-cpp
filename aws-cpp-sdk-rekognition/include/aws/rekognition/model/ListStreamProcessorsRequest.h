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
#include <aws/rekognition/Rekognition_EXPORTS.h>
#include <aws/rekognition/RekognitionRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Rekognition
{
namespace Model
{

  /**
   */
  class AWS_REKOGNITION_API ListStreamProcessorsRequest : public RekognitionRequest
  {
  public:
    ListStreamProcessorsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListStreamProcessors"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>If the previous response was incomplete (because there are more stream
     * processors to retrieve), Amazon Rekognition Video returns a pagination token in
     * the response. You can use this pagination token to retrieve the next set of
     * stream processors. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If the previous response was incomplete (because there are more stream
     * processors to retrieve), Amazon Rekognition Video returns a pagination token in
     * the response. You can use this pagination token to retrieve the next set of
     * stream processors. </p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>If the previous response was incomplete (because there are more stream
     * processors to retrieve), Amazon Rekognition Video returns a pagination token in
     * the response. You can use this pagination token to retrieve the next set of
     * stream processors. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>If the previous response was incomplete (because there are more stream
     * processors to retrieve), Amazon Rekognition Video returns a pagination token in
     * the response. You can use this pagination token to retrieve the next set of
     * stream processors. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>If the previous response was incomplete (because there are more stream
     * processors to retrieve), Amazon Rekognition Video returns a pagination token in
     * the response. You can use this pagination token to retrieve the next set of
     * stream processors. </p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>If the previous response was incomplete (because there are more stream
     * processors to retrieve), Amazon Rekognition Video returns a pagination token in
     * the response. You can use this pagination token to retrieve the next set of
     * stream processors. </p>
     */
    inline ListStreamProcessorsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If the previous response was incomplete (because there are more stream
     * processors to retrieve), Amazon Rekognition Video returns a pagination token in
     * the response. You can use this pagination token to retrieve the next set of
     * stream processors. </p>
     */
    inline ListStreamProcessorsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If the previous response was incomplete (because there are more stream
     * processors to retrieve), Amazon Rekognition Video returns a pagination token in
     * the response. You can use this pagination token to retrieve the next set of
     * stream processors. </p>
     */
    inline ListStreamProcessorsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>Maximum number of stream processors you want Amazon Rekognition Video to
     * return in the response. The default is 1000. </p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>Maximum number of stream processors you want Amazon Rekognition Video to
     * return in the response. The default is 1000. </p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>Maximum number of stream processors you want Amazon Rekognition Video to
     * return in the response. The default is 1000. </p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>Maximum number of stream processors you want Amazon Rekognition Video to
     * return in the response. The default is 1000. </p>
     */
    inline ListStreamProcessorsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}

  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;

    int m_maxResults;
    bool m_maxResultsHasBeenSet;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
