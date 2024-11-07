/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanroomsml/CleanRoomsML_EXPORTS.h>
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
namespace CleanRoomsML
{
namespace Model
{
  class CreateMLInputChannelResult
  {
  public:
    AWS_CLEANROOMSML_API CreateMLInputChannelResult();
    AWS_CLEANROOMSML_API CreateMLInputChannelResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLEANROOMSML_API CreateMLInputChannelResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the ML input channel.</p>
     */
    inline const Aws::String& GetMlInputChannelArn() const{ return m_mlInputChannelArn; }
    inline void SetMlInputChannelArn(const Aws::String& value) { m_mlInputChannelArn = value; }
    inline void SetMlInputChannelArn(Aws::String&& value) { m_mlInputChannelArn = std::move(value); }
    inline void SetMlInputChannelArn(const char* value) { m_mlInputChannelArn.assign(value); }
    inline CreateMLInputChannelResult& WithMlInputChannelArn(const Aws::String& value) { SetMlInputChannelArn(value); return *this;}
    inline CreateMLInputChannelResult& WithMlInputChannelArn(Aws::String&& value) { SetMlInputChannelArn(std::move(value)); return *this;}
    inline CreateMLInputChannelResult& WithMlInputChannelArn(const char* value) { SetMlInputChannelArn(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateMLInputChannelResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateMLInputChannelResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateMLInputChannelResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_mlInputChannelArn;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CleanRoomsML
} // namespace Aws
