/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/personalize/Personalize_EXPORTS.h>
#include <aws/personalize/model/Campaign.h>
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
  class AWS_PERSONALIZE_API DescribeCampaignResult
  {
  public:
    DescribeCampaignResult();
    DescribeCampaignResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeCampaignResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The properties of the campaign.</p>
     */
    inline const Campaign& GetCampaign() const{ return m_campaign; }

    /**
     * <p>The properties of the campaign.</p>
     */
    inline void SetCampaign(const Campaign& value) { m_campaign = value; }

    /**
     * <p>The properties of the campaign.</p>
     */
    inline void SetCampaign(Campaign&& value) { m_campaign = std::move(value); }

    /**
     * <p>The properties of the campaign.</p>
     */
    inline DescribeCampaignResult& WithCampaign(const Campaign& value) { SetCampaign(value); return *this;}

    /**
     * <p>The properties of the campaign.</p>
     */
    inline DescribeCampaignResult& WithCampaign(Campaign&& value) { SetCampaign(std::move(value)); return *this;}

  private:

    Campaign m_campaign;
  };

} // namespace Model
} // namespace Personalize
} // namespace Aws
