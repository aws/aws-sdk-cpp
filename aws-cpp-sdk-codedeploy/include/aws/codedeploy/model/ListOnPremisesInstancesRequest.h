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
#include <aws/codedeploy/CodeDeploy_EXPORTS.h>
#include <aws/codedeploy/CodeDeployRequest.h>
#include <aws/codedeploy/model/RegistrationStatus.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codedeploy/model/TagFilter.h>
#include <utility>

namespace Aws
{
namespace CodeDeploy
{
namespace Model
{

  /**
   * <p>Represents the input of a ListOnPremisesInstances operation.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/ListOnPremisesInstancesInput">AWS
   * API Reference</a></p>
   */
  class AWS_CODEDEPLOY_API ListOnPremisesInstancesRequest : public CodeDeployRequest
  {
  public:
    ListOnPremisesInstancesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListOnPremisesInstances"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The registration status of the on-premises instances:</p> <ul> <li>
     * <p>Deregistered: Include deregistered on-premises instances in the resulting
     * list.</p> </li> <li> <p>Registered: Include registered on-premises instances in
     * the resulting list.</p> </li> </ul>
     */
    inline const RegistrationStatus& GetRegistrationStatus() const{ return m_registrationStatus; }

    /**
     * <p>The registration status of the on-premises instances:</p> <ul> <li>
     * <p>Deregistered: Include deregistered on-premises instances in the resulting
     * list.</p> </li> <li> <p>Registered: Include registered on-premises instances in
     * the resulting list.</p> </li> </ul>
     */
    inline bool RegistrationStatusHasBeenSet() const { return m_registrationStatusHasBeenSet; }

    /**
     * <p>The registration status of the on-premises instances:</p> <ul> <li>
     * <p>Deregistered: Include deregistered on-premises instances in the resulting
     * list.</p> </li> <li> <p>Registered: Include registered on-premises instances in
     * the resulting list.</p> </li> </ul>
     */
    inline void SetRegistrationStatus(const RegistrationStatus& value) { m_registrationStatusHasBeenSet = true; m_registrationStatus = value; }

    /**
     * <p>The registration status of the on-premises instances:</p> <ul> <li>
     * <p>Deregistered: Include deregistered on-premises instances in the resulting
     * list.</p> </li> <li> <p>Registered: Include registered on-premises instances in
     * the resulting list.</p> </li> </ul>
     */
    inline void SetRegistrationStatus(RegistrationStatus&& value) { m_registrationStatusHasBeenSet = true; m_registrationStatus = std::move(value); }

    /**
     * <p>The registration status of the on-premises instances:</p> <ul> <li>
     * <p>Deregistered: Include deregistered on-premises instances in the resulting
     * list.</p> </li> <li> <p>Registered: Include registered on-premises instances in
     * the resulting list.</p> </li> </ul>
     */
    inline ListOnPremisesInstancesRequest& WithRegistrationStatus(const RegistrationStatus& value) { SetRegistrationStatus(value); return *this;}

    /**
     * <p>The registration status of the on-premises instances:</p> <ul> <li>
     * <p>Deregistered: Include deregistered on-premises instances in the resulting
     * list.</p> </li> <li> <p>Registered: Include registered on-premises instances in
     * the resulting list.</p> </li> </ul>
     */
    inline ListOnPremisesInstancesRequest& WithRegistrationStatus(RegistrationStatus&& value) { SetRegistrationStatus(std::move(value)); return *this;}


    /**
     * <p>The on-premises instance tags that are used to restrict the on-premises
     * instance names returned.</p>
     */
    inline const Aws::Vector<TagFilter>& GetTagFilters() const{ return m_tagFilters; }

    /**
     * <p>The on-premises instance tags that are used to restrict the on-premises
     * instance names returned.</p>
     */
    inline bool TagFiltersHasBeenSet() const { return m_tagFiltersHasBeenSet; }

    /**
     * <p>The on-premises instance tags that are used to restrict the on-premises
     * instance names returned.</p>
     */
    inline void SetTagFilters(const Aws::Vector<TagFilter>& value) { m_tagFiltersHasBeenSet = true; m_tagFilters = value; }

    /**
     * <p>The on-premises instance tags that are used to restrict the on-premises
     * instance names returned.</p>
     */
    inline void SetTagFilters(Aws::Vector<TagFilter>&& value) { m_tagFiltersHasBeenSet = true; m_tagFilters = std::move(value); }

    /**
     * <p>The on-premises instance tags that are used to restrict the on-premises
     * instance names returned.</p>
     */
    inline ListOnPremisesInstancesRequest& WithTagFilters(const Aws::Vector<TagFilter>& value) { SetTagFilters(value); return *this;}

    /**
     * <p>The on-premises instance tags that are used to restrict the on-premises
     * instance names returned.</p>
     */
    inline ListOnPremisesInstancesRequest& WithTagFilters(Aws::Vector<TagFilter>&& value) { SetTagFilters(std::move(value)); return *this;}

    /**
     * <p>The on-premises instance tags that are used to restrict the on-premises
     * instance names returned.</p>
     */
    inline ListOnPremisesInstancesRequest& AddTagFilters(const TagFilter& value) { m_tagFiltersHasBeenSet = true; m_tagFilters.push_back(value); return *this; }

    /**
     * <p>The on-premises instance tags that are used to restrict the on-premises
     * instance names returned.</p>
     */
    inline ListOnPremisesInstancesRequest& AddTagFilters(TagFilter&& value) { m_tagFiltersHasBeenSet = true; m_tagFilters.push_back(std::move(value)); return *this; }


    /**
     * <p>An identifier returned from the previous list on-premises instances call. It
     * can be used to return the next set of on-premises instances in the list.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>An identifier returned from the previous list on-premises instances call. It
     * can be used to return the next set of on-premises instances in the list.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>An identifier returned from the previous list on-premises instances call. It
     * can be used to return the next set of on-premises instances in the list.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>An identifier returned from the previous list on-premises instances call. It
     * can be used to return the next set of on-premises instances in the list.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>An identifier returned from the previous list on-premises instances call. It
     * can be used to return the next set of on-premises instances in the list.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>An identifier returned from the previous list on-premises instances call. It
     * can be used to return the next set of on-premises instances in the list.</p>
     */
    inline ListOnPremisesInstancesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>An identifier returned from the previous list on-premises instances call. It
     * can be used to return the next set of on-premises instances in the list.</p>
     */
    inline ListOnPremisesInstancesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>An identifier returned from the previous list on-premises instances call. It
     * can be used to return the next set of on-premises instances in the list.</p>
     */
    inline ListOnPremisesInstancesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    RegistrationStatus m_registrationStatus;
    bool m_registrationStatusHasBeenSet;

    Aws::Vector<TagFilter> m_tagFilters;
    bool m_tagFiltersHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;
  };

} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
