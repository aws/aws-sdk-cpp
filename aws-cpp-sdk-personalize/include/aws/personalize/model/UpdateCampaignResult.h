/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/personalize/Personalize_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Personalize
{
namespace Model
{
  class UpdateCampaignResult
  {
  public:
    AWS_PERSONALIZE_API UpdateCampaignResult();
    AWS_PERSONALIZE_API UpdateCampaignResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PERSONALIZE_API UpdateCampaignResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The same campaign ARN as given in the request.</p>
     */
    inline const Aws::String& GetCampaignArn() const{ return m_campaignArn; }

    /**
     * <p>The same campaign ARN as given in the request.</p>
     */
    inline void SetCampaignArn(const Aws::String& value) { m_campaignArn = value; }

    /**
     * <p>The same campaign ARN as given in the request.</p>
     */
    inline void SetCampaignArn(Aws::String&& value) { m_campaignArn = std::move(value); }

    /**
     * <p>The same campaign ARN as given in the request.</p>
     */
    inline void SetCampaignArn(const char* value) { m_campaignArn.assign(value); }

    /**
     * <p>The same campaign ARN as given in the request.</p>
     */
    inline UpdateCampaignResult& WithCampaignArn(const Aws::String& value) { SetCampaignArn(value); return *this;}

    /**
     * <p>The same campaign ARN as given in the request.</p>
     */
    inline UpdateCampaignResult& WithCampaignArn(Aws::String&& value) { SetCampaignArn(std::move(value)); return *this;}

    /**
     * <p>The same campaign ARN as given in the request.</p>
     */
    inline UpdateCampaignResult& WithCampaignArn(const char* value) { SetCampaignArn(value); return *this;}

  private:

    Aws::String m_campaignArn;
  };

} // namespace Model
} // namespace Personalize
} // namespace Aws
