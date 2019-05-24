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
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace CodeDeploy
{
namespace Model
{

  /**
   * <p>Represents the input of a BatchGetApplications operation.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/BatchGetApplicationsInput">AWS
   * API Reference</a></p>
   */
  class AWS_CODEDEPLOY_API BatchGetApplicationsRequest : public CodeDeployRequest
  {
  public:
    BatchGetApplicationsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchGetApplications"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>A list of application names separated by spaces. The maximum number of
     * application names you can specify is 25.</p>
     */
    inline const Aws::Vector<Aws::String>& GetApplicationNames() const{ return m_applicationNames; }

    /**
     * <p>A list of application names separated by spaces. The maximum number of
     * application names you can specify is 25.</p>
     */
    inline bool ApplicationNamesHasBeenSet() const { return m_applicationNamesHasBeenSet; }

    /**
     * <p>A list of application names separated by spaces. The maximum number of
     * application names you can specify is 25.</p>
     */
    inline void SetApplicationNames(const Aws::Vector<Aws::String>& value) { m_applicationNamesHasBeenSet = true; m_applicationNames = value; }

    /**
     * <p>A list of application names separated by spaces. The maximum number of
     * application names you can specify is 25.</p>
     */
    inline void SetApplicationNames(Aws::Vector<Aws::String>&& value) { m_applicationNamesHasBeenSet = true; m_applicationNames = std::move(value); }

    /**
     * <p>A list of application names separated by spaces. The maximum number of
     * application names you can specify is 25.</p>
     */
    inline BatchGetApplicationsRequest& WithApplicationNames(const Aws::Vector<Aws::String>& value) { SetApplicationNames(value); return *this;}

    /**
     * <p>A list of application names separated by spaces. The maximum number of
     * application names you can specify is 25.</p>
     */
    inline BatchGetApplicationsRequest& WithApplicationNames(Aws::Vector<Aws::String>&& value) { SetApplicationNames(std::move(value)); return *this;}

    /**
     * <p>A list of application names separated by spaces. The maximum number of
     * application names you can specify is 25.</p>
     */
    inline BatchGetApplicationsRequest& AddApplicationNames(const Aws::String& value) { m_applicationNamesHasBeenSet = true; m_applicationNames.push_back(value); return *this; }

    /**
     * <p>A list of application names separated by spaces. The maximum number of
     * application names you can specify is 25.</p>
     */
    inline BatchGetApplicationsRequest& AddApplicationNames(Aws::String&& value) { m_applicationNamesHasBeenSet = true; m_applicationNames.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of application names separated by spaces. The maximum number of
     * application names you can specify is 25.</p>
     */
    inline BatchGetApplicationsRequest& AddApplicationNames(const char* value) { m_applicationNamesHasBeenSet = true; m_applicationNames.push_back(value); return *this; }

  private:

    Aws::Vector<Aws::String> m_applicationNames;
    bool m_applicationNamesHasBeenSet;
  };

} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
