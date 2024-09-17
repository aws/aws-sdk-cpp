/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apigateway/APIGateway_EXPORTS.h>
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
namespace APIGateway
{
namespace Model
{
  /**
   * <p>Represents the base path that callers of the API must provide as part of the
   * URL after the domain name.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/BasePathMapping">AWS
   * API Reference</a></p>
   */
  class UpdateBasePathMappingResult
  {
  public:
    AWS_APIGATEWAY_API UpdateBasePathMappingResult();
    AWS_APIGATEWAY_API UpdateBasePathMappingResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APIGATEWAY_API UpdateBasePathMappingResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The base path name that callers of the API must provide as part of the URL
     * after the domain name.</p>
     */
    inline const Aws::String& GetBasePath() const{ return m_basePath; }
    inline void SetBasePath(const Aws::String& value) { m_basePath = value; }
    inline void SetBasePath(Aws::String&& value) { m_basePath = std::move(value); }
    inline void SetBasePath(const char* value) { m_basePath.assign(value); }
    inline UpdateBasePathMappingResult& WithBasePath(const Aws::String& value) { SetBasePath(value); return *this;}
    inline UpdateBasePathMappingResult& WithBasePath(Aws::String&& value) { SetBasePath(std::move(value)); return *this;}
    inline UpdateBasePathMappingResult& WithBasePath(const char* value) { SetBasePath(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The string identifier of the associated RestApi.</p>
     */
    inline const Aws::String& GetRestApiId() const{ return m_restApiId; }
    inline void SetRestApiId(const Aws::String& value) { m_restApiId = value; }
    inline void SetRestApiId(Aws::String&& value) { m_restApiId = std::move(value); }
    inline void SetRestApiId(const char* value) { m_restApiId.assign(value); }
    inline UpdateBasePathMappingResult& WithRestApiId(const Aws::String& value) { SetRestApiId(value); return *this;}
    inline UpdateBasePathMappingResult& WithRestApiId(Aws::String&& value) { SetRestApiId(std::move(value)); return *this;}
    inline UpdateBasePathMappingResult& WithRestApiId(const char* value) { SetRestApiId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the associated stage.</p>
     */
    inline const Aws::String& GetStage() const{ return m_stage; }
    inline void SetStage(const Aws::String& value) { m_stage = value; }
    inline void SetStage(Aws::String&& value) { m_stage = std::move(value); }
    inline void SetStage(const char* value) { m_stage.assign(value); }
    inline UpdateBasePathMappingResult& WithStage(const Aws::String& value) { SetStage(value); return *this;}
    inline UpdateBasePathMappingResult& WithStage(Aws::String&& value) { SetStage(std::move(value)); return *this;}
    inline UpdateBasePathMappingResult& WithStage(const char* value) { SetStage(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline UpdateBasePathMappingResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline UpdateBasePathMappingResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline UpdateBasePathMappingResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_basePath;

    Aws::String m_restApiId;

    Aws::String m_stage;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace APIGateway
} // namespace Aws
