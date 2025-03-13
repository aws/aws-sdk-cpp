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
   * <p>Represents the input of a <code>BatchGetOnPremisesInstances</code>
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/BatchGetOnPremisesInstancesInput">AWS
   * API Reference</a></p>
   */
  class BatchGetOnPremisesInstancesRequest : public CodeDeployRequest
  {
  public:
    AWS_CODEDEPLOY_API BatchGetOnPremisesInstancesRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchGetOnPremisesInstances"; }

    AWS_CODEDEPLOY_API Aws::String SerializePayload() const override;

    AWS_CODEDEPLOY_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The names of the on-premises instances about which to get information. The
     * maximum number of instance names you can specify is 25.</p>
     */
    inline const Aws::Vector<Aws::String>& GetInstanceNames() const { return m_instanceNames; }
    inline bool InstanceNamesHasBeenSet() const { return m_instanceNamesHasBeenSet; }
    template<typename InstanceNamesT = Aws::Vector<Aws::String>>
    void SetInstanceNames(InstanceNamesT&& value) { m_instanceNamesHasBeenSet = true; m_instanceNames = std::forward<InstanceNamesT>(value); }
    template<typename InstanceNamesT = Aws::Vector<Aws::String>>
    BatchGetOnPremisesInstancesRequest& WithInstanceNames(InstanceNamesT&& value) { SetInstanceNames(std::forward<InstanceNamesT>(value)); return *this;}
    template<typename InstanceNamesT = Aws::String>
    BatchGetOnPremisesInstancesRequest& AddInstanceNames(InstanceNamesT&& value) { m_instanceNamesHasBeenSet = true; m_instanceNames.emplace_back(std::forward<InstanceNamesT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_instanceNames;
    bool m_instanceNamesHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
