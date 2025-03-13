/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eks/EKS_EXPORTS.h>
#include <aws/eks/model/AddonIssueCode.h>
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
   * <p>An issue related to an add-on.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/eks-2017-11-01/AddonIssue">AWS API
   * Reference</a></p>
   */
  class AddonIssue
  {
  public:
    AWS_EKS_API AddonIssue() = default;
    AWS_EKS_API AddonIssue(Aws::Utils::Json::JsonView jsonValue);
    AWS_EKS_API AddonIssue& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EKS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A code that describes the type of issue.</p>
     */
    inline AddonIssueCode GetCode() const { return m_code; }
    inline bool CodeHasBeenSet() const { return m_codeHasBeenSet; }
    inline void SetCode(AddonIssueCode value) { m_codeHasBeenSet = true; m_code = value; }
    inline AddonIssue& WithCode(AddonIssueCode value) { SetCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A message that provides details about the issue and what might cause it.</p>
     */
    inline const Aws::String& GetMessage() const { return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    template<typename MessageT = Aws::String>
    void SetMessage(MessageT&& value) { m_messageHasBeenSet = true; m_message = std::forward<MessageT>(value); }
    template<typename MessageT = Aws::String>
    AddonIssue& WithMessage(MessageT&& value) { SetMessage(std::forward<MessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The resource IDs of the issue.</p>
     */
    inline const Aws::Vector<Aws::String>& GetResourceIds() const { return m_resourceIds; }
    inline bool ResourceIdsHasBeenSet() const { return m_resourceIdsHasBeenSet; }
    template<typename ResourceIdsT = Aws::Vector<Aws::String>>
    void SetResourceIds(ResourceIdsT&& value) { m_resourceIdsHasBeenSet = true; m_resourceIds = std::forward<ResourceIdsT>(value); }
    template<typename ResourceIdsT = Aws::Vector<Aws::String>>
    AddonIssue& WithResourceIds(ResourceIdsT&& value) { SetResourceIds(std::forward<ResourceIdsT>(value)); return *this;}
    template<typename ResourceIdsT = Aws::String>
    AddonIssue& AddResourceIds(ResourceIdsT&& value) { m_resourceIdsHasBeenSet = true; m_resourceIds.emplace_back(std::forward<ResourceIdsT>(value)); return *this; }
    ///@}
  private:

    AddonIssueCode m_code{AddonIssueCode::NOT_SET};
    bool m_codeHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    Aws::Vector<Aws::String> m_resourceIds;
    bool m_resourceIdsHasBeenSet = false;
  };

} // namespace Model
} // namespace EKS
} // namespace Aws
