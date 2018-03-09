﻿/*
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
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/mediaconvert/MediaConvertRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediaconvert/model/JobTemplateListBy.h>
#include <aws/mediaconvert/model/Order.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace MediaConvert
{
namespace Model
{

  /**
   */
  class AWS_MEDIACONVERT_API ListJobTemplatesRequest : public MediaConvertRequest
  {
  public:
    ListJobTemplatesRequest();
    
    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListJobTemplates"; }

    Aws::String SerializePayload() const override;

    void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * Optionally, specify a job template category to limit responses to only job
     * templates from that category.
     */
    inline const Aws::String& GetCategory() const{ return m_category; }

    /**
     * Optionally, specify a job template category to limit responses to only job
     * templates from that category.
     */
    inline void SetCategory(const Aws::String& value) { m_categoryHasBeenSet = true; m_category = value; }

    /**
     * Optionally, specify a job template category to limit responses to only job
     * templates from that category.
     */
    inline void SetCategory(Aws::String&& value) { m_categoryHasBeenSet = true; m_category = std::move(value); }

    /**
     * Optionally, specify a job template category to limit responses to only job
     * templates from that category.
     */
    inline void SetCategory(const char* value) { m_categoryHasBeenSet = true; m_category.assign(value); }

    /**
     * Optionally, specify a job template category to limit responses to only job
     * templates from that category.
     */
    inline ListJobTemplatesRequest& WithCategory(const Aws::String& value) { SetCategory(value); return *this;}

    /**
     * Optionally, specify a job template category to limit responses to only job
     * templates from that category.
     */
    inline ListJobTemplatesRequest& WithCategory(Aws::String&& value) { SetCategory(std::move(value)); return *this;}

    /**
     * Optionally, specify a job template category to limit responses to only job
     * templates from that category.
     */
    inline ListJobTemplatesRequest& WithCategory(const char* value) { SetCategory(value); return *this;}


    
    inline const JobTemplateListBy& GetListBy() const{ return m_listBy; }

    
    inline void SetListBy(const JobTemplateListBy& value) { m_listByHasBeenSet = true; m_listBy = value; }

    
    inline void SetListBy(JobTemplateListBy&& value) { m_listByHasBeenSet = true; m_listBy = std::move(value); }

    
    inline ListJobTemplatesRequest& WithListBy(const JobTemplateListBy& value) { SetListBy(value); return *this;}

    
    inline ListJobTemplatesRequest& WithListBy(JobTemplateListBy&& value) { SetListBy(std::move(value)); return *this;}


    /**
     * Optional. Number of job templates, up to twenty, that will be returned at one
     * time.
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * Optional. Number of job templates, up to twenty, that will be returned at one
     * time.
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * Optional. Number of job templates, up to twenty, that will be returned at one
     * time.
     */
    inline ListJobTemplatesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * Use this string, provided with the response to a previous request, to request
     * the next batch of job templates.
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * Use this string, provided with the response to a previous request, to request
     * the next batch of job templates.
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * Use this string, provided with the response to a previous request, to request
     * the next batch of job templates.
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * Use this string, provided with the response to a previous request, to request
     * the next batch of job templates.
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * Use this string, provided with the response to a previous request, to request
     * the next batch of job templates.
     */
    inline ListJobTemplatesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * Use this string, provided with the response to a previous request, to request
     * the next batch of job templates.
     */
    inline ListJobTemplatesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * Use this string, provided with the response to a previous request, to request
     * the next batch of job templates.
     */
    inline ListJobTemplatesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Order& GetOrder() const{ return m_order; }

    
    inline void SetOrder(const Order& value) { m_orderHasBeenSet = true; m_order = value; }

    
    inline void SetOrder(Order&& value) { m_orderHasBeenSet = true; m_order = std::move(value); }

    
    inline ListJobTemplatesRequest& WithOrder(const Order& value) { SetOrder(value); return *this;}

    
    inline ListJobTemplatesRequest& WithOrder(Order&& value) { SetOrder(std::move(value)); return *this;}

  private:

    Aws::String m_category;
    bool m_categoryHasBeenSet;

    JobTemplateListBy m_listBy;
    bool m_listByHasBeenSet;

    int m_maxResults;
    bool m_maxResultsHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;

    Order m_order;
    bool m_orderHasBeenSet;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
