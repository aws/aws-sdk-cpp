﻿/**
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
   * URL after the domain name.</p> <div class="remarks">A custom domain name plus a
   * <code>BasePathMapping</code> specification identifies a deployed <a>RestApi</a>
   * in a given stage of the owner <a>Account</a>.</div> <div class="seeAlso"> <a
   * href="https://docs.aws.amazon.com/apigateway/latest/developerguide/how-to-custom-domains.html">Use
   * Custom Domain Names</a> </div><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/BasePathMapping">AWS
   * API Reference</a></p>
   */
  class AWS_APIGATEWAY_API BasePathMapping
  {
  public:
    BasePathMapping();
    BasePathMapping(Aws::Utils::Json::JsonView jsonValue);
    BasePathMapping& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The base path name that callers of the API must provide as part of the URL
     * after the domain name.</p>
     */
    inline const Aws::String& GetBasePath() const{ return m_basePath; }

    /**
     * <p>The base path name that callers of the API must provide as part of the URL
     * after the domain name.</p>
     */
    inline bool BasePathHasBeenSet() const { return m_basePathHasBeenSet; }

    /**
     * <p>The base path name that callers of the API must provide as part of the URL
     * after the domain name.</p>
     */
    inline void SetBasePath(const Aws::String& value) { m_basePathHasBeenSet = true; m_basePath = value; }

    /**
     * <p>The base path name that callers of the API must provide as part of the URL
     * after the domain name.</p>
     */
    inline void SetBasePath(Aws::String&& value) { m_basePathHasBeenSet = true; m_basePath = std::move(value); }

    /**
     * <p>The base path name that callers of the API must provide as part of the URL
     * after the domain name.</p>
     */
    inline void SetBasePath(const char* value) { m_basePathHasBeenSet = true; m_basePath.assign(value); }

    /**
     * <p>The base path name that callers of the API must provide as part of the URL
     * after the domain name.</p>
     */
    inline BasePathMapping& WithBasePath(const Aws::String& value) { SetBasePath(value); return *this;}

    /**
     * <p>The base path name that callers of the API must provide as part of the URL
     * after the domain name.</p>
     */
    inline BasePathMapping& WithBasePath(Aws::String&& value) { SetBasePath(std::move(value)); return *this;}

    /**
     * <p>The base path name that callers of the API must provide as part of the URL
     * after the domain name.</p>
     */
    inline BasePathMapping& WithBasePath(const char* value) { SetBasePath(value); return *this;}


    /**
     * <p>The string identifier of the associated <a>RestApi</a>.</p>
     */
    inline const Aws::String& GetRestApiId() const{ return m_restApiId; }

    /**
     * <p>The string identifier of the associated <a>RestApi</a>.</p>
     */
    inline bool RestApiIdHasBeenSet() const { return m_restApiIdHasBeenSet; }

    /**
     * <p>The string identifier of the associated <a>RestApi</a>.</p>
     */
    inline void SetRestApiId(const Aws::String& value) { m_restApiIdHasBeenSet = true; m_restApiId = value; }

    /**
     * <p>The string identifier of the associated <a>RestApi</a>.</p>
     */
    inline void SetRestApiId(Aws::String&& value) { m_restApiIdHasBeenSet = true; m_restApiId = std::move(value); }

    /**
     * <p>The string identifier of the associated <a>RestApi</a>.</p>
     */
    inline void SetRestApiId(const char* value) { m_restApiIdHasBeenSet = true; m_restApiId.assign(value); }

    /**
     * <p>The string identifier of the associated <a>RestApi</a>.</p>
     */
    inline BasePathMapping& WithRestApiId(const Aws::String& value) { SetRestApiId(value); return *this;}

    /**
     * <p>The string identifier of the associated <a>RestApi</a>.</p>
     */
    inline BasePathMapping& WithRestApiId(Aws::String&& value) { SetRestApiId(std::move(value)); return *this;}

    /**
     * <p>The string identifier of the associated <a>RestApi</a>.</p>
     */
    inline BasePathMapping& WithRestApiId(const char* value) { SetRestApiId(value); return *this;}


    /**
     * <p>The name of the associated stage.</p>
     */
    inline const Aws::String& GetStage() const{ return m_stage; }

    /**
     * <p>The name of the associated stage.</p>
     */
    inline bool StageHasBeenSet() const { return m_stageHasBeenSet; }

    /**
     * <p>The name of the associated stage.</p>
     */
    inline void SetStage(const Aws::String& value) { m_stageHasBeenSet = true; m_stage = value; }

    /**
     * <p>The name of the associated stage.</p>
     */
    inline void SetStage(Aws::String&& value) { m_stageHasBeenSet = true; m_stage = std::move(value); }

    /**
     * <p>The name of the associated stage.</p>
     */
    inline void SetStage(const char* value) { m_stageHasBeenSet = true; m_stage.assign(value); }

    /**
     * <p>The name of the associated stage.</p>
     */
    inline BasePathMapping& WithStage(const Aws::String& value) { SetStage(value); return *this;}

    /**
     * <p>The name of the associated stage.</p>
     */
    inline BasePathMapping& WithStage(Aws::String&& value) { SetStage(std::move(value)); return *this;}

    /**
     * <p>The name of the associated stage.</p>
     */
    inline BasePathMapping& WithStage(const char* value) { SetStage(value); return *this;}

  private:

    Aws::String m_basePath;
    bool m_basePathHasBeenSet;

    Aws::String m_restApiId;
    bool m_restApiIdHasBeenSet;

    Aws::String m_stage;
    bool m_stageHasBeenSet;
  };

} // namespace Model
} // namespace APIGateway
} // namespace Aws
