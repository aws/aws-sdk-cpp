/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rekognition/Rekognition_EXPORTS.h>
#include <aws/rekognition/RekognitionRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace Rekognition
{
namespace Model
{

  /**
   */
  class DescribeProjectsRequest : public RekognitionRequest
  {
  public:
    AWS_REKOGNITION_API DescribeProjectsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeProjects"; }

    AWS_REKOGNITION_API Aws::String SerializePayload() const override;

    AWS_REKOGNITION_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>If the previous response was incomplete (because there is more results to
     * retrieve), Amazon Rekognition Custom Labels returns a pagination token in the
     * response. You can use this pagination token to retrieve the next set of results.
     * </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If the previous response was incomplete (because there is more results to
     * retrieve), Amazon Rekognition Custom Labels returns a pagination token in the
     * response. You can use this pagination token to retrieve the next set of results.
     * </p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>If the previous response was incomplete (because there is more results to
     * retrieve), Amazon Rekognition Custom Labels returns a pagination token in the
     * response. You can use this pagination token to retrieve the next set of results.
     * </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>If the previous response was incomplete (because there is more results to
     * retrieve), Amazon Rekognition Custom Labels returns a pagination token in the
     * response. You can use this pagination token to retrieve the next set of results.
     * </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>If the previous response was incomplete (because there is more results to
     * retrieve), Amazon Rekognition Custom Labels returns a pagination token in the
     * response. You can use this pagination token to retrieve the next set of results.
     * </p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>If the previous response was incomplete (because there is more results to
     * retrieve), Amazon Rekognition Custom Labels returns a pagination token in the
     * response. You can use this pagination token to retrieve the next set of results.
     * </p>
     */
    inline DescribeProjectsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If the previous response was incomplete (because there is more results to
     * retrieve), Amazon Rekognition Custom Labels returns a pagination token in the
     * response. You can use this pagination token to retrieve the next set of results.
     * </p>
     */
    inline DescribeProjectsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If the previous response was incomplete (because there is more results to
     * retrieve), Amazon Rekognition Custom Labels returns a pagination token in the
     * response. You can use this pagination token to retrieve the next set of results.
     * </p>
     */
    inline DescribeProjectsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The maximum number of results to return per paginated call. The largest value
     * you can specify is 100. If you specify a value greater than 100, a
     * ValidationException error occurs. The default value is 100. </p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of results to return per paginated call. The largest value
     * you can specify is 100. If you specify a value greater than 100, a
     * ValidationException error occurs. The default value is 100. </p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of results to return per paginated call. The largest value
     * you can specify is 100. If you specify a value greater than 100, a
     * ValidationException error occurs. The default value is 100. </p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of results to return per paginated call. The largest value
     * you can specify is 100. If you specify a value greater than 100, a
     * ValidationException error occurs. The default value is 100. </p>
     */
    inline DescribeProjectsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>A list of the projects that you want Amazon Rekognition Custom Labels to
     * describe. If you don't specify a value, the response includes descriptions for
     * all the projects in your AWS account.</p>
     */
    inline const Aws::Vector<Aws::String>& GetProjectNames() const{ return m_projectNames; }

    /**
     * <p>A list of the projects that you want Amazon Rekognition Custom Labels to
     * describe. If you don't specify a value, the response includes descriptions for
     * all the projects in your AWS account.</p>
     */
    inline bool ProjectNamesHasBeenSet() const { return m_projectNamesHasBeenSet; }

    /**
     * <p>A list of the projects that you want Amazon Rekognition Custom Labels to
     * describe. If you don't specify a value, the response includes descriptions for
     * all the projects in your AWS account.</p>
     */
    inline void SetProjectNames(const Aws::Vector<Aws::String>& value) { m_projectNamesHasBeenSet = true; m_projectNames = value; }

    /**
     * <p>A list of the projects that you want Amazon Rekognition Custom Labels to
     * describe. If you don't specify a value, the response includes descriptions for
     * all the projects in your AWS account.</p>
     */
    inline void SetProjectNames(Aws::Vector<Aws::String>&& value) { m_projectNamesHasBeenSet = true; m_projectNames = std::move(value); }

    /**
     * <p>A list of the projects that you want Amazon Rekognition Custom Labels to
     * describe. If you don't specify a value, the response includes descriptions for
     * all the projects in your AWS account.</p>
     */
    inline DescribeProjectsRequest& WithProjectNames(const Aws::Vector<Aws::String>& value) { SetProjectNames(value); return *this;}

    /**
     * <p>A list of the projects that you want Amazon Rekognition Custom Labels to
     * describe. If you don't specify a value, the response includes descriptions for
     * all the projects in your AWS account.</p>
     */
    inline DescribeProjectsRequest& WithProjectNames(Aws::Vector<Aws::String>&& value) { SetProjectNames(std::move(value)); return *this;}

    /**
     * <p>A list of the projects that you want Amazon Rekognition Custom Labels to
     * describe. If you don't specify a value, the response includes descriptions for
     * all the projects in your AWS account.</p>
     */
    inline DescribeProjectsRequest& AddProjectNames(const Aws::String& value) { m_projectNamesHasBeenSet = true; m_projectNames.push_back(value); return *this; }

    /**
     * <p>A list of the projects that you want Amazon Rekognition Custom Labels to
     * describe. If you don't specify a value, the response includes descriptions for
     * all the projects in your AWS account.</p>
     */
    inline DescribeProjectsRequest& AddProjectNames(Aws::String&& value) { m_projectNamesHasBeenSet = true; m_projectNames.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of the projects that you want Amazon Rekognition Custom Labels to
     * describe. If you don't specify a value, the response includes descriptions for
     * all the projects in your AWS account.</p>
     */
    inline DescribeProjectsRequest& AddProjectNames(const char* value) { m_projectNamesHasBeenSet = true; m_projectNames.push_back(value); return *this; }

  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::Vector<Aws::String> m_projectNames;
    bool m_projectNamesHasBeenSet = false;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
