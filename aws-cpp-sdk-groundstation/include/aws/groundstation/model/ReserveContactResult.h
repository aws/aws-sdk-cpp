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
#include <aws/groundstation/GroundStation_EXPORTS.h>
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
namespace GroundStation
{
namespace Model
{
  /**
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/groundstation-2019-05-23/ContactIdResponse">AWS
   * API Reference</a></p>
   */
  class AWS_GROUNDSTATION_API ReserveContactResult
  {
  public:
    ReserveContactResult();
    ReserveContactResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ReserveContactResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>UUID of a contact.</p>
     */
    inline const Aws::String& GetContactId() const{ return m_contactId; }

    /**
     * <p>UUID of a contact.</p>
     */
    inline void SetContactId(const Aws::String& value) { m_contactId = value; }

    /**
     * <p>UUID of a contact.</p>
     */
    inline void SetContactId(Aws::String&& value) { m_contactId = std::move(value); }

    /**
     * <p>UUID of a contact.</p>
     */
    inline void SetContactId(const char* value) { m_contactId.assign(value); }

    /**
     * <p>UUID of a contact.</p>
     */
    inline ReserveContactResult& WithContactId(const Aws::String& value) { SetContactId(value); return *this;}

    /**
     * <p>UUID of a contact.</p>
     */
    inline ReserveContactResult& WithContactId(Aws::String&& value) { SetContactId(std::move(value)); return *this;}

    /**
     * <p>UUID of a contact.</p>
     */
    inline ReserveContactResult& WithContactId(const char* value) { SetContactId(value); return *this;}

  private:

    Aws::String m_contactId;
  };

} // namespace Model
} // namespace GroundStation
} // namespace Aws
