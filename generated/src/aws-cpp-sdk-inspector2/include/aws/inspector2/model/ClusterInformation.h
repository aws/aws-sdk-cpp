/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/inspector2/model/ClusterDetails.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Inspector2
{
namespace Model
{

  /**
   * <p>Information about the cluster.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/ClusterInformation">AWS
   * API Reference</a></p>
   */
  class ClusterInformation
  {
  public:
    AWS_INSPECTOR2_API ClusterInformation() = default;
    AWS_INSPECTOR2_API ClusterInformation(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API ClusterInformation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The cluster ARN.</p>
     */
    inline const Aws::String& GetClusterArn() const { return m_clusterArn; }
    inline bool ClusterArnHasBeenSet() const { return m_clusterArnHasBeenSet; }
    template<typename ClusterArnT = Aws::String>
    void SetClusterArn(ClusterArnT&& value) { m_clusterArnHasBeenSet = true; m_clusterArn = std::forward<ClusterArnT>(value); }
    template<typename ClusterArnT = Aws::String>
    ClusterInformation& WithClusterArn(ClusterArnT&& value) { SetClusterArn(std::forward<ClusterArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about the cluster.</p>
     */
    inline const Aws::Vector<ClusterDetails>& GetClusterDetails() const { return m_clusterDetails; }
    inline bool ClusterDetailsHasBeenSet() const { return m_clusterDetailsHasBeenSet; }
    template<typename ClusterDetailsT = Aws::Vector<ClusterDetails>>
    void SetClusterDetails(ClusterDetailsT&& value) { m_clusterDetailsHasBeenSet = true; m_clusterDetails = std::forward<ClusterDetailsT>(value); }
    template<typename ClusterDetailsT = Aws::Vector<ClusterDetails>>
    ClusterInformation& WithClusterDetails(ClusterDetailsT&& value) { SetClusterDetails(std::forward<ClusterDetailsT>(value)); return *this;}
    template<typename ClusterDetailsT = ClusterDetails>
    ClusterInformation& AddClusterDetails(ClusterDetailsT&& value) { m_clusterDetailsHasBeenSet = true; m_clusterDetails.emplace_back(std::forward<ClusterDetailsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_clusterArn;
    bool m_clusterArnHasBeenSet = false;

    Aws::Vector<ClusterDetails> m_clusterDetails;
    bool m_clusterDetailsHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
