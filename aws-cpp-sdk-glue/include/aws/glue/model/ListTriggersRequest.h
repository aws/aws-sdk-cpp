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
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/GlueRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
namespace Glue
{
namespace Model
{

  /**
   */
  class AWS_GLUE_API ListTriggersRequest : public GlueRequest
  {
  public:
    ListTriggersRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListTriggers"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>A continuation token, if this is a continuation request.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A continuation token, if this is a continuation request.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>A continuation token, if this is a continuation request.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>A continuation token, if this is a continuation request.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>A continuation token, if this is a continuation request.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>A continuation token, if this is a continuation request.</p>
     */
    inline ListTriggersRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A continuation token, if this is a continuation request.</p>
     */
    inline ListTriggersRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A continuation token, if this is a continuation request.</p>
     */
    inline ListTriggersRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p> The name of the job for which to retrieve triggers. The trigger that can
     * start this job is returned. If there is no such trigger, all triggers are
     * returned.</p>
     */
    inline const Aws::String& GetDependentJobName() const{ return m_dependentJobName; }

    /**
     * <p> The name of the job for which to retrieve triggers. The trigger that can
     * start this job is returned. If there is no such trigger, all triggers are
     * returned.</p>
     */
    inline bool DependentJobNameHasBeenSet() const { return m_dependentJobNameHasBeenSet; }

    /**
     * <p> The name of the job for which to retrieve triggers. The trigger that can
     * start this job is returned. If there is no such trigger, all triggers are
     * returned.</p>
     */
    inline void SetDependentJobName(const Aws::String& value) { m_dependentJobNameHasBeenSet = true; m_dependentJobName = value; }

    /**
     * <p> The name of the job for which to retrieve triggers. The trigger that can
     * start this job is returned. If there is no such trigger, all triggers are
     * returned.</p>
     */
    inline void SetDependentJobName(Aws::String&& value) { m_dependentJobNameHasBeenSet = true; m_dependentJobName = std::move(value); }

    /**
     * <p> The name of the job for which to retrieve triggers. The trigger that can
     * start this job is returned. If there is no such trigger, all triggers are
     * returned.</p>
     */
    inline void SetDependentJobName(const char* value) { m_dependentJobNameHasBeenSet = true; m_dependentJobName.assign(value); }

    /**
     * <p> The name of the job for which to retrieve triggers. The trigger that can
     * start this job is returned. If there is no such trigger, all triggers are
     * returned.</p>
     */
    inline ListTriggersRequest& WithDependentJobName(const Aws::String& value) { SetDependentJobName(value); return *this;}

    /**
     * <p> The name of the job for which to retrieve triggers. The trigger that can
     * start this job is returned. If there is no such trigger, all triggers are
     * returned.</p>
     */
    inline ListTriggersRequest& WithDependentJobName(Aws::String&& value) { SetDependentJobName(std::move(value)); return *this;}

    /**
     * <p> The name of the job for which to retrieve triggers. The trigger that can
     * start this job is returned. If there is no such trigger, all triggers are
     * returned.</p>
     */
    inline ListTriggersRequest& WithDependentJobName(const char* value) { SetDependentJobName(value); return *this;}


    /**
     * <p>The maximum size of a list to return.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum size of a list to return.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum size of a list to return.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum size of a list to return.</p>
     */
    inline ListTriggersRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>Specifies to return only these tagged resources.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>Specifies to return only these tagged resources.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>Specifies to return only these tagged resources.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>Specifies to return only these tagged resources.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>Specifies to return only these tagged resources.</p>
     */
    inline ListTriggersRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>Specifies to return only these tagged resources.</p>
     */
    inline ListTriggersRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Specifies to return only these tagged resources.</p>
     */
    inline ListTriggersRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>Specifies to return only these tagged resources.</p>
     */
    inline ListTriggersRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Specifies to return only these tagged resources.</p>
     */
    inline ListTriggersRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Specifies to return only these tagged resources.</p>
     */
    inline ListTriggersRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Specifies to return only these tagged resources.</p>
     */
    inline ListTriggersRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Specifies to return only these tagged resources.</p>
     */
    inline ListTriggersRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Specifies to return only these tagged resources.</p>
     */
    inline ListTriggersRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;

    Aws::String m_dependentJobName;
    bool m_dependentJobNameHasBeenSet;

    int m_maxResults;
    bool m_maxResultsHasBeenSet;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
