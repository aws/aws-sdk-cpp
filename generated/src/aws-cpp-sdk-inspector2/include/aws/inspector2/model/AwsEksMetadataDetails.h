/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/inspector2/model/AwsEksWorkloadInfo.h>
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
   * <p>The metadata for an Amazon EKS pod where an Amazon ECR image is in
   * use.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/AwsEksMetadataDetails">AWS
   * API Reference</a></p>
   */
  class AwsEksMetadataDetails
  {
  public:
    AWS_INSPECTOR2_API AwsEksMetadataDetails() = default;
    AWS_INSPECTOR2_API AwsEksMetadataDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API AwsEksMetadataDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The namespace for an Amazon EKS cluster.</p>
     */
    inline const Aws::String& GetNamespace() const { return m_namespace; }
    inline bool NamespaceHasBeenSet() const { return m_namespaceHasBeenSet; }
    template<typename NamespaceT = Aws::String>
    void SetNamespace(NamespaceT&& value) { m_namespaceHasBeenSet = true; m_namespace = std::forward<NamespaceT>(value); }
    template<typename NamespaceT = Aws::String>
    AwsEksMetadataDetails& WithNamespace(NamespaceT&& value) { SetNamespace(std::forward<NamespaceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of workloads.</p>
     */
    inline const Aws::Vector<AwsEksWorkloadInfo>& GetWorkloadInfoList() const { return m_workloadInfoList; }
    inline bool WorkloadInfoListHasBeenSet() const { return m_workloadInfoListHasBeenSet; }
    template<typename WorkloadInfoListT = Aws::Vector<AwsEksWorkloadInfo>>
    void SetWorkloadInfoList(WorkloadInfoListT&& value) { m_workloadInfoListHasBeenSet = true; m_workloadInfoList = std::forward<WorkloadInfoListT>(value); }
    template<typename WorkloadInfoListT = Aws::Vector<AwsEksWorkloadInfo>>
    AwsEksMetadataDetails& WithWorkloadInfoList(WorkloadInfoListT&& value) { SetWorkloadInfoList(std::forward<WorkloadInfoListT>(value)); return *this;}
    template<typename WorkloadInfoListT = AwsEksWorkloadInfo>
    AwsEksMetadataDetails& AddWorkloadInfoList(WorkloadInfoListT&& value) { m_workloadInfoListHasBeenSet = true; m_workloadInfoList.emplace_back(std::forward<WorkloadInfoListT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_namespace;
    bool m_namespaceHasBeenSet = false;

    Aws::Vector<AwsEksWorkloadInfo> m_workloadInfoList;
    bool m_workloadInfoListHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
