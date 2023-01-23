/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
   * <p>Represents the input of a <code>BatchGetApplications</code>
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/BatchGetApplicationsInput">AWS
   * API Reference</a></p>
   */
  class BatchGetApplicationsRequest : public CodeDeployRequest
  {
  public:
    AWS_CODEDEPLOY_API BatchGetApplicationsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchGetApplications"; }

    AWS_CODEDEPLOY_API Aws::String SerializePayload() const override;

    AWS_CODEDEPLOY_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>A list of application names separated by spaces. The maximum number of
     * application names you can specify is 100.</p>
     */
    inline const Aws::Vector<Aws::String>& GetApplicationNames() const{ return m_applicationNames; }

    /**
     * <p>A list of application names separated by spaces. The maximum number of
     * application names you can specify is 100.</p>
     */
    inline bool ApplicationNamesHasBeenSet() const { return m_applicationNamesHasBeenSet; }

    /**
     * <p>A list of application names separated by spaces. The maximum number of
     * application names you can specify is 100.</p>
     */
    inline void SetApplicationNames(const Aws::Vector<Aws::String>& value) { m_applicationNamesHasBeenSet = true; m_applicationNames = value; }

    /**
     * <p>A list of application names separated by spaces. The maximum number of
     * application names you can specify is 100.</p>
     */
    inline void SetApplicationNames(Aws::Vector<Aws::String>&& value) { m_applicationNamesHasBeenSet = true; m_applicationNames = std::move(value); }

    /**
     * <p>A list of application names separated by spaces. The maximum number of
     * application names you can specify is 100.</p>
     */
    inline BatchGetApplicationsRequest& WithApplicationNames(const Aws::Vector<Aws::String>& value) { SetApplicationNames(value); return *this;}

    /**
     * <p>A list of application names separated by spaces. The maximum number of
     * application names you can specify is 100.</p>
     */
    inline BatchGetApplicationsRequest& WithApplicationNames(Aws::Vector<Aws::String>&& value) { SetApplicationNames(std::move(value)); return *this;}

    /**
     * <p>A list of application names separated by spaces. The maximum number of
     * application names you can specify is 100.</p>
     */
    inline BatchGetApplicationsRequest& AddApplicationNames(const Aws::String& value) { m_applicationNamesHasBeenSet = true; m_applicationNames.push_back(value); return *this; }

    /**
     * <p>A list of application names separated by spaces. The maximum number of
     * application names you can specify is 100.</p>
     */
    inline BatchGetApplicationsRequest& AddApplicationNames(Aws::String&& value) { m_applicationNamesHasBeenSet = true; m_applicationNames.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of application names separated by spaces. The maximum number of
     * application names you can specify is 100.</p>
     */
    inline BatchGetApplicationsRequest& AddApplicationNames(const char* value) { m_applicationNamesHasBeenSet = true; m_applicationNames.push_back(value); return *this; }

  private:

    Aws::Vector<Aws::String> m_applicationNames;
    bool m_applicationNamesHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
