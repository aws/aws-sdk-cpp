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
  class AWS_ALEXAFORBUSINESS_API CreateRoomResult
  {
  public:
    CreateRoomResult();
    CreateRoomResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    CreateRoomResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ARN of the newly created room in the response.</p>
     */
    inline const Aws::String& GetRoomArn() const{ return m_roomArn; }

    /**
     * <p>The ARN of the newly created room in the response.</p>
     */
    inline void SetRoomArn(const Aws::String& value) { m_roomArn = value; }

    /**
     * <p>The ARN of the newly created room in the response.</p>
     */
    inline void SetRoomArn(Aws::String&& value) { m_roomArn = std::move(value); }

    /**
     * <p>The ARN of the newly created room in the response.</p>
     */
    inline void SetRoomArn(const char* value) { m_roomArn.assign(value); }

    /**
     * <p>The ARN of the newly created room in the response.</p>
     */
    inline CreateRoomResult& WithRoomArn(const Aws::String& value) { SetRoomArn(value); return *this;}

    /**
     * <p>The ARN of the newly created room in the response.</p>
     */
    inline CreateRoomResult& WithRoomArn(Aws::String&& value) { SetRoomArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the newly created room in the response.</p>
     */
    inline CreateRoomResult& WithRoomArn(const char* value) { SetRoomArn(value); return *this;}

  private:

    Aws::String m_roomArn;
  };

} // namespace Model
} // namespace AlexaForBusiness
} // namespace Aws
