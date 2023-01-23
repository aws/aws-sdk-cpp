/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codedeploy/CodeDeploy_EXPORTS.h>
#include <aws/codedeploy/CodeDeployRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace CodeDeploy
{
namespace Model
{

  /**
   * <p>Represents the input of a <code>ListDeploymentConfigs</code>
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/ListDeploymentConfigsInput">AWS
   * API Reference</a></p>
   */
  class ListDeploymentConfigsRequest : public CodeDeployRequest
  {
  public:
    AWS_CODEDEPLOY_API ListDeploymentConfigsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListDeploymentConfigs"; }

    AWS_CODEDEPLOY_API Aws::String SerializePayload() const override;

    AWS_CODEDEPLOY_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>An identifier returned from the previous <code>ListDeploymentConfigs</code>
     * call. It can be used to return the next set of deployment configurations in the
     * list. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>An identifier returned from the previous <code>ListDeploymentConfigs</code>
     * call. It can be used to return the next set of deployment configurations in the
     * list. </p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>An identifier returned from the previous <code>ListDeploymentConfigs</code>
     * call. It can be used to return the next set of deployment configurations in the
     * list. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>An identifier returned from the previous <code>ListDeploymentConfigs</code>
     * call. It can be used to return the next set of deployment configurations in the
     * list. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>An identifier returned from the previous <code>ListDeploymentConfigs</code>
     * call. It can be used to return the next set of deployment configurations in the
     * list. </p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>An identifier returned from the previous <code>ListDeploymentConfigs</code>
     * call. It can be used to return the next set of deployment configurations in the
     * list. </p>
     */
    inline ListDeploymentConfigsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>An identifier returned from the previous <code>ListDeploymentConfigs</code>
     * call. It can be used to return the next set of deployment configurations in the
     * list. </p>
     */
    inline ListDeploymentConfigsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>An identifier returned from the previous <code>ListDeploymentConfigs</code>
     * call. It can be used to return the next set of deployment configurations in the
     * list. </p>
     */
    inline ListDeploymentConfigsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
