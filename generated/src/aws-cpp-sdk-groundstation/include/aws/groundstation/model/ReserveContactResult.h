﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class ReserveContactResult
  {
  public:
    AWS_GROUNDSTATION_API ReserveContactResult();
    AWS_GROUNDSTATION_API ReserveContactResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GROUNDSTATION_API ReserveContactResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>UUID of a contact.</p>
     */
    inline const Aws::String& GetContactId() const{ return m_contactId; }
    inline void SetContactId(const Aws::String& value) { m_contactId = value; }
    inline void SetContactId(Aws::String&& value) { m_contactId = std::move(value); }
    inline void SetContactId(const char* value) { m_contactId.assign(value); }
    inline ReserveContactResult& WithContactId(const Aws::String& value) { SetContactId(value); return *this;}
    inline ReserveContactResult& WithContactId(Aws::String&& value) { SetContactId(std::move(value)); return *this;}
    inline ReserveContactResult& WithContactId(const char* value) { SetContactId(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ReserveContactResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ReserveContactResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ReserveContactResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_contactId;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace GroundStation
} // namespace Aws
