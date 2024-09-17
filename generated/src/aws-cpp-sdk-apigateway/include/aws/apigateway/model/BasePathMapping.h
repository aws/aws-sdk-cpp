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
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
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
  class BasePathMapping
  {
  public:
    AWS_APIGATEWAY_API BasePathMapping();
    AWS_APIGATEWAY_API BasePathMapping(Aws::Utils::Json::JsonView jsonValue);
    AWS_APIGATEWAY_API BasePathMapping& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APIGATEWAY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The base path name that callers of the API must provide as part of the URL
     * after the domain name.</p>
     */
    inline const Aws::String& GetBasePath() const{ return m_basePath; }
    inline bool BasePathHasBeenSet() const { return m_basePathHasBeenSet; }
    inline void SetBasePath(const Aws::String& value) { m_basePathHasBeenSet = true; m_basePath = value; }
    inline void SetBasePath(Aws::String&& value) { m_basePathHasBeenSet = true; m_basePath = std::move(value); }
    inline void SetBasePath(const char* value) { m_basePathHasBeenSet = true; m_basePath.assign(value); }
    inline BasePathMapping& WithBasePath(const Aws::String& value) { SetBasePath(value); return *this;}
    inline BasePathMapping& WithBasePath(Aws::String&& value) { SetBasePath(std::move(value)); return *this;}
    inline BasePathMapping& WithBasePath(const char* value) { SetBasePath(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The string identifier of the associated RestApi.</p>
     */
    inline const Aws::String& GetRestApiId() const{ return m_restApiId; }
    inline bool RestApiIdHasBeenSet() const { return m_restApiIdHasBeenSet; }
    inline void SetRestApiId(const Aws::String& value) { m_restApiIdHasBeenSet = true; m_restApiId = value; }
    inline void SetRestApiId(Aws::String&& value) { m_restApiIdHasBeenSet = true; m_restApiId = std::move(value); }
    inline void SetRestApiId(const char* value) { m_restApiIdHasBeenSet = true; m_restApiId.assign(value); }
    inline BasePathMapping& WithRestApiId(const Aws::String& value) { SetRestApiId(value); return *this;}
    inline BasePathMapping& WithRestApiId(Aws::String&& value) { SetRestApiId(std::move(value)); return *this;}
    inline BasePathMapping& WithRestApiId(const char* value) { SetRestApiId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the associated stage.</p>
     */
    inline const Aws::String& GetStage() const{ return m_stage; }
    inline bool StageHasBeenSet() const { return m_stageHasBeenSet; }
    inline void SetStage(const Aws::String& value) { m_stageHasBeenSet = true; m_stage = value; }
    inline void SetStage(Aws::String&& value) { m_stageHasBeenSet = true; m_stage = std::move(value); }
    inline void SetStage(const char* value) { m_stageHasBeenSet = true; m_stage.assign(value); }
    inline BasePathMapping& WithStage(const Aws::String& value) { SetStage(value); return *this;}
    inline BasePathMapping& WithStage(Aws::String&& value) { SetStage(std::move(value)); return *this;}
    inline BasePathMapping& WithStage(const char* value) { SetStage(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline bool RequestIdHasBeenSet() const { return m_requestIdHasBeenSet; }
    inline void SetRequestId(const Aws::String& value) { m_requestIdHasBeenSet = true; m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestIdHasBeenSet = true; m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestIdHasBeenSet = true; m_requestId.assign(value); }
    inline BasePathMapping& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline BasePathMapping& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline BasePathMapping& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_basePath;
    bool m_basePathHasBeenSet = false;

    Aws::String m_restApiId;
    bool m_restApiIdHasBeenSet = false;

    Aws::String m_stage;
    bool m_stageHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace APIGateway
} // namespace Aws
