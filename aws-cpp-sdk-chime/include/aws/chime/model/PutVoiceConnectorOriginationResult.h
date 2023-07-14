﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime/Chime_EXPORTS.h>
#include <aws/chime/model/Origination.h>
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
namespace Chime
{
namespace Model
{
  class AWS_CHIME_API PutVoiceConnectorOriginationResult
  {
  public:
    PutVoiceConnectorOriginationResult();
    PutVoiceConnectorOriginationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    PutVoiceConnectorOriginationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The updated origination setting details.</p>
     */
    inline const Origination& GetOrigination() const{ return m_origination; }

    /**
     * <p>The updated origination setting details.</p>
     */
    inline void SetOrigination(const Origination& value) { m_origination = value; }

    /**
     * <p>The updated origination setting details.</p>
     */
    inline void SetOrigination(Origination&& value) { m_origination = std::move(value); }

    /**
     * <p>The updated origination setting details.</p>
     */
    inline PutVoiceConnectorOriginationResult& WithOrigination(const Origination& value) { SetOrigination(value); return *this;}

    /**
     * <p>The updated origination setting details.</p>
     */
    inline PutVoiceConnectorOriginationResult& WithOrigination(Origination&& value) { SetOrigination(std::move(value)); return *this;}

  private:

    Origination m_origination;
  };

} // namespace Model
} // namespace Chime
} // namespace Aws
