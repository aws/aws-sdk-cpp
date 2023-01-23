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
    AWS_EKS_API AddonIssue();
    AWS_EKS_API AddonIssue(Aws::Utils::Json::JsonView jsonValue);
    AWS_EKS_API AddonIssue& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EKS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A code that describes the type of issue.</p>
     */
    inline const AddonIssueCode& GetCode() const{ return m_code; }

    /**
     * <p>A code that describes the type of issue.</p>
     */
    inline bool CodeHasBeenSet() const { return m_codeHasBeenSet; }

    /**
     * <p>A code that describes the type of issue.</p>
     */
    inline void SetCode(const AddonIssueCode& value) { m_codeHasBeenSet = true; m_code = value; }

    /**
     * <p>A code that describes the type of issue.</p>
     */
    inline void SetCode(AddonIssueCode&& value) { m_codeHasBeenSet = true; m_code = std::move(value); }

    /**
     * <p>A code that describes the type of issue.</p>
     */
    inline AddonIssue& WithCode(const AddonIssueCode& value) { SetCode(value); return *this;}

    /**
     * <p>A code that describes the type of issue.</p>
     */
    inline AddonIssue& WithCode(AddonIssueCode&& value) { SetCode(std::move(value)); return *this;}


    /**
     * <p>A message that provides details about the issue and what might cause it.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }

    /**
     * <p>A message that provides details about the issue and what might cause it.</p>
     */
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    /**
     * <p>A message that provides details about the issue and what might cause it.</p>
     */
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    /**
     * <p>A message that provides details about the issue and what might cause it.</p>
     */
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    /**
     * <p>A message that provides details about the issue and what might cause it.</p>
     */
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    /**
     * <p>A message that provides details about the issue and what might cause it.</p>
     */
    inline AddonIssue& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    /**
     * <p>A message that provides details about the issue and what might cause it.</p>
     */
    inline AddonIssue& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    /**
     * <p>A message that provides details about the issue and what might cause it.</p>
     */
    inline AddonIssue& WithMessage(const char* value) { SetMessage(value); return *this;}


    /**
     * <p>The resource IDs of the issue.</p>
     */
    inline const Aws::Vector<Aws::String>& GetResourceIds() const{ return m_resourceIds; }

    /**
     * <p>The resource IDs of the issue.</p>
     */
    inline bool ResourceIdsHasBeenSet() const { return m_resourceIdsHasBeenSet; }

    /**
     * <p>The resource IDs of the issue.</p>
     */
    inline void SetResourceIds(const Aws::Vector<Aws::String>& value) { m_resourceIdsHasBeenSet = true; m_resourceIds = value; }

    /**
     * <p>The resource IDs of the issue.</p>
     */
    inline void SetResourceIds(Aws::Vector<Aws::String>&& value) { m_resourceIdsHasBeenSet = true; m_resourceIds = std::move(value); }

    /**
     * <p>The resource IDs of the issue.</p>
     */
    inline AddonIssue& WithResourceIds(const Aws::Vector<Aws::String>& value) { SetResourceIds(value); return *this;}

    /**
     * <p>The resource IDs of the issue.</p>
     */
    inline AddonIssue& WithResourceIds(Aws::Vector<Aws::String>&& value) { SetResourceIds(std::move(value)); return *this;}

    /**
     * <p>The resource IDs of the issue.</p>
     */
    inline AddonIssue& AddResourceIds(const Aws::String& value) { m_resourceIdsHasBeenSet = true; m_resourceIds.push_back(value); return *this; }

    /**
     * <p>The resource IDs of the issue.</p>
     */
    inline AddonIssue& AddResourceIds(Aws::String&& value) { m_resourceIdsHasBeenSet = true; m_resourceIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The resource IDs of the issue.</p>
     */
    inline AddonIssue& AddResourceIds(const char* value) { m_resourceIdsHasBeenSet = true; m_resourceIds.push_back(value); return *this; }

  private:

    AddonIssueCode m_code;
    bool m_codeHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    Aws::Vector<Aws::String> m_resourceIds;
    bool m_resourceIdsHasBeenSet = false;
  };

} // namespace Model
} // namespace EKS
} // namespace Aws
