/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eks/EKS_EXPORTS.h>
#include <aws/eks/model/ClusterIssueCode.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace EKS
{
namespace Model
{

  /**
   * <p>An issue with your Amazon EKS cluster.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/eks-2017-11-01/ClusterIssue">AWS
   * API Reference</a></p>
   */
  class ClusterIssue
  {
  public:
    AWS_EKS_API ClusterIssue() = default;
    AWS_EKS_API ClusterIssue(Aws::Utils::Json::JsonView jsonValue);
    AWS_EKS_API ClusterIssue& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EKS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The error code of the issue.</p>
     */
    inline ClusterIssueCode GetCode() const { return m_code; }
    inline bool CodeHasBeenSet() const { return m_codeHasBeenSet; }
    inline void SetCode(ClusterIssueCode value) { m_codeHasBeenSet = true; m_code = value; }
    inline ClusterIssue& WithCode(ClusterIssueCode value) { SetCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the issue.</p>
     */
    inline const Aws::String& GetMessage() const { return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    template<typename MessageT = Aws::String>
    void SetMessage(MessageT&& value) { m_messageHasBeenSet = true; m_message = std::forward<MessageT>(value); }
    template<typename MessageT = Aws::String>
    ClusterIssue& WithMessage(MessageT&& value) { SetMessage(std::forward<MessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The resource IDs that the issue relates to.</p>
     */
    inline const Aws::Vector<Aws::String>& GetResourceIds() const { return m_resourceIds; }
    inline bool ResourceIdsHasBeenSet() const { return m_resourceIdsHasBeenSet; }
    template<typename ResourceIdsT = Aws::Vector<Aws::String>>
    void SetResourceIds(ResourceIdsT&& value) { m_resourceIdsHasBeenSet = true; m_resourceIds = std::forward<ResourceIdsT>(value); }
    template<typename ResourceIdsT = Aws::Vector<Aws::String>>
    ClusterIssue& WithResourceIds(ResourceIdsT&& value) { SetResourceIds(std::forward<ResourceIdsT>(value)); return *this;}
    template<typename ResourceIdsT = Aws::String>
    ClusterIssue& AddResourceIds(ResourceIdsT&& value) { m_resourceIdsHasBeenSet = true; m_resourceIds.emplace_back(std::forward<ResourceIdsT>(value)); return *this; }
    ///@}
  private:

    ClusterIssueCode m_code{ClusterIssueCode::NOT_SET};
    bool m_codeHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    Aws::Vector<Aws::String> m_resourceIds;
    bool m_resourceIdsHasBeenSet = false;
  };

} // namespace Model
} // namespace EKS
} // namespace Aws
