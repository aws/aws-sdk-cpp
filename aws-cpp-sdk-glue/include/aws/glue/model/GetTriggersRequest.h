/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class GetTriggersRequest : public GlueRequest
  {
  public:
    AWS_GLUE_API GetTriggersRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetTriggers"; }

    AWS_GLUE_API Aws::String SerializePayload() const override;

    AWS_GLUE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>A continuation token, if this is a continuation call.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A continuation token, if this is a continuation call.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

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
     * <p>The name of the job to retrieve triggers for. The trigger that can start this
     * job is returned, and if there is no such trigger, all triggers are returned.</p>
     */
    inline const Aws::String& GetDependentJobName() const{ return m_dependentJobName; }

    /**
     * <p>The name of the job to retrieve triggers for. The trigger that can start this
     * job is returned, and if there is no such trigger, all triggers are returned.</p>
     */
    inline bool DependentJobNameHasBeenSet() const { return m_dependentJobNameHasBeenSet; }

    /**
     * <p>The name of the job to retrieve triggers for. The trigger that can start this
     * job is returned, and if there is no such trigger, all triggers are returned.</p>
     */
    inline void SetDependentJobName(const Aws::String& value) { m_dependentJobNameHasBeenSet = true; m_dependentJobName = value; }

    /**
     * <p>The name of the job to retrieve triggers for. The trigger that can start this
     * job is returned, and if there is no such trigger, all triggers are returned.</p>
     */
    inline void SetDependentJobName(Aws::String&& value) { m_dependentJobNameHasBeenSet = true; m_dependentJobName = std::move(value); }

    /**
     * <p>The name of the job to retrieve triggers for. The trigger that can start this
     * job is returned, and if there is no such trigger, all triggers are returned.</p>
     */
    inline void SetDependentJobName(const char* value) { m_dependentJobNameHasBeenSet = true; m_dependentJobName.assign(value); }

    /**
     * <p>The name of the job to retrieve triggers for. The trigger that can start this
     * job is returned, and if there is no such trigger, all triggers are returned.</p>
     */
    inline GetTriggersRequest& WithDependentJobName(const Aws::String& value) { SetDependentJobName(value); return *this;}

    /**
     * <p>The name of the job to retrieve triggers for. The trigger that can start this
     * job is returned, and if there is no such trigger, all triggers are returned.</p>
     */
    inline GetTriggersRequest& WithDependentJobName(Aws::String&& value) { SetDependentJobName(std::move(value)); return *this;}

    /**
     * <p>The name of the job to retrieve triggers for. The trigger that can start this
     * job is returned, and if there is no such trigger, all triggers are returned.</p>
     */
    inline GetTriggersRequest& WithDependentJobName(const char* value) { SetDependentJobName(value); return *this;}


    /**
     * <p>The maximum size of the response.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum size of the response.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

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
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_dependentJobName;
    bool m_dependentJobNameHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
