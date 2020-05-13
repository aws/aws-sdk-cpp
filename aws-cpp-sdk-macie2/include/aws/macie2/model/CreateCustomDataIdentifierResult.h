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
#include <aws/macie2/Macie2_EXPORTS.h>
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
namespace Macie2
{
namespace Model
{
  class AWS_MACIE2_API CreateCustomDataIdentifierResult
  {
  public:
    CreateCustomDataIdentifierResult();
    CreateCustomDataIdentifierResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    CreateCustomDataIdentifierResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The unique identifier for the custom data identifier that was created.</p>
     */
    inline const Aws::String& GetCustomDataIdentifierId() const{ return m_customDataIdentifierId; }

    /**
     * <p>The unique identifier for the custom data identifier that was created.</p>
     */
    inline void SetCustomDataIdentifierId(const Aws::String& value) { m_customDataIdentifierId = value; }

    /**
     * <p>The unique identifier for the custom data identifier that was created.</p>
     */
    inline void SetCustomDataIdentifierId(Aws::String&& value) { m_customDataIdentifierId = std::move(value); }

    /**
     * <p>The unique identifier for the custom data identifier that was created.</p>
     */
    inline void SetCustomDataIdentifierId(const char* value) { m_customDataIdentifierId.assign(value); }

    /**
     * <p>The unique identifier for the custom data identifier that was created.</p>
     */
    inline CreateCustomDataIdentifierResult& WithCustomDataIdentifierId(const Aws::String& value) { SetCustomDataIdentifierId(value); return *this;}

    /**
     * <p>The unique identifier for the custom data identifier that was created.</p>
     */
    inline CreateCustomDataIdentifierResult& WithCustomDataIdentifierId(Aws::String&& value) { SetCustomDataIdentifierId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the custom data identifier that was created.</p>
     */
    inline CreateCustomDataIdentifierResult& WithCustomDataIdentifierId(const char* value) { SetCustomDataIdentifierId(value); return *this;}

  private:

    Aws::String m_customDataIdentifierId;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
