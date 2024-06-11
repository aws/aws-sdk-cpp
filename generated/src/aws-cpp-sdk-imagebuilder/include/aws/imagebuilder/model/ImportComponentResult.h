/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/imagebuilder/Imagebuilder_EXPORTS.h>
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
namespace imagebuilder
{
namespace Model
{
  class ImportComponentResult
  {
  public:
    AWS_IMAGEBUILDER_API ImportComponentResult();
    AWS_IMAGEBUILDER_API ImportComponentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IMAGEBUILDER_API ImportComponentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The request ID that uniquely identifies this request.</p>
     */
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ImportComponentResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ImportComponentResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ImportComponentResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The client token that uniquely identifies the request.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }
    inline void SetClientToken(const Aws::String& value) { m_clientToken = value; }
    inline void SetClientToken(Aws::String&& value) { m_clientToken = std::move(value); }
    inline void SetClientToken(const char* value) { m_clientToken.assign(value); }
    inline ImportComponentResult& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}
    inline ImportComponentResult& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}
    inline ImportComponentResult& WithClientToken(const char* value) { SetClientToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the imported component.</p>
     */
    inline const Aws::String& GetComponentBuildVersionArn() const{ return m_componentBuildVersionArn; }
    inline void SetComponentBuildVersionArn(const Aws::String& value) { m_componentBuildVersionArn = value; }
    inline void SetComponentBuildVersionArn(Aws::String&& value) { m_componentBuildVersionArn = std::move(value); }
    inline void SetComponentBuildVersionArn(const char* value) { m_componentBuildVersionArn.assign(value); }
    inline ImportComponentResult& WithComponentBuildVersionArn(const Aws::String& value) { SetComponentBuildVersionArn(value); return *this;}
    inline ImportComponentResult& WithComponentBuildVersionArn(Aws::String&& value) { SetComponentBuildVersionArn(std::move(value)); return *this;}
    inline ImportComponentResult& WithComponentBuildVersionArn(const char* value) { SetComponentBuildVersionArn(value); return *this;}
    ///@}
  private:

    Aws::String m_requestId;

    Aws::String m_clientToken;

    Aws::String m_componentBuildVersionArn;
  };

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
