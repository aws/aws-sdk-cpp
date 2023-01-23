/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fms/FMS_EXPORTS.h>
#include <aws/fms/FMSRequest.h>
#include <aws/fms/model/Policy.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/fms/model/Tag.h>
#include <utility>

namespace Aws
{
namespace FMS
{
namespace Model
{

  /**
   */
  class PutPolicyRequest : public FMSRequest
  {
  public:
    AWS_FMS_API PutPolicyRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutPolicy"; }

    AWS_FMS_API Aws::String SerializePayload() const override;

    AWS_FMS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The details of the Firewall Manager policy to be created.</p>
     */
    inline const Policy& GetPolicy() const{ return m_policy; }

    /**
     * <p>The details of the Firewall Manager policy to be created.</p>
     */
    inline bool PolicyHasBeenSet() const { return m_policyHasBeenSet; }

    /**
     * <p>The details of the Firewall Manager policy to be created.</p>
     */
    inline void SetPolicy(const Policy& value) { m_policyHasBeenSet = true; m_policy = value; }

    /**
     * <p>The details of the Firewall Manager policy to be created.</p>
     */
    inline void SetPolicy(Policy&& value) { m_policyHasBeenSet = true; m_policy = std::move(value); }

    /**
     * <p>The details of the Firewall Manager policy to be created.</p>
     */
    inline PutPolicyRequest& WithPolicy(const Policy& value) { SetPolicy(value); return *this;}

    /**
     * <p>The details of the Firewall Manager policy to be created.</p>
     */
    inline PutPolicyRequest& WithPolicy(Policy&& value) { SetPolicy(std::move(value)); return *this;}


    /**
     * <p>The tags to add to the Amazon Web Services resource.</p>
     */
    inline const Aws::Vector<Tag>& GetTagList() const{ return m_tagList; }

    /**
     * <p>The tags to add to the Amazon Web Services resource.</p>
     */
    inline bool TagListHasBeenSet() const { return m_tagListHasBeenSet; }

    /**
     * <p>The tags to add to the Amazon Web Services resource.</p>
     */
    inline void SetTagList(const Aws::Vector<Tag>& value) { m_tagListHasBeenSet = true; m_tagList = value; }

    /**
     * <p>The tags to add to the Amazon Web Services resource.</p>
     */
    inline void SetTagList(Aws::Vector<Tag>&& value) { m_tagListHasBeenSet = true; m_tagList = std::move(value); }

    /**
     * <p>The tags to add to the Amazon Web Services resource.</p>
     */
    inline PutPolicyRequest& WithTagList(const Aws::Vector<Tag>& value) { SetTagList(value); return *this;}

    /**
     * <p>The tags to add to the Amazon Web Services resource.</p>
     */
    inline PutPolicyRequest& WithTagList(Aws::Vector<Tag>&& value) { SetTagList(std::move(value)); return *this;}

    /**
     * <p>The tags to add to the Amazon Web Services resource.</p>
     */
    inline PutPolicyRequest& AddTagList(const Tag& value) { m_tagListHasBeenSet = true; m_tagList.push_back(value); return *this; }

    /**
     * <p>The tags to add to the Amazon Web Services resource.</p>
     */
    inline PutPolicyRequest& AddTagList(Tag&& value) { m_tagListHasBeenSet = true; m_tagList.push_back(std::move(value)); return *this; }

  private:

    Policy m_policy;
    bool m_policyHasBeenSet = false;

    Aws::Vector<Tag> m_tagList;
    bool m_tagListHasBeenSet = false;
  };

} // namespace Model
} // namespace FMS
} // namespace Aws
