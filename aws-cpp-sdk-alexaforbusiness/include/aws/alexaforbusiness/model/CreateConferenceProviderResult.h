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
#include <aws/alexaforbusiness/AlexaForBusiness_EXPORTS.h>
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
namespace AlexaForBusiness
{
namespace Model
{
  class AWS_ALEXAFORBUSINESS_API CreateConferenceProviderResult
  {
  public:
    CreateConferenceProviderResult();
    CreateConferenceProviderResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    CreateConferenceProviderResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ARN of the newly-created conference provider.</p>
     */
    inline const Aws::String& GetConferenceProviderArn() const{ return m_conferenceProviderArn; }

    /**
     * <p>The ARN of the newly-created conference provider.</p>
     */
    inline void SetConferenceProviderArn(const Aws::String& value) { m_conferenceProviderArn = value; }

    /**
     * <p>The ARN of the newly-created conference provider.</p>
     */
    inline void SetConferenceProviderArn(Aws::String&& value) { m_conferenceProviderArn = std::move(value); }

    /**
     * <p>The ARN of the newly-created conference provider.</p>
     */
    inline void SetConferenceProviderArn(const char* value) { m_conferenceProviderArn.assign(value); }

    /**
     * <p>The ARN of the newly-created conference provider.</p>
     */
    inline CreateConferenceProviderResult& WithConferenceProviderArn(const Aws::String& value) { SetConferenceProviderArn(value); return *this;}

    /**
     * <p>The ARN of the newly-created conference provider.</p>
     */
    inline CreateConferenceProviderResult& WithConferenceProviderArn(Aws::String&& value) { SetConferenceProviderArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the newly-created conference provider.</p>
     */
    inline CreateConferenceProviderResult& WithConferenceProviderArn(const char* value) { SetConferenceProviderArn(value); return *this;}

  private:

    Aws::String m_conferenceProviderArn;
  };

} // namespace Model
} // namespace AlexaForBusiness
} // namespace Aws
