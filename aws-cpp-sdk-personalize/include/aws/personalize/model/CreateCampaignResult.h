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
  class AWS_PERSONALIZE_API CreateCampaignResult
  {
  public:
    CreateCampaignResult();
    CreateCampaignResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    CreateCampaignResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Resource Name (ARN) of the campaign.</p>
     */
    inline const Aws::String& GetCampaignArn() const{ return m_campaignArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the campaign.</p>
     */
    inline void SetCampaignArn(const Aws::String& value) { m_campaignArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the campaign.</p>
     */
    inline void SetCampaignArn(Aws::String&& value) { m_campaignArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the campaign.</p>
     */
    inline void SetCampaignArn(const char* value) { m_campaignArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the campaign.</p>
     */
    inline CreateCampaignResult& WithCampaignArn(const Aws::String& value) { SetCampaignArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the campaign.</p>
     */
    inline CreateCampaignResult& WithCampaignArn(Aws::String&& value) { SetCampaignArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the campaign.</p>
     */
    inline CreateCampaignResult& WithCampaignArn(const char* value) { SetCampaignArn(value); return *this;}

  private:

    Aws::String m_campaignArn;
  };

} // namespace Model
} // namespace Personalize
} // namespace Aws
