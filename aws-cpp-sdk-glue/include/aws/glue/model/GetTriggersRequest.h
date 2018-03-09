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
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/GlueRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Glue
{
namespace Model
{

  /**
   */
  class AWS_GLUE_API GetTriggersRequest : public GlueRequest
  {
  public:
    GetTriggersRequest();
    
    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetTriggers"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>A continuation token, if this is a continuation call.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A continuation token, if this is a continuation call.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>A continuation token, if this is a continuation call.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>A continuation token, if this is a continuation call.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>A continuation token, if this is a continuation call.</p>
     */
    inline GetTriggersRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A continuation token, if this is a continuation call.</p>
     */
    inline GetTriggersRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A continuation token, if this is a continuation call.</p>
     */
    inline GetTriggersRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The name of the job for which to retrieve triggers. The trigger that can
     * start this job will be returned, and if there is no such trigger, all triggers
     * will be returned.</p>
     */
    inline const Aws::String& GetDependentJobName() const{ return m_dependentJobName; }

    /**
     * <p>The name of the job for which to retrieve triggers. The trigger that can
     * start this job will be returned, and if there is no such trigger, all triggers
     * will be returned.</p>
     */
    inline void SetDependentJobName(const Aws::String& value) { m_dependentJobNameHasBeenSet = true; m_dependentJobName = value; }

    /**
     * <p>The name of the job for which to retrieve triggers. The trigger that can
     * start this job will be returned, and if there is no such trigger, all triggers
     * will be returned.</p>
     */
    inline void SetDependentJobName(Aws::String&& value) { m_dependentJobNameHasBeenSet = true; m_dependentJobName = std::move(value); }

    /**
     * <p>The name of the job for which to retrieve triggers. The trigger that can
     * start this job will be returned, and if there is no such trigger, all triggers
     * will be returned.</p>
     */
    inline void SetDependentJobName(const char* value) { m_dependentJobNameHasBeenSet = true; m_dependentJobName.assign(value); }

    /**
     * <p>The name of the job for which to retrieve triggers. The trigger that can
     * start this job will be returned, and if there is no such trigger, all triggers
     * will be returned.</p>
     */
    inline GetTriggersRequest& WithDependentJobName(const Aws::String& value) { SetDependentJobName(value); return *this;}

    /**
     * <p>The name of the job for which to retrieve triggers. The trigger that can
     * start this job will be returned, and if there is no such trigger, all triggers
     * will be returned.</p>
     */
    inline GetTriggersRequest& WithDependentJobName(Aws::String&& value) { SetDependentJobName(std::move(value)); return *this;}

    /**
     * <p>The name of the job for which to retrieve triggers. The trigger that can
     * start this job will be returned, and if there is no such trigger, all triggers
     * will be returned.</p>
     */
    inline GetTriggersRequest& WithDependentJobName(const char* value) { SetDependentJobName(value); return *this;}


    /**
     * <p>The maximum size of the response.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum size of the response.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum size of the response.</p>
     */
    inline GetTriggersRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}

  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;

    Aws::String m_dependentJobName;
    bool m_dependentJobNameHasBeenSet;

    int m_maxResults;
    bool m_maxResultsHasBeenSet;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
