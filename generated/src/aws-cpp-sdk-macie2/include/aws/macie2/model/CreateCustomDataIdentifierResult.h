﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class CreateCustomDataIdentifierResult
  {
  public:
    AWS_MACIE2_API CreateCustomDataIdentifierResult();
    AWS_MACIE2_API CreateCustomDataIdentifierResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MACIE2_API CreateCustomDataIdentifierResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The unique identifier for the custom data identifier that was created.</p>
     */
    inline const Aws::String& GetCustomDataIdentifierId() const{ return m_customDataIdentifierId; }
    inline void SetCustomDataIdentifierId(const Aws::String& value) { m_customDataIdentifierId = value; }
    inline void SetCustomDataIdentifierId(Aws::String&& value) { m_customDataIdentifierId = std::move(value); }
    inline void SetCustomDataIdentifierId(const char* value) { m_customDataIdentifierId.assign(value); }
    inline CreateCustomDataIdentifierResult& WithCustomDataIdentifierId(const Aws::String& value) { SetCustomDataIdentifierId(value); return *this;}
    inline CreateCustomDataIdentifierResult& WithCustomDataIdentifierId(Aws::String&& value) { SetCustomDataIdentifierId(std::move(value)); return *this;}
    inline CreateCustomDataIdentifierResult& WithCustomDataIdentifierId(const char* value) { SetCustomDataIdentifierId(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateCustomDataIdentifierResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateCustomDataIdentifierResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateCustomDataIdentifierResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_customDataIdentifierId;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
