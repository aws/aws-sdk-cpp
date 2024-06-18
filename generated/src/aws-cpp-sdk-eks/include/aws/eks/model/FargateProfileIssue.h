/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eks/EKS_EXPORTS.h>
#include <aws/eks/model/FargateProfileIssueCode.h>
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
   * <p>An issue that is associated with the Fargate profile.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/eks-2017-11-01/FargateProfileIssue">AWS
   * API Reference</a></p>
   */
  class FargateProfileIssue
  {
  public:
    AWS_EKS_API FargateProfileIssue();
    AWS_EKS_API FargateProfileIssue(Aws::Utils::Json::JsonView jsonValue);
    AWS_EKS_API FargateProfileIssue& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EKS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A brief description of the error.</p>
     */
    inline const FargateProfileIssueCode& GetCode() const{ return m_code; }
    inline bool CodeHasBeenSet() const { return m_codeHasBeenSet; }
    inline void SetCode(const FargateProfileIssueCode& value) { m_codeHasBeenSet = true; m_code = value; }
    inline void SetCode(FargateProfileIssueCode&& value) { m_codeHasBeenSet = true; m_code = std::move(value); }
    inline FargateProfileIssue& WithCode(const FargateProfileIssueCode& value) { SetCode(value); return *this;}
    inline FargateProfileIssue& WithCode(FargateProfileIssueCode&& value) { SetCode(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The error message associated with the issue.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }
    inline FargateProfileIssue& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}
    inline FargateProfileIssue& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}
    inline FargateProfileIssue& WithMessage(const char* value) { SetMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services resources that are affected by this issue.</p>
     */
    inline const Aws::Vector<Aws::String>& GetResourceIds() const{ return m_resourceIds; }
    inline bool ResourceIdsHasBeenSet() const { return m_resourceIdsHasBeenSet; }
    inline void SetResourceIds(const Aws::Vector<Aws::String>& value) { m_resourceIdsHasBeenSet = true; m_resourceIds = value; }
    inline void SetResourceIds(Aws::Vector<Aws::String>&& value) { m_resourceIdsHasBeenSet = true; m_resourceIds = std::move(value); }
    inline FargateProfileIssue& WithResourceIds(const Aws::Vector<Aws::String>& value) { SetResourceIds(value); return *this;}
    inline FargateProfileIssue& WithResourceIds(Aws::Vector<Aws::String>&& value) { SetResourceIds(std::move(value)); return *this;}
    inline FargateProfileIssue& AddResourceIds(const Aws::String& value) { m_resourceIdsHasBeenSet = true; m_resourceIds.push_back(value); return *this; }
    inline FargateProfileIssue& AddResourceIds(Aws::String&& value) { m_resourceIdsHasBeenSet = true; m_resourceIds.push_back(std::move(value)); return *this; }
    inline FargateProfileIssue& AddResourceIds(const char* value) { m_resourceIdsHasBeenSet = true; m_resourceIds.push_back(value); return *this; }
    ///@}
  private:

    FargateProfileIssueCode m_code;
    bool m_codeHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    Aws::Vector<Aws::String> m_resourceIds;
    bool m_resourceIdsHasBeenSet = false;
  };

} // namespace Model
} // namespace EKS
} // namespace Aws
