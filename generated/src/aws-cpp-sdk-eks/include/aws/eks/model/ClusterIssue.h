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
   * <p>An issue with your local Amazon EKS cluster on an Amazon Web Services
   * Outpost. You can't use this API with an Amazon EKS cluster on the Amazon Web
   * Services cloud.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/eks-2017-11-01/ClusterIssue">AWS
   * API Reference</a></p>
   */
  class ClusterIssue
  {
  public:
    AWS_EKS_API ClusterIssue();
    AWS_EKS_API ClusterIssue(Aws::Utils::Json::JsonView jsonValue);
    AWS_EKS_API ClusterIssue& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EKS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The error code of the issue.</p>
     */
    inline const ClusterIssueCode& GetCode() const{ return m_code; }

    /**
     * <p>The error code of the issue.</p>
     */
    inline bool CodeHasBeenSet() const { return m_codeHasBeenSet; }

    /**
     * <p>The error code of the issue.</p>
     */
    inline void SetCode(const ClusterIssueCode& value) { m_codeHasBeenSet = true; m_code = value; }

    /**
     * <p>The error code of the issue.</p>
     */
    inline void SetCode(ClusterIssueCode&& value) { m_codeHasBeenSet = true; m_code = std::move(value); }

    /**
     * <p>The error code of the issue.</p>
     */
    inline ClusterIssue& WithCode(const ClusterIssueCode& value) { SetCode(value); return *this;}

    /**
     * <p>The error code of the issue.</p>
     */
    inline ClusterIssue& WithCode(ClusterIssueCode&& value) { SetCode(std::move(value)); return *this;}


    /**
     * <p>A description of the issue.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }

    /**
     * <p>A description of the issue.</p>
     */
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    /**
     * <p>A description of the issue.</p>
     */
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    /**
     * <p>A description of the issue.</p>
     */
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    /**
     * <p>A description of the issue.</p>
     */
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    /**
     * <p>A description of the issue.</p>
     */
    inline ClusterIssue& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    /**
     * <p>A description of the issue.</p>
     */
    inline ClusterIssue& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    /**
     * <p>A description of the issue.</p>
     */
    inline ClusterIssue& WithMessage(const char* value) { SetMessage(value); return *this;}


    /**
     * <p>The resource IDs that the issue relates to.</p>
     */
    inline const Aws::Vector<Aws::String>& GetResourceIds() const{ return m_resourceIds; }

    /**
     * <p>The resource IDs that the issue relates to.</p>
     */
    inline bool ResourceIdsHasBeenSet() const { return m_resourceIdsHasBeenSet; }

    /**
     * <p>The resource IDs that the issue relates to.</p>
     */
    inline void SetResourceIds(const Aws::Vector<Aws::String>& value) { m_resourceIdsHasBeenSet = true; m_resourceIds = value; }

    /**
     * <p>The resource IDs that the issue relates to.</p>
     */
    inline void SetResourceIds(Aws::Vector<Aws::String>&& value) { m_resourceIdsHasBeenSet = true; m_resourceIds = std::move(value); }

    /**
     * <p>The resource IDs that the issue relates to.</p>
     */
    inline ClusterIssue& WithResourceIds(const Aws::Vector<Aws::String>& value) { SetResourceIds(value); return *this;}

    /**
     * <p>The resource IDs that the issue relates to.</p>
     */
    inline ClusterIssue& WithResourceIds(Aws::Vector<Aws::String>&& value) { SetResourceIds(std::move(value)); return *this;}

    /**
     * <p>The resource IDs that the issue relates to.</p>
     */
    inline ClusterIssue& AddResourceIds(const Aws::String& value) { m_resourceIdsHasBeenSet = true; m_resourceIds.push_back(value); return *this; }

    /**
     * <p>The resource IDs that the issue relates to.</p>
     */
    inline ClusterIssue& AddResourceIds(Aws::String&& value) { m_resourceIdsHasBeenSet = true; m_resourceIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The resource IDs that the issue relates to.</p>
     */
    inline ClusterIssue& AddResourceIds(const char* value) { m_resourceIdsHasBeenSet = true; m_resourceIds.push_back(value); return *this; }

  private:

    ClusterIssueCode m_code;
    bool m_codeHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    Aws::Vector<Aws::String> m_resourceIds;
    bool m_resourceIdsHasBeenSet = false;
  };

} // namespace Model
} // namespace EKS
} // namespace Aws
